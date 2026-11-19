
void FUN_03ac1840(long param_1,uint param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  uint uVar18;
  ulong uVar19;
  ulong *puVar20;
  
  if (0 < (int)param_2) {
    uVar19 = (ulong)param_2 * 0x1340 | 8;
    lVar16 = *(long *)PTR_DAT_04bb2698;
    if (lVar16 == 0) {
      puVar14 = malloc(uVar19);
      puVar1 = PTR_DAT_04bd1178;
      puVar10 = PTR_DAT_04bd11b8;
    }
    else {
      plVar13 = param_3;
      if (param_3 == (long *)0x0) {
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar16 + 8);
        if (lVar12 != 0) {
          plVar13 = (long *)(lVar12 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_03ac1e20;
      }
      puVar14 = (ulong *)(**(code **)(*plVar13 + 0x30))(plVar13,uVar19,8);
      puVar1 = PTR_DAT_04bd1178;
      puVar10 = PTR_DAT_04bd11b8;
    }
    PTR_DAT_04bd1178 = puVar1;
    PTR_DAT_04bd11b8 = puVar10;
    if (puVar14 != (ulong *)0x0) {
      puVar20 = puVar14 + 1;
      *puVar14 = (ulong)param_2;
      puVar1 = puVar1 + 0x10;
      puVar2 = PTR_DAT_04bd1198 + 0x10;
      puVar3 = PTR_DAT_04bd11a0 + 0x10;
      puVar14 = puVar20;
      do {
        puVar14[6] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        *(undefined1 *)((long)puVar14 + 0x3c) = 0;
        puVar14[0xe] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        *puVar14 = (ulong)(puVar10 + 0x10);
        puVar14[1] = 0;
        *(undefined4 *)(puVar14 + 7) = 0x10001;
        FUN_0390cee0(puVar14 + 0xf);
        FUN_0390cee0(puVar14 + 0x2b);
        FUN_0390cee0(puVar14 + 0x47);
        FUN_0390cee0(puVar14 + 99);
        puVar14[0x81] = (ulong)&DAT_3f8000003f800000;
        puVar14[0x82] = 0;
        puVar14[0x83] = (ulong)&DAT_3f8000003f800000;
        puVar14[0x80] = (ulong)puVar1;
        puVar14[0x84] = 0;
        puVar14[0x85] = 0;
        puVar14[0x86] = 0;
        puVar14[0x87] = 0;
        puVar14[0x88] = 0;
        puVar14[0x89] = 0;
        puVar14[0x8a] = 0;
        puVar14[0x8b] = 0;
        puVar14[0x8c] = 0;
        puVar14[0x8e] = 0;
        puVar14[0x8f] = 0;
        puVar14[0x90] = 0;
        puVar14[0x91] = 0;
        puVar14[0x92] = 0;
        puVar14[0x93] = 0;
        puVar14[0x94] = 0;
        puVar14[0x95] = 0;
        puVar14[0x96] = 0;
        puVar14[0x97] = 0;
        *(undefined4 *)(puVar14 + 0x98) = 0xffffffff;
        puVar14[0x99] = 0;
        puVar14[0x9a] = 0;
        puVar14[0x9b] = 0;
        puVar14[0x9c] = 0;
        puVar14[0x9d] = 0;
        puVar14[0x9e] = 0;
        puVar14[0x9f] = 0;
        puVar14[0xa0] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar14 + 0xa1) = 0x10000;
        *(undefined4 *)(puVar14 + 0xa4) = 0xff;
        *(undefined4 *)((long)puVar14 + 0x524) = 0;
        puVar14[0x8d] = (ulong)puVar2;
        puVar14[0xa5] = 0x80000000000;
        puVar14[0xa6] = 0;
        puVar14[0xa7] = 0;
        puVar14[0xa8] = 0;
        FUN_0390cee0(puVar14 + 0xa9);
        puVar14[199] = (ulong)&DAT_3f8000003f800000;
        puVar14[200] = 0;
        puVar14[0xc9] = (ulong)&DAT_3f8000003f800000;
        puVar14[0xc6] = (ulong)puVar1;
        puVar14[0xca] = 0;
        puVar14[0xcb] = 0;
        puVar14[0xcc] = 0;
        puVar14[0xcd] = 0;
        puVar14[0xce] = 0;
        puVar14[0xcf] = 0;
        puVar14[0xd0] = 0;
        puVar14[0xd1] = 0;
        puVar14[0xd2] = 0;
        puVar14[0xd4] = 0;
        puVar14[0xd5] = 0;
        puVar14[0xd6] = 0;
        puVar14[0xd7] = 0;
        puVar14[0xd8] = 0;
        puVar14[0xd9] = 0;
        puVar14[0xda] = 0;
        puVar14[0xdb] = 0;
        puVar14[0xdc] = 0;
        puVar14[0xdd] = 0;
        *(undefined4 *)(puVar14 + 0xde) = 0xffffffff;
        puVar14[0xdf] = 0;
        puVar14[0xe0] = 0;
        puVar14[0xe1] = 0;
        puVar14[0xe2] = 0;
        puVar14[0xe3] = 0;
        puVar14[0xe4] = 0;
        puVar14[0xe5] = 0;
        puVar14[0xe6] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar14 + 0xe7) = 0x10000;
        *(undefined4 *)(puVar14 + 0xea) = 0xff;
        *(undefined4 *)((long)puVar14 + 0x754) = 0;
        puVar14[0xd3] = (ulong)puVar2;
        puVar14[0xeb] = 0x80000000000;
        puVar14[0xec] = 0;
        puVar14[0xed] = 0;
        puVar14[0xee] = 0;
        puVar14[0xf9] = 0;
        puVar14[0xf8] = 0;
        puVar14[0xf7] = 0;
        puVar14[0xf6] = 0;
        puVar14[0xf5] = 0;
        puVar14[0xf4] = 0;
        puVar14[0xf3] = 0;
        puVar14[0xf2] = 0;
        puVar14[0xf1] = 0;
        puVar14[0xf0] = 0;
        *(undefined4 *)(puVar14 + 0xfa) = 0xffffffff;
        puVar14[0x101] = 0;
        puVar14[0x100] = 0;
        puVar14[0xff] = 0;
        puVar14[0xfe] = 0;
        puVar14[0xfd] = 0;
        puVar14[0xfc] = 0;
        puVar14[0xfb] = 0;
        puVar14[0x102] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar14 + 0x103) = 0x10000;
        *(undefined4 *)(puVar14 + 0x106) = 0xff;
        *(undefined4 *)((long)puVar14 + 0x834) = 0;
        puVar14[0xef] = (ulong)puVar3;
        puVar14[0x107] = 0x80000000000;
        puVar14[0x10a] = 0;
        puVar14[0x109] = 0;
        puVar14[0x108] = 0;
        (**(code **)PTR_DAT_04bcf220)(puVar14 + 0x104);
        FUN_0390cee0(puVar14 + 0x10b);
        FUN_0390cee0(puVar14 + 0x127);
        puVar14[0x146] = (ulong)&DAT_3f8000003f800000;
        puVar14[0x147] = 0;
        puVar14[0x148] = (ulong)&DAT_3f8000003f800000;
        puVar14[0x145] = (ulong)puVar1;
        puVar14[0x149] = 0;
        puVar14[0x14a] = 0;
        puVar14[0x14b] = 0;
        puVar14[0x14c] = 0;
        puVar14[0x14d] = 0;
        puVar14[0x14e] = 0;
        puVar14[0x14f] = 0;
        puVar14[0x150] = 0;
        puVar14[0x151] = 0;
        puVar14[0x153] = (ulong)&DAT_3f8000003f800000;
        puVar14[0x154] = 0;
        puVar14[0x155] = (ulong)&DAT_3f8000003f800000;
        puVar14[0x152] = (ulong)puVar1;
        puVar14[0x15e] = 0;
        puVar14[0x15d] = 0;
        puVar14[0x15c] = 0;
        puVar14[0x15b] = 0;
        puVar14[0x15a] = 0;
        puVar14[0x159] = 0;
        puVar14[0x158] = 0;
        puVar14[0x157] = 0;
        puVar14[0x156] = 0;
        puVar14[0x160] = 0;
        puVar14[0x161] = 0;
        puVar14[0x162] = 0;
        puVar14[0x163] = 0;
        puVar14[0x164] = 0;
        puVar14[0x165] = 0;
        puVar14[0x166] = 0;
        puVar14[0x167] = 0;
        puVar14[0x168] = 0;
        puVar14[0x169] = 0;
        *(undefined4 *)(puVar14 + 0x16a) = 0xffffffff;
        puVar14[0x171] = 0;
        puVar14[0x170] = 0;
        puVar14[0x16f] = 0;
        puVar14[0x16e] = 0;
        puVar14[0x16d] = 0;
        puVar14[0x16c] = 0;
        puVar14[0x16b] = 0;
        puVar14[0x172] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar14 + 0x173) = 0x10000;
        *(undefined4 *)(puVar14 + 0x176) = 0xff;
        *(undefined4 *)((long)puVar14 + 0xbb4) = 0;
        puVar14[0x15f] = (ulong)puVar2;
        puVar14[0x177] = 0x80000000000;
        puVar14[0x17a] = 0;
        puVar14[0x179] = 0;
        puVar14[0x178] = 0;
        puVar14[0x17c] = 0;
        puVar14[0x17d] = 0;
        puVar14[0x17e] = 0;
        puVar14[0x17f] = 0;
        puVar14[0x180] = 0;
        puVar14[0x181] = 0;
        puVar14[0x182] = 0;
        puVar14[0x183] = 0;
        puVar14[0x184] = 0;
        puVar14[0x185] = 0;
        *(undefined4 *)(puVar14 + 0x186) = 0xffffffff;
        puVar14[0x18d] = 0;
        puVar14[0x18c] = 0;
        puVar14[0x18b] = 0;
        puVar14[0x18a] = 0;
        puVar14[0x189] = 0;
        puVar14[0x188] = 0;
        puVar14[0x187] = 0;
        puVar14[0x18e] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar14 + 399) = 0x10000;
        *(undefined4 *)(puVar14 + 0x192) = 0xff;
        *(undefined4 *)((long)puVar14 + 0xc94) = 0;
        puVar14[0x17b] = (ulong)puVar2;
        puVar14[0x193] = 0x80000000000;
        puVar14[0x196] = 0;
        puVar14[0x195] = 0;
        puVar14[0x194] = 0;
        puVar14[0x198] = (ulong)&DAT_3f8000003f800000;
        puVar14[0x199] = 0;
        *(undefined4 *)(puVar14 + 0x19a) = 0x3f800000;
        *(undefined4 *)((long)puVar14 + 0xcd4) = 0x3f800000;
        puVar14[0x197] = (ulong)puVar1;
        puVar14[0x1a3] = 0;
        puVar14[0x1a2] = 0;
        puVar14[0x1a1] = 0;
        puVar14[0x1a0] = 0;
        puVar14[0x19f] = 0;
        puVar14[0x19e] = 0;
        puVar14[0x19d] = 0;
        puVar14[0x19c] = 0;
        puVar14[0x19b] = 0;
        puVar14[0x1ae] = 0;
        puVar14[0x1ad] = 0;
        puVar14[0x1ac] = 0;
        puVar14[0x1ab] = 0;
        puVar14[0x1aa] = 0;
        puVar14[0x1a9] = 0;
        puVar14[0x1a8] = 0;
        puVar14[0x1a7] = 0;
        puVar14[0x1a6] = 0;
        puVar14[0x1a5] = 0;
        *(undefined4 *)(puVar14 + 0x1af) = 0xffffffff;
        puVar14[0x1b6] = 0;
        puVar14[0x1b5] = 0;
        puVar14[0x1b4] = 0;
        puVar14[0x1b3] = 0;
        puVar14[0x1b2] = 0;
        puVar14[0x1b1] = 0;
        puVar14[0x1b0] = 0;
        puVar14[0x1b7] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar14 + 0x1b8) = 0x10000;
        *(undefined4 *)(puVar14 + 0x1bb) = 0xff;
        *(undefined4 *)((long)puVar14 + 0xddc) = 0;
        puVar14[0x1a4] = (ulong)puVar2;
        puVar14[0x1bc] = 0x80000000000;
        puVar14[0x1bf] = 0;
        puVar14[0x1be] = 0;
        puVar14[0x1bd] = 0;
        puVar14[0x1ca] = 0;
        puVar14[0x1c9] = 0;
        puVar14[0x1c8] = 0;
        puVar14[0x1c7] = 0;
        puVar14[0x1c6] = 0;
        puVar14[0x1c5] = 0;
        puVar14[0x1c4] = 0;
        puVar14[0x1c3] = 0;
        puVar14[0x1c2] = 0;
        puVar14[0x1c1] = 0;
        *(undefined4 *)(puVar14 + 0x1cb) = 0xffffffff;
        puVar14[0x1d2] = 0;
        puVar14[0x1d1] = 0;
        puVar14[0x1d0] = 0;
        puVar14[0x1cf] = 0;
        puVar14[0x1ce] = 0;
        puVar14[0x1cd] = 0;
        puVar14[0x1cc] = 0;
        puVar14[0x1d3] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar14 + 0x1d4) = 0x10000;
        *(undefined4 *)(puVar14 + 0x1d7) = 0xff;
        *(undefined4 *)((long)puVar14 + 0xebc) = 0;
        puVar14[0x1c0] = (ulong)puVar3;
        puVar14[0x1d8] = 0x80000000000;
        puVar14[0x1db] = 0;
        puVar14[0x1da] = 0;
        puVar14[0x1d9] = 0;
        (**(code **)PTR_DAT_04bcf220)(puVar14 + 0x1d5);
        FUN_0390cee0(puVar14 + 0x1e0);
        puVar14 = puVar14 + 0x268;
      } while (puVar14 != puVar20 + (ulong)param_2 * 0x268);
      *(uint *)(param_1 + 0x1d0) = param_2;
      *(ulong **)(param_1 + 0x1d8) = puVar20;
      goto joined_r0x03ac1e2c;
    }
  }
