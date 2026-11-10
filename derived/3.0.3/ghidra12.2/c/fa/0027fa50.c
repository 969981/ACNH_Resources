
void FUN_0027fa50(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_c0 [128];
  
  *(undefined2 *)(param_1 + 0xe6) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  if (*(short *)(param_1 + 0xa0) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x78);
      if (*(int *)(lVar1 + lVar2) == 1) {
        FUN_00221064();
        lVar1 = *(long *)(param_1 + 0x78);
      }
      FUN_00220f24(lVar1 + lVar2);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x30;
    } while (uVar3 < *(ushort *)(param_1 + 0xa0));
  }
  lVar2 = param_1 + 0x110;
  if (*(int *)(param_1 + 0x110) == 1) {
    FUN_00221064(lVar2);
  }
  FUN_00220f24(lVar2);
  memset((void *)(param_1 + 0x80),0xff,0x20);
  FUN_002b3fa8(auStack_c0);
  if (*(short *)(param_1 + 0xa0) != 0) {
    lVar1 = 0;
    uVar3 = 0;
    do {
      FUN_002b415c(*(long *)(param_1 + 0xa8) + lVar1,auStack_c0);
      *(undefined1 *)(*(long *)(param_1 + 0xb0) + uVar3) = 0xfd;
      *(undefined2 *)(*(long *)(param_1 + 0xb8) + uVar3 * 2) = 0xffff;
      FUN_002b415c(*(long *)(param_1 + 0xc0) + lVar1,auStack_c0);
      lVar1 = lVar1 + 0x80;
      *(undefined1 *)(*(long *)(param_1 + 200) + uVar3) = 0xfd;
      *(undefined2 *)(*(long *)(param_1 + 0xd0) + uVar3 * 2) = 0xffff;
      *(undefined1 *)(*(long *)(param_1 + 0xe8) + uVar3) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 0xa0));
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x105) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x10c) = 1;
  FUN_00220f24(lVar2);
  FUN_002b4104(auStack_c0);
  return;
}

