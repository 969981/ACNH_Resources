
void FUN_01c5e470(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 1);
  bVar1 = *(byte *)((long)param_1 + 0xc);
  while (uVar2 = uVar2 + 1, uVar2 < 0x20) {
    if ((uint)bVar1 == (*(uint *)*param_1 >> (ulong)(uVar2 & 0x1f) & 1)) {
      *(uint *)(param_1 + 1) = uVar2;
      return;
    }
  }
  uVar2 = *(uint *)*param_1;
  if ((bVar1 != 0) == (int)uVar2 < 0) {
    *(undefined4 *)(param_1 + 1) = 0x20;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x40000000) >> 0x1e) {
    *(undefined4 *)(param_1 + 1) = 0x1f;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x20000000) >> 0x1d) {
    *(undefined4 *)(param_1 + 1) = 0x1e;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x10000000) >> 0x1c) {
    *(undefined4 *)(param_1 + 1) = 0x1d;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x8000000) >> 0x1b) {
    *(undefined4 *)(param_1 + 1) = 0x1c;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x4000000) >> 0x1a) {
    *(undefined4 *)(param_1 + 1) = 0x1b;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x2000000) >> 0x19) {
    *(undefined4 *)(param_1 + 1) = 0x1a;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x1000000) >> 0x18) {
    *(undefined4 *)(param_1 + 1) = 0x19;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x800000) >> 0x17) {
    *(undefined4 *)(param_1 + 1) = 0x18;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x400000) >> 0x16) {
    *(undefined4 *)(param_1 + 1) = 0x17;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x200000) >> 0x15) {
    *(undefined4 *)(param_1 + 1) = 0x16;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x100000) >> 0x14) {
    *(undefined4 *)(param_1 + 1) = 0x15;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x80000) >> 0x13) {
    *(undefined4 *)(param_1 + 1) = 0x14;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x40000) >> 0x12) {
    *(undefined4 *)(param_1 + 1) = 0x13;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x20000) >> 0x11) {
    *(undefined4 *)(param_1 + 1) = 0x12;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x10000) >> 0x10) {
    *(undefined4 *)(param_1 + 1) = 0x11;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x8000) >> 0xf) {
    *(undefined4 *)(param_1 + 1) = 0x10;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x4000) >> 0xe) {
    *(undefined4 *)(param_1 + 1) = 0xf;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x2000) >> 0xd) {
    *(undefined4 *)(param_1 + 1) = 0xe;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x1000) >> 0xc) {
    *(undefined4 *)(param_1 + 1) = 0xd;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x800) >> 0xb) {
    *(undefined4 *)(param_1 + 1) = 0xc;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x400) >> 10) {
    *(undefined4 *)(param_1 + 1) = 0xb;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x200) >> 9) {
    *(undefined4 *)(param_1 + 1) = 10;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x100) >> 8) {
    *(undefined4 *)(param_1 + 1) = 9;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x80) >> 7) {
    *(undefined4 *)(param_1 + 1) = 8;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x40) >> 6) {
    *(undefined4 *)(param_1 + 1) = 7;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x20) >> 5) {
    *(undefined4 *)(param_1 + 1) = 6;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 0x10) >> 4) {
    *(undefined4 *)(param_1 + 1) = 5;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 8) >> 3) {
    *(undefined4 *)(param_1 + 1) = 4;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 4) >> 2) {
    *(undefined4 *)(param_1 + 1) = 3;
    return;
  }
  if ((uint)(bVar1 != 0) == (uVar2 & 2) >> 1) {
    *(undefined4 *)(param_1 + 1) = 2;
    return;
  }
  *(uint *)(param_1 + 1) = (uint)((bVar1 != 0) != ((uVar2 & 1) == 0));
  return;
}

