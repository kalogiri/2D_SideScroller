class ball {
  PVector vel, pos, mxVel, myVel;
  float x, y;
  int w, h;
  float heading = -4.72;
  ball(float _x, float _y, int _w, int _h) {
    pos = new PVector (_x, _y);
    x = _x;
    y = _y;
    w = _w;
    h = _h;
    vel = new PVector ();
    mxVel = new PVector(3, 0);
    myVel = new PVector(0, -2);
  }

  void display() {
    fill(255);
    noStroke();
    fill(255,0,0,75);
    rect(pos.x, pos.y, w, h);
  }
  void update() {
    vel.set(0, 0, 0);
  }
  void move() {
    if ( right ) {
      pos.x+= 2;
      vel.set(pos);
    }//if right

    if ( left ) {
      pos.x-= 2;
      vel.set(pos);
    }

    if ( up ) {
      pos.y-= 2;
      vel.set(pos);
    }

    if ( down ) {
      pos.y+= 2;
      vel.set(pos);
    }
  }//key Pressed

  void collideEnCheck(PVector ballLoc, PVector enPos) {
    if (ballLoc.x > enPos.x - (0.5*enSize)&&
      ballLoc.x < enPos.x + (0.5*enSize)&&
      ballLoc.y > enPos.y - (0.5*enSize)&&
      ballLoc.y < enPos.y + (0.5*enSize)) {
      for (int i = 0; i < enemies.size()-1; i++) {
        enemies.remove(i);
      }
    }
  }
}
