
uint FUN_01adaaa0(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  byte local_28 [8];
  
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_01adab50(param_1,local_28);
  uVar2 = 0;
  do {
    if ((uVar2 != 0) && (uVar2 < 0xe)) {
      uVar1 = uVar2 + 7;
      if (-1 < (int)uVar2) {
        uVar1 = uVar2;
      }
      if (((uint)((int)uVar1 >> 3) < 2) &&
         ((local_28[(uint)((int)uVar1 >> 3)] >> (ulong)(uVar2 & 7) & 1) != 0)) {
        return uVar2;
      }
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 0xe) {
      return 0;
    }
  } while( true );
}

