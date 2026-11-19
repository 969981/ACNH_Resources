
void FUN_03974c20(long param_1,undefined4 *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  ushort uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  char cVar11;
  ushort uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  ulong *puVar18;
  void *pvVar19;
  long lVar20;
  long *plVar21;
  bool bVar22;
  byte bVar23;
  ushort uVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  undefined4 uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong *puVar35;
  ulong uVar36;
  uint uVar37;
  long lVar38;
  undefined8 uVar39;
  long *plVar40;
  ulong uVar41;
  int *piVar42;
  ulong uVar43;
  ulong uVar44;
  uint uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar37 = param_2[3];
  if ((int)uVar37 < 1) {
LAB_039750c4:
    uVar37 = *(uint *)(param_1 + 0x18);
    puVar35 = *(ulong **)(param_1 + 0x20);
  }
  else {
    lVar38 = *(long *)PTR_DAT_04bb2698;
    uVar41 = (ulong)uVar37 * 0x970 | 8;
    if (lVar38 == 0) {
      puVar18 = malloc(uVar41);
      puVar13 = (ulong *)PTR_DAT_04bb2f80;
    }
    else {
      plVar17 = param_3;
      if (param_3 == (long *)0x0) {
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar38 + 8);
        if (lVar16 != 0) {
          plVar17 = (long *)(lVar16 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) goto LAB_039750c4;
      }
      puVar18 = (ulong *)(**(code **)(*plVar17 + 0x30))(plVar17,uVar41,8);
      puVar13 = (ulong *)PTR_DAT_04bb2f80;
    }
    PTR_DAT_04bb2f80 = (undefined *)puVar13;
    if (puVar18 == (ulong *)0x0) goto LAB_039750c4;
    puVar35 = puVar18 + 1;
    *puVar18 = (ulong)uVar37;
    uVar36 = puVar13[2];
    uVar31 = puVar13[3];
    uVar26 = puVar13[4];
    uVar32 = puVar13[5];
    uVar41 = *puVar13;
    uVar7 = puVar13[1];
    uVar33 = *(ulong *)(PTR_DAT_04bbd558 + 0x20);
    uVar27 = *(ulong *)(PTR_DAT_04bbd558 + 0x28);
    uVar43 = *(ulong *)PTR_DAT_04bbd558;
    uVar8 = *(ulong *)(PTR_DAT_04bbd558 + 8);
    uVar44 = *(ulong *)(PTR_DAT_04bbd558 + 0x10);
    uVar9 = *(ulong *)(PTR_DAT_04bbd558 + 0x18);
    uVar34 = *(ulong *)(PTR_DAT_04bbd558 + 0x30);
    uVar28 = *(ulong *)(PTR_DAT_04bbd558 + 0x38);
    puVar1 = PTR_DAT_04bd11b8 + 0x10;
    puVar2 = PTR_DAT_04bd1178 + 0x10;
    puVar3 = PTR_DAT_04bd1198 + 0x10;
    puVar4 = PTR_DAT_04bd11a0 + 0x10;
    uVar30 = *(undefined4 *)(PTR_DAT_04bb4bc8 + 8);
    uVar39 = *(undefined8 *)PTR_DAT_04bb4bc8;
    puVar18 = puVar35;
    do {
      puVar18[0xc] = uVar43;
      puVar18[0xd] = uVar8;
      puVar18[0xe] = uVar44;
      puVar18[0xf] = uVar9;
      puVar18[2] = uVar36;
      puVar18[3] = uVar31;
      *(undefined4 *)(puVar18 + 0x20) = 0;
      *(undefined4 *)((long)puVar18 + 0x1ac) = uVar30;
      *(undefined4 *)(puVar18 + 0x36) = 0;
      *(undefined4 *)((long)puVar18 + 0x1bc) = uVar30;
      *(undefined4 *)(puVar18 + 0x38) = 0;
      *(undefined4 *)((long)puVar18 + 0x1cc) = uVar30;
      *(undefined4 *)(puVar18 + 0x3a) = 0;
      *(undefined4 *)((long)puVar18 + 0x1dc) = uVar30;
      *(undefined4 *)(puVar18 + 0x3c) = 0;
      *(undefined4 *)((long)puVar18 + 0x1ec) = uVar30;
      *(undefined4 *)(puVar18 + 0x3e) = 0;
      *(undefined4 *)((long)puVar18 + 0x1fc) = uVar30;
      *(undefined1 *)((long)puVar18 + 0x234) = 0;
      puVar18[0x4d] = 0;
      puVar18[0x4c] = 0;
      puVar18[0x4b] = 0;
      puVar18[0x4a] = 0;
      puVar18[0x49] = 0;
      puVar18[0x48] = 0;
      *(undefined1 *)((long)puVar18 + 0x274) = 0;
      puVar18[0x55] = 0;
      puVar18[8] = uVar36;
      puVar18[9] = uVar31;
      puVar18[0x10] = uVar33;
      puVar18[0x11] = uVar27;
      puVar18[0x18] = uVar33;
      puVar18[0x19] = uVar27;
      puVar18[0x1c] = 0x447a00003f800000;
      puVar18[0x42] = 0xff7fffffff7fffff;
      puVar18[0x45] = 0xff7fffffff7fffff;
      puVar18[0x1d] = 0x3fe38e393f490fdb;
      puVar18[0x1e] = (ulong)&DAT_3f8000003f800000;
      puVar18[0x1f] = 0x3f800000;
      *(undefined8 *)((long)puVar18 + 0x1a4) = uVar39;
      *(undefined8 *)((long)puVar18 + 0x1b4) = uVar39;
      *(undefined8 *)((long)puVar18 + 0x1c4) = uVar39;
      *(undefined8 *)((long)puVar18 + 0x1d4) = uVar39;
      *(undefined8 *)((long)puVar18 + 0x1e4) = uVar39;
      *(undefined8 *)((long)puVar18 + 500) = uVar39;
      puVar18[0x40] = 0x7f7fffff00000000;
      puVar18[0x41] = 0x7f7fffff7f7fffff;
      puVar18[0x44] = 0x7f7fffff7f7fffff;
      *(undefined4 *)(puVar18 + 0x46) = 0xff7fffff;
      puVar18[0x47] = (ulong)puVar1;
      *(undefined4 *)(puVar18 + 0x4e) = 0x10001;
      puVar18[4] = uVar26;
      puVar18[5] = uVar32;
      puVar18[10] = uVar26;
      puVar18[0xb] = uVar32;
      puVar18[0x12] = uVar34;
      puVar18[0x13] = uVar28;
      puVar18[0x1a] = uVar34;
      puVar18[0x1b] = uVar28;
      puVar18[0x43] = 0x7f7fffffff7fffff;
      *puVar18 = uVar41;
      puVar18[1] = uVar7;
      puVar18[6] = uVar41;
      puVar18[7] = uVar7;
      puVar18[0x14] = uVar43;
      puVar18[0x15] = uVar8;
      puVar18[0x16] = uVar44;
      puVar18[0x17] = uVar9;
      FUN_0390cee0(puVar18 + 0x56);
      FUN_0390cee0(puVar18 + 0x72);
      FUN_0390cee0(puVar18 + 0x8e);
      puVar18[0xac] = (ulong)&DAT_3f8000003f800000;
      puVar18[0xad] = 0;
      puVar18[0xae] = (ulong)&DAT_3f8000003f800000;
      puVar18[0xaf] = 0;
      puVar18[0xab] = (ulong)puVar2;
      puVar18[0xb0] = 0;
      puVar18[0xb1] = 0;
      puVar18[0xb2] = 0;
      puVar18[0xb3] = 0;
      puVar18[0xb4] = 0;
      puVar18[0xb5] = 0;
      puVar18[0xb6] = 0;
      puVar18[0xb7] = 0;
      puVar18[0xb9] = 0;
      puVar18[0xba] = 0;
      puVar18[0xbb] = 0;
      puVar18[0xbc] = 0;
      puVar18[0xbd] = 0;
      puVar18[0xbe] = 0;
      puVar18[0xbf] = 0;
      puVar18[0xc0] = 0;
      puVar18[0xc1] = 0;
      puVar18[0xc2] = 0;
      *(undefined4 *)(puVar18 + 0xc3) = 0xffffffff;
      puVar18[0xca] = 0;
      puVar18[0xc9] = 0;
      puVar18[200] = 0;
      puVar18[199] = 0;
      puVar18[0xc6] = 0;
      puVar18[0xc5] = 0;
      puVar18[0xc4] = 0;
      puVar18[0xcb] = (ulong)"agl::TextureData";
      *(undefined4 *)(puVar18 + 0xcc) = 0x10000;
      *(undefined4 *)(puVar18 + 0xcf) = 0xff;
      *(undefined4 *)((long)puVar18 + 0x67c) = 0;
      puVar18[0xb8] = (ulong)puVar3;
      puVar18[0xd0] = 0x80000000000;
      puVar18[0xd1] = 0;
      puVar18[0xd2] = 0;
      puVar18[0xd3] = 0;
      puVar18[0xde] = 0;
      puVar18[0xdd] = 0;
      puVar18[0xdc] = 0;
      puVar18[0xdb] = 0;
      puVar18[0xda] = 0;
      puVar18[0xd9] = 0;
      puVar18[0xd8] = 0;
      puVar18[0xd7] = 0;
      puVar18[0xd6] = 0;
      puVar18[0xd5] = 0;
      *(undefined4 *)(puVar18 + 0xdf) = 0xffffffff;
      puVar18[0xe6] = 0;
      puVar18[0xe5] = 0;
      puVar18[0xe4] = 0;
      puVar18[0xe3] = 0;
      puVar18[0xe2] = 0;
      puVar18[0xe1] = 0;
      puVar18[0xe0] = 0;
      puVar18[0xe7] = (ulong)"agl::TextureData";
      *(undefined4 *)(puVar18 + 0xe8) = 0x10000;
      *(undefined4 *)(puVar18 + 0xeb) = 0xff;
      *(undefined4 *)((long)puVar18 + 0x75c) = 0;
      puVar18[0xd4] = (ulong)puVar3;
      puVar18[0xec] = 0x80000000000;
      puVar18[0xed] = 0;
      puVar18[0xee] = 0;
      puVar18[0xef] = 0;
      puVar18[0xfa] = 0;
      puVar18[0xf9] = 0;
      puVar18[0xf8] = 0;
      puVar18[0xf7] = 0;
      puVar18[0xf6] = 0;
      puVar18[0xf5] = 0;
      puVar18[0xf4] = 0;
      puVar18[0xf3] = 0;
      puVar18[0xf2] = 0;
      puVar18[0xf1] = 0;
      *(undefined4 *)(puVar18 + 0xfb) = 0xffffffff;
      puVar18[0x102] = 0;
      puVar18[0x101] = 0;
      puVar18[0x100] = 0;
      puVar18[0xff] = 0;
      puVar18[0xfe] = 0;
      puVar18[0xfd] = 0;
      puVar18[0xfc] = 0;
      puVar18[0x103] = (ulong)"agl::TextureData";
      *(undefined4 *)(puVar18 + 0x104) = 0x10000;
      *(undefined4 *)(puVar18 + 0x107) = 0xff;
      *(undefined4 *)((long)puVar18 + 0x83c) = 0;
      puVar18[0xf0] = (ulong)puVar4;
      puVar18[0x108] = 0x80000000000;
      puVar18[0x109] = 0;
      puVar18[0x10a] = 0;
      puVar18[0x10b] = 0;
      (**(code **)PTR_DAT_04bcf220)(puVar18 + 0x105);
      FUN_038e4cec(puVar18 + 0x10c);
      puVar13 = puVar18 + 0x12e;
      *(undefined8 *)((long)puVar18 + 0x8d4) = 0;
      puVar18 = puVar13;
    } while (puVar13 != puVar35 + (ulong)uVar37 * 0x12e);
    *(uint *)(param_1 + 0x18) = uVar37;
    *(ulong **)(param_1 + 0x20) = puVar35;
  }
  if (uVar37 != 0) {
    uVar45 = 0;
    do {
      puVar18 = puVar35 + (long)(int)uVar45 * 0x12e + 0x47;
      puVar35[(long)(int)uVar45 * 0x12e + 0xaa] = 0;
      *(undefined2 *)((long)puVar35 + (long)(int)uVar45 * 0x970 + 0x8dc) = 0;
      *(undefined8 *)((long)puVar35 + (long)(int)uVar45 * 0x970 + 0x8d4) = 0;
      if (uVar45 == 0) {
        FUN_0390d714(puVar18,4,param_3);
        piVar42 = (int *)(*(long *)puVar35[0x48] +
                         (ulong)*(ushort *)((long)puVar35[0x48] + 10) * 0xc);
        *(undefined1 *)(piVar42 + 2) = 6;
        *piVar42 = 4;
        uVar15 = (**(code **)(*puVar18 + 0x18))(puVar18,6);
        *(ushort *)((long)piVar42 + 6) = (ushort)uVar15 & 0xff;
        uVar15 = ((uVar15 & 0xff) * 4 + (int)puVar35[0x4d]) - 1 & (uVar15 & 0xff) * -4;
        *(uint *)(puVar35 + 0x4d) = uVar15;
        *(short *)(piVar42 + 1) = (short)uVar15;
        *(uint *)(puVar35 + 0x4d) =
             (int)puVar35[0x4d] + (uint)*(ushort *)((long)piVar42 + 6) * *piVar42 * 4;
        *(short *)(puVar35[0x48] + 10) = *(short *)(puVar35[0x48] + 10) + 1;
        plVar17 = (long *)puVar35[0x48];
        uVar6 = *(ushort *)((long)plVar17 + 10);
        if (uVar6 == *(ushort *)(plVar17 + 1)) {
          *(uint *)(puVar35 + 0x4d) = (int)puVar35[0x4d] + 0x1fU & 0xffffffe0;
          uVar6 = *(ushort *)((long)plVar17 + 10);
        }
        piVar42 = (int *)(*plVar17 + (ulong)uVar6 * 0xc);
        *(undefined1 *)(piVar42 + 2) = 6;
        *piVar42 = 3;
        uVar15 = (**(code **)(*puVar18 + 0x18))(puVar18,6);
        *(ushort *)((long)piVar42 + 6) = (ushort)uVar15 & 0xff;
        uVar15 = ((uVar15 & 0xff) * 4 + (int)puVar35[0x4d]) - 1 & (uVar15 & 0xff) * -4;
        *(uint *)(puVar35 + 0x4d) = uVar15;
        *(short *)(piVar42 + 1) = (short)uVar15;
        *(uint *)(puVar35 + 0x4d) =
             (int)puVar35[0x4d] + (uint)*(ushort *)((long)piVar42 + 6) * *piVar42 * 4;
        *(short *)(puVar35[0x48] + 10) = *(short *)(puVar35[0x48] + 10) + 1;
        plVar17 = (long *)puVar35[0x48];
        uVar6 = *(ushort *)((long)plVar17 + 10);
        if (uVar6 == *(ushort *)(plVar17 + 1)) {
          *(uint *)(puVar35 + 0x4d) = (int)puVar35[0x4d] + 0x1fU & 0xffffffe0;
          uVar6 = *(ushort *)((long)plVar17 + 10);
        }
        piVar42 = (int *)(*plVar17 + (ulong)uVar6 * 0xc);
        *(undefined1 *)(piVar42 + 2) = 6;
        *piVar42 = 3;
        uVar15 = (**(code **)(*puVar18 + 0x18))(puVar18,6);
        *(ushort *)((long)piVar42 + 6) = (ushort)uVar15 & 0xff;
        uVar15 = ((uVar15 & 0xff) * 4 + (int)puVar35[0x4d]) - 1 & (uVar15 & 0xff) * -4;
        *(uint *)(puVar35 + 0x4d) = uVar15;
        *(short *)(piVar42 + 1) = (short)uVar15;
        *(uint *)(puVar35 + 0x4d) =
             (int)puVar35[0x4d] + (uint)*(ushort *)((long)piVar42 + 6) * *piVar42 * 4;
        *(short *)(puVar35[0x48] + 10) = *(short *)(puVar35[0x48] + 10) + 1;
        plVar17 = (long *)puVar35[0x48];
        uVar6 = *(ushort *)((long)plVar17 + 10);
        if (uVar6 == *(ushort *)(plVar17 + 1)) {
          *(uint *)(puVar35 + 0x4d) = (int)puVar35[0x4d] + 0x1fU & 0xffffffe0;
          uVar6 = *(ushort *)((long)plVar17 + 10);
        }
        piVar42 = (int *)(*plVar17 + (ulong)uVar6 * 0xc);
        *(undefined1 *)(piVar42 + 2) = 6;
        *piVar42 = 3;
        uVar15 = (**(code **)(*puVar18 + 0x18))(puVar18,6);
        *(ushort *)((long)piVar42 + 6) = (ushort)uVar15 & 0xff;
        uVar15 = ((uVar15 & 0xff) * 4 + (int)puVar35[0x4d]) - 1 & (uVar15 & 0xff) * -4;
        *(uint *)(puVar35 + 0x4d) = uVar15;
        *(short *)(piVar42 + 1) = (short)uVar15;
        *(uint *)(puVar35 + 0x4d) =
             (int)puVar35[0x4d] + (uint)*(ushort *)((long)piVar42 + 6) * *piVar42 * 4;
        *(short *)(puVar35[0x48] + 10) = *(short *)(puVar35[0x48] + 10) + 1;
        if (*(short *)(puVar35[0x48] + 10) == *(short *)(puVar35[0x48] + 8)) {
          *(uint *)(puVar35 + 0x4d) = (int)puVar35[0x4d] + 0x1fU & 0xffffffe0;
        }
      }
      else {
        lVar38 = *(long *)(param_1 + 0x20);
        puVar35[(long)(int)uVar45 * 0x12e + 0x48] = *(ulong *)(lVar38 + 0x240);
        *(undefined4 *)(puVar35 + (long)(int)uVar45 * 0x12e + 0x4d) =
             *(undefined4 *)(lVar38 + 0x268);
        *(byte *)((long)puVar35 + (long)(int)uVar45 * 0x970 + 0x274) =
             *(byte *)((long)puVar35 + (long)(int)uVar45 * 0x970 + 0x274) & 0xfe;
      }
      FUN_0390d990(puVar18,param_3,2,1);
      uVar15 = *(uint *)((long)puVar35 + (long)(int)uVar45 * 0x970 + 0x864);
      *(undefined4 *)((long)puVar35 + (long)(int)uVar45 * 0x970 + 0x87c) = 0xff;
      *(undefined2 *)(puVar35 + (long)(int)uVar45 * 0x12e + 0x10c) = 0;
      *(undefined1 *)((long)puVar35 + (long)(int)uVar45 * 0x970 + 0x8c4) = 8;
      *(uint *)((long)puVar35 + (long)(int)uVar45 * 0x970 + 0x864) = uVar15 & 0xfffffffc;
      uVar45 = uVar45 + 1;
    } while (uVar37 != uVar45);
  }
  puVar1 = PTR_DAT_04bb2698;
  lVar38 = *(long *)PTR_DAT_04bb2698;
  if (lVar38 == 0) {
    plVar17 = malloc(0x240);
  }
  else {
    plVar17 = param_3;
    if (param_3 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar17 = (long *)(lVar38 + 8);
      if (lVar16 != 0) {
        plVar17 = (long *)(lVar16 + 0xa8);
      }
      plVar17 = (long *)*plVar17;
      if (plVar17 == (long *)0x0) {
        plVar17 = (long *)0x0;
        goto LAB_0397547c;
      }
    }
    plVar17 = (long *)(**(code **)(*plVar17 + 0x30))(plVar17,0x240,8);
  }
LAB_0397547c:
  memset(plVar17 + 1,0,0x238);
  *plVar17 = (long)(PTR_DAT_04bd1470 + 0x10);
  FUN_0390e190(plVar17 + 7);
  lVar38 = *(long *)puVar1;
  plVar17[0x43] = 0;
  *(long **)(param_1 + 0x28) = plVar17;
  if (lVar38 == 0) {
    plVar17 = malloc(0x240);
  }
  else {
    plVar17 = param_3;
    if (param_3 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar17 = (long *)(lVar38 + 8);
      if (lVar16 != 0) {
        plVar17 = (long *)(lVar16 + 0xa8);
      }
      plVar17 = (long *)*plVar17;
      if (plVar17 == (long *)0x0) {
        plVar17 = (long *)0x0;
        goto LAB_03975510;
      }
    }
    plVar17 = (long *)(**(code **)(*plVar17 + 0x30))(plVar17,0x240,8);
  }
LAB_03975510:
  memset(plVar17 + 1,0,0x238);
  *plVar17 = (long)(PTR_DAT_04bd1478 + 0x10);
  FUN_0390e190(plVar17 + 7);
  lVar38 = *(long *)puVar1;
  plVar17[0x43] = 0;
  *(long **)(param_1 + 0x30) = plVar17;
  if (lVar38 == 0) {
    plVar17 = malloc(0x240);
  }
  else {
    plVar17 = param_3;
    if (param_3 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar17 = (long *)(lVar38 + 8);
      if (lVar16 != 0) {
        plVar17 = (long *)(lVar16 + 0xa8);
      }
      plVar17 = (long *)*plVar17;
      if (plVar17 == (long *)0x0) {
        plVar17 = (long *)0x0;
        goto LAB_039755a0;
      }
    }
    plVar17 = (long *)(**(code **)(*plVar17 + 0x30))(plVar17,0x240,8);
  }
LAB_039755a0:
  memset(plVar17 + 1,0,0x238);
  *plVar17 = (long)(PTR_DAT_04bd1480 + 0x10);
  FUN_0390e190(plVar17 + 7);
  plVar17[0x43] = 0;
  *(long **)(param_1 + 0x38) = plVar17;
  (**(code **)(**(long **)(param_1 + 0x28) + 0x10))
            (*(long **)(param_1 + 0x28),param_1,*param_2,param_2[3],param_3);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x10))
            (*(long **)(param_1 + 0x30),param_1,param_2[1],param_2[3],param_3);
  (**(code **)(**(long **)(param_1 + 0x38) + 0x10))
            (*(long **)(param_1 + 0x38),param_1,param_2[2],param_2[3],param_3);
  uVar37 = param_2[4];
  if (0 < (int)uVar37) {
    lVar38 = *(long *)puVar1;
    if (lVar38 == 0) {
      pvVar19 = malloc((ulong)uVar37 << 3);
      if (pvVar19 == (void *)0x0) goto LAB_039756a8;
LAB_03975690:
      *(uint *)(param_1 + 0x40) = uVar37;
      *(void **)(param_1 + 0x48) = pvVar19;
    }
    else {
      plVar17 = param_3;
      if (param_3 == (long *)0x0) {
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar38 + 8);
        if (lVar16 != 0) {
          plVar17 = (long *)(lVar16 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) goto LAB_039756a8;
      }
      pvVar19 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,(ulong)uVar37 << 3,8);
      if (pvVar19 != (void *)0x0) goto LAB_03975690;
LAB_039756a8:
      uVar37 = *(uint *)(param_1 + 0x40);
      if (uVar37 == 0) goto LAB_039756d8;
      pvVar19 = *(void **)(param_1 + 0x48);
    }
    uVar41 = 0;
    do {
      *(undefined8 *)((long)pvVar19 + (-(uVar41 >> 0x1f) & 0xfffffff800000000 | uVar41 << 3)) = 0;
      uVar43 = uVar41 + 1;
      uVar41 = uVar43 & 0xffffffff;
    } while (uVar37 != (uint)uVar43);
  }
