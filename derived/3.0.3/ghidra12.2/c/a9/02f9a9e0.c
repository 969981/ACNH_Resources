
void FUN_02f9a9e0(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined *local_50;
  char *pcStack_48;
  
  uVar4 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar2 = PTR_DAT_04bb37e0[2];
  uVar3 = PTR_DAT_04bb37e0[3];
  uVar1 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  lVar9 = 0x800;
  puVar8 = (undefined4 *)(param_1 + 0x1c34c);
  do {
    *(undefined2 *)(puVar8 + -1) = uVar4;
    lVar9 = lVar9 + -1;
    *(undefined1 *)((long)puVar8 + -2) = uVar2;
    *(undefined1 *)((long)puVar8 + -1) = uVar3;
    *puVar8 = uVar1;
    puVar5 = PTR_DAT_04bb46f0;
    puVar8 = puVar8 + 0x35;
  } while (lVar9 != 0);
  lVar9 = param_1 + 0x1f8;
  *(undefined4 *)(param_1 + 0x86340) = 0;
  *(undefined1 *)(*(long *)puVar5 + 8) = 0;
  uVar6 = FUN_033ffc10(lVar9);
  FUN_00dbf620(param_1 + 0x1c340,lVar9,uVar6 & 1,&local_50,*(long *)puVar5 + 0xe98e0);
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "MainmenuRecipe_v2";
  iVar7 = FUN_0274bce0(lVar9,&local_50);
  if (iVar7 != 0) {
    FUN_00dbf620(param_1 + 0x1c340,lVar9,uVar6 & 1,&local_50,*(long *)puVar5 + 0xe99e0);
  }
  FUN_02fa0ba0((undefined4 *)(param_1 + 0x86340));
  return;
}

