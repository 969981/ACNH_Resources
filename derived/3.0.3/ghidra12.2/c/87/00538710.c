
void FUN_00538710(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  uint *puVar6;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000000000;
  *(undefined2 *)(param_1 + 8) = 0;
  puVar1 = PTR_DAT_048607b8;
  lVar2 = FUN_00426720(PTR_DAT_048607b8,2,0x48,0,0,param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x18);
  *(long *)(param_1 + 0x10) = lVar2;
  if (iVar3 < 2) {
    *(undefined4 *)(param_1 + 0x18) = 2;
    if (0 < 2 - iVar3) {
      puVar4 = (undefined8 *)(lVar2 + (long)iVar3 * 0x48);
      iVar3 = 2 - iVar3;
      do {
        *puVar4 = 0;
        puVar4[1] = 0x8000000000000000;
        iVar3 = iVar3 + -1;
        *(undefined4 *)(puVar4 + 2) = 0;
        *(undefined4 *)(puVar4 + 5) = 0;
        *(undefined4 *)(puVar4 + 8) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0x8000000000000000;
        puVar4[6] = 0;
        puVar4[7] = 0x8000000000000000;
        puVar4 = puVar4 + 9;
      } while (iVar3 != 0);
    }
  }
  else if (iVar3 != 2) {
    *(undefined4 *)(param_1 + 0x18) = 2;
    iVar5 = iVar3 + -2;
    puVar6 = (uint *)(lVar2 + (long)iVar3 * 0x48 + -0xc);
    do {
      puVar6[-1] = 0;
      if ((-1 < (int)*puVar6) && (*(long *)(puVar6 + -3) != 0)) {
        FUN_00421f90(puVar1,*(long *)(puVar6 + -3),4,*puVar6 & 0x3fffffff);
      }
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      *puVar6 = 0x80000000;
      puVar6[-7] = 0;
      if ((-1 < (int)puVar6[-6]) && (*(long *)(puVar6 + -9) != 0)) {
        FUN_00421f90(puVar1,*(long *)(puVar6 + -9),4,puVar6[-6] & 0x3fffffff);
      }
      puVar6[-9] = 0;
      puVar6[-8] = 0;
      puVar6[-6] = 0x80000000;
      puVar6[-0xd] = 0;
      if ((-1 < (int)puVar6[-0xc]) && (*(long *)(puVar6 + -0xf) != 0)) {
        FUN_00421f90(puVar1,*(long *)(puVar6 + -0xf),4,puVar6[-0xc] & 0x3fffffff);
      }
      puVar6[-0xf] = 0;
      puVar6[-0xe] = 0;
      iVar5 = iVar5 + -1;
      puVar6[-0xc] = 0x80000000;
      puVar6 = puVar6 + -0x12;
    } while (iVar5 != 0);
  }
  return;
}

