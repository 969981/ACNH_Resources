
void FUN_00462390(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      (**(code **)(*(long *)(*(long *)(param_1 + 8) + (long)iVar3 * 0x38) + 8))();
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  puVar2 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(long *)(param_1 + 0x18) != 0)) {
    FUN_00421f90(puVar2,*(long *)(param_1 + 0x18),1,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    FUN_00421f90(puVar2,*(long *)(param_1 + 8),0x38,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}