LAB_03ac1e20:
  param_2 = *(uint *)(param_1 + 0x1d0);
  puVar20 = *(ulong **)(param_1 + 0x1d8);
joined_r0x03ac1e2c:
  if (param_2 != 0) {
    uVar18 = 0;
    do {
      puVar14 = puVar20 + (long)(int)uVar18 * 0x268;
      if (uVar18 == 0) {
        FUN_0390d714(puVar14,0x1b,param_3);
        piVar17 = (int *)(*(long *)puVar14[1] + (ulong)*(ushort *)((long)puVar14[1] + 10) * 0xc);
        *(undefined1 *)(piVar17 + 2) = 6;
        *piVar17 = 0xc;
        uVar11 = (**(code **)(*puVar14 + 0x18))(puVar14,6);
        *(ushort *)((long)piVar17 + 6) = (ushort)uVar11 & 0xff;
        uVar11 = ((uVar11 & 0xff) * 4 + (int)puVar14[6]) - 1 & (uVar11 & 0xff) * -4;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 6;
        *piVar17 = 4;
        uVar11 = (**(code **)(*puVar14 + 0x18))(puVar14,6);
        *(ushort *)((long)piVar17 + 6) = (ushort)uVar11 & 0xff;
        uVar11 = ((uVar11 & 0xff) * 4 + (int)puVar14[6]) - 1 & (uVar11 & 0xff) * -4;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 6;
        *piVar17 = 0x12;
        uVar11 = (**(code **)(*puVar14 + 0x18))(puVar14,6);
        *(ushort *)((long)piVar17 + 6) = (ushort)uVar11 & 0xff;
        uVar11 = ((uVar11 & 0xff) * 4 + (int)puVar14[6]) - 1 & (uVar11 & 0xff) * -4;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 6;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 4;
        uVar11 = (int)puVar14[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 6;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 4;
        uVar11 = (int)puVar14[6] + 0xfU & 0xfffffff0;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 4;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 2;
        uVar11 = (int)puVar14[6] + 7U & 0xfffffff8;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 4;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 2;
        uVar11 = (int)puVar14[6] + 7U & 0xfffffff8;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 4;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 2;
        uVar11 = (int)puVar14[6] + 7U & 0xfffffff8;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 4;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 2;
        uVar11 = (int)puVar14[6] + 7U & 0xfffffff8;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 4;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 2;
        uVar11 = (int)puVar14[6] + 7U & 0xfffffff8;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 3;
        *piVar17 = 3;
        uVar11 = (**(code **)(*puVar14 + 0x18))(puVar14,3);
        *(ushort *)((long)piVar17 + 6) = (ushort)uVar11 & 0xff;
        uVar11 = ((uVar11 & 0xff) * 4 + (int)puVar14[6]) - 1 & (uVar11 & 0xff) * -4;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 5;
        *piVar17 = 2;
        uVar11 = (**(code **)(*puVar14 + 0x18))(puVar14);
        *(ushort *)((long)piVar17 + 6) = (ushort)uVar11 & 0xff;
        uVar11 = ((uVar11 & 0xff) * 4 + (int)puVar14[6]) - 1 & (uVar11 & 0xff) * -4;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 3;
        *piVar17 = 2;
        uVar11 = (**(code **)(*puVar14 + 0x18))(puVar14,3);
        *(ushort *)((long)piVar17 + 6) = (ushort)uVar11 & 0xff;
        uVar11 = ((uVar11 & 0xff) * 4 + (int)puVar14[6]) - 1 & (uVar11 & 0xff) * -4;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 3;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 1;
        uVar11 = (int)puVar14[6] + 3U & 0xfffffffc;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 3;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 1;
        uVar11 = (int)puVar14[6] + 3U & 0xfffffffc;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 3;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 1;
        uVar11 = (int)puVar14[6] + 3U & 0xfffffffc;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 3;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 1;
        uVar11 = (int)puVar14[6] + 3U & 0xfffffffc;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 3;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 1;
        uVar11 = (int)puVar14[6] + 3U & 0xfffffffc;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 3;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 1;
        uVar11 = (int)puVar14[6] + 3U & 0xfffffffc;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 3;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 1;
        uVar11 = (int)puVar14[6] + 3U & 0xfffffffc;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 3;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 1;
        uVar11 = (int)puVar14[6] + 3U & 0xfffffffc;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 3;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 1;
        uVar11 = (int)puVar14[6] + 3U & 0xfffffffc;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 3;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 1;
        uVar11 = (int)puVar14[6] + 3U & 0xfffffffc;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 3;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 1;
        uVar11 = (int)puVar14[6] + 3U & 0xfffffffc;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 3;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 1;
        uVar11 = (int)puVar14[6] + 3U & 0xfffffffc;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 3;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 1;
        uVar11 = (int)puVar14[6] + 3U & 0xfffffffc;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        plVar13 = (long *)puVar14[1];
        uVar7 = *(ushort *)((long)plVar13 + 10);
        if (uVar7 == *(ushort *)(plVar13 + 1)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
          uVar7 = *(ushort *)((long)plVar13 + 10);
        }
        piVar17 = (int *)(*plVar13 + (ulong)uVar7 * 0xc);
        *(undefined1 *)(piVar17 + 2) = 4;
        *piVar17 = 1;
        *(undefined2 *)((long)piVar17 + 6) = 2;
        uVar11 = (int)puVar14[6] + 7U & 0xfffffff8;
        *(uint *)(puVar14 + 6) = uVar11;
        *(short *)(piVar17 + 1) = (short)uVar11;
        *(uint *)(puVar14 + 6) =
             (int)puVar14[6] + (uint)*(ushort *)((long)piVar17 + 6) * *piVar17 * 4;
        *(short *)(puVar14[1] + 10) = *(short *)(puVar14[1] + 10) + 1;
        if (*(short *)(puVar14[1] + 10) == *(short *)(puVar14[1] + 8)) {
          *(uint *)(puVar14 + 6) = (int)puVar14[6] + 0x1fU & 0xffffffe0;
        }
      }
      else {
        lVar16 = *(long *)(param_1 + 0x1d8);
        puVar14[1] = *(ulong *)(lVar16 + 8);
        *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(lVar16 + 0x30);
        *(byte *)((long)puVar14 + 0x3c) = *(byte *)((long)puVar14 + 0x3c) & 0xfe;
      }
      FUN_0390d990(puVar14,param_3,2,1);
      *(undefined2 *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x13c) = 0;
      *(undefined1 *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x13e) = 0;
      puVar4 = (uint *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x14c);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar9) {
          *puVar4 = *puVar4 & 0xfffffffb | 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      *(undefined2 *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x21f) = 0x505;
      *(undefined1 *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x221) = 5;
      puVar4 = (uint *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x22c);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar9) {
          *puVar4 = *puVar4 & 0xfffffffd | 2;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      puVar20[(long)(int)uVar18 * 0x268 + 0x40] = (ulong)&DAT_3f8000003f800000;
      puVar20[(long)(int)uVar18 * 0x268 + 0x41] = (ulong)&DAT_3f8000003f800000;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar9) {
          *puVar4 = *puVar4 & 0xffffffdf | 0x20;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      uVar7 = *(ushort *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x226);
      puVar14 = puVar20 + (long)(int)uVar18 * 0x268 + 0x46;
      puVar5 = (ushort *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x226);
      *(byte *)(puVar20 + (long)(int)uVar18 * 0x268 + 0x46) =
           (byte)puVar20[(long)(int)uVar18 * 0x268 + 0x46] | 4;
      *(ushort *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x226) = uVar7 | 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar9) {
          *puVar4 = *puVar4 & 0xffffffef | 0x10;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      uVar7 = *puVar5;
      *(undefined1 *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x223) = 4;
      *(byte *)puVar14 = (byte)*puVar14 | 4;
      *puVar5 = uVar7 | 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar9) {
          *puVar4 = *puVar4 & 0xffffffef | 0x10;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      *(int *)(puVar20 + (long)(int)uVar18 * 0x268 + 0x47) =
           (int)puVar20[(long)(int)uVar18 * 0x268 + 0x2b];
      *(undefined4 *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x23c) =
           *(undefined4 *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x15c);
      uVar19 = puVar20[(long)(int)uVar18 * 0x268 + 0x2d];
      puVar20[(long)(int)uVar18 * 0x268 + 0x48] = puVar20[(long)(int)uVar18 * 0x268 + 0x2c];
      uVar15 = puVar20[(long)(int)uVar18 * 0x268 + 0x2e];
      puVar20[(long)(int)uVar18 * 0x268 + 0x49] = uVar19;
      *(int *)(puVar20 + (long)(int)uVar18 * 0x268 + 0x4a) = (int)uVar15;
      *(undefined4 *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x254) =
           *(undefined4 *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x174);
      uVar19 = puVar20[(long)(int)uVar18 * 0x268 + 0x30];
      puVar20[(long)(int)uVar18 * 0x268 + 0x4b] = puVar20[(long)(int)uVar18 * 0x268 + 0x2f];
      puVar20[(long)(int)uVar18 * 0x268 + 0x4c] = uVar19;
      *(undefined8 *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x27f) =
           *(undefined8 *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x19f);
      uVar19 = puVar20[(long)(int)uVar18 * 0x268 + 0x32];
      puVar20[(long)(int)uVar18 * 0x268 + 0x4f] = puVar20[(long)(int)uVar18 * 0x268 + 0x33];
      uVar15 = puVar20[(long)(int)uVar18 * 0x268 + 0x31];
      puVar20[(long)(int)uVar18 * 0x268 + 0x4e] = uVar19;
      puVar20[(long)(int)uVar18 * 0x268 + 0x4d] = uVar15;
      FUN_038fd1e0(puVar20 + (long)(int)uVar18 * 0x268 + 0x51);
      FUN_038fd2f0(puVar20 + (long)(int)uVar18 * 0x268 + 0x51,
                   puVar20 + (long)(int)uVar18 * 0x268 + 0x35);
      puVar20[(long)(int)uVar18 * 0x268 + 0x59] = puVar20[(long)(int)uVar18 * 0x268 + 0x3d];
      *(int *)(puVar20 + (long)(int)uVar18 * 0x268 + 0x5a) =
           (int)puVar20[(long)(int)uVar18 * 0x268 + 0x3e];
      puVar20[(long)(int)uVar18 * 0x268 + 0x5e] = puVar20[(long)(int)uVar18 * 0x268 + 0x42];
      puVar20[(long)(int)uVar18 * 0x268 + 0x5f] = puVar20[(long)(int)uVar18 * 0x268 + 0x43];
      puVar20[(long)(int)uVar18 * 0x268 + 0x60] = puVar20[(long)(int)uVar18 * 0x268 + 0x44];
      *(int *)(puVar20 + (long)(int)uVar18 * 0x268 + 0x61) =
           (int)puVar20[(long)(int)uVar18 * 0x268 + 0x45];
      uVar19 = puVar20[(long)(int)uVar18 * 0x268 + 0x40];
      puVar20[(long)(int)uVar18 * 0x268 + 0x5b] = puVar20[(long)(int)uVar18 * 0x268 + 0x3f];
      uVar15 = puVar20[(long)(int)uVar18 * 0x268 + 0x41];
      puVar20[(long)(int)uVar18 * 0x268 + 0x5c] = uVar19;
      puVar20[(long)(int)uVar18 * 0x268 + 0x5d] = uVar15;
      puVar6 = (undefined4 *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x30c);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar9) {
          *puVar6 = 0x7fffffff;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      *(byte *)(puVar20 + (long)(int)uVar18 * 0x268 + 0x62) = (byte)*puVar14;
      FUN_038fd92c((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x312,
                   (long)puVar20 + (long)(int)uVar18 * 0x1340 + 0x232);
      uVar19 = *(ulong *)(*(long *)PTR_DAT_04bb31c8 + 0xd0);
      *(undefined4 *)((long)puVar20 + (long)(int)uVar18 * 0x1340 + 0xfe4) = 0xffffffff;
      puVar20[(long)(int)uVar18 * 0x268 + 0x7f] = 0;
      puVar20[(long)(int)uVar18 * 0x268 + 0xc5] = 0;
      *(undefined2 *)(puVar20 + (long)(int)uVar18 * 0x268 + 0x1fc) = 0;
      puVar20[(long)(int)uVar18 * 0x268 + 0x1dd] = 0;
      puVar20[(long)(int)uVar18 * 0x268 + 0x1de] = 0;
      puVar20[(long)(int)uVar18 * 0x268 + 0x1df] = 0;
      puVar20[(long)(int)uVar18 * 0x268 + 0x143] = 0;
      puVar20[(long)(int)uVar18 * 0x268 + 0x144] = 0;
      puVar20[(long)(int)uVar18 * 0x268 + 0x1fe] = 0;
      puVar20[(long)(int)uVar18 * 0x268 + 0x1ff] = 0;
      *(undefined4 *)(puVar20 + (long)(int)uVar18 * 0x268 + 0x20d) = 0x3f800000;
      puVar20[(long)(int)uVar18 * 0x268 + 0x1dc] = uVar19;
      uVar18 = uVar18 + 1;
    } while (param_2 != uVar18);
  }
  return;
}

