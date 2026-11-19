
undefined8 FUN_039bf520(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return 1;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x400);
  }
  else {
    plVar2 = param_2;
    if (param_2 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x400,8);
  }
  FUN_039c00f4();
  local_34 = 0;
  local_40 = PTR_DAT_04bd10d0 + 0x10;
  local_38 = 0x20;
  FUN_039c05e4(pvVar3,&local_40,param_2);
  *(void **)(param_1 + 8) = pvVar3;
  *(void **)(param_1 + 0x10) = pvVar3;
  return 1;
}

