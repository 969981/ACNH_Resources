
undefined4 FUN_03407c10(int param_1)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  
  if (DAT_0574faa8 == param_1) {
    lVar3 = 0;
  }
  else {
    if (DAT_0574fab0 != param_1) {
      return 0;
    }
    lVar3 = 1;
  }
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((puVar1[1] & 1) != 0) {
      if ((*puVar1 & 1) == 0) {
        return 0;
      }
      uVar2 = FUN_0252c550(0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      return (&DAT_0574faac)[lVar3 * 2];
    }
  }
  return 0;
}

