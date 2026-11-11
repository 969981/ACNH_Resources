
undefined1  [16] FUN_00490910(long param_1,uint *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar3 = *param_2;
  if (uVar3 >> 0x1c == 0) {
    return ZEXT816(0);
  }
  uVar1 = uVar3 & 0xf0000000;
  if (uVar1 == 0x50000000) {
    plVar4 = (long *)FUN_00426e00(*(undefined8 *)
                                   (*(long *)(param_1 + 8) + (ulong)(uVar3 & 0xffffff) * 8),0x800000
                                 );
    lVar6 = *(long *)(*plVar4 + (long)(int)param_2[2] * 8 + 8);
    if (lVar6 == 0) {
      return ZEXT816(0);
    }
  }
  else {
    if (uVar1 != 0x40000000) {
      if ((uVar1 == 0x20000000) && (param_2[2] == 0)) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulong *)(*(long *)(param_1 + 8) + ((ulong)uVar3 & 0xffffff) * 8);
        return auVar2 << 0x40;
      }
      auVar7._8_8_ = *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)(uVar3 & 0xffffff) * 8);
      auVar7._0_8_ = *(long *)(param_1 + 0x38) + (ulong)param_2[1];
      return auVar7;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 8) + ((ulong)uVar3 & 0xffffff) * 8);
    if (lVar6 == 0) {
      return ZEXT816(0);
    }
  }
  uVar3 = FUN_00428440(lVar6);
  uVar5 = FUN_004283a0(uVar3 & 0x1f);
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = lVar6;
  return auVar8;
}

