
void * FUN_02b561fc(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  if (DAT_05635578 != (void *)0x0) {
    return DAT_05635578;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar4 = malloc(0x26af0);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        pvVar4 = (void *)0x0;
        goto LAB_02b5628c;
      }
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x26af0,8);
  }
LAB_02b5628c:
  puVar1 = (undefined8 *)((long)pvVar4 + 0x26ad0);
  FUN_038c69f0(puVar1,param_1,3);
  *puVar1 = &PTR_FUN_04aa4830;
  DAT_05635570 = puVar1;
  FUN_02b562e0(pvVar4);
  DAT_05635578 = pvVar4;
  return pvVar4;
}

