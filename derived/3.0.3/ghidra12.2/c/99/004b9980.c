
undefined8 FUN_004b9980(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar2 = FUN_004b7450();
  uVar3 = (uint)uVar2;
  if (*(uint *)(param_1 + 1) == uVar3) {
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar3) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0x10);
      uVar3 = *(uint *)(param_1 + 1);
    }
    puVar1 = (undefined8 *)(*param_1 + (long)(int)uVar3 * 0x10);
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *param_3;
    *(uint *)(param_1 + 1) = uVar3 + 1;
  }
  return uVar2;
}

