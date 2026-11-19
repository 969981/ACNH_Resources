
undefined2 * FUN_03b4f14c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined2 *puVar3;
  long lVar4;
  
  if (DAT_05aebb88 != (undefined2 *)0x0) {
    return DAT_05aebb88;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x248);
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
        puVar3 = (undefined2 *)0x0;
        goto LAB_03b4f1d4;
      }
    }
    puVar3 = (undefined2 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x248,8);
  }
LAB_03b4f1d4:
  FUN_038c69f0(puVar3 + 0x114,param_1,3);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  DAT_05aebb80 = puVar3 + 0x114;
  *(undefined ***)(puVar3 + 0x114) = &PTR_FUN_04b765d8;
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 0x14) = 0;
  *(undefined1 *)(puVar3 + 0x9c) = 0;
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined8 *)(puVar3 + 10) = 0;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined4 *)(puVar3 + 0xa0) = 6;
  *(undefined8 *)(puVar3 + 0xe2) = 0;
  *(undefined8 *)(puVar3 + 0xe8) = 0;
  *(undefined4 *)(puVar3 + 0xec) = 0;
  puVar3[0xe0] = 0;
  *(undefined8 *)(puVar3 + 0xa4) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x1c) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 0x24) = 0;
  *(undefined8 *)(puVar3 + 0x44) = 0;
  *(undefined8 *)(puVar3 + 0x48) = 0;
  *(undefined8 *)(puVar3 + 0xd8) = 0;
  *(undefined8 *)(puVar3 + 0xdc) = 0;
  *(undefined8 *)(puVar3 + 0xd0) = 0;
  *(undefined8 *)(puVar3 + 0xd4) = 0;
  *(undefined8 *)(puVar3 + 200) = 0;
  *(undefined8 *)(puVar3 + 0xcc) = 0;
  *(undefined8 *)(puVar3 + 0xc0) = 0;
  *(undefined8 *)(puVar3 + 0xc4) = 0;
  *(undefined8 *)(puVar3 + 0xb8) = 0;
  *(undefined8 *)(puVar3 + 0xbc) = 0;
  *(undefined8 *)(puVar3 + 0xb0) = 0;
  *(undefined8 *)(puVar3 + 0xb4) = 0;
  *(undefined8 *)(puVar3 + 0xa8) = 0;
  *(undefined8 *)(puVar3 + 0xac) = 0;
  nn::os::InitializeMutex((MutexType *)(puVar3 + 0xe0),false,0);
  *(undefined4 *)(puVar3 + 0xf0) = 0;
  *(undefined2 **)(puVar3 + 0xfc) = puVar3 + 0xfc;
  *(undefined2 **)(puVar3 + 0x100) = puVar3 + 0xfc;
  *(undefined8 *)(puVar3 + 0xf4) = 0;
  *(undefined1 *)(puVar3 + 0xf8) = 0;
  *(undefined8 *)(puVar3 + 0x104) = 0xffffffff00000000;
  *(undefined8 *)(puVar3 + 0x110) = 0xffffffff00000000;
  *(undefined2 **)(puVar3 + 0x10c) = puVar3 + 0x108;
  *(undefined2 **)(puVar3 + 0x108) = puVar3 + 0x108;
  nn::audio::InitializeAudioRendererParameter((AudioRendererParameter *)(puVar3 + 0x28));
  DAT_05aebb88 = puVar3;
  *(undefined8 *)(puVar3 + 0x28) = 0xf00000bb80;
  *(undefined8 *)(puVar3 + 0x32) = 0xa00000002;
  *(undefined4 *)(puVar3 + 0x2c) = 0x1e;
  *(undefined8 *)(puVar3 + 0x2e) = 0x6000000004;
  *(undefined8 *)(puVar3 + 0x3a) = 0x18000000060;
  return puVar3;
}

