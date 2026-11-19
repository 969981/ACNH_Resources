
void FUN_03bf7074(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_2;
  *param_1 = (long)plVar4;
  puVar1 = PTR_DAT_04bb2698;
  if (plVar4 == (long *)0x0) {
    lVar2 = *(long *)PTR_DAT_04bb2698;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar2 + 8);
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    *param_1 = (long)plVar4;
    lVar5 = *(long *)puVar1;
  }
  else {
    lVar5 = *(long *)PTR_DAT_04bb2698;
  }
  if (lVar5 == 0) {
    pvVar3 = malloc(0x28);
  }
  else {
    if (plVar4 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar4 = (long *)(lVar2 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    pvVar3 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x28,8);
    plVar4 = (long *)*param_1;
  }
  FUN_03bf6eb0(pvVar3,plVar4,300);
  lVar5 = *(long *)puVar1;
  param_1[1] = (long)pvVar3;
  if (lVar5 == 0) {
    pvVar3 = malloc(0x28);
  }
  else {
    plVar4 = (long *)*param_1;
    if (plVar4 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar4 = (long *)(lVar2 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    pvVar3 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x28,8);
  }
  FUN_03bf6eb0(pvVar3,*param_1,300);
  lVar5 = param_1[1];
  param_1[2] = (long)pvVar3;
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(undefined4 *)(lVar5 + 0x20) = 0;
  lVar5 = param_1[2];
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(undefined4 *)(lVar5 + 0x20) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 1;
  return;
}

