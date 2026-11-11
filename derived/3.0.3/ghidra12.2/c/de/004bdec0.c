
undefined1  [16] FUN_004bdec0(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = FUN_004bdf60();
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == uVar2) {
    uVar3 = uVar2;
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar2) {
      FUN_00426990(PTR_DAT_048607b8,param_1,8);
      uVar3 = *(uint *)(param_1 + 1);
    }
    *(undefined8 *)(*param_1 + (long)(int)uVar3 * 8) = *param_2;
    *(uint *)(param_1 + 1) = uVar3 + 1;
  }
  auVar4[8] = uVar1 == uVar2;
  auVar4._0_8_ = *param_1 + ((long)((ulong)uVar2 << 0x20) >> 0x1d);
  auVar4._9_7_ = 0;
  return auVar4;
}