LAB_039756d8:
  *(undefined1 *)(param_1 + 0x10) = 0xff;
  iVar25 = *(int *)(param_1 + 0x18);
  if (iVar25 != 0) {
    iVar29 = 0;
    bVar23 = *(byte *)(param_1 + 8) >> 3 & 1;
    lVar38 = *(long *)(param_1 + 0x20);
    bVar10 = *(byte *)(param_1 + 8) >> 4 & 1;
    do {
      lVar16 = lVar38 + (long)iVar29 * 0x970;
      *(byte *)(lVar16 + 0x454) = bVar23;
      *(byte *)(lVar16 + 0x455) = bVar23;
      *(undefined1 *)(lVar16 + 0x456) = 0;
      puVar5 = (uint *)(lVar16 + 0x464);
      do {
        cVar11 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar22) {
          *puVar5 = *puVar5 & 0xfffffffb | 4;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      lVar16 = lVar38 + (long)iVar29 * 0x970;
      *(byte *)(lVar16 + 0x534) = bVar10;
      *(byte *)(lVar16 + 0x535) = bVar10;
      *(undefined1 *)(lVar16 + 0x536) = 0;
      puVar5 = (uint *)(lVar16 + 0x544);
      do {
        cVar11 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar22) {
          *puVar5 = *puVar5 & 0xfffffffb | 4;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      iVar29 = iVar29 + 1;
    } while (iVar25 != iVar29);
  }
  uVar14 = DAT_041b3dcc;
  uVar39 = DAT_041b3dc4;
  *(undefined1 *)(param_1 + 0x638) = 7;
  *(undefined1 *)(param_1 + 0x650) = 7;
  *(undefined8 *)(param_1 + 0x758) = 0x42f00000;
  lVar38 = param_1 + 0x488;
  *(undefined8 *)(param_1 + 0x760) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x7b8) = 1;
  *(undefined1 *)(param_1 + 0x63b) = 6;
  *(undefined8 *)(param_1 + 0x658) = 0x700000006;
  *(undefined8 *)(param_1 + 0x660) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x668) = uVar39;
  *(undefined8 *)(param_1 + 0x670) = uVar14;
  *(undefined1 *)(param_1 + 0x653) = 6;
  *(undefined8 *)(param_1 + 0x6d8) = 0x700000006;
  *(undefined8 *)(param_1 + 0x6e0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x6f0) = uVar14;
  *(undefined8 *)(param_1 + 0x6e8) = uVar39;
  *(undefined4 *)(param_1 + 0x460) = 0x100;
  FUN_0390a734(lVar38,1,0x19,0x100,1,1,1,0,0,1);
  iVar25 = *(int *)(param_1 + 0x4c8);
  uVar30 = *(undefined4 *)(param_1 + 0x4c4);
  lVar16 = *(long *)puVar1;
  if (lVar16 == 0) {
    plVar17 = malloc(0x38);
  }
  else {
    plVar17 = param_3;
    if (param_3 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar17 = (long *)(lVar16 + 8);
      if (lVar20 != 0) {
        plVar17 = (long *)(lVar20 + 0xa8);
      }
      plVar17 = (long *)*plVar17;
      if (plVar17 == (long *)0x0) {
        plVar17 = (long *)0x0;
        goto LAB_03975880;
      }
    }
    plVar17 = (long *)(**(code **)(*plVar17 + 0x30))(plVar17,0x38,8);
  }
