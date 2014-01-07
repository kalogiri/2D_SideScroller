class Bullet {
  float heading;
  PVector pos;
  PVector vel;

  Bullet(PVector pos, float heading) {
    this.pos = new PVector(pos.x, pos.y);
    this.heading = heading;
    vel = new PVector(-sin(heading)*-7, cos(heading)*-7);
  }

  void move() {
    fill(0);
    ellipse(pos.x, pos.y, 5, 5);
    pos.add(vel);
  }

  void remove(PVector bullPos, PVector enPos) {
    if (bullPos.x > width || bullPos.x < 0 ||
      bullPos.y > height || bullPos.y < 0) {

      bullets.remove(this);
    }//if

    else if (bullPos.x > enPos.x-(0.5*enSize) && bullPos.x <enPos.x+(0.5*enSize) &&
      bullPos.y > enPos.y-(0.5*enSize) && bullPos.y < enPos.y+(0.5*enSize)) {
      bullets.remove(this);
    }//else
  }//void remove
}//class
