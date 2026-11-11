
undefined8 FUN_004cb400(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  uVar1 = FUN_00428440();
  uVar2 = 0;
  if ((param_1 != 0) && ((uVar1 & 0x1f) == 8)) {
    uVar1 = FUN_00428440(param_1);
    lVar3 = param_1;
    if ((uVar1 & 0x1f) != 8) {
      lVar3 = 0;
    }
    lVar3 = FUN_00426d90(lVar3);
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar1 = FUN_00428440(param_1);
      lVar3 = param_1;
      if ((uVar1 & 0x1f) != 8) {
        lVar3 = 0;
      }
      lVar3 = FUN_00426d90(lVar3);
      uVar1 = FUN_00428440();
      uVar2 = 0;
      if ((lVar3 != 0) && ((uVar1 & 0x1f) == 5)) {
        uVar1 = FUN_00428440(param_1);
        if ((uVar1 & 0x1f) != 8) {
          param_1 = 0;
        }
        puVar4 = (undefined8 *)FUN_00426e90(param_1,1);
        if ((puVar4 == (undefined8 *)0x0) ||
           (uVar5 = (uint)((ulong)*puVar4 >> 8), 3 < (uVar5 >> 2 | uVar5 << 0x1e) - 1)) {
          return 0;
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

