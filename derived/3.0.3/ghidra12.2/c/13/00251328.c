
void FUN_00251328(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(lVar2 + 0x420) = 0x400000000;
  uVar1 = FUN_0024e270(lVar2 + 0xb0);
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x78);
    uVar1 = FUN_0024e270(lVar2 + 0xf0);
  }
  else {
    FUN_0021fef8(lVar2 + 0xb8);
    *(undefined2 *)(lVar2 + 0xd8) = 0;
    *(undefined4 *)(lVar2 + 0xe0) = 0;
    *(undefined2 *)(lVar2 + 0xe4) = 0xff00;
    lVar2 = *(long *)(param_1 + 0x78);
    uVar1 = FUN_0024e270(lVar2 + 0xf0);
  }
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x78);
    uVar1 = FUN_0024e270(lVar2 + 0x130);
  }
  else {
    FUN_0021fef8(lVar2 + 0xf8);
    *(undefined2 *)(lVar2 + 0x118) = 0;
    *(undefined4 *)(lVar2 + 0x120) = 0;
    *(undefined2 *)(lVar2 + 0x124) = 0xff00;
    lVar2 = *(long *)(param_1 + 0x78);
    uVar1 = FUN_0024e270(lVar2 + 0x130);
  }
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x78);
    uVar1 = FUN_0024e270(lVar2 + 0x170);
  }
  else {
    FUN_0021fef8(lVar2 + 0x138);
    *(undefined2 *)(lVar2 + 0x158) = 0;
    *(undefined4 *)(lVar2 + 0x160) = 0;
    *(undefined2 *)(lVar2 + 0x164) = 0xff00;
    lVar2 = *(long *)(param_1 + 0x78);
    uVar1 = FUN_0024e270(lVar2 + 0x170);
  }
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x78);
    uVar1 = FUN_0024e270(lVar2 + 0x1b0);
  }
  else {
    FUN_0021fef8(lVar2 + 0x178);
    *(undefined2 *)(lVar2 + 0x198) = 0;
    *(undefined4 *)(lVar2 + 0x1a0) = 0;
    *(undefined2 *)(lVar2 + 0x1a4) = 0xff00;
    lVar2 = *(long *)(param_1 + 0x78);
    uVar1 = FUN_0024e270(lVar2 + 0x1b0);
  }
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x78);
    uVar1 = FUN_0024e270(lVar2 + 0x1f0);
  }
  else {
    FUN_0021fef8(lVar2 + 0x1b8);
    *(undefined2 *)(lVar2 + 0x1d8) = 0;
    *(undefined4 *)(lVar2 + 0x1e0) = 0;
    *(undefined2 *)(lVar2 + 0x1e4) = 0xff00;
    lVar2 = *(long *)(param_1 + 0x78);
    uVar1 = FUN_0024e270(lVar2 + 0x1f0);
  }
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x78);
    uVar1 = FUN_0024e270(lVar2 + 0x230);
  }
  else {
    FUN_0021fef8(lVar2 + 0x1f8);
    *(undefined2 *)(lVar2 + 0x218) = 0;
    *(undefined4 *)(lVar2 + 0x220) = 0;
    *(undefined2 *)(lVar2 + 0x224) = 0xff00;
    lVar2 = *(long *)(param_1 + 0x78);
    uVar1 = FUN_0024e270(lVar2 + 0x230);
  }
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x78);
    uVar1 = FUN_0024e270(lVar2 + 0x270);
  }
  else {
    FUN_0021fef8(lVar2 + 0x238);
    *(undefined2 *)(lVar2 + 600) = 0;
    *(undefined4 *)(lVar2 + 0x260) = 0;
    *(undefined2 *)(lVar2 + 0x264) = 0xff00;
    lVar2 = *(long *)(param_1 + 0x78);
    uVar1 = FUN_0024e270(lVar2 + 0x270);
  }
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0021fef8(lVar2 + 0x278);
  *(undefined2 *)(lVar2 + 0x298) = 0;
  *(undefined4 *)(lVar2 + 0x2a0) = 0;
  *(undefined2 *)(lVar2 + 0x2a4) = 0xff00;
  return;
}

