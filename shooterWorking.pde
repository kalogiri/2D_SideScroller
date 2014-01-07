ArrayList bullets;
ArrayList enemies;
ArrayList particles;

PVector pos, vel;
ball myBall;

float enSize = 20;

boolean right = false, left = false, up = false, down = false;

void setup() {
  size(600, 400);
  myBall = new ball(20, width/2, 10, 10);

  bullets = new ArrayList();

  enemies = new ArrayList();  
  enemies.add(new enemy());
  particles = new ArrayList();

  pos = new PVector(width/2, height/2);
  vel = new PVector (2, 2);
  smooth();
}

void draw() {
  background(100);
  
  particles.add(new Particle());
  for (int i = 0; i < particles.size(); i++) {
    Particle p = (Particle) particles.get(i);
    p.run();
    p.display();
  }
  myBall.display();
  myBall.update();
  myBall.move();

  if (particles.size()< 0) {
    particles.remove(0);
  }

  if (enemies.size() < 4) {
    enemies.add(new enemy());
  }

  for (int i = bullets.size()-1; i >= 0; i--) {
    Bullet myBullet = (Bullet) bullets.get(i);
    myBullet.move();
  }

  for (int j = enemies.size()-1; j >=0; j--) {
    enemy myEnemy = (enemy) enemies.get(j);
    myEnemy.update(enSize);
    myEnemy.wallCheck();
    myBall.collideEnCheck(myBall.pos, myEnemy.pos);

    for (int i = bullets.size()-1; i >=0; i--) {
      Bullet myBullet = (Bullet) bullets.get(i);
      myEnemy.collideCheck(myBullet.pos);
      myBullet.remove(myBullet.pos, myEnemy.pos);
    }
  }
  
  drawEdges();
}

void mousePressed() {
  if (mouseButton == LEFT) {
    bullets.add(new Bullet(myBall.pos, myBall.heading));
  }
}

void keyPressed() {
  switch(keyCode) {
  case RIGHT:
    right = true;
    break;
  case LEFT:
    left = true;
    break;
  case UP:
    up = true;
    break;
  case DOWN:
    down = true;
    break;
  }
  
    if (keyCode == ' ') {
    bullets.add(new Bullet(myBall.pos, myBall.heading));
  }
}

void keyReleased() {
  switch (keyCode) {
  case RIGHT:
    right = false;
    break;
  case LEFT:
    left = false;
    break;
  case UP:
    up = false;
    break;
  case DOWN:
    down = false;
    break;
  }
}

void drawEdges() {
  fill(0);
  rect(0, 0, 100000, 100);
  rect(0,400, 100000, 100);
}
