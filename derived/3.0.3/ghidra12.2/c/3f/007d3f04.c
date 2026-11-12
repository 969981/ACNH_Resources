
void * FUN_007d3f04(long param_1)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x188);
  }
  else {
    plVar1 = *(long **)(param_1 + 0x30);
    if (plVar1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar1 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        plVar1 = (long *)(lVar2 + 0xa8);
      }
      plVar1 = (long *)*plVar1;
    }
    pvVar3 = (void *)(**(code **)(*plVar1 + 0x30))(plVar1,0x188,8);
  }
  FUN_03f433b0(pvVar3,param_1,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  return pvVar3;
}

