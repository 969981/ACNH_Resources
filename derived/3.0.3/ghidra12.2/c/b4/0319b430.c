
void FUN_0319b430(undefined8 *param_1,undefined1 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                 undefined4 *param_9,undefined1 param_10,undefined1 param_11,undefined1 param_12,
                 undefined1 param_13,undefined1 param_14,undefined4 param_15,undefined1 param_16,
                 byte param_17)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  void *__dest;
  void *__src;
  undefined8 *puVar14;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  
  *(undefined1 *)(param_1 + 1) = param_2;
  *param_1 = &PTR_LAB_04b07778;
  *(undefined4 *)(param_1 + 4) = 0x20;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff00000000;
  param_1[3] = param_1 + 0x1e;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 0x40;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *(undefined1 *)((long)param_1 + 0x93) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  param_1[0x14] = (undefined1 *)((long)param_1 + 0xac);
  *(undefined4 *)(param_1 + 0x15) = 0x40;
  param_1[8] = puVar1;
  param_1[9] = (undefined1 *)((long)param_1 + 0x54);
  *(undefined1 *)((long)param_1 + 0xeb) = 0;
  param_1[0x1e] = 0;
  puVar14 = param_1 + 2;
  *puVar14 = &PTR_LAB_049173e0;
  param_1[0x13] = puVar1;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  puVar6 = param_1 + 0x26;
  if (param_1 + 0x26 <= (undefined8 *)((long)param_1 + 0xf2U)) {
    puVar6 = (undefined8 *)((long)param_1 + 0xf2U);
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  memset(param_1 + 0x1e,0,((long)puVar6 + (-0xe1 - (long)puVar14) & 0xfffffffffffffffeU) + 2);
  *(undefined2 *)((long)param_1 + 0x144) = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xb;
  *(undefined4 *)(param_1 + 0x2e) = 0x30;
  puVar6 = param_1 + 0x54;
  *(undefined1 *)((long)param_1 + 0x174) = 0;
  param_1[0x2f] = 0xffffffff;
  param_1[0x30] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1e3) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0x40;
  *(undefined1 *)((long)param_1 + 0x23b) = 0;
  *(undefined1 *)((long)param_1 + 0x1fc) = 0;
  param_1[0x26] = &DAT_04a3fbd8;
  param_1[0x27] = (undefined2 *)((long)param_1 + 0x144);
  *(undefined1 *)((long)param_1 + 0x1a4) = 0;
  param_1[0x32] = puVar1;
  param_1[0x33] = (undefined1 *)((long)param_1 + 0x1a4);
  puVar2 = PTR_DAT_04bc0760 + 0x10;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x3d] = puVar1;
  param_1[0x3e] = (long)param_1 + 0x1fc;
  puVar7 = puVar6;
  if (puVar6 <= (undefined8 *)((long)param_1 + 0x242U)) {
    puVar7 = (undefined8 *)((long)param_1 + 0x242U);
  }
  param_1[0x2c] = puVar2;
  param_1[0x2d] = param_1 + 0x48;
  memset(param_1 + 0x48,0,
         ((long)puVar7 + (-0xe1 - (long)(param_1 + 0x2c)) & 0xfffffffffffffffeU) + 2);
  puVar7 = param_1 + 0x70;
  *(undefined1 *)((long)param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0xf0;
  *(undefined1 *)((long)param_1 + 0x2e4) = 0;
  param_1[0x5b] = (undefined1 *)((long)param_1 + 0x2e4);
  *(undefined1 *)((long)param_1 + 0x33c) = 0;
  param_1[0x55] = puVar7;
  param_1[0x57] = 0xffffffff;
  param_1[0x58] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0x40;
  *(undefined1 *)((long)param_1 + 0x323) = 0;
  param_1[0x5a] = puVar1;
  param_1[0x66] = (undefined1 *)((long)param_1 + 0x33c);
  *(undefined4 *)(param_1 + 0x67) = 0x40;
  *(undefined1 *)((long)param_1 + 0x37b) = 0;
  puVar3 = PTR_DAT_04bc0548 + 0x10;
  param_1[0x65] = puVar1;
  param_1[0x54] = puVar3;
  memset(puVar7,0,0x1e0);
  puVar4 = param_1 + 0xac;
  puVar8 = puVar4;
  if (puVar4 <= (undefined8 *)((long)param_1 + 0x382U)) {
    puVar8 = (undefined8 *)((long)param_1 + 0x382U);
  }
  memset(puVar7,0,((long)puVar8 + (-0xe1 - (long)puVar6) & 0xfffffffffffffffeU) + 2);
  puVar7 = param_1 + 0xd4;
  *(undefined1 *)((long)param_1 + 0x574) = 0;
  *(undefined4 *)(param_1 + 0xae) = 0x30;
  *(undefined1 *)((long)param_1 + 0x5a4) = 0;
  param_1[0xb3] = (undefined1 *)((long)param_1 + 0x5a4);
  *(undefined1 *)((long)param_1 + 0x5fc) = 0;
  param_1[0xbe] = (undefined1 *)((long)param_1 + 0x5fc);
  param_1[0xad] = param_1 + 200;
  puVar8 = puVar7;
  if (puVar7 <= (undefined8 *)((long)param_1 + 0x642U)) {
    puVar8 = (undefined8 *)((long)param_1 + 0x642U);
  }
  param_1[0xaf] = 0xffffffff;
  param_1[0xb0] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0xb1) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0x40;
  *(undefined1 *)((long)param_1 + 0x5e3) = 0;
  param_1[0xb2] = puVar1;
  *(undefined4 *)(param_1 + 0xbf) = 0x40;
  *(undefined1 *)((long)param_1 + 0x63b) = 0;
  param_1[0xbd] = puVar1;
  param_1[0xac] = puVar2;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  memset(param_1 + 200,0,((long)puVar8 + (-0xe1 - (long)puVar4) & 0xfffffffffffffffeU) + 2);
  *(undefined4 *)(param_1 + 0xd5) = 0;
  puVar2 = PTR_DAT_04bc0ce0;
  *(undefined1 *)((long)param_1 + 0x6c4) = 0;
  param_1[0xd9] = 0xffffffff;
  puVar8 = param_1 + 0x112;
  param_1[0xda] = 0xffffffff00000000;
  param_1[0xd7] = param_1 + 0xf2;
  *(undefined4 *)(param_1 + 0xd8) = 0x80;
  *(undefined4 *)(param_1 + 0xdb) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xde) = 0x40;
  *(undefined1 *)((long)param_1 + 0x733) = 0;
  param_1[0xdc] = puVar1;
  param_1[0xd4] = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0xe9) = 0x40;
  *(undefined1 *)((long)param_1 + 0x6f4) = 0;
  param_1[0xdd] = (undefined1 *)((long)param_1 + 0x6f4);
  *(undefined1 *)((long)param_1 + 0x78b) = 0;
  param_1[0xe8] = (long)param_1 + 0x74c;
  *(undefined1 *)((long)param_1 + 0x74c) = 0;
  param_1[0xe7] = puVar1;
  puVar2 = PTR_DAT_04bb6b38 + 0x10;
  puVar9 = puVar8;
  if (puVar8 <= (undefined8 *)((long)param_1 + 0x792U)) {
    puVar9 = (undefined8 *)((long)param_1 + 0x792U);
  }
  param_1[0xd6] = puVar2;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  param_1[0x10f] = 0;
  param_1[0x10e] = 0;
  param_1[0x10d] = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  param_1[0x109] = 0;
  param_1[0x108] = 0;
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  param_1[0x105] = 0;
  param_1[0x104] = 0;
  param_1[0x103] = 0;
  param_1[0x102] = 0;
  param_1[0x101] = 0;
  param_1[0x100] = 0;
  param_1[0xff] = 0;
  param_1[0xfe] = 0;
  param_1[0xfd] = 0;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  param_1[0xf2] = 0;
  memset(param_1 + 0xf2,0,
         ((long)puVar9 + (-0xe1 - (long)(param_1 + 0xd6)) & 0xfffffffffffffffeU) + 2);
  param_1[0x118] = puVar1;
  *(undefined4 *)(param_1 + 0x114) = 0x80;
  param_1[0x116] = 0xffffffff00000000;
  *(undefined1 *)((long)param_1 + 0x8d4) = 0;
  param_1[0x119] = (undefined1 *)((long)param_1 + 0x8d4);
  param_1[0x123] = puVar1;
  param_1[0x113] = param_1 + 0x12e;
  *(undefined1 *)((long)param_1 + 0x8a4) = 0;
  *(undefined1 *)((long)param_1 + 0x92c) = 0;
  param_1[0x124] = (undefined1 *)((long)param_1 + 0x92c);
  puVar9 = param_1 + 0x14e;
  if (param_1 + 0x14e <= (undefined8 *)((long)param_1 + 0x972U)) {
    puVar9 = (undefined8 *)((long)param_1 + 0x972U);
  }
  param_1[0x115] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x117) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11a) = 0x40;
  *(undefined1 *)((long)param_1 + 0x913) = 0;
  *(undefined4 *)(param_1 + 0x125) = 0x40;
  *(undefined1 *)((long)param_1 + 0x96b) = 0;
  param_1[0x112] = puVar2;
  param_1[0x14d] = 0;
  param_1[0x14c] = 0;
  param_1[0x14b] = 0;
  param_1[0x14a] = 0;
  param_1[0x149] = 0;
  param_1[0x148] = 0;
  param_1[0x147] = 0;
  param_1[0x146] = 0;
  param_1[0x145] = 0;
  param_1[0x144] = 0;
  param_1[0x143] = 0;
  param_1[0x142] = 0;
  param_1[0x141] = 0;
  param_1[0x140] = 0;
  param_1[0x13f] = 0;
  param_1[0x13e] = 0;
  param_1[0x13d] = 0;
  param_1[0x13c] = 0;
  param_1[0x13b] = 0;
  param_1[0x13a] = 0;
  param_1[0x139] = 0;
  param_1[0x138] = 0;
  param_1[0x137] = 0;
  param_1[0x136] = 0;
  param_1[0x135] = 0;
  param_1[0x134] = 0;
  param_1[0x133] = 0;
  param_1[0x132] = 0;
  param_1[0x131] = 0;
  param_1[0x130] = 0;
  param_1[0x12f] = 0;
  param_1[0x12e] = 0;
  memset(param_1 + 0x12e,0,((long)puVar9 + (-0xe1 - (long)puVar8) & 0xfffffffffffffffeU) + 2);
  uVar10 = *param_9;
  *(undefined1 *)((long)param_1 + 0xa74) = param_8;
  *(undefined1 *)((long)param_1 + 0xa81) = 0;
  param_1[0x151] = 0;
  *(undefined1 *)((long)param_1 + 0xa75) = param_10;
  *(undefined4 *)(param_1 + 0x14e) = uVar10;
  *(undefined1 *)((long)param_1 + 0xa76) = param_11;
  *(undefined1 *)((long)param_1 + 0xa79) = param_14;
  *(undefined1 *)((long)param_1 + 0xa77) = param_12;
  *(undefined4 *)((long)param_1 + 0xa7c) = param_15;
  *(undefined1 *)(param_1 + 0x14f) = param_13;
  uVar13 = (ulong)DAT_05702418;
  *(undefined1 *)(param_1 + 0x150) = param_16;
  *(short *)((long)param_1 + 0xa82) = (short)*(undefined4 *)(&DAT_041841e0 + uVar13 * 4);
  *(uint *)(param_1 + 0x152) = param_17 & 1;
  *(undefined8 *)((long)param_1 + 0xa94) = 0;
  FUN_006f5580(puVar14,param_3);
  if (*(char *)((long)param_1 + 0xa79) != '\0') {
    __dest = (void *)param_1[0x27];
    (**(code **)(*param_4 + 0x18))(param_4);
    __src = (void *)param_4[1];
    if (__dest != __src) {
      (**(code **)(*param_4 + 0x18))(param_4);
      lVar12 = 0;
      do {
        if (*(short *)(param_4[1] + lVar12 * 2) == 0) goto LAB_0319bac0;
        lVar5 = param_4[1] + lVar12 * 2;
        if (*(short *)(lVar5 + 2) == 0) {
          lVar12 = lVar12 + 1;
          goto LAB_0319bac0;
        }
        if (*(short *)(lVar5 + 4) == 0) {
          lVar12 = lVar12 + 2;
          goto LAB_0319bac0;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_0319bac0:
      uVar11 = (uint)lVar12;
      if (*(int *)(param_1 + 0x28) <= (int)(uint)lVar12) {
        uVar11 = *(int *)(param_1 + 0x28) - 1;
      }
      uVar13 = -(ulong)(uVar11 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar11 << 1;
      memcpy(__dest,__src,uVar13);
      *(undefined2 *)((long)__dest + uVar13) = 0;
    }
  }
  FUN_006f5580(param_1 + 0x2c,param_5);
  FUN_006f5580(puVar6,param_6);
  FUN_006f5580(puVar4,param_7);
  local_6e = 0;
  local_6c = 0;
  local_70 = (undefined2)*(undefined4 *)(param_1 + 0x14e);
  FUN_0277d4ac(&local_70);
  puVar1 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar11 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar1 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      local_6e = 0;
      local_6c = 0;
      local_70 = (undefined2)*(undefined4 *)(param_1 + 0x14e);
      FUN_0277d4ac(&local_70);
      FUN_01c0bafc(puVar7,&local_70,PTR_DAT_04bb2df0);
    }
  }
  DAT_05702418 = (ushort)((DAT_05702418 + 1) % 7);
  uVar13 = DAT_05702420 + 1;
  param_1[0x151] = DAT_05702420;
  DAT_05702420 = uVar13;
  *(int *)((long)param_1 + 0xa94) = (int)uVar13 + (int)(uVar13 / 0x11) * -0x11;
  return;
}

