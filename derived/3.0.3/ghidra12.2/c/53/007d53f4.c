
void * FUN_007d53f4(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_04cb00c0 != (void *)0x0) {
    return DAT_04cb00c0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x180);
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
        goto LAB_007d547c;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x180,8);
  }
LAB_007d547c:
  FUN_038c69f0((long)pvVar3 + 0x160,param_1,3);
  *(undefined ***)((long)pvVar3 + 0x160) = &PTR_FUN_04916750;
  DAT_04cb00b8 = (long)pvVar3 + 0x160;
  FUN_038e18e4(pvVar3);
  *(undefined1 *)((long)pvVar3 + 0x5f) = 0;
  *(undefined4 *)((long)pvVar3 + 0x40) = 0;
  *(undefined1 *)((long)pvVar3 + 0x44) = 0xff;
  *(undefined4 *)((long)pvVar3 + 0x60) = 0;
  *(undefined1 *)((long)pvVar3 + 100) = 0xff;
  *(undefined1 *)((long)pvVar3 + 0x7f) = 0;
  *(undefined4 *)((long)pvVar3 + 0x80) = 0;
  *(undefined1 *)((long)pvVar3 + 0x84) = 0xff;
  *(undefined1 *)((long)pvVar3 + 0x9f) = 0;
  *(undefined4 *)((long)pvVar3 + 0xa0) = 0;
  *(undefined1 *)((long)pvVar3 + 0xa4) = 0xff;
  *(undefined1 *)((long)pvVar3 + 0xbf) = 0;
  *(undefined8 *)((long)pvVar3 + 0xb6) = 0;
  *(undefined4 *)((long)pvVar3 + 0xc0) = 0;
  *(undefined1 *)((long)pvVar3 + 0xc4) = 0xff;
  *(undefined1 *)((long)pvVar3 + 0xdf) = 0;
  *(undefined4 *)((long)pvVar3 + 0xe0) = 0;
  *(undefined1 *)((long)pvVar3 + 0xe4) = 0xff;
  *(undefined1 *)((long)pvVar3 + 0xff) = 0;
  *(undefined4 *)((long)pvVar3 + 0x100) = 0;
  *(undefined1 *)((long)pvVar3 + 0x104) = 0xff;
  *(undefined1 *)((long)pvVar3 + 0x11f) = 0;
  *(undefined8 *)((long)pvVar3 + 0x116) = 0;
  *(undefined4 *)((long)pvVar3 + 0x120) = 0;
  *(undefined1 *)((long)pvVar3 + 0x124) = 0xff;
  *(undefined1 *)((long)pvVar3 + 0x13f) = 0;
  *(undefined4 *)((long)pvVar3 + 0x140) = 0;
  *(undefined1 *)((long)pvVar3 + 0x144) = 0xff;
  *(undefined1 *)((long)pvVar3 + 0x15f) = 0;
  DAT_04cb00c0 = pvVar3;
  *(undefined8 *)((long)pvVar3 + 0x48) = 0;
  *(undefined8 *)((long)pvVar3 + 0x50) = 0;
  *(undefined8 *)((long)pvVar3 + 0x56) = 0;
  *(undefined8 *)((long)pvVar3 + 0x68) = 0;
  *(undefined8 *)((long)pvVar3 + 0x70) = 0;
  *(undefined8 *)((long)pvVar3 + 0x76) = 0;
  *(undefined8 *)((long)pvVar3 + 0x88) = 0;
  *(undefined8 *)((long)pvVar3 + 0x90) = 0;
  *(undefined8 *)((long)pvVar3 + 0x96) = 0;
  *(undefined8 *)((long)pvVar3 + 0xa8) = 0;
  *(undefined8 *)((long)pvVar3 + 0xb0) = 0;
  *(undefined8 *)((long)pvVar3 + 200) = 0;
  *(undefined8 *)((long)pvVar3 + 0xd0) = 0;
  *(undefined8 *)((long)pvVar3 + 0xd6) = 0;
  *(undefined8 *)((long)pvVar3 + 0xe8) = 0;
  *(undefined8 *)((long)pvVar3 + 0xf0) = 0;
  *(undefined8 *)((long)pvVar3 + 0xf6) = 0;
  *(undefined8 *)((long)pvVar3 + 0x108) = 0;
  *(undefined8 *)((long)pvVar3 + 0x110) = 0;
  *(undefined8 *)((long)pvVar3 + 0x128) = 0;
  *(undefined8 *)((long)pvVar3 + 0x130) = 0;
  *(undefined8 *)((long)pvVar3 + 0x136) = 0;
  *(undefined8 *)((long)pvVar3 + 0x148) = 0;
  *(undefined8 *)((long)pvVar3 + 0x150) = 0;
  *(undefined8 *)((long)pvVar3 + 0x156) = 0;
  return pvVar3;
}

