
void FUN_01bc1250(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  void *__s;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  FUN_038e18e4();
  lVar5 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    __s = malloc(0x5b28);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar2 = (undefined8 *)(lVar5 + 8);
    if (lVar4 != 0) {
      puVar2 = (undefined8 *)(lVar4 + 0xa8);
    }
    __s = (void *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x5b28,8);
  }
  memset(__s,0,0x5b24);
  FUN_01ba9c60(__s);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(long *)(param_1 + 0x48) = param_1 + 0x48;
  *(long *)(param_1 + 0x50) = param_1 + 0x48;
  *(void **)(param_1 + 0x40) = __s;
  *(undefined8 *)(param_1 + 0x5c) = 0xffffffff;
  memset((void *)(param_1 + 0x68),0,0x5da8);
  lVar4 = -0x149 - param_1;
  lVar5 = 0;
  uVar6 = param_1 + 0x188;
  uVar7 = param_1 + 0x14a;
  lVar8 = 0x51;
  do {
    lVar1 = param_1 + lVar5;
    *(undefined1 *)(lVar1 + 0xac) = 0;
    *(undefined4 *)(lVar1 + 0x78) = 0x20;
    *(undefined1 *)(lVar1 + 0x7c) = 0;
    uVar3 = uVar6;
    if (uVar6 <= uVar7) {
      uVar3 = uVar7;
    }
    *(undefined1 **)(lVar1 + 0xa0) = (undefined1 *)(lVar1 + 0xac);
    *(undefined8 *)(lVar1 + 0x80) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x90) = 0xffffffff;
    *(void **)(lVar1 + 0x70) = (void *)(lVar1 + 0x148);
    *(undefined1 *)(lVar1 + 0x104) = 0;
    *(undefined8 *)(lVar1 + 0x88) = 0xffffffff00000000;
    *(undefined4 *)(lVar1 + 0xa8) = 0x40;
    *(undefined1 *)(lVar1 + 0xeb) = 0;
    *(undefined ***)(lVar1 + 0x98) = &PTR_LAB_048fb9f8;
    *(undefined1 **)(lVar1 + 0xf8) = (undefined1 *)(lVar1 + 0x104);
    *(undefined4 *)(lVar1 + 0x100) = 0x40;
    *(undefined1 *)(lVar1 + 0x143) = 0;
    *(undefined ***)(lVar1 + 0xf0) = &PTR_LAB_048fb9f8;
    *(undefined ***)(lVar1 + 0x68) = &PTR_LAB_049173e0;
    *(undefined8 *)(lVar1 + 0x180) = 0;
    *(undefined8 *)(lVar1 + 0x178) = 0;
    *(undefined8 *)(lVar1 + 0x170) = 0;
    *(undefined8 *)(lVar1 + 0x168) = 0;
    *(undefined8 *)(lVar1 + 0x160) = 0;
    *(undefined8 *)(lVar1 + 0x158) = 0;
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x148) = 0;
    memset((void *)(lVar1 + 0x148),0,(uVar3 + lVar4 & 0xfffffffffffffffe) + 2);
    lVar8 = lVar8 + -1;
    *(undefined8 *)(lVar1 + 0x188) = 0;
    lVar5 = lVar5 + 0x128;
    uVar6 = uVar6 + 0x128;
    uVar7 = uVar7 + 0x128;
    lVar4 = lVar4 + -0x128;
  } while (lVar8 != 0);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e20) = 0x12800000000;
  *(long *)(param_1 + 0x5e18) = param_1 + 0x5e10;
  *(long *)(param_1 + 0x5e10) = param_1 + 0x5e10;
  return;
}

