require_xpr64;
if(zext_xprlen(RS2) == 0)
  RD = RS1;
else
  RD = sext32(zext_xprlen(RS1) % zext_xprlen(RS2));