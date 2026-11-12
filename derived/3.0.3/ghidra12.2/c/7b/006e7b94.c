
void FUN_006e7b94(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar4 = malloc(0x30);
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
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x30,8);
  }
  FUN_006e7da0(pvVar4,param_2,param_3,param_4);
  *param_1 = (long)pvVar4;
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
    pvVar4 = malloc(0x30);
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
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x30,8);
  }
  FUN_006e7da0(pvVar4,param_2,param_3,param_4);
  param_1[1] = (long)pvVar4;
  *(undefined8 *)(*param_1 + 0x28) = 0;
  *(undefined8 *)(param_1[1] + 0x28) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 1;
  return;
}

