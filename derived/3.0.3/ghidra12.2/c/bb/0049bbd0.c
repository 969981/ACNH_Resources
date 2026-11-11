
undefined8 FUN_0049bbd0(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar1 = FUN_0049bc70();
  uVar3 = (uint)uVar1;
  if (*(uint *)(param_1 + 1) == uVar3) {
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar3) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0xc);
      uVar3 = *(uint *)(param_1 + 1);
    }
    puVar2 = (undefined8 *)(*param_1 + (long)(int)uVar3 * 0xc);
    *puVar2 = *param_2;
    *(undefined4 *)(puVar2 + 1) = *param_3;
    *(uint *)(param_1 + 1) = uVar3 + 1;
  }
  return uVar1;
}

