
void FUN_0026c2a0(long param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  puVar3 = PTR_DAT_04bcb8c0;
  if (*(char *)(param_1 + 0xd0) != '\0') {
    lVar9 = *(long *)(param_1 + 200);
    lVar8 = *(long *)(*(long *)PTR_DAT_04bcb8c0 + 0x30);
    if ((param_2 != 1) && (iVar1 = *(int *)(*(long *)(param_1 + 0x50) + 0x158), iVar1 != 0)) {
      if (iVar1 == 2) {
        param_2 = 4;
      }
      else {
        param_2 = 10;
        if (iVar1 != 3) {
          param_2 = 5;
        }
      }
    }
    cVar5 = FUN_0026aa40(param_1);
    iVar1 = *(int *)(param_1 + 0xbc);
    if (cVar5 == '\0') {
      cVar5 = -1;
    }
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    if ((*(long *)(param_1 + 0x350) == 0) ||
       (iVar10 = *(int *)(*(long *)(param_1 + 0x350) + 0x34), iVar10 == 0)) {
      iVar10 = -1;
    }
    plVar6 = (long *)FUN_00228380();
    puVar4 = PTR_DAT_04bccf10;
    uVar2 = 0;
    if (*plVar6 != 0) {
      uVar2 = (undefined4)((lVar8 - lVar9) / *plVar6);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    PTR_DAT_04bccf10[0x2f4] = (char)param_2;
    puVar4[0x2d8] = cVar5;
    *(int *)(puVar4 + 0x2e4) = iVar1;
    *(int *)(puVar4 + 0x2e8) = iVar10;
    *(undefined4 *)(puVar4 + 0x2e0) = uVar2;
    FUN_0027fd04(uVar7);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_0027a974();
    }
    FUN_00223614(*(undefined8 *)puVar3);
    plVar6 = (long *)FUN_002ba798(DAT_04c61168);
    (**(code **)(*plVar6 + 0x10))();
    FUN_002ba7a0(DAT_04c61168);
    FUN_002b7ba8();
    if (((*(char *)(param_1 + 0x118) == '\0') && (lVar8 = FUN_0022033c(), lVar8 != 0)) &&
       (DAT_04be24d0 != '\0')) {
      uVar7 = FUN_0022033c();
      FUN_00220528(uVar7,param_3);
    }
    if (param_3 == '\x01') {
      *(undefined1 *)(param_1 + 0xd0) = 0;
    }
  }
  return;
}

