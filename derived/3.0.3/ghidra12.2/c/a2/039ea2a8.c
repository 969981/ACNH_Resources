
void FUN_039ea2a8(uint *param_1,undefined8 param_2,long param_3,uint param_4,uint param_5,
                 undefined1 param_6,uint param_7,byte param_8,uint param_9,uint param_10,
                 undefined8 param_11)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  ushort uVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  
  *param_1 = param_7;
  param_1[1] = param_4;
  *(long *)(param_1 + 4) = param_3;
  *(undefined8 *)(param_1 + 6) = param_2;
  param_1[2] = param_5;
  param_1[3] = param_10;
  uVar11 = *(undefined1 *)(param_3 + 8);
  *(undefined1 *)((long)param_1 + 0x21) = param_6;
  *(byte *)((long)param_1 + 0x22) = param_8;
  *(undefined1 *)((long)param_1 + 0x23) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 0x2f) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x52] = 0;
  param_1[0x68] = 0xffffffff;
  param_1[99] = 0xffffffff;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined1 *)(param_1 + 8) = uVar11;
  *(undefined2 *)((long)param_1 + 0x33) = 0xffff;
  *(undefined4 *)((long)param_1 + 0x36) = 0xffff0000;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x53] = 0xffffffff;
  param_1[0x54] = 0xffffffff;
  param_1[0x55] = 0xffffffff;
  param_1[0x56] = 0xffffffff;
  param_1[0x57] = 0xffffffff;
  param_1[0x58] = 0xffffffff;
  param_1[0x59] = 0xffffffff;
  param_1[0x5a] = 0xffffffff;
  param_1[0x5b] = 0xffffffff;
  param_1[0x5c] = 0xffffffff;
  param_1[0x5d] = 0xffffffff;
  param_1[0x5e] = 0xffffffff;
  param_1[0x5f] = 0xffffffff;
  param_1[0x60] = 0xffffffff;
  param_1[0x61] = 0xffffffff;
  param_1[0x62] = 0xffffffff;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  FUN_038e4cec(param_1 + 0x78);
  uVar2 = *param_1;
  *(undefined1 *)(param_1 + 0x91) = 4;
  param_1[0x98] = 0;
  param_1[0x99] = 0xffffffff;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  bVar7 = (uVar2 & 0x200) == 0;
  *(undefined8 *)(param_1 + 0x9a) = param_11;
  *(undefined1 *)((long)param_1 + 0x35) = 0;
  *(undefined2 *)(param_1 + 0x78) = 0x101;
  *(undefined2 *)(param_1 + 0x83) = 0x101;
  if ((uVar2 & 0x2000) == 0 && (param_8 & 0x30) == 0) {
    if ((uVar2 >> 0xb & 1) == 0) {
      param_1[0x82] = 0x6060505;
      uVar11 = 5;
      uVar12 = 6;
    }
    else {
      param_1[0x82] = 0x1010909;
      uVar11 = 9;
      uVar12 = 1;
    }
  }
  else {
    param_1[0x82] = 0x64646161;
    uVar11 = 0x61;
    uVar12 = 100;
    *(ushort *)((long)param_1 + 0x36) = *(ushort *)((long)param_1 + 0x36) | 0x40;
  }
  *(undefined2 *)((long)param_1 + 0x212) = 0x101;
  *(undefined2 *)(param_1 + 0x86) = 0x101;
  *(undefined2 *)((long)param_1 + 0x21e) = 0x101;
  *(undefined2 *)(param_1 + 0x89) = 0x101;
  *(undefined2 *)((long)param_1 + 0x22a) = 0x101;
  *(undefined2 *)(param_1 + 0x8c) = 0x101;
  *(undefined2 *)((long)param_1 + 0x236) = 0x101;
  *(undefined1 *)((long)param_1 + 0x246) = 5;
  bVar3 = *(byte *)((long)param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x84) = uVar12;
  *(undefined1 *)((long)param_1 + 0x211) = uVar12;
  *(undefined1 *)((long)param_1 + 0x216) = uVar12;
  *(undefined1 *)((long)param_1 + 0x217) = uVar12;
  *(undefined1 *)(param_1 + 0x87) = uVar12;
  *(undefined1 *)((long)param_1 + 0x21d) = uVar12;
  *(undefined1 *)((long)param_1 + 0x222) = uVar12;
  *(undefined1 *)((long)param_1 + 0x223) = uVar12;
  *(undefined1 *)(param_1 + 0x8a) = uVar12;
  *(undefined1 *)((long)param_1 + 0x229) = uVar12;
  *(undefined1 *)((long)param_1 + 0x22e) = uVar12;
  *(undefined1 *)((long)param_1 + 0x22f) = uVar12;
  *(undefined1 *)(param_1 + 0x8d) = uVar12;
  *(undefined1 *)((long)param_1 + 0x235) = uVar12;
  *(undefined1 *)((long)param_1 + 0x20e) = uVar11;
  *(undefined1 *)((long)param_1 + 0x20f) = uVar11;
  *(undefined1 *)(param_1 + 0x85) = uVar11;
  *(undefined1 *)((long)param_1 + 0x215) = uVar11;
  *(undefined1 *)((long)param_1 + 0x21a) = uVar11;
  *(undefined1 *)((long)param_1 + 0x21b) = uVar11;
  *(undefined1 *)(param_1 + 0x88) = uVar11;
  *(undefined1 *)((long)param_1 + 0x221) = uVar11;
  *(undefined1 *)((long)param_1 + 0x226) = uVar11;
  *(undefined1 *)((long)param_1 + 0x227) = uVar11;
  *(undefined1 *)(param_1 + 0x8b) = uVar11;
  *(undefined1 *)((long)param_1 + 0x22d) = uVar11;
  *(undefined1 *)((long)param_1 + 0x232) = uVar11;
  *(undefined1 *)((long)param_1 + 0x233) = uVar11;
  param_1[0x79] = 0;
  *(undefined1 *)((long)param_1 + 0x1e2) = 0;
  param_1[0x7e] = 0x3f000000;
  if (1 < bVar3 - 1) {
    if (bVar3 == 4) {
      bVar5 = false;
      goto LAB_039ea4c0;
    }
    if (bVar3 != 9) {
      bVar5 = true;
      goto LAB_039ea4c0;
    }
  }
  bVar5 = false;
  bVar7 = false;
