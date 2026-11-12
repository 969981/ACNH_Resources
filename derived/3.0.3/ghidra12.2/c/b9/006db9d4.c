
void FUN_006db9d4(undefined8 *param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar4 = malloc(0x20);
  }
  else {
    plVar3 = param_4;
    if (param_4 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x20,8);
  }
  FUN_006dbc80(pvVar4,param_2,param_3,param_4);
  *param_1 = pvVar4;
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
    pvVar4 = malloc(0x20);
  }
  else {
    plVar3 = param_4;
    if (param_4 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x20,8);
  }
  FUN_006dbc80(pvVar4,param_2,param_3,param_4);
  param_1[1] = pvVar4;
  FUN_006dbb00(param_1);
  return;
}

