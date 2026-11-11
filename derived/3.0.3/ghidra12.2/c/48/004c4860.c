
undefined1  [16] FUN_004c4860(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar2 = FUN_004c4910();
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == uVar2) {
    uVar3 = uVar2;
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar2) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0xc);
      uVar3 = *(uint *)(param_1 + 1);
    }
    uVar5 = *param_2;
    puVar4 = (undefined8 *)(*param_1 + (long)(int)uVar3 * 0xc);
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar4 = uVar5;
    *(uint *)(param_1 + 1) = uVar3 + 1;
  }
  auVar6._0_8_ = *param_1 + (long)(int)uVar2 * 0xc;
  auVar6[8] = uVar1 == uVar2;
  auVar6._9_7_ = 0;
  return auVar6;
}

