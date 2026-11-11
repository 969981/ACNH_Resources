
void FUN_00459520(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  ulong *puVar4;
  
  FUN_004617b0(param_1 + 0x58);
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(long *)(param_1 + 0x48) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x48),8,*(uint *)(param_1 + 0x54) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (0 < iVar3) {
    puVar4 = (ulong *)(*(long *)(param_1 + 0x38) + (long)iVar3 * 0x30 + -0x20);
    do {
      while ((puVar4[3] & 1) != 0) {
        FUN_0043dd50(puVar4[3] & 0xfffffffffffffffe);
        uVar2 = *puVar4;
        if ((uVar2 & 1) == 0) goto LAB_004595a8;
LAB_004595c8:
        FUN_0043dd50(uVar2 & 0xfffffffffffffffe);
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + -6;
        if (iVar3 == 0) goto LAB_004595dc;
      }
      uVar2 = *puVar4;
      if ((uVar2 & 1) != 0) goto LAB_004595c8;
LAB_004595a8:
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + -6;
    } while (iVar3 != 0);
  }
LAB_004595dc:
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x38),0x30,*(uint *)(param_1 + 0x44) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  FUN_0043d280(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x18);
  if (0 < iVar3) {
    puVar4 = (ulong *)(*(long *)(param_1 + 0x10) + (long)iVar3 * 0x30 + -0x20);
    do {
      while ((puVar4[3] & 1) != 0) {
        FUN_0043dd50(puVar4[3] & 0xfffffffffffffffe);
        uVar2 = *puVar4;
        if ((uVar2 & 1) == 0) goto LAB_00459644;
LAB_00459664:
        FUN_0043dd50(uVar2 & 0xfffffffffffffffe);
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + -6;
        if (iVar3 == 0) goto LAB_00459678;
      }
      uVar2 = *puVar4;
      if ((uVar2 & 1) != 0) goto LAB_00459664;
LAB_00459644:
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + -6;
    } while (iVar3 != 0);
  }
LAB_00459678:
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1c)) && (*(long *)(param_1 + 0x10) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x10),0x30,*(uint *)(param_1 + 0x1c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  return;
}

