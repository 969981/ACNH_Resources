
undefined1  [16] FUN_0044bd40(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = FUN_0044bde0();
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 == uVar4) {
    uVar5 = uVar4;
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar4) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0x10);
      uVar5 = *(uint *)(param_1 + 1);
    }
    uVar2 = param_2[1];
    puVar1 = (undefined8 *)(*param_1 + (long)(int)uVar5 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    *(uint *)(param_1 + 1) = uVar5 + 1;
  }
  auVar6[8] = uVar3 == uVar4;
  auVar6._0_8_ = *param_1 + ((long)((ulong)uVar4 << 0x20) >> 0x1c);
  auVar6._9_7_ = 0;
  return auVar6;
}

