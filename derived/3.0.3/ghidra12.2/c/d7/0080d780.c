
void FUN_0080d780(short *param_1,byte *param_2)

{
  undefined1 auStack_16f2 [2];
  byte local_16f0 [4];
  undefined1 auStack_16ec [2];
  undefined1 auStack_16ea [2];
  byte local_16e8 [4];
  undefined1 auStack_16e4 [2];
  undefined1 auStack_16e2 [2];
  byte local_16e0 [4];
  undefined1 auStack_16dc [2];
  undefined1 auStack_16da [2];
  byte local_16d8 [2];
  undefined1 auStack_16d6 [2];
  short local_16d4;
  undefined1 auStack_16d2 [2];
  undefined1 auStack_16d0 [5792];
  
  if ((*param_1 != *(short *)PTR_DAT_04bb3170) && (local_16d8[0] = *param_2, local_16d8[0] < 8)) {
    FUN_02654ea0(auStack_16d6,local_16d8);
    FUN_007ef010(auStack_16da,auStack_16d6);
    FUN_007ef010(auStack_16d2,auStack_16da);
    FUN_007e4920(auStack_16d0,auStack_16d2);
    FUN_007e8e30(&local_16d4,auStack_16d0);
    if (local_16d4 == *param_1) {
      FUN_007e9320(auStack_16d0);
    }
    local_16e0[0] = *param_2;
    if (7 < local_16e0[0]) {
      local_16e0[0] = 0xff;
    }
    FUN_02654be0(auStack_16dc,local_16e0);
    FUN_007ef010(auStack_16e2,auStack_16dc);
    FUN_007ef010(auStack_16d2,auStack_16e2);
    FUN_007e4920(auStack_16d0,auStack_16d2);
    FUN_007e8e30(&local_16d4,auStack_16d0);
    if (local_16d4 == *param_1) {
      FUN_007e9320(auStack_16d0);
    }
    local_16e8[0] = *param_2;
    if (7 < local_16e8[0]) {
      local_16e8[0] = 0xff;
    }
    FUN_02654d40(auStack_16e4,local_16e8);
    FUN_007ef010(auStack_16ea,auStack_16e4);
    FUN_007ef010(auStack_16d2,auStack_16ea);
    FUN_007e4920(auStack_16d0,auStack_16d2);
    FUN_007e8e30(&local_16d4,auStack_16d0);
    if (local_16d4 == *param_1) {
      FUN_007e9320(auStack_16d0);
    }
    local_16f0[0] = *param_2;
    if (7 < local_16f0[0]) {
      local_16f0[0] = 0xff;
    }
    FUN_02655000(auStack_16ec,local_16f0);
    FUN_007ef010(auStack_16f2,auStack_16ec);
    FUN_007ef010(auStack_16d2,auStack_16f2);
    FUN_007e4920(auStack_16d0,auStack_16d2);
    FUN_007e8e30(&local_16d4,auStack_16d0);
    if (local_16d4 == *param_1) {
      FUN_007e9320(auStack_16d0);
    }
  }
  return;
}

