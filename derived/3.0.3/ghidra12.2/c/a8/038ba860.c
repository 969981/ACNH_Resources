
void FUN_038ba860(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *local_40;
  char *pcStack_38;
  
  puVar2 = PTR_DAT_04bd0ca0;
  puVar1 = PTR_DAT_04bb2020;
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 == (undefined8 *)0x0) {
    FUN_038cb500(*param_1);
    iVar6 = *(int *)puVar2;
  }
  else {
    *(undefined8 **)PTR_DAT_04bd0d68 = puVar7;
    puVar3 = PTR_DAT_04bd0d60;
    *(undefined8 *)(PTR_DAT_04bd0d60 + 0x10) = 0;
    *(long *)PTR_DAT_04bd0d78 = *(long *)PTR_DAT_04bb29d0 / 100000;
    local_40 = puVar1 + 0x10;
    pcStack_38 = "RootHeap";
    uVar4 = FUN_038c6ffc(*puVar7,puVar7[1],&local_40,0);
    iVar6 = *(int *)puVar2;
    if (iVar6 < *(int *)(puVar2 + 4)) {
      *(undefined8 *)(*(long *)(puVar2 + 8) + (long)iVar6 * 8) = uVar4;
      iVar6 = *(int *)puVar2 + 1;
      *(int *)puVar2 = iVar6;
    }
    *(undefined **)PTR_DAT_04bb2698 = puVar3;
  }
  if (iVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined8 **)(puVar2 + 8);
  }
  local_40 = puVar1 + 0x10;
  pcStack_38 = "sead::ThreadMgr";
  plVar5 = (long *)FUN_038c6d48(0,&local_40,uVar4,8,1,0);
  FUN_038e2adc();
  lVar8 = *(long *)PTR_DAT_04bb3350;
  FUN_038e2bd8(lVar8,plVar5);
  nn::os::SetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8,*(long *)(lVar8 + 0x60) + 0xd4);
  (**(code **)(*plVar5 + 0x28))(plVar5);
  return;
}

