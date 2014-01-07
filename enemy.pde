class enemy {
  PVector pos;
  PVector vel;

  enemy() {
    pos = new PVector (width, random(height));
    vel = new PVector (random(-2.5, -1.0), random(-2, 2));
  }

  void update(float enemySize) {
    stroke(0);
    rectMode(CENTER);
    fill(10,100,120);
    rect(pos.x, pos.y, enemySize, enemySize);
    pos.add(vel);
  }

  void wallCheck() {
    float buffer = enSize;
    if (pos.x > width + buffer)
      pos.x = 0 + buffer;
    else if (pos.x < - buffer)
      pos.x = width + buffer;
    if (pos.y > height + buffer)
      pos.y = - buffer;
    else if (pos.y < - buffer)
      pos.y = height - buffer;
  }

  void collideCheck(PVector bullPos) {
    if (bullPos.x > pos.x - (0.5*enSize)&& 
      bullPos.x < pos.x + (0.5*enSize)&&
      bullPos.y > pos.y - (0.5*enSize)&&
      bullPos.y < pos.y + (0.5*enSize)) {
      //println("hit detected");
      enemies.remove(this);
    }
  }
}
