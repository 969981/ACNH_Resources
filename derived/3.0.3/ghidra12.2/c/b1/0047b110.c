
long FUN_0047b110(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int local_2c;
  undefined8 local_28;
  
  local_2c = *(int *)(param_1 + 0x20);
  local_28 = param_2;
  lVar3 = FUN_0047b410(param_1 + 0x28,&local_28,&local_2c);
  iVar2 = *(int *)(*(long *)(param_1 + 0x28) + ((lVar3 << 0x20) >> 0x1c) + 8);
  if (iVar2 != local_2c) {
    return *(long *)(param_1 + 0x18) + (long)iVar2 * 0x10;
  }
  uVar4 = *(uint *)(param_1 + 0x20);
  if (uVar4 == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,(long *)(param_1 + 0x18),0x10);
    uVar4 = *(uint *)(param_1 + 0x20);
  }
  *(uint *)(param_1 + 0x20) = uVar4 + 1;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar4 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0x8000000000000000;
  uVar4 = *(uint *)(param_1 + 0x50);
  if (uVar4 == (*(uint *)(param_1 + 0x54) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1 + 0x48,4);
    uVar4 = *(uint *)(param_1 + 0x50);
  }
  *(int *)(*(long *)(param_1 + 0x48) + (long)(int)uVar4 * 4) = local_2c;
  *(uint *)(param_1 + 0x50) = uVar4 + 1;
  return 0;
}

