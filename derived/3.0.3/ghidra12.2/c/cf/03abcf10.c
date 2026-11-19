
void FUN_03abcf10(long param_1,uint param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  uint uVar16;
  int iVar17;
  void *pvVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong *puVar26;
  int *piVar27;
  ulong *puVar28;
  float fVar29;
  
  lVar25 = param_1 + 0x30;
  *(undefined4 *)(param_1 + 0x5d8) = 0;
  *(undefined4 *)(param_1 + 8) = param_3;
  FUN_0390e390(lVar25,1,param_4);
  puVar6 = PTR_DAT_04bbd7e8;
  FUN_0390e4c0(lVar25,0,*(long *)PTR_DAT_04bbd7e8 + 0xb0,0);
  FUN_0390e640(lVar25);
  lVar25 = param_1 + 0x210;
  FUN_0390e390(lVar25,1,param_4);
  FUN_0390e4c0(lVar25,0,*(long *)puVar6 + 0x1308,0);
  FUN_0390e640(lVar25);
  lVar25 = param_1 + 0x3f0;
  FUN_0390e390(lVar25,1,param_4);
  FUN_0390e4c0(lVar25,0,*(long *)puVar6 + 0x1fc0,0);
  FUN_0390e640(lVar25);
  uVar20 = *(uint *)(param_1 + 8);
  if ((int)uVar20 < 1) {
LAB_03abd0dc:
    uVar20 = *(uint *)(param_1 + 0x20);
    pvVar12 = *(void **)(param_1 + 0x28);
  }
  else {
    lVar25 = *(long *)PTR_DAT_04bb2698;
    if (lVar25 == 0) {
      pvVar12 = malloc((ulong)uVar20 * 0x2c);
    }
    else {
      plVar11 = param_4;
      if (param_4 == (long *)0x0) {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar11 = (long *)(lVar25 + 8);
        if (lVar10 != 0) {
          plVar11 = (long *)(lVar10 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) goto LAB_03abd0dc;
      }
      pvVar12 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,(ulong)uVar20 * 0x2c,8);
    }
    if (pvVar12 == (void *)0x0) goto LAB_03abd0dc;
    uVar22 = (ulong)uVar20 * 0x2c - 0x2c;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar22;
    pvVar18 = pvVar12;
    if ((SUB164(auVar8 * ZEXT816(0x2e8ba2e8ba2e8ba3),8) >> 3 & 1) == 0) {
      *(undefined8 *)((long)pvVar12 + 0x18) = 0;
      *(undefined8 *)((long)pvVar12 + 0x20) = 0x3f80000000000000;
      pvVar18 = (void *)((long)pvVar12 + 0x2c);
    }
    if (0x2b < uVar22) {
      do {
        *(undefined8 *)((long)pvVar18 + 0x18) = 0;
        *(undefined8 *)((long)pvVar18 + 0x20) = 0x3f80000000000000;
        *(undefined8 *)((long)pvVar18 + 0x44) = 0;
        *(undefined8 *)((long)pvVar18 + 0x4c) = 0x3f80000000000000;
        pvVar18 = (void *)((long)pvVar18 + 0x58);
      } while (pvVar18 != (void *)((long)pvVar12 + (ulong)uVar20 * 0x2c));
    }
    *(uint *)(param_1 + 0x20) = uVar20;
    *(void **)(param_1 + 0x28) = pvVar12;
  }
  if (uVar20 != 0) {
    uVar16 = 0;
    do {
      uVar9 = uVar16 + 1;
      *(undefined8 *)((long)pvVar12 + (long)(int)uVar16 * 0x2c + 4) = 0;
      *(undefined8 *)((long)pvVar12 + (long)(int)uVar16 * 0x2c + 0xc) = 0x42c8000000000000;
      *(undefined8 *)((long)pvVar12 + (long)(int)uVar16 * 0x2c + 0x14) = 0x3f80000000000000;
      *(undefined1 **)((long)pvVar12 + (long)(int)uVar16 * 0x2c + 0x1c) = &DAT_3f8000003f800000;
      *(undefined8 *)((long)pvVar12 + (long)(int)uVar16 * 0x2c + 0x24) = 0x400000003f800000;
      uVar16 = uVar9;
    } while (uVar20 != uVar9);
  }
  lVar25 = *(long *)PTR_DAT_04bb2698;
  if (lVar25 == 0) {
    pvVar12 = malloc(0x160);
    if (pvVar12 == (void *)0x0) goto LAB_03abd1d8;
LAB_03abd188:
    *(undefined8 *)((long)pvVar12 + 0x44) = 0;
    *(undefined8 *)((long)pvVar12 + 0x18) = 0;
    *(undefined8 *)((long)pvVar12 + 0x20) = 0x3f80000000000000;
    *(undefined8 *)((long)pvVar12 + 0x4c) = 0x3f80000000000000;
    *(undefined8 *)((long)pvVar12 + 0xa4) = 0x3f80000000000000;
    *(undefined8 *)((long)pvVar12 + 0xfc) = 0x3f80000000000000;
    *(undefined8 *)((long)pvVar12 + 0x9c) = 0;
    *(undefined8 *)((long)pvVar12 + 0xf4) = 0;
    *(undefined8 *)((long)pvVar12 + 0x70) = 0;
    *(undefined8 *)((long)pvVar12 + 0x78) = 0x3f80000000000000;
    *(undefined8 *)((long)pvVar12 + 200) = 0;
    *(undefined8 *)((long)pvVar12 + 0xd0) = 0x3f80000000000000;
    *(undefined8 *)((long)pvVar12 + 0x120) = 0;
    *(undefined8 *)((long)pvVar12 + 0x128) = 0x3f80000000000000;
    *(undefined8 *)((long)pvVar12 + 0x14c) = 0;
    *(undefined8 *)((long)pvVar12 + 0x154) = 0x3f80000000000000;
    iVar17 = 8;
    *(undefined4 *)(param_1 + 0x828) = 8;
    *(void **)(param_1 + 0x830) = pvVar12;
LAB_03abd1e4:
    iVar19 = 0;
    iVar21 = 0;
    do {
      fVar29 = (float)iVar19;
      iVar1 = iVar21 + 1;
      iVar19 = iVar19 + -1000;
      *(undefined8 *)((long)pvVar12 + (long)iVar21 * 0x2c + 4) = 0;
      *(undefined8 *)((long)pvVar12 + (long)iVar21 * 0x2c + 0x10) = 0x447a0000;
      *(undefined4 *)((long)pvVar12 + (long)iVar21 * 0x2c + 0x28) = 0x40000000;
      *(float *)((long)pvVar12 + (long)iVar21 * 0x2c + 0xc) = fVar29;
      iVar21 = iVar1;
    } while (iVar17 != iVar1);
  }
  else {
    plVar11 = param_4;
    if (param_4 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar11 = (long *)(lVar25 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) goto LAB_03abd1d8;
    }
    pvVar12 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,0x160,8);
    if (pvVar12 != (void *)0x0) goto LAB_03abd188;
LAB_03abd1d8:
    iVar17 = *(int *)(param_1 + 0x828);
    if (iVar17 != 0) {
      pvVar12 = *(void **)(param_1 + 0x830);
      goto LAB_03abd1e4;
    }
  }
  if (0 < (int)param_2) {
    sVar2 = (ulong)param_2 * 0x488 + 8;
    lVar25 = *(long *)PTR_DAT_04bb2698;
    if (lVar25 == 0) {
      puVar13 = malloc(sVar2);
      puVar6 = PTR_DAT_04bd11b8;
    }
    else {
      plVar11 = param_4;
      if (param_4 == (long *)0x0) {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar11 = (long *)(lVar25 + 8);
        if (lVar10 != 0) {
          plVar11 = (long *)(lVar10 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) goto LAB_03abd490;
      }
      puVar13 = (ulong *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar2,8);
      puVar6 = PTR_DAT_04bd11b8;
    }
    PTR_DAT_04bd11b8 = puVar6;
    if (puVar13 != (ulong *)0x0) {
      puVar26 = puVar13 + 1;
      *puVar13 = (ulong)param_2;
      puVar3 = PTR_DAT_04bd1198 + 0x10;
      puVar4 = PTR_DAT_04bd1178 + 0x10;
      puVar5 = PTR_DAT_04bd11a0 + 0x10;
      puVar13 = puVar26;
      do {
        puVar13[6] = 0;
        *puVar13 = (ulong)(puVar6 + 0x10);
        puVar13[1] = 0;
        *(undefined4 *)(puVar13 + 7) = 0x10001;
        *(undefined1 *)((long)puVar13 + 0x3c) = 0;
        puVar13[0xe] = 0;
        *(undefined4 *)(puVar13 + 0xf) = 0;
        puVar13[0x10] = 0;
        *(undefined4 *)(puVar13 + 0x11) = 0;
        puVar13[0x12] = 0;
        puVar13[2] = 0;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar13[5] = 0;
        FUN_0390cee0(puVar13 + 0x13);
        FUN_0390cee0(puVar13 + 0x2f);
        puVar13[0x55] = 0;
        puVar13[0x54] = 0;
        puVar13[0x53] = 0;
        puVar13[0x52] = 0;
        puVar13[0x51] = 0;
        puVar13[0x50] = 0;
        puVar13[0x4f] = 0;
        puVar13[0x4e] = 0;
        puVar13[0x4d] = 0;
        puVar13[0x4c] = 0;
        *(undefined4 *)(puVar13 + 0x56) = 0xffffffff;
        puVar13[0x57] = 0;
        puVar13[0x58] = 0;
        puVar13[0x59] = 0;
        puVar13[0x5a] = 0;
        puVar13[0x5b] = 0;
        puVar13[0x5c] = 0;
        puVar13[0x5d] = 0;
        puVar13[0x5e] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar13 + 0x5f) = 0x10000;
        *(undefined4 *)(puVar13 + 0x62) = 0xff;
        *(undefined4 *)((long)puVar13 + 0x314) = 0;
        puVar13[0x4b] = (ulong)puVar3;
        puVar13[99] = 0x80000000000;
        puVar13[100] = 0;
        puVar13[0x65] = 0;
        puVar13[0x66] = 0;
        puVar13[0x68] = (ulong)&DAT_3f8000003f800000;
        puVar13[0x69] = 0;
        puVar13[0x6a] = (ulong)&DAT_3f8000003f800000;
        puVar13[0x67] = (ulong)puVar4;
        puVar13[0x6b] = 0;
        puVar13[0x6c] = 0;
        puVar13[0x6d] = 0;
        puVar13[0x6e] = 0;
        puVar13[0x6f] = 0;
        puVar13[0x70] = 0;
        puVar13[0x71] = 0;
        puVar13[0x72] = 0;
        puVar13[0x73] = 0;
        puVar13[0x7f] = 0;
        puVar13[0x7e] = 0;
        puVar13[0x7d] = 0;
        puVar13[0x7c] = 0;
        puVar13[0x7b] = 0;
        puVar13[0x7a] = 0;
        puVar13[0x79] = 0;
        puVar13[0x78] = 0;
        puVar13[0x77] = 0;
        puVar13[0x76] = 0;
        *(undefined4 *)(puVar13 + 0x80) = 0xffffffff;
        puVar13[0x87] = 0;
        puVar13[0x86] = 0;
        puVar13[0x85] = 0;
        puVar13[0x84] = 0;
        puVar13[0x83] = 0;
        puVar13[0x82] = 0;
        puVar13[0x81] = 0;
        puVar13[0x88] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar13 + 0x89) = 0x10000;
        *(undefined4 *)(puVar13 + 0x8c) = 0xff;
        *(undefined4 *)((long)puVar13 + 0x464) = 0;
        puVar13[0x75] = (ulong)puVar5;
        puVar13[0x8d] = 0x80000000000;
        puVar13[0x90] = 0;
        puVar13[0x8f] = 0;
        puVar13[0x8e] = 0;
        (**(code **)PTR_DAT_04bcf220)(puVar13 + 0x8a);
        puVar13 = puVar13 + 0x91;
      } while (puVar13 != puVar26 + (ulong)param_2 * 0x91);
      *(uint *)(param_1 + 0x10) = param_2;
      *(ulong **)(param_1 + 0x18) = puVar26;
      goto joined_r0x03abd498;
    }
  }
