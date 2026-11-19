
void FUN_03babf74(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar4 = malloc(0x20);
  }
  else {
    plVar4 = param_4;
    if (param_4 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x20,8);
  }
  plVar4[2] = 0;
  puVar2 = PTR_DAT_04bd2268;
  *(undefined4 *)(plVar4 + 3) = 0xffffffff;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[1] = 0;
  *(long **)(param_1 + 0x18) = plVar4;
  FUN_03babd50(plVar4,param_2,param_4);
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
    plVar4 = malloc(0x20);
  }
  else {
    plVar4 = param_4;
    if (param_4 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x20,8);
  }
  plVar4[2] = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[1] = 0;
  *(undefined4 *)(plVar4 + 3) = 0xffffffff;
  *(long **)(param_1 + 0x10) = plVar4;
  FUN_03babd50(plVar4,param_3,param_4);
  return;
}