LAB_03975880:
  plVar17[6] = 0;
  plVar40 = plVar17 + 1;
  *plVar40 = 0;
  *(undefined2 *)((long)plVar17 + 0x2a) = 0;
  bVar23 = 0;
  plVar17[4] = 0;
  *(undefined1 *)(plVar17 + 5) = 0;
  plVar17[2] = 0;
  plVar17[3] = 0;
  *plVar17 = (long)(PTR_DAT_04bb2cc8 + 0x10);
  plVar21 = param_3;
  if (param_3 == (long *)0x0) {
    lVar20 = *(long *)puVar1;
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar21 = (long *)(lVar20 + 8);
    if (lVar16 != 0) {
      plVar21 = (long *)(lVar16 + 0xa8);
    }
    plVar21 = (long *)*plVar21;
    bVar23 = *(byte *)(plVar17 + 5) & 0xfe;
  }
  plVar17[6] = 0;
  *(byte *)(plVar17 + 5) = bVar23;
  *(undefined2 *)((long)plVar17 + 0x2a) = 0;
  *plVar40 = 0;
  plVar17[2] = 0;
  plVar17[3] = 0;
  plVar17[4] = 0;
  if (iVar25 == 0) {
    iVar25 = 0;
    *(undefined2 *)((long)plVar17 + 0x2a) = 8;
    lVar16 = 0;
LAB_03975960:
    uVar30 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar17,plVar21,iVar25,uVar30,8);
    lVar16 = plVar17[3];
    *(undefined2 *)((long)plVar17 + 0x2a) = 8;
    iVar25 = 0;
    if (plVar17[4] != 0) {
      iVar25 = (int)*plVar40 - *(int *)(plVar17[4] + 0x10);
    }
    if (lVar16 == 0) goto LAB_03975960;
    uVar30 = *(undefined4 *)(lVar16 + 0x104);
  }
  lVar20 = *(long *)puVar1;
  *(int *)(param_1 + 0x468) = iVar25;
  *(undefined4 *)(param_1 + 0x46c) = uVar30;
  *(long *)(param_1 + 0x470) = lVar16;
  *(long **)(param_1 + 0x478) = plVar17;
  if (lVar20 == 0) {
    pvVar19 = malloc(0x400);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_3 = (long *)(lVar20 + 8);
      if (lVar16 != 0) {
        param_3 = (long *)(lVar16 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) {
        pvVar19 = (void *)0x0;
        goto LAB_039759d4;
      }
    }
    pvVar19 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x400,0x10);
  }
