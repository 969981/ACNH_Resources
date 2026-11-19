
void FUN_03834174(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined *local_50;
  char *pcStack_48;
  
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "ELink";
  lVar1 = FUN_038c6d48(0,&local_50,*(undefined8 *)(param_2 + 0x10),8,1,0);
  *(long *)(param_1 + 0x18) = lVar1;
  if (lVar1 == 0) {
    lVar4 = 1;
    lVar1 = *(long *)PTR_DAT_04bb2698;
    if (*(long *)PTR_DAT_04bb2698 == 0) goto LAB_03834258;
LAB_03834220:
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar1 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) goto LAB_03834258;
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar4 = *(long *)(lVar2 + 0xa8);
    *(long *)(lVar2 + 0xa8) = lVar1;
    if (DAT_05ae7600 == 0) goto LAB_03834258;
    plVar3 = *(long **)(param_1 + 0x18);
    lVar1 = DAT_05ae7600;
    if (plVar3 == (long *)0x0) goto LAB_03834220;
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,8,8);
LAB_03834258:
  FUN_03833e40(param_1,param_2,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(**(long **)(param_2 + 8) + 0x178))();
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 8);
    *(long *)(*(long *)(param_1 + 0x20) + 0xf8) = param_1 + 0x28;
    FUN_03bf3e20(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
  if (lVar4 != 1) {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar1 + 0xa8) = lVar4;
  }
  return;
}

