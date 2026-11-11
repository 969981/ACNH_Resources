
void FUN_005294a0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint *puVar3;
  
  puVar1 = PTR_DAT_048607b8;
  iVar2 = *(int *)(param_1 + 0x10);
  if (0 < iVar2) {
    puVar3 = (uint *)(*(long *)(param_1 + 8) + (long)iVar2 * 0x48 + -0x24);
    do {
      puVar3[5] = 0;
      if ((-1 < (int)puVar3[6]) && (*(long *)(puVar3 + 3) != 0)) {
        FUN_00421f90(puVar1,*(long *)(puVar3 + 3),4,puVar3[6] & 0x3fffffff);
      }
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[6] = 0x80000000;
      puVar3[-1] = 0;
      if ((-1 < (int)*puVar3) && (*(long *)(puVar3 + -3) != 0)) {
        FUN_00421f90(puVar1,*(long *)(puVar3 + -3),4,*puVar3 & 0x3fffffff);
      }
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3[-7] = 0;
      if ((-1 < (int)puVar3[-6]) && (*(long *)(puVar3 + -9) != 0)) {
        FUN_00421f90(puVar1,*(long *)(puVar3 + -9),4,puVar3[-6] & 0x3fffffff);
      }
      puVar3[-9] = 0;
      puVar3[-8] = 0;
      iVar2 = iVar2 + -1;
      puVar3[-6] = 0x80000000;
      puVar3 = puVar3 + -0x12;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 8),0x48,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}

