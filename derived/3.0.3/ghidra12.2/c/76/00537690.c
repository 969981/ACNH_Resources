
void FUN_00537690(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  
  puVar1 = PTR_DAT_048607b8;
  iVar2 = (int)param_1[3];
  if (0 < iVar2) {
    puVar3 = (undefined4 *)(param_1[2] + (long)iVar2 * 0x30 + -0x18);
    do {
      *puVar3 = 0;
      if ((-1 < (int)puVar3[1]) && (*(long *)(puVar3 + -2) != 0)) {
        FUN_00421f90(puVar1,*(long *)(puVar3 + -2),4,puVar3[1] & 0x3fffffff);
      }
      *(undefined8 *)(puVar3 + -2) = 0;
      puVar3[1] = 0x80000000;
      puVar3[-4] = 0;
      if ((-1 < (int)puVar3[-3]) && (*(long *)(puVar3 + -6) != 0)) {
        FUN_00421f90(puVar1,*(long *)(puVar3 + -6),4,puVar3[-3] & 0x3fffffff);
      }
      *(undefined8 *)(puVar3 + -6) = 0;
      iVar2 = iVar2 + -1;
      puVar3[-3] = 0x80000000;
      puVar3 = puVar3 + -0xc;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
    FUN_00421f90(puVar1,param_1[2],0x30,*(uint *)((long)param_1 + 0x1c) & 0x3fffffff);
  }
  iVar2 = (int)param_1[1];
  *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
  param_1[2] = 0;
  if (0 < iVar2) {
    puVar4 = (uint *)(*param_1 + (long)iVar2 * 0x20 + -0xc);
    do {
      puVar4[-1] = 0;
      if ((-1 < (int)*puVar4) && (*(long *)(puVar4 + -3) != 0)) {
        FUN_00421f90(puVar1,*(long *)(puVar4 + -3),4,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      iVar2 = iVar2 + -1;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -8;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    FUN_00421f90(puVar1,*param_1,0x20,*(uint *)((long)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}

