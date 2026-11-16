
void * FUN_026ce7ac(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_0556ca20 != (void *)0x0) {
    return DAT_0556ca20;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x78);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        pvVar3 = (void *)0x0;
        goto LAB_026ce834;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x78,8);
  }
LAB_026ce834:
  FUN_038c69f0((long)pvVar3 + 0x58,param_1,3);
  *(undefined ***)((long)pvVar3 + 0x58) = &PTR_FUN_04a89388;
  DAT_0556ca18 = (long)pvVar3 + 0x58;
  FUN_038e18e4(pvVar3);
  *(undefined4 *)((long)pvVar3 + 0x40) = 0;
  *(undefined2 *)((long)pvVar3 + 0x44) = 0;
  DAT_0556ca20 = pvVar3;
  *(undefined **)((long)pvVar3 + 0x48) = PTR_DAT_04bb2020 + 0x10;
  *(undefined1 **)((long)pvVar3 + 0x50) = &DAT_04079e84;
  return pvVar3;
}

