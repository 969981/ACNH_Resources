
void FUN_02077fb0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  undefined4 uVar5;
  
  puVar2 = PTR_DAT_04bb32e0;
  puVar1 = PTR_DAT_04bb3238;
  *(undefined1 *)((long)param_1 + 0x1ce) = 0;
  *(undefined8 *)(param_1[2] + 0x38) = 0;
  bVar3 = *puVar2;
  uVar5 = *(undefined4 *)puVar1;
  param_1[0x2f] = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x412000003f000000;
  *(undefined4 *)((long)param_1 + 0xa4) = uVar5;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *(undefined8 *)((long)param_1 + 0x34) = 0xbf800000bf800000;
  *(undefined4 *)((long)param_1 + 0x3c) = 0xbf800000;
  *(byte *)(param_1 + 0x14) = bVar3;
  lVar4 = *(long *)(*param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(lVar4 + 0x278);
  *(undefined4 *)((long)param_1 + 0x194) = *(undefined4 *)(lVar4 + 0x27c);
  uVar5 = *(undefined4 *)(lVar4 + 0x280);
  *(undefined8 *)((long)param_1 + 0x19c) = 0;
  *(undefined8 *)((long)param_1 + 0x1a4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  *(undefined4 *)((long)param_1 + 0x1b4) = 0;
  *(undefined2 *)((long)param_1 + 0x1cc) = 0;
  *(undefined1 *)((long)param_1 + 0x1d3) = 0;
  param_1[0x37] = 0x3c;
  *(undefined4 *)((long)param_1 + 0x1cf) = 0;
  *(undefined4 *)(param_1 + 0x33) = uVar5;
  if (*(char *)((long)param_1 + 0x1ce) == '\0') {
    *(undefined4 *)(param_1 + 5) = 0xbf800000;
    param_1[3] = 0x41c8000041800000;
    param_1[4] = -0x407fffff40800000;
    *(undefined1 *)((long)param_1 + 0x1ce) = 1;
  }
  FUN_03ebb160(param_1 + 10,1);
  return;
}