LAB_039ea4c0:
  uVar8 = 7;
  if (!bVar7 && (uVar2 & 0x4000) == 0) {
    uVar8 = 0;
  }
  uVar10 = 8;
  if (!bVar5 && (uVar2 & 0x8000) == 0) {
    uVar10 = 0;
  }
  param_1[0xf] = ((uVar8 | uVar10) * 0x11000001 | (uVar8 | uVar10) * 0x111110) & param_9;
  uVar4 = (*(ushort *)((long)param_1 + 0x36) & 0xffc0 |
          *(ushort *)((long)param_1 + 0x36) & 0x1f | (ushort)((uVar2 >> 0x14 & 1) << 5)) ^ 0x20;
  lVar9 = *(long *)(param_1 + 4);
  *(ushort *)((long)param_1 + 0x36) = uVar4;
  uVar1 = *(byte *)(lVar9 + 10) & 1;
  *(ushort *)((long)param_1 + 0x36) = uVar4 & 0xfffe | uVar1;
  uVar6 = (ushort)(((*(byte *)(lVar9 + 10) & 8) >> 3) << 10);
  *(ushort *)((long)param_1 + 0x36) = uVar4 & 0xf800 | uVar4 & 0x3fe | uVar1 | uVar6;
  *(ushort *)((long)param_1 + 0x36) =
       uVar4 & 0xf800 | uVar4 & 0x2fe | uVar1 | uVar6 | (*(byte *)(lVar9 + 10) & 4) << 6;
  memcpy(param_1 + 0x12,(void *)(lVar9 + 0x20),0xe8);
  *(undefined1 *)((long)param_1 + 0x32) = 0xff;
  return;
}

