
void FUN_02582400(void)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = DAT_055021a0;
  puVar2 = PTR_DAT_04bb5038;
  if (DAT_055021a0 != 0) {
    lVar4 = DAT_055021a0 + 0x20;
    bVar1 = *PTR_DAT_04bb5038;
    if ((ulong)bVar1 < 8) {
      lVar6 = lVar4 + (ulong)bVar1 * 0x740;
      *(uint *)(lVar6 + 0xbc) = (uint)bVar1;
      *(byte *)(lVar6 + 0xc0) = bVar1;
      *(undefined1 *)(lVar6 + 0xc1) = 1;
      *(uint *)(lVar6 + 0x1cc) = (uint)bVar1;
      *(byte *)(lVar6 + 0x1d0) = bVar1;
      *(undefined1 *)(lVar6 + 0x1d1) = 1;
      *(uint *)(lVar6 + 0x2fc) = (uint)bVar1;
      *(byte *)(lVar6 + 0x300) = bVar1;
      *(undefined1 *)(lVar6 + 0x301) = 1;
      uVar3 = (uint)bVar1;
      *(uint *)(lVar6 + 0x40c) = uVar3;
      *(byte *)(lVar6 + 0x410) = bVar1;
      *(undefined1 *)(lVar6 + 0x411) = 1;
      *(uint *)(lVar6 + 0x4d4) = uVar3;
      *(byte *)(lVar6 + 0x4d8) = bVar1;
      *(undefined1 *)(lVar6 + 0x4d9) = 1;
      *(uint *)(lVar6 + 0x59c) = uVar3;
      *(byte *)(lVar6 + 0x5a0) = bVar1;
      *(undefined4 *)(lVar6 + 0x598) = 0x15;
      *(undefined1 *)(lVar6 + 0x5a1) = 1;
      *(uint *)(lVar6 + 0x664) = uVar3;
      *(byte *)(lVar6 + 0x668) = bVar1;
      *(undefined1 *)(lVar6 + 0x669) = 1;
      *(uint *)(lVar6 + 0x72c) = (uint)bVar1;
      *(byte *)(lVar6 + 0x730) = bVar1;
    }
    else {
      *(undefined4 *)(DAT_055021a0 + 0xdc) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0xe1) = 1;
      *(undefined4 *)(lVar5 + 0x1ec) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x1f1) = 1;
      *(undefined4 *)(lVar5 + 0x31c) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x321) = 1;
      *(undefined4 *)(lVar5 + 0x42c) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x431) = 1;
      *(undefined4 *)(lVar5 + 0x4f4) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x4f9) = 1;
      *(undefined8 *)(lVar5 + 0x5b8) = 0xffffffff00000015;
      *(undefined1 *)(lVar5 + 0x5c1) = 1;
      *(undefined4 *)(lVar5 + 0x684) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x689) = 1;
      *(undefined4 *)(lVar5 + 0x74c) = 0xffffffff;
      lVar6 = lVar4;
    }
    *(undefined1 *)(lVar6 + 0x731) = 1;
    bVar1 = puVar2[1];
    if ((ulong)bVar1 < 8) {
      lVar6 = lVar4 + (ulong)bVar1 * 0x740;
      *(uint *)(lVar6 + 0xbc) = (uint)bVar1;
      *(byte *)(lVar6 + 0xc0) = bVar1;
      *(undefined1 *)(lVar6 + 0xc1) = 1;
      *(uint *)(lVar6 + 0x1cc) = (uint)bVar1;
      *(byte *)(lVar6 + 0x1d0) = bVar1;
      *(undefined1 *)(lVar6 + 0x1d1) = 1;
      *(uint *)(lVar6 + 0x2fc) = (uint)bVar1;
      *(byte *)(lVar6 + 0x300) = bVar1;
      *(undefined1 *)(lVar6 + 0x301) = 1;
      uVar3 = (uint)bVar1;
      *(uint *)(lVar6 + 0x40c) = uVar3;
      *(byte *)(lVar6 + 0x410) = bVar1;
      *(undefined1 *)(lVar6 + 0x411) = 1;
      *(uint *)(lVar6 + 0x4d4) = uVar3;
      *(byte *)(lVar6 + 0x4d8) = bVar1;
      *(undefined1 *)(lVar6 + 0x4d9) = 1;
      *(uint *)(lVar6 + 0x59c) = uVar3;
      *(byte *)(lVar6 + 0x5a0) = bVar1;
      *(undefined4 *)(lVar6 + 0x598) = 0x15;
      *(undefined1 *)(lVar6 + 0x5a1) = 1;
      *(uint *)(lVar6 + 0x664) = uVar3;
      *(byte *)(lVar6 + 0x668) = bVar1;
      *(undefined1 *)(lVar6 + 0x669) = 1;
      *(uint *)(lVar6 + 0x72c) = (uint)bVar1;
      *(byte *)(lVar6 + 0x730) = bVar1;
    }
    else {
      *(undefined4 *)(lVar5 + 0xdc) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0xe1) = 1;
      *(undefined4 *)(lVar5 + 0x1ec) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x1f1) = 1;
      *(undefined4 *)(lVar5 + 0x31c) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x321) = 1;
      *(undefined4 *)(lVar5 + 0x42c) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x431) = 1;
      *(undefined4 *)(lVar5 + 0x4f4) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x4f9) = 1;
      *(undefined8 *)(lVar5 + 0x5b8) = 0xffffffff00000015;
      *(undefined1 *)(lVar5 + 0x5c1) = 1;
      *(undefined4 *)(lVar5 + 0x684) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x689) = 1;
      *(undefined4 *)(lVar5 + 0x74c) = 0xffffffff;
      lVar6 = lVar4;
    }
    bVar1 = puVar2[2];
    *(undefined1 *)(lVar6 + 0x731) = 1;
    if ((ulong)bVar1 < 8) {
      lVar4 = lVar4 + (ulong)bVar1 * 0x740;
      *(uint *)(lVar4 + 0xbc) = (uint)bVar1;
      *(byte *)(lVar4 + 0xc0) = bVar1;
      *(undefined1 *)(lVar4 + 0xc1) = 1;
      *(uint *)(lVar4 + 0x1cc) = (uint)bVar1;
      *(byte *)(lVar4 + 0x1d0) = bVar1;
      *(undefined1 *)(lVar4 + 0x1d1) = 1;
      *(uint *)(lVar4 + 0x2fc) = (uint)bVar1;
      *(byte *)(lVar4 + 0x300) = bVar1;
      *(undefined1 *)(lVar4 + 0x301) = 1;
      uVar3 = (uint)bVar1;
      *(uint *)(lVar4 + 0x40c) = uVar3;
      *(byte *)(lVar4 + 0x410) = bVar1;
      *(undefined1 *)(lVar4 + 0x411) = 1;
      *(uint *)(lVar4 + 0x4d4) = uVar3;
      *(byte *)(lVar4 + 0x4d8) = bVar1;
      *(undefined1 *)(lVar4 + 0x4d9) = 1;
      *(uint *)(lVar4 + 0x59c) = uVar3;
      *(byte *)(lVar4 + 0x5a0) = bVar1;
      *(undefined4 *)(lVar4 + 0x598) = 0x15;
      *(undefined1 *)(lVar4 + 0x5a1) = 1;
      *(uint *)(lVar4 + 0x664) = uVar3;
      *(byte *)(lVar4 + 0x668) = bVar1;
      *(undefined1 *)(lVar4 + 0x669) = 1;
      *(uint *)(lVar4 + 0x72c) = (uint)bVar1;
      *(byte *)(lVar4 + 0x730) = bVar1;
    }
    else {
      *(undefined4 *)(lVar5 + 0xdc) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0xe1) = 1;
      *(undefined4 *)(lVar5 + 0x1ec) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x1f1) = 1;
      *(undefined4 *)(lVar5 + 0x31c) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x321) = 1;
      *(undefined4 *)(lVar5 + 0x42c) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x431) = 1;
      *(undefined4 *)(lVar5 + 0x4f4) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x4f9) = 1;
      *(undefined8 *)(lVar5 + 0x5b8) = 0xffffffff00000015;
      *(undefined1 *)(lVar5 + 0x5c1) = 1;
      *(undefined4 *)(lVar5 + 0x684) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x689) = 1;
      *(undefined4 *)(lVar5 + 0x74c) = 0xffffffff;
    }
    bVar1 = puVar2[3];
    *(undefined1 *)(lVar4 + 0x731) = 1;
    lVar4 = DAT_055021a0;
    lVar5 = DAT_055021a0 + 0x20;
    if ((ulong)bVar1 < 8) {
      lVar6 = lVar5 + (ulong)bVar1 * 0x740;
      *(uint *)(lVar6 + 0xbc) = (uint)bVar1;
      *(byte *)(lVar6 + 0xc0) = bVar1;
      *(undefined1 *)(lVar6 + 0xc1) = 1;
      *(uint *)(lVar6 + 0x1cc) = (uint)bVar1;
      *(byte *)(lVar6 + 0x1d0) = bVar1;
      *(undefined1 *)(lVar6 + 0x1d1) = 1;
      *(uint *)(lVar6 + 0x2fc) = (uint)bVar1;
      *(byte *)(lVar6 + 0x300) = bVar1;
      *(undefined1 *)(lVar6 + 0x301) = 1;
      uVar3 = (uint)bVar1;
      *(uint *)(lVar6 + 0x40c) = uVar3;
      *(byte *)(lVar6 + 0x410) = bVar1;
      *(undefined1 *)(lVar6 + 0x411) = 1;
      *(uint *)(lVar6 + 0x4d4) = uVar3;
      *(byte *)(lVar6 + 0x4d8) = bVar1;
      *(undefined1 *)(lVar6 + 0x4d9) = 1;
      *(uint *)(lVar6 + 0x59c) = uVar3;
      *(byte *)(lVar6 + 0x5a0) = bVar1;
      *(undefined4 *)(lVar6 + 0x598) = 0x15;
      *(undefined1 *)(lVar6 + 0x5a1) = 1;
      *(uint *)(lVar6 + 0x664) = uVar3;
      *(byte *)(lVar6 + 0x668) = bVar1;
      *(undefined1 *)(lVar6 + 0x669) = 1;
      *(uint *)(lVar6 + 0x72c) = (uint)bVar1;
      *(byte *)(lVar6 + 0x730) = bVar1;
    }
    else {
      *(undefined4 *)(DAT_055021a0 + 0xdc) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0xe1) = 1;
      *(undefined4 *)(lVar4 + 0x1ec) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x1f1) = 1;
      *(undefined4 *)(lVar4 + 0x31c) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x321) = 1;
      *(undefined4 *)(lVar4 + 0x42c) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x431) = 1;
      *(undefined4 *)(lVar4 + 0x4f4) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x4f9) = 1;
      *(undefined8 *)(lVar4 + 0x5b8) = 0xffffffff00000015;
      *(undefined1 *)(lVar4 + 0x5c1) = 1;
      *(undefined4 *)(lVar4 + 0x684) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x689) = 1;
      *(undefined4 *)(lVar4 + 0x74c) = 0xffffffff;
      lVar6 = lVar5;
    }
    bVar1 = puVar2[4];
    *(undefined1 *)(lVar6 + 0x731) = 1;
    if ((ulong)bVar1 < 8) {
      lVar6 = lVar5 + (ulong)bVar1 * 0x740;
      *(uint *)(lVar6 + 0xbc) = (uint)bVar1;
      *(byte *)(lVar6 + 0xc0) = bVar1;
      *(undefined1 *)(lVar6 + 0xc1) = 1;
      *(uint *)(lVar6 + 0x1cc) = (uint)bVar1;
      *(byte *)(lVar6 + 0x1d0) = bVar1;
      *(undefined1 *)(lVar6 + 0x1d1) = 1;
      *(uint *)(lVar6 + 0x2fc) = (uint)bVar1;
      *(byte *)(lVar6 + 0x300) = bVar1;
      *(undefined1 *)(lVar6 + 0x301) = 1;
      uVar3 = (uint)bVar1;
      *(uint *)(lVar6 + 0x40c) = uVar3;
      *(byte *)(lVar6 + 0x410) = bVar1;
      *(undefined1 *)(lVar6 + 0x411) = 1;
      *(uint *)(lVar6 + 0x4d4) = uVar3;
      *(byte *)(lVar6 + 0x4d8) = bVar1;
      *(undefined1 *)(lVar6 + 0x4d9) = 1;
      *(uint *)(lVar6 + 0x59c) = uVar3;
      *(byte *)(lVar6 + 0x5a0) = bVar1;
      *(undefined4 *)(lVar6 + 0x598) = 0x15;
      *(undefined1 *)(lVar6 + 0x5a1) = 1;
      *(uint *)(lVar6 + 0x664) = uVar3;
      *(byte *)(lVar6 + 0x668) = bVar1;
      *(undefined1 *)(lVar6 + 0x669) = 1;
      *(uint *)(lVar6 + 0x72c) = (uint)bVar1;
      *(byte *)(lVar6 + 0x730) = bVar1;
    }
    else {
      *(undefined4 *)(lVar4 + 0xdc) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0xe1) = 1;
      *(undefined4 *)(lVar4 + 0x1ec) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x1f1) = 1;
      *(undefined4 *)(lVar4 + 0x31c) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x321) = 1;
      *(undefined4 *)(lVar4 + 0x42c) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x431) = 1;
      *(undefined4 *)(lVar4 + 0x4f4) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x4f9) = 1;
      *(undefined8 *)(lVar4 + 0x5b8) = 0xffffffff00000015;
      *(undefined1 *)(lVar4 + 0x5c1) = 1;
      *(undefined4 *)(lVar4 + 0x684) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x689) = 1;
      *(undefined4 *)(lVar4 + 0x74c) = 0xffffffff;
      lVar6 = lVar5;
    }
    bVar1 = puVar2[5];
    *(undefined1 *)(lVar6 + 0x731) = 1;
    if ((ulong)bVar1 < 8) {
      lVar5 = lVar5 + (ulong)bVar1 * 0x740;
      *(uint *)(lVar5 + 0xbc) = (uint)bVar1;
      *(byte *)(lVar5 + 0xc0) = bVar1;
      *(undefined1 *)(lVar5 + 0xc1) = 1;
      *(uint *)(lVar5 + 0x1cc) = (uint)bVar1;
      *(byte *)(lVar5 + 0x1d0) = bVar1;
      *(undefined1 *)(lVar5 + 0x1d1) = 1;
      *(uint *)(lVar5 + 0x2fc) = (uint)bVar1;
      *(byte *)(lVar5 + 0x300) = bVar1;
      *(undefined1 *)(lVar5 + 0x301) = 1;
      uVar3 = (uint)bVar1;
      *(uint *)(lVar5 + 0x40c) = uVar3;
      *(byte *)(lVar5 + 0x410) = bVar1;
      *(undefined1 *)(lVar5 + 0x411) = 1;
      *(uint *)(lVar5 + 0x4d4) = uVar3;
      *(byte *)(lVar5 + 0x4d8) = bVar1;
      *(undefined1 *)(lVar5 + 0x4d9) = 1;
      *(uint *)(lVar5 + 0x59c) = uVar3;
      *(byte *)(lVar5 + 0x5a0) = bVar1;
      *(undefined4 *)(lVar5 + 0x598) = 0x15;
      *(undefined1 *)(lVar5 + 0x5a1) = 1;
      *(uint *)(lVar5 + 0x664) = uVar3;
      *(byte *)(lVar5 + 0x668) = bVar1;
      *(undefined1 *)(lVar5 + 0x669) = 1;
      *(uint *)(lVar5 + 0x72c) = (uint)bVar1;
      *(byte *)(lVar5 + 0x730) = bVar1;
    }
    else {
      *(undefined4 *)(lVar4 + 0xdc) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0xe1) = 1;
      *(undefined4 *)(lVar4 + 0x1ec) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x1f1) = 1;
      *(undefined4 *)(lVar4 + 0x31c) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x321) = 1;
      *(undefined4 *)(lVar4 + 0x42c) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x431) = 1;
      *(undefined4 *)(lVar4 + 0x4f4) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x4f9) = 1;
      *(undefined8 *)(lVar4 + 0x5b8) = 0xffffffff00000015;
      *(undefined1 *)(lVar4 + 0x5c1) = 1;
      *(undefined4 *)(lVar4 + 0x684) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x689) = 1;
      *(undefined4 *)(lVar4 + 0x74c) = 0xffffffff;
    }
    bVar1 = puVar2[6];
    *(undefined1 *)(lVar5 + 0x731) = 1;
    lVar4 = DAT_055021a0;
    lVar5 = DAT_055021a0 + 0x20;
    if ((ulong)bVar1 < 8) {
      lVar6 = lVar5 + (ulong)bVar1 * 0x740;
      *(uint *)(lVar6 + 0xbc) = (uint)bVar1;
      *(byte *)(lVar6 + 0xc0) = bVar1;
      *(undefined1 *)(lVar6 + 0xc1) = 1;
      *(uint *)(lVar6 + 0x1cc) = (uint)bVar1;
      *(byte *)(lVar6 + 0x1d0) = bVar1;
      *(undefined1 *)(lVar6 + 0x1d1) = 1;
      *(uint *)(lVar6 + 0x2fc) = (uint)bVar1;
      *(byte *)(lVar6 + 0x300) = bVar1;
      *(undefined1 *)(lVar6 + 0x301) = 1;
      uVar3 = (uint)bVar1;
      *(uint *)(lVar6 + 0x40c) = uVar3;
      *(byte *)(lVar6 + 0x410) = bVar1;
      *(undefined1 *)(lVar6 + 0x411) = 1;
      *(uint *)(lVar6 + 0x4d4) = uVar3;
      *(byte *)(lVar6 + 0x4d8) = bVar1;
      *(undefined1 *)(lVar6 + 0x4d9) = 1;
      *(uint *)(lVar6 + 0x59c) = uVar3;
      *(byte *)(lVar6 + 0x5a0) = bVar1;
      *(undefined4 *)(lVar6 + 0x598) = 0x15;
      *(undefined1 *)(lVar6 + 0x5a1) = 1;
      *(uint *)(lVar6 + 0x664) = uVar3;
      *(byte *)(lVar6 + 0x668) = bVar1;
      *(undefined1 *)(lVar6 + 0x669) = 1;
      *(uint *)(lVar6 + 0x72c) = (uint)bVar1;
      *(byte *)(lVar6 + 0x730) = bVar1;
    }
    else {
      *(undefined4 *)(DAT_055021a0 + 0xdc) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0xe1) = 1;
      *(undefined4 *)(lVar4 + 0x1ec) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x1f1) = 1;
      *(undefined4 *)(lVar4 + 0x31c) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x321) = 1;
      *(undefined4 *)(lVar4 + 0x42c) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x431) = 1;
      *(undefined4 *)(lVar4 + 0x4f4) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x4f9) = 1;
      *(undefined8 *)(lVar4 + 0x5b8) = 0xffffffff00000015;
      *(undefined1 *)(lVar4 + 0x5c1) = 1;
      *(undefined4 *)(lVar4 + 0x684) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x689) = 1;
      *(undefined4 *)(lVar4 + 0x74c) = 0xffffffff;
      lVar6 = lVar5;
    }
    bVar1 = puVar2[7];
    *(undefined1 *)(lVar6 + 0x731) = 1;
    if ((ulong)bVar1 < 8) {
      lVar5 = lVar5 + (ulong)bVar1 * 0x740;
      *(uint *)(lVar5 + 0xbc) = (uint)bVar1;
      *(byte *)(lVar5 + 0xc0) = bVar1;
      *(undefined1 *)(lVar5 + 0xc1) = 1;
      *(uint *)(lVar5 + 0x1cc) = (uint)bVar1;
      *(byte *)(lVar5 + 0x1d0) = bVar1;
      *(undefined1 *)(lVar5 + 0x1d1) = 1;
      *(uint *)(lVar5 + 0x2fc) = (uint)bVar1;
      *(byte *)(lVar5 + 0x300) = bVar1;
      *(undefined1 *)(lVar5 + 0x301) = 1;
      uVar3 = (uint)bVar1;
      *(uint *)(lVar5 + 0x40c) = uVar3;
      *(byte *)(lVar5 + 0x410) = bVar1;
      *(undefined1 *)(lVar5 + 0x411) = 1;
      *(uint *)(lVar5 + 0x4d4) = uVar3;
      *(byte *)(lVar5 + 0x4d8) = bVar1;
      *(undefined1 *)(lVar5 + 0x4d9) = 1;
      *(uint *)(lVar5 + 0x59c) = uVar3;
      *(byte *)(lVar5 + 0x5a0) = bVar1;
      *(undefined4 *)(lVar5 + 0x598) = 0x15;
      *(undefined1 *)(lVar5 + 0x5a1) = 1;
      *(uint *)(lVar5 + 0x664) = uVar3;
      *(byte *)(lVar5 + 0x668) = bVar1;
      *(undefined1 *)(lVar5 + 0x669) = 1;
      *(uint *)(lVar5 + 0x72c) = (uint)bVar1;
      *(byte *)(lVar5 + 0x730) = bVar1;
    }
    else {
      *(undefined4 *)(lVar4 + 0xdc) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0xe1) = 1;
      *(undefined4 *)(lVar4 + 0x1ec) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x1f1) = 1;
      *(undefined4 *)(lVar4 + 0x31c) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x321) = 1;
      *(undefined4 *)(lVar4 + 0x42c) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x431) = 1;
      *(undefined4 *)(lVar4 + 0x4f4) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x4f9) = 1;
      *(undefined8 *)(lVar4 + 0x5b8) = 0xffffffff00000015;
      *(undefined1 *)(lVar4 + 0x5c1) = 1;
      *(undefined4 *)(lVar4 + 0x684) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0x689) = 1;
      *(undefined4 *)(lVar4 + 0x74c) = 0xffffffff;
    }
    *(undefined1 *)(lVar5 + 0x731) = 1;
  }
  return;
}