LAB_03abd490:
  param_2 = *(uint *)(param_1 + 0x10);
  puVar26 = *(ulong **)(param_1 + 0x18);
joined_r0x03abd498:
  if (param_2 != 0) {
    uVar20 = 0;
    puVar6 = PTR_DAT_04bd11b8 + 0x10;
    do {
      puVar13 = puVar26 + (long)(int)uVar20 * 0x91;
      puVar13[0x74] = 0;
      puVar13[0x6b] = (ulong)(puVar13 + 0x4b);
      uVar16 = *(uint *)(param_1 + 8);
      uVar22 = (ulong)uVar16;
      if ((int)uVar16 < 1) {
LAB_03abda50:
        puVar28 = puVar26 + (long)(int)uVar20 * 0x91 + 0x11;
LAB_03abda64:
        if (0 < *(int *)(param_1 + 8)) {
          uVar16 = 0;
          puVar14 = puVar26 + (long)(int)uVar20 * 0x91 + 0x12;
          do {
            if (uVar16 == 0 && uVar20 == 0) {
              FUN_0390d714(*puVar14,4,param_4);
              plVar11 = (long *)*puVar14;
              piVar27 = (int *)(*(long *)plVar11[1] + (ulong)*(ushort *)(plVar11[1] + 10) * 0xc);
              *(undefined1 *)(piVar27 + 2) = 6;
              *piVar27 = 4;
              uVar9 = (**(code **)(*plVar11 + 0x18))(plVar11,6);
              *(ushort *)((long)piVar27 + 6) = (ushort)uVar9 & 0xff;
              uVar9 = ((uVar9 & 0xff) * 4 + (int)plVar11[6]) - 1 & (uVar9 & 0xff) * -4;
              *(uint *)(plVar11 + 6) = uVar9;
              *(short *)(piVar27 + 1) = (short)uVar9;
              *(uint *)(plVar11 + 6) =
                   (int)plVar11[6] + (uint)*(ushort *)((long)piVar27 + 6) * *piVar27 * 4;
              *(short *)(plVar11[1] + 10) = *(short *)(plVar11[1] + 10) + 1;
              if (*(short *)(plVar11[1] + 10) == *(short *)(plVar11[1] + 8)) {
                *(uint *)(plVar11 + 6) = (int)plVar11[6] + 0x1fU & 0xffffffe0;
              }
              plVar11 = (long *)*puVar14;
              piVar27 = (int *)(*(long *)plVar11[1] + (ulong)*(ushort *)(plVar11[1] + 10) * 0xc);
              *(undefined1 *)(piVar27 + 2) = 6;
              *piVar27 = 4;
              uVar9 = (**(code **)(*plVar11 + 0x18))(plVar11,6);
              *(ushort *)((long)piVar27 + 6) = (ushort)uVar9 & 0xff;
              uVar9 = ((uVar9 & 0xff) * 4 + (int)plVar11[6]) - 1 & (uVar9 & 0xff) * -4;
              *(uint *)(plVar11 + 6) = uVar9;
              *(short *)(piVar27 + 1) = (short)uVar9;
              *(uint *)(plVar11 + 6) =
                   (int)plVar11[6] + (uint)*(ushort *)((long)piVar27 + 6) * *piVar27 * 4;
              *(short *)(plVar11[1] + 10) = *(short *)(plVar11[1] + 10) + 1;
              if (*(short *)(plVar11[1] + 10) == *(short *)(plVar11[1] + 8)) {
                *(uint *)(plVar11 + 6) = (int)plVar11[6] + 0x1fU & 0xffffffe0;
              }
              uVar22 = *puVar14;
              piVar27 = (int *)(**(long **)(uVar22 + 8) +
                               (ulong)*(ushort *)((long)*(long **)(uVar22 + 8) + 10) * 0xc);
              *(undefined1 *)(piVar27 + 2) = 6;
              *piVar27 = 1;
              *(undefined2 *)((long)piVar27 + 6) = 4;
              uVar9 = *(int *)(uVar22 + 0x30) + 0xfU & 0xfffffff0;
              *(uint *)(uVar22 + 0x30) = uVar9;
              *(short *)(piVar27 + 1) = (short)uVar9;
              *(uint *)(uVar22 + 0x30) =
                   *(int *)(uVar22 + 0x30) + (uint)*(ushort *)((long)piVar27 + 6) * *piVar27 * 4;
              *(short *)(*(long *)(uVar22 + 8) + 10) = *(short *)(*(long *)(uVar22 + 8) + 10) + 1;
              if (*(short *)(*(long *)(uVar22 + 8) + 10) == *(short *)(*(long *)(uVar22 + 8) + 8)) {
                *(uint *)(uVar22 + 0x30) = *(int *)(uVar22 + 0x30) + 0x1fU & 0xffffffe0;
              }
              uVar22 = *puVar14;
              piVar27 = (int *)(**(long **)(uVar22 + 8) +
                               (ulong)*(ushort *)((long)*(long **)(uVar22 + 8) + 10) * 0xc);
              *(undefined1 *)(piVar27 + 2) = 3;
              *piVar27 = 1;
              *(undefined2 *)((long)piVar27 + 6) = 1;
              uVar9 = *(int *)(uVar22 + 0x30) + 3U & 0xfffffffc;
              *(uint *)(uVar22 + 0x30) = uVar9;
              *(short *)(piVar27 + 1) = (short)uVar9;
              *(uint *)(uVar22 + 0x30) =
                   *(int *)(uVar22 + 0x30) + (uint)*(ushort *)((long)piVar27 + 6) * *piVar27 * 4;
              *(short *)(*(long *)(uVar22 + 8) + 10) = *(short *)(*(long *)(uVar22 + 8) + 10) + 1;
              if (*(short *)(*(long *)(uVar22 + 8) + 10) == *(short *)(*(long *)(uVar22 + 8) + 8)) {
                *(uint *)(uVar22 + 0x30) = *(int *)(uVar22 + 0x30) + 0x1fU & 0xffffffe0;
              }
            }
            else {
              lVar25 = *(long *)(*(long *)(param_1 + 0x18) + 0x90);
              uVar9 = uVar16;
              if ((uint)*puVar28 <= uVar16) {
                uVar9 = 0;
              }
              lVar10 = *puVar14 + (ulong)uVar9 * 0x78;
              *(undefined8 *)(lVar10 + 8) = *(undefined8 *)(lVar25 + 8);
              *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(lVar25 + 0x30);
              *(byte *)(lVar10 + 0x3c) = *(byte *)(lVar10 + 0x3c) & 0xfe;
            }
            uVar9 = uVar16;
            if ((uint)*puVar28 <= uVar16) {
              uVar9 = 0;
            }
            FUN_0390d990(*puVar14 + (ulong)uVar9 * 0x78,param_4,1,1);
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < *(int *)(param_1 + 8));
        }
      }
      else {
        puVar28 = puVar13 + 0xf;
        sVar2 = uVar22 * 0x78 + 8;
        lVar25 = *(long *)PTR_DAT_04bb2698;
        if (lVar25 == 0) {
          puVar14 = malloc(sVar2);
joined_r0x03abd5b0:
          if (puVar14 != (ulong *)0x0) {
            puVar15 = puVar14 + 1;
            *puVar14 = uVar22;
            puVar3 = PTR_DAT_04bd11b8;
            uVar23 = uVar22 * 0x78 - 0x78;
            uVar9 = ((uint)(uVar23 / 0x78) & 0x3ffffff) + 1;
            uVar24 = (ulong)uVar9 & 3;
            puVar14 = puVar15;
            if ((uVar9 & 3) != 0) {
              do {
                puVar14[2] = 0;
                puVar14[3] = 0;
                uVar24 = uVar24 - 1;
                puVar14[6] = 0;
                *(undefined4 *)(puVar14 + 7) = 0x10001;
                *(undefined1 *)((long)puVar14 + 0x3c) = 0;
                puVar14[0xe] = 0;
                *puVar14 = (ulong)(puVar3 + 0x10);
                puVar14[1] = 0;
                puVar14[4] = 0;
                puVar14[5] = 0;
                puVar14 = puVar14 + 0xf;
              } while (uVar24 != 0);
            }
            if (0x167 < uVar23) {
              do {
                *puVar14 = (ulong)puVar6;
                puVar14[1] = 0;
                puVar14[6] = 0;
                *(undefined4 *)(puVar14 + 7) = 0x10001;
                *(undefined1 *)((long)puVar14 + 0x3c) = 0;
                *(undefined4 *)(puVar14 + 0x16) = 0x10001;
                *(undefined1 *)((long)puVar14 + 0xb4) = 0;
                *(undefined4 *)(puVar14 + 0x25) = 0x10001;
                *(undefined1 *)((long)puVar14 + 300) = 0;
                *(undefined4 *)(puVar14 + 0x34) = 0x10001;
                *(undefined1 *)((long)puVar14 + 0x1a4) = 0;
                puVar14[0x3b] = 0;
                puVar14[2] = 0;
                puVar14[3] = 0;
                puVar14[4] = 0;
                puVar14[5] = 0;
                puVar14[0xe] = 0;
                puVar14[0xf] = (ulong)puVar6;
                puVar14[0x10] = 0;
                puVar14[0x11] = 0;
                puVar14[0x12] = 0;
                puVar14[0x13] = 0;
                puVar14[0x14] = 0;
                puVar14[0x15] = 0;
                puVar14[0x1d] = 0;
                puVar14[0x1e] = (ulong)puVar6;
                puVar14[0x23] = 0;
                puVar14[0x24] = 0;
                puVar14[0x21] = 0;
                puVar14[0x22] = 0;
                puVar14[0x1f] = 0;
                puVar14[0x20] = 0;
                puVar14[0x2c] = 0;
                puVar14[0x2d] = (ulong)puVar6;
                puVar14[0x2e] = 0;
                puVar14[0x2f] = 0;
                puVar14[0x30] = 0;
                puVar14[0x31] = 0;
                puVar14[0x32] = 0;
                puVar14[0x33] = 0;
                puVar14 = puVar14 + 0x3c;
              } while (puVar14 != puVar15 + uVar22 * 0xf);
            }
            *(uint *)puVar28 = uVar16;
            puVar26[(long)(int)uVar20 * 0x91 + 0x10] = (ulong)puVar15;
          }
        }
        else {
          plVar11 = param_4;
          if (param_4 != (long *)0x0) {
LAB_03abd588:
            puVar14 = (ulong *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar2,8);
            goto joined_r0x03abd5b0;
          }
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar11 = (long *)(lVar25 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)(lVar10 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 != (long *)0x0) goto LAB_03abd588;
        }
        if (*(int *)(param_1 + 8) < 1) goto LAB_03abda50;
        uVar16 = 0;
        puVar14 = puVar26 + (long)(int)uVar20 * 0x91 + 0x10;
        do {
          if (uVar16 == 0 && uVar20 == 0) {
            FUN_0390d714(*puVar14,5);
            plVar11 = (long *)*puVar14;
            piVar27 = (int *)(*(long *)plVar11[1] + (ulong)*(ushort *)(plVar11[1] + 10) * 0xc);
            *(undefined1 *)(piVar27 + 2) = 6;
            *piVar27 = 4;
            uVar9 = (**(code **)(*plVar11 + 0x18))(plVar11,6);
            *(ushort *)((long)piVar27 + 6) = (ushort)uVar9 & 0xff;
            uVar9 = ((uVar9 & 0xff) * 4 + (int)plVar11[6]) - 1 & (uVar9 & 0xff) * -4;
            *(uint *)(plVar11 + 6) = uVar9;
            *(short *)(piVar27 + 1) = (short)uVar9;
            *(uint *)(plVar11 + 6) =
                 (int)plVar11[6] + (uint)*(ushort *)((long)piVar27 + 6) * *piVar27 * 4;
            *(short *)(plVar11[1] + 10) = *(short *)(plVar11[1] + 10) + 1;
            if (*(short *)(plVar11[1] + 10) == *(short *)(plVar11[1] + 8)) {
              *(uint *)(plVar11 + 6) = (int)plVar11[6] + 0x1fU & 0xffffffe0;
            }
            uVar22 = *puVar14;
            piVar27 = (int *)(**(long **)(uVar22 + 8) +
                             (ulong)*(ushort *)((long)*(long **)(uVar22 + 8) + 10) * 0xc);
            *(undefined1 *)(piVar27 + 2) = 5;
            *piVar27 = 1;
            *(undefined2 *)((long)piVar27 + 6) = 3;
            uVar9 = *(int *)(uVar22 + 0x30) + 0xfU & 0xfffffff0;
            *(uint *)(uVar22 + 0x30) = uVar9;
            *(short *)(piVar27 + 1) = (short)uVar9;
            *(uint *)(uVar22 + 0x30) =
                 *(int *)(uVar22 + 0x30) + (uint)*(ushort *)((long)piVar27 + 6) * *piVar27 * 4;
            *(short *)(*(long *)(uVar22 + 8) + 10) = *(short *)(*(long *)(uVar22 + 8) + 10) + 1;
            if (*(short *)(*(long *)(uVar22 + 8) + 10) == *(short *)(*(long *)(uVar22 + 8) + 8)) {
              *(uint *)(uVar22 + 0x30) = *(int *)(uVar22 + 0x30) + 0x1fU & 0xffffffe0;
            }
            uVar22 = *puVar14;
            piVar27 = (int *)(**(long **)(uVar22 + 8) +
                             (ulong)*(ushort *)((long)*(long **)(uVar22 + 8) + 10) * 0xc);
            *(undefined1 *)(piVar27 + 2) = 3;
            *piVar27 = 1;
            *(undefined2 *)((long)piVar27 + 6) = 1;
            uVar9 = *(int *)(uVar22 + 0x30) + 3U & 0xfffffffc;
            *(uint *)(uVar22 + 0x30) = uVar9;
            *(short *)(piVar27 + 1) = (short)uVar9;
            *(uint *)(uVar22 + 0x30) =
                 *(int *)(uVar22 + 0x30) + (uint)*(ushort *)((long)piVar27 + 6) * *piVar27 * 4;
            *(short *)(*(long *)(uVar22 + 8) + 10) = *(short *)(*(long *)(uVar22 + 8) + 10) + 1;
            if (*(short *)(*(long *)(uVar22 + 8) + 10) == *(short *)(*(long *)(uVar22 + 8) + 8)) {
              *(uint *)(uVar22 + 0x30) = *(int *)(uVar22 + 0x30) + 0x1fU & 0xffffffe0;
            }
            uVar22 = *puVar14;
            piVar27 = (int *)(**(long **)(uVar22 + 8) +
                             (ulong)*(ushort *)((long)*(long **)(uVar22 + 8) + 10) * 0xc);
            *(undefined1 *)(piVar27 + 2) = 6;
            *piVar27 = 1;
            *(undefined2 *)((long)piVar27 + 6) = 4;
            uVar9 = *(int *)(uVar22 + 0x30) + 0xfU & 0xfffffff0;
            *(uint *)(uVar22 + 0x30) = uVar9;
            *(short *)(piVar27 + 1) = (short)uVar9;
            *(uint *)(uVar22 + 0x30) =
                 *(int *)(uVar22 + 0x30) + (uint)*(ushort *)((long)piVar27 + 6) * *piVar27 * 4;
            *(short *)(*(long *)(uVar22 + 8) + 10) = *(short *)(*(long *)(uVar22 + 8) + 10) + 1;
            if (*(short *)(*(long *)(uVar22 + 8) + 10) == *(short *)(*(long *)(uVar22 + 8) + 8)) {
              *(uint *)(uVar22 + 0x30) = *(int *)(uVar22 + 0x30) + 0x1fU & 0xffffffe0;
            }
            uVar22 = *puVar14;
            piVar27 = (int *)(**(long **)(uVar22 + 8) +
                             (ulong)*(ushort *)((long)*(long **)(uVar22 + 8) + 10) * 0xc);
            *(undefined1 *)(piVar27 + 2) = 3;
            *piVar27 = 1;
            *(undefined2 *)((long)piVar27 + 6) = 1;
            uVar9 = *(int *)(uVar22 + 0x30) + 3U & 0xfffffffc;
            *(uint *)(uVar22 + 0x30) = uVar9;
            *(short *)(piVar27 + 1) = (short)uVar9;
            *(uint *)(uVar22 + 0x30) =
                 *(int *)(uVar22 + 0x30) + (uint)*(ushort *)((long)piVar27 + 6) * *piVar27 * 4;
            *(short *)(*(long *)(uVar22 + 8) + 10) = *(short *)(*(long *)(uVar22 + 8) + 10) + 1;
            if (*(short *)(*(long *)(uVar22 + 8) + 10) == *(short *)(*(long *)(uVar22 + 8) + 8)) {
              *(uint *)(uVar22 + 0x30) = *(int *)(uVar22 + 0x30) + 0x1fU & 0xffffffe0;
            }
          }
          else {
            lVar25 = *(long *)(*(long *)(param_1 + 0x18) + 0x80);
            uVar9 = uVar16;
            if ((uint)*puVar28 <= uVar16) {
              uVar9 = 0;
            }
            lVar10 = *puVar14 + (ulong)uVar9 * 0x78;
            *(undefined8 *)(lVar10 + 8) = *(undefined8 *)(lVar25 + 8);
            *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(lVar25 + 0x30);
            *(byte *)(lVar10 + 0x3c) = *(byte *)(lVar10 + 0x3c) & 0xfe;
          }
          uVar9 = uVar16;
          if ((uint)*puVar28 <= uVar16) {
            uVar9 = 0;
          }
          FUN_0390d990(*puVar14 + (ulong)uVar9 * 0x78,param_4,1,1);
          uVar9 = *(uint *)(param_1 + 8);
          uVar22 = (ulong)uVar9;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)uVar9);
        if (0 < (int)uVar9) {
          puVar28 = puVar26 + (long)(int)uVar20 * 0x91 + 0x11;
          sVar2 = (ulong)uVar9 * 0x78 + 8;
          lVar25 = *(long *)PTR_DAT_04bb2698;
          if (lVar25 == 0) {
            puVar14 = malloc(sVar2);
LAB_03abe07c:
            puVar3 = PTR_DAT_04bd11b8;
            if (puVar14 != (ulong *)0x0) {
              puVar15 = puVar14 + 1;
              *puVar14 = uVar22;
              uVar23 = uVar22 * 0x78 - 0x78;
              uVar16 = ((uint)(uVar23 / 0x78) & 0x3ffffff) + 1;
              uVar24 = (ulong)uVar16 & 3;
              puVar14 = puVar15;
              if ((uVar16 & 3) != 0) {
                do {
                  puVar14[2] = 0;
                  puVar14[3] = 0;
                  uVar24 = uVar24 - 1;
                  puVar14[6] = 0;
                  *(undefined4 *)(puVar14 + 7) = 0x10001;
                  *(undefined1 *)((long)puVar14 + 0x3c) = 0;
                  puVar14[0xe] = 0;
                  *puVar14 = (ulong)(puVar3 + 0x10);
                  puVar14[1] = 0;
                  puVar14[4] = 0;
                  puVar14[5] = 0;
                  puVar14 = puVar14 + 0xf;
                } while (uVar24 != 0);
              }
              if (0x167 < uVar23) {
                do {
                  puVar4 = puVar3 + 0x10;
                  puVar14[2] = 0;
                  puVar14[3] = 0;
                  puVar14[6] = 0;
                  *(undefined4 *)(puVar14 + 7) = 0x10001;
                  *(undefined1 *)((long)puVar14 + 0x3c) = 0;
                  *(undefined4 *)(puVar14 + 0x16) = 0x10001;
                  *(undefined1 *)((long)puVar14 + 0xb4) = 0;
                  *(undefined4 *)(puVar14 + 0x25) = 0x10001;
                  *(undefined1 *)((long)puVar14 + 300) = 0;
                  *(undefined4 *)(puVar14 + 0x34) = 0x10001;
                  *(undefined1 *)((long)puVar14 + 0x1a4) = 0;
                  puVar14[0x3b] = 0;
                  *puVar14 = (ulong)puVar4;
                  puVar14[1] = 0;
                  puVar14[4] = 0;
                  puVar14[5] = 0;
                  puVar14[0xe] = 0;
                  puVar14[0xf] = (ulong)puVar4;
                  puVar14[0x10] = 0;
                  puVar14[0x11] = 0;
                  puVar14[0x12] = 0;
                  puVar14[0x13] = 0;
                  puVar14[0x14] = 0;
                  puVar14[0x15] = 0;
                  puVar14[0x1d] = 0;
                  puVar14[0x1e] = (ulong)puVar4;
                  puVar14[0x23] = 0;
                  puVar14[0x24] = 0;
                  puVar14[0x21] = 0;
                  puVar14[0x22] = 0;
                  puVar14[0x1f] = 0;
                  puVar14[0x20] = 0;
                  puVar14[0x2c] = 0;
                  puVar14[0x2d] = (ulong)puVar4;
                  puVar14[0x2e] = 0;
                  puVar14[0x2f] = 0;
                  puVar14[0x30] = 0;
                  puVar14[0x31] = 0;
                  puVar14[0x32] = 0;
                  puVar14[0x33] = 0;
                  puVar14 = puVar14 + 0x3c;
                } while (puVar14 != puVar15 + uVar22 * 0xf);
              }
              *(uint *)puVar28 = uVar9;
              puVar26[(long)(int)uVar20 * 0x91 + 0x12] = (ulong)puVar15;
            }
          }
          else {
            plVar11 = param_4;
            if (param_4 != (long *)0x0) {
LAB_03abddd8:
              puVar14 = (ulong *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar2,8);
              goto LAB_03abe07c;
            }
            lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar11 = (long *)(lVar25 + 8);
            if (lVar10 != 0) {
              plVar11 = (long *)(lVar10 + 0xa8);
            }
            plVar11 = (long *)*plVar11;
            if (plVar11 != (long *)0x0) goto LAB_03abddd8;
          }
          goto LAB_03abda64;
        }
      }
      FUN_0390d714(puVar13,5,param_4);
      piVar27 = (int *)(*(long *)puVar13[1] + (ulong)*(ushort *)((long)puVar13[1] + 10) * 0xc);
      *(undefined1 *)(piVar27 + 2) = 3;
      *piVar27 = 1;
      *(undefined2 *)((long)piVar27 + 6) = 1;
      uVar16 = (int)puVar13[6] + 3U & 0xfffffffc;
      *(uint *)(puVar13 + 6) = uVar16;
      *(short *)(piVar27 + 1) = (short)uVar16;
      *(uint *)(puVar13 + 6) = (int)puVar13[6] + (uint)*(ushort *)((long)piVar27 + 6) * *piVar27 * 4
      ;
      *(short *)(puVar13[1] + 10) = *(short *)(puVar13[1] + 10) + 1;
      plVar11 = (long *)puVar13[1];
      uVar7 = *(ushort *)((long)plVar11 + 10);
      if (uVar7 == *(ushort *)(plVar11 + 1)) {
        *(uint *)(puVar13 + 6) = (int)puVar13[6] + 0x1fU & 0xffffffe0;
        uVar7 = *(ushort *)((long)plVar11 + 10);
      }
      piVar27 = (int *)(*plVar11 + (ulong)uVar7 * 0xc);
      *(undefined1 *)(piVar27 + 2) = 3;
      *piVar27 = 1;
      *(undefined2 *)((long)piVar27 + 6) = 1;
      uVar16 = (int)puVar13[6] + 3U & 0xfffffffc;
      *(uint *)(puVar13 + 6) = uVar16;
      *(short *)(piVar27 + 1) = (short)uVar16;
      *(uint *)(puVar13 + 6) = (int)puVar13[6] + (uint)*(ushort *)((long)piVar27 + 6) * *piVar27 * 4
      ;
      *(short *)(puVar13[1] + 10) = *(short *)(puVar13[1] + 10) + 1;
      plVar11 = (long *)puVar13[1];
      uVar7 = *(ushort *)((long)plVar11 + 10);
      if (uVar7 == *(ushort *)(plVar11 + 1)) {
        *(uint *)(puVar13 + 6) = (int)puVar13[6] + 0x1fU & 0xffffffe0;
        uVar7 = *(ushort *)((long)plVar11 + 10);
      }
      piVar27 = (int *)(*plVar11 + (ulong)uVar7 * 0xc);
      *(undefined1 *)(piVar27 + 2) = 3;
      *piVar27 = 1;
      *(undefined2 *)((long)piVar27 + 6) = 1;
      uVar16 = (int)puVar13[6] + 3U & 0xfffffffc;
      *(uint *)(puVar13 + 6) = uVar16;
      *(short *)(piVar27 + 1) = (short)uVar16;
      *(uint *)(puVar13 + 6) = (int)puVar13[6] + (uint)*(ushort *)((long)piVar27 + 6) * *piVar27 * 4
      ;
      *(short *)(puVar13[1] + 10) = *(short *)(puVar13[1] + 10) + 1;
      plVar11 = (long *)puVar13[1];
      uVar7 = *(ushort *)((long)plVar11 + 10);
      if (uVar7 == *(ushort *)(plVar11 + 1)) {
        *(uint *)(puVar13 + 6) = (int)puVar13[6] + 0x1fU & 0xffffffe0;
        uVar7 = *(ushort *)((long)plVar11 + 10);
      }
      piVar27 = (int *)(*plVar11 + (ulong)uVar7 * 0xc);
      *(undefined1 *)(piVar27 + 2) = 4;
      *piVar27 = 1;
      *(undefined2 *)((long)piVar27 + 6) = 2;
      uVar16 = (int)puVar13[6] + 7U & 0xfffffff8;
      *(uint *)(puVar13 + 6) = uVar16;
      *(short *)(piVar27 + 1) = (short)uVar16;
      *(uint *)(puVar13 + 6) = (int)puVar13[6] + (uint)*(ushort *)((long)piVar27 + 6) * *piVar27 * 4
      ;
      *(short *)(puVar13[1] + 10) = *(short *)(puVar13[1] + 10) + 1;
      plVar11 = (long *)puVar13[1];
      uVar7 = *(ushort *)((long)plVar11 + 10);
      if (uVar7 == *(ushort *)(plVar11 + 1)) {
        *(uint *)(puVar13 + 6) = (int)puVar13[6] + 0x1fU & 0xffffffe0;
        uVar7 = *(ushort *)((long)plVar11 + 10);
      }
      piVar27 = (int *)(*plVar11 + (ulong)uVar7 * 0xc);
      *(undefined1 *)(piVar27 + 2) = 6;
      *piVar27 = 1;
      *(undefined2 *)((long)piVar27 + 6) = 4;
      uVar16 = (int)puVar13[6] + 0xfU & 0xfffffff0;
      *(uint *)(puVar13 + 6) = uVar16;
      *(short *)(piVar27 + 1) = (short)uVar16;
      *(uint *)(puVar13 + 6) = (int)puVar13[6] + (uint)*(ushort *)((long)piVar27 + 6) * *piVar27 * 4
      ;
      *(short *)(puVar13[1] + 10) = *(short *)(puVar13[1] + 10) + 1;
      if (*(short *)(puVar13[1] + 10) == *(short *)(puVar13[1] + 8)) {
        *(uint *)(puVar13 + 6) = (int)puVar13[6] + 0x1fU & 0xffffffe0;
      }
      FUN_0390d990(puVar13,param_4,1,1);
      uVar20 = uVar20 + 1;
    } while (param_2 != uVar20);
  }
  return;
}

