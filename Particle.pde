class Particle {
  
  float x;
  float y;
  float xspeed;
  
  Particle() {
    x = width;
    y = random(0,height);
    xspeed = random(-5,-1);
  }
  
  void run() {
    x = x + xspeed;
  }
  
  void display() {
    stroke(0);
    fill(150,0,0);
    ellipse(x,y,2,2);
  }
}
