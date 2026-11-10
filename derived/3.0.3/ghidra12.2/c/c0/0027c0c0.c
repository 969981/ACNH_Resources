
void FUN_0027c0c0(long param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_04bcd350;
  uVar3 = FUN_0026bfe0(*(undefined8 *)PTR_DAT_04bcd350);
  iVar8 = ((uint)*(ushort *)(*(long *)PTR_DAT_04bc1510 + 0x58) - (uVar3 & 0xff)) * 1000;
  if ((param_2 & 1) == 0) {
    uVar4 = FUN_0026c870(*(undefined8 *)puVar2);
    iVar6 = 10000;
    if ((uVar4 & 1) == 0) {
      iVar6 = 0;
    }
    iVar7 = 30000;
    if (0xc < *(ushort *)(param_1 + 0xe6)) {
      iVar7 = 35000;
    }
    iVar1 = 25000;
    if (8 < *(ushort *)(param_1 + 0xe6)) {
      iVar1 = iVar7;
    }
    iVar8 = iVar8 + iVar1;
    iVar6 = iVar8 + iVar6;
  }
  else {
    iVar8 = *(int *)(param_1 + 100) + iVar8;
    iVar6 = iVar8;
  }
  *(int *)(param_1 + 0x60) = iVar6;
  *(int *)(param_1 + 0x70) = iVar8;
  puVar2 = PTR_DAT_04bcb8c0;
  lVar10 = *(long *)PTR_DAT_04bcb8c0;
  plVar5 = (long *)FUN_00228380();
  lVar9 = *(long *)puVar2;
  iVar6 = *(int *)(param_1 + 0x60);
  *(long *)(param_1 + 0x68) = *(long *)(lVar10 + 0x30) + *plVar5 * (long)iVar8;
  plVar5 = (long *)FUN_00228380();
  *(long *)(param_1 + 0x58) = *(long *)(lVar9 + 0x30) + *plVar5 * (long)iVar6;
  if (((param_2 & 1) == 0) && (*(char *)(param_1 + 0x106) == '\0')) {
    iVar8 = *(int *)(param_1 + 100);
    plVar5 = (long *)FUN_00228380();
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + *plVar5 * (long)iVar8;
  }
  return;
}

