
void * FUN_01662968(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_05231900 != (void *)0x0) {
    return DAT_05231900;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0xb40);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        pvVar3 = (void *)0x0;
        goto LAB_016629f0;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0xb40,8);
  }
LAB_016629f0:
  FUN_038c69f0((long)pvVar3 + 0xb20,param_1,3);
  *(undefined ***)((long)pvVar3 + 0xb20) = &PTR_FUN_049ba120;
  DAT_052318b0 = (long)pvVar3 + 0xb20;
  FUN_01662a40(pvVar3);
  DAT_05231900 = pvVar3;
  return pvVar3;
}

