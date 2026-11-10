
void FUN_00223ee0(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  
  *(undefined8 *)(param_1 + 0x11c) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x84) = 0xffff;
  *(undefined8 *)(param_1 + 0x124) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x131) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x8a) = 0xffff;
  *(undefined2 *)(param_1 + 0xb0) = 0xffff;
  *(undefined2 *)(param_1 + 0xb6) = 0xffff;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 0x139) = 0xffff;
  lVar4 = -0x20;
  *(undefined2 *)(param_1 + 0x198) = 0xffff;
  *(undefined8 *)(param_1 + 0x16c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x48) = 0xff;
  *(undefined8 *)(param_1 + 0x54) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 100) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x6c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb2) = 0xff;
  *(undefined1 *)(param_1 + 0xb5) = 0xff;
  *(undefined8 *)(param_1 + 0xb8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xc5) = 0xff;
  *(undefined8 *)(param_1 + 200) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xd4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x130) = 0xff;
  *(undefined4 *)(param_1 + 300) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x13b) = 0xff;
  *(undefined4 *)(param_1 + 0x174) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x13c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x144) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x14c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x154) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x15c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x164) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x178) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x180) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x188) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 400) = 0xffffffffffffffff;
  do {
    puVar1 = (undefined1 *)(param_1 + 0x236 + lVar4);
    bVar3 = lVar4 != -1;
    lVar4 = lVar4 + 1;
    puVar1[-0x60] = 0xff;
    puVar1[-0x40] = 0xff;
    puVar1[-0x20] = 0xff;
    *puVar1 = 0xff;
    puVar1[0x20] = 0xff;
  } while (bVar3);
  lVar4 = 0;
  do {
    lVar2 = param_1 + lVar4;
    lVar4 = lVar4 + 4;
    *(undefined4 *)(lVar2 + 0x260) = 0xffffffff;
  } while (lVar4 != 0x100);
  *(undefined4 *)(param_1 + 0x360) = 0xffffffff;
  *(undefined8 *)(param_1 + 600) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x364) = 0xff;
  return;
}

