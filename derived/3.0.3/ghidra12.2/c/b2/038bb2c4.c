
void FUN_038bb2c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_038ba860();
  if (*(int *)PTR_DAT_04bd0ca0 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)**(undefined8 **)(PTR_DAT_04bd0ca0 + 8);
  }
  uVar3 = (**(code **)(*plVar6 + 0x80))(plVar6,8);
  puVar2 = PTR_DAT_04bb2020;
  lVar7 = 1;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "sead::SystemManagers";
  local_50 = puVar1;
  plVar6 = (long *)FUN_038c6d48(uVar3,&local_50,plVar6,8,1,0);
  uVar3 = (**(code **)(*plVar6 + 0x80))(plVar6,8);
  pcStack_48 = "sead::ResourceMgr";
  local_50 = puVar1;
  plVar4 = (long *)FUN_038c6d48(uVar3,&local_50,plVar6,8,1,0);
  puVar1 = PTR_DAT_04bb3350;
  if (plVar4 != (long *)0x0) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)(lVar5 + 0xa8);
    *(long **)(lVar5 + 0xa8) = plVar4;
  }
  FUN_038d9878(plVar4);
  (**(code **)(*plVar4 + 0x28))(plVar4);
  if (lVar7 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar7;
  }
  uVar3 = (**(code **)(*plVar6 + 0x80))(plVar6,8);
  local_50 = puVar2 + 0x10;
  pcStack_48 = "sead::FileDeviceMgr";
  lVar7 = 1;
  plVar4 = (long *)FUN_038c6d48(uVar3,&local_50,plVar6,8,1,0);
  if (plVar4 != (long *)0x0) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    lVar7 = *(long *)(lVar5 + 0xa8);
    *(long **)(lVar5 + 0xa8) = plVar4;
  }
  FUN_038b5268(plVar4);
  (**(code **)(*plVar4 + 0x28))(plVar4);
  if (lVar7 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar7;
  }
  (**(code **)(*plVar6 + 0x28))(plVar6);
  return;
}