LAB_039759d4:
  uVar41 = (ulong)*(uint *)(param_1 + 0x460);
  *(void **)(param_1 + 0x608) = pvVar19;
  puVar1 = PTR_PTR_04bb4f80;
  if (*(uint *)(param_1 + 0x460) != 0) {
    uVar43 = 0;
    uVar44 = 1;
    do {
      fVar47 = (float)(uVar43 & 0xffffffff) / (float)uVar41;
      fVar46 = (float)(**(code **)(puVar1 + (ulong)*(byte *)(param_1 + 0x638) * 8))
                                (fVar47,param_1 + 0x638,*(undefined8 *)(param_1 + 0x630));
      fVar48 = *(float *)(param_1 + 0x75c) + *(float *)(param_1 + 0x758) * fVar46;
      fVar46 = (float)(**(code **)(puVar1 + (ulong)*(byte *)(param_1 + 0x650) * 8))
                                (fVar47,param_1 + 0x650,*(undefined8 *)(param_1 + 0x648));
      uVar37 = (uint)fVar48 & 0x7f800000;
      uVar12 = (ushort)((uint)fVar48 >> 0x10);
      uVar6 = uVar12 & 0x8000;
      if (uVar37 == 0x7f800000) {
        if (((uint)fVar48 & 0x7fffff) == 0) {
          uVar24 = uVar6 | 0x7c00;
        }
        else {
          uVar24 = uVar6 | 0x7dff;
          if (0x3fffff < ((uint)fVar48 & 0x7fffff)) {
            uVar24 = uVar12 | 0x7fff;
          }
        }
      }
      else {
        uVar24 = uVar6;
        if (0x38000000 < uVar37) {
          uVar24 = (short)(uVar37 >> 0xd) + 0x4000U & 0x7c00 | (ushort)((uint)fVar48 >> 0xd) & 0x3ff
                   | uVar6;
        }
        if (0x47000000 < uVar37) {
          uVar24 = uVar6 | 0x7c00;
        }
      }
      fVar48 = *(float *)(param_1 + 0x760);
      fVar47 = *(float *)(param_1 + 0x764);
      *(ushort *)((long)pvVar19 + (ulong)((int)uVar44 - 1) * 2) = uVar24;
      fVar47 = fVar47 + fVar48 * fVar46;
      uVar37 = (uint)fVar47 & 0x7f800000;
      uVar12 = (ushort)((uint)fVar47 >> 0x10);
      uVar6 = uVar12 & 0x8000;
      if (uVar37 == 0x7f800000) {
        if (((uint)fVar47 & 0x7fffff) == 0) {
          uVar24 = uVar6 | 0x7c00;
        }
        else {
          uVar24 = uVar6 | 0x7dff;
          if (0x3fffff < ((uint)fVar47 & 0x7fffff)) {
            uVar24 = uVar12 | 0x7fff;
          }
        }
      }
      else {
        uVar24 = uVar6;
        if (0x38000000 < uVar37) {
          uVar24 = (short)(uVar37 >> 0xd) + 0x4000U & 0x7c00 | (ushort)((uint)fVar47 >> 0xd) & 0x3ff
                   | uVar6;
        }
        if (0x47000000 < uVar37) {
          uVar24 = uVar6 | 0x7c00;
        }
      }
      *(ushort *)((long)pvVar19 + uVar44 * 2) = uVar24;
      uVar43 = uVar43 + 1;
      uVar41 = (ulong)*(uint *)(param_1 + 0x460);
      uVar44 = (ulong)((int)uVar44 + 2);
    } while (uVar43 < uVar41);
  }
  FUN_0390a734(lVar38,1,0x19,uVar41,1,1,1,0,0,1);
  local_90 = *(undefined4 *)(param_1 + 0x468);
  uStack_8c = *(undefined4 *)(param_1 + 0x46c);
  *(char **)(param_1 + 0x518) = "agl::lght::LightPrePass";
  bVar22 = false;
  local_88 = *(undefined8 *)(param_1 + 0x470);
  *(undefined4 *)(param_1 + 0x488) = local_90;
  uStack_80 = *(undefined8 *)(param_1 + 0x478);
  *(undefined4 *)(param_1 + 0x48c) = uStack_8c;
  *(undefined8 *)(param_1 + 0x490) = local_88;
  *(undefined8 *)(param_1 + 0x498) = uStack_80;
  if ((*(byte *)(param_1 + 0x4d6) >> 1 & 1) != 0) {
    bVar22 = 0x11 < *(ushort *)(param_1 + 0x520) && *(ushort *)(param_1 + 0x520) - 0x59 < 0xffffffd6
    ;
  }
  uVar39 = FUN_038fd3e0(param_1 + 0x4d8,&local_90,param_1 + 0x4b8,0,"agl::lght::LightPrePass",bVar22
                        ,1);
  FUN_038faf2c(uVar39,lVar38,*(undefined8 *)(param_1 + 0x608),0);
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_1 + 0x488);
  *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_1 + 0x4b0);
  *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_1 + 0x48c);
  *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(param_1 + 0x490);
  *(undefined8 *)(param_1 + 0x538) = *(undefined8 *)(param_1 + 0x498);
  *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0x4a0);
  *(undefined4 *)(param_1 + 0x544) = *(undefined4 *)(param_1 + 0x4a4);
  *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(param_1 + 0x4a8);
  *(undefined8 *)(param_1 + 0x56f) = *(undefined8 *)(param_1 + 0x4cf);
  *(undefined8 *)(param_1 + 0x568) = *(undefined8 *)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(param_1 + 0x4c0);
  *(undefined8 *)(param_1 + 0x558) = *(undefined8 *)(param_1 + 0x4b8);
  FUN_038fd1e0(param_1 + 0x578);
  FUN_038fd2f0(param_1 + 0x578,param_1 + 0x4d8);
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_1 + 0x518);
  *(undefined4 *)(param_1 + 0x5c0) = *(undefined4 *)(param_1 + 0x520);
  puVar5 = (uint *)(param_1 + 0x5fc);
  do {
    cVar11 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar22) {
      *puVar5 = *puVar5 | 1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  *(undefined2 *)(param_1 + 0x5ef) = 0x606;
  *(undefined1 *)(param_1 + 0x5f1) = 6;
  do {
    cVar11 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar22) {
      *puVar5 = *puVar5 & 0xfffffffd | 2;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  *(undefined2 *)(param_1 + 0x5ec) = 0;
  *(undefined1 *)(param_1 + 0x5ee) = 0;
  do {
    cVar11 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar22) {
      *puVar5 = *puVar5 & 0xfffffffb | 4;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  return;
}

