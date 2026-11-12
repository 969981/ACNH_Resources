
void * FUN_007da308(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_04cb22e8 != (void *)0x0) {
    return DAT_04cb22e8;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0xd0);
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
        goto LAB_007da390;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0xd0,8);
  }
LAB_007da390:
  FUN_038c69f0((long)pvVar3 + 0xb0,param_1,3);
  *(undefined ***)((long)pvVar3 + 0xb0) = &PTR_FUN_04916840;
  DAT_04cb22e0 = (long)pvVar3 + 0xb0;
  FUN_038e18e4(pvVar3);
  *(undefined4 *)((long)pvVar3 + 0x44) = 0;
  *(undefined4 *)((long)pvVar3 + 0x50) = 0;
  *(undefined1 *)((long)pvVar3 + 0x40) = 0xff;
  *(undefined1 *)((long)pvVar3 + 0x4c) = 0xff;
  *(undefined1 *)((long)pvVar3 + 0x58) = 0xff;
  *(undefined4 *)((long)pvVar3 + 0x5c) = 0;
  *(undefined1 *)((long)pvVar3 + 100) = 0xff;
  *(undefined4 *)((long)pvVar3 + 0x68) = 0;
  *(undefined1 *)((long)pvVar3 + 0x70) = 0xff;
  *(undefined4 *)((long)pvVar3 + 0x74) = 0;
  *(undefined1 *)((long)pvVar3 + 0x7c) = 0xff;
  *(undefined4 *)((long)pvVar3 + 0x80) = 0;
  *(undefined1 *)((long)pvVar3 + 0x88) = 0xff;
  *(undefined4 *)((long)pvVar3 + 0x8c) = 0;
  *(undefined1 *)((long)pvVar3 + 0x94) = 0xff;
  *(undefined4 *)((long)pvVar3 + 0x98) = 0;
  *(undefined1 *)((long)pvVar3 + 0xa0) = 0xff;
  *(undefined4 *)((long)pvVar3 + 0xa4) = 0;
  DAT_04cb22e8 = pvVar3;
  return pvVar3;
}

