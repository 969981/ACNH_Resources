
undefined1 * FUN_01d8382c(long param_1,long *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  ulong uVar14;
  uint uVar15;
  byte *pbVar16;
  byte bVar17;
  byte bVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  byte *pbVar23;
  byte bVar24;
  int iVar25;
  undefined8 *puVar26;
  byte local_18c [4];
  undefined *local_188;
  undefined2 *puStack_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [63];
  undefined1 local_105;
  undefined *local_100;
  undefined1 *puStack_f8;
  undefined4 local_f0;
  undefined1 local_ec [63];
  undefined1 local_ad;
  undefined4 local_a8 [2];
  long local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  pbVar23 = (byte *)(param_2 + 1);
  if (7 < *pbVar23) {
    return (undefined1 *)0x0;
  }
  if (param_2[2] == 0) {
    return (undefined1 *)0x0;
  }
  if (*param_2 == 0) {
    return (undefined1 *)0x0;
  }
  puVar12 = (undefined1 *)FUN_01d83ff0(param_1,0);
  if (puVar12 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  *(undefined2 *)(puVar12 + 0x38) = 0;
  *(undefined2 *)(puVar12 + 0x100) = 0;
  puVar12[0xf8] = 0xff;
  *(undefined2 *)(puVar12 + 0xc) = 0;
  puStack_180 = (undefined2 *)(puVar12 + 0x22);
  *puStack_180 = 0;
  puVar26 = (undefined8 *)(puVar12 + 0xe0);
  *puVar26 = 0;
  *(undefined8 *)(puVar12 + 0xe8) = 0;
  *(undefined4 *)(puVar12 + 0xfc) = 0xffffffff;
  *(undefined8 *)(puVar12 + 0x108) = 0;
  *puVar12 = *(undefined1 *)((long)param_2 + 0x1a);
  puVar12[1] = *(undefined1 *)((long)param_2 + 0x1b);
  puVar12[2] = *(undefined1 *)((long)param_2 + 0x1c);
  puVar12[3] = *(undefined1 *)((long)param_2 + 0x1d);
  puVar12[4] = *(undefined1 *)((long)param_2 + 0x1e);
  puVar12[5] = *(undefined1 *)((long)param_2 + 0x1f);
  puVar12[6] = (char)param_2[4];
  puVar12[7] = *(undefined1 *)((long)param_2 + 0x21);
  puVar12[8] = *(undefined1 *)((long)param_2 + 0x22);
  *(undefined2 *)(puVar12 + 10) = *(undefined2 *)PTR_DAT_04bb3170;
  if ((char)param_2[3] != '\0') {
    *(undefined2 *)(puVar12 + 0x100) = 4;
  }
  local_174 = 0;
  local_178 = 0xb;
  local_160 = 0xffffffff;
  local_170 = 0xffffffff;
  uStack_168 = 0xffffffff00000000;
  puStack_150 = local_144;
  local_188 = PTR_DAT_04bb2df8 + 0x10;
  local_148 = 0x40;
  local_105 = 0;
  local_158 = PTR_DAT_04bb2bc0 + 0x10;
  local_144[0] = 0;
  local_f0 = 0x40;
  local_ad = 0;
  local_ec[0] = 0;
  puStack_f8 = local_ec;
  local_a0 = *param_2 + 0x20;
  local_a8[0] = 10;
  local_100 = local_158;
  FUN_006f5e38(&local_188);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_70 = 1;
  local_6c = 0;
  local_98 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_90 = 0;
  FUN_02906b00(&local_98,&local_188,local_a8);
  *(undefined4 *)(puVar12 + 0x54) = *(undefined4 *)(*param_2 + 0x1c);
  bVar24 = *(byte *)(param_2 + 1);
  if (7 < bVar24) {
    bVar24 = 0xff;
  }
  puVar12[0xf8] = bVar24;
  puVar11 = PTR_DAT_04bb4f78;
  puVar9 = PTR_DAT_04bb27d0;
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    local_18c[0] = *pbVar23;
    if (7 < local_18c[0]) {
      local_18c[0] = 0xff;
    }
    lVar21 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_18c,1);
    if (lVar21 != 0) {
      uVar22 = FUN_026585a0(pbVar23);
      *puVar26 = uVar22;
      lVar19 = lVar21 + 0x194b0;
      if (*(long *)(lVar21 + 0x194b8) == 0) {
        lVar19 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if ((*(long **)(lVar19 + 0x24838) == (long *)0x0) ||
         (puVar26 = (undefined8 *)**(long **)(lVar19 + 0x24838), puVar26 == (undefined8 *)0x0)) {
        *(undefined8 *)(puVar12 + 0x108) =
             *(undefined8 *)(*(long *)(lVar19 + 0x24820) + *(long *)(lVar19 + 0x24818) + 0x50);
      }
      else {
        uVar14 = (**(code **)*puVar26)();
        *(undefined8 *)(puVar12 + 0x108) =
             *(undefined8 *)(*(long *)(lVar19 + 0x24820) + *(long *)(lVar19 + 0x24818) + 0x50);
        if ((((uVar14 & 1) != 0) && (*(long *)(lVar19 + 0x24838) != 0)) &&
           (puVar26 = *(undefined8 **)(*(long *)(lVar19 + 0x24838) + 8),
           puVar26 != (undefined8 *)0x0)) {
          (**(code **)*puVar26)();
        }
      }
    }
  }
  else {
    pcVar13 = (char *)FUN_02582a24(pbVar23,1);
    pcVar3 = PTR_DAT_04bc1220;
    puVar10 = PTR_DAT_04bbaed0;
    plVar20 = *(long **)puVar9;
    cVar8 = *pcVar13;
    uVar15 = (uint)cVar8;
    lVar21 = *plVar20;
    bVar24 = *(byte *)(lVar21 + 0x473);
    if ((long)(char)bVar24 == 0xffffffffffffffff) {
      if (*PTR_DAT_04bc1220 == cVar8) goto LAB_01d83ab0;
LAB_01d83bd0:
      uVar22 = 0;
    }
    else {
      puVar1 = (uint *)(lVar21 + 0x48);
      puVar4 = puVar1 + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
      if (7 < bVar24) {
        puVar4 = puVar1;
      }
      pcVar13 = PTR_DAT_04bc1220;
      if ((*puVar4 & 8) != 0) {
        pcVar13 = (char *)(lVar21 + 0x473);
      }
      if (*pcVar13 != cVar8) {
        uVar22 = 0;
        if (((*puVar4 >> 3 & 1) == 0) || (uVar15 == 0xffffffff)) goto LAB_01d83bd4;
        puVar4 = puVar1 + (ulong)uVar15 * 0x20;
        if (7 < uVar15) {
          puVar4 = puVar1;
        }
        if (((byte)*puVar4 >> 3 & 1) == 0) goto LAB_01d83bd0;
      }
LAB_01d83ab0:
      puVar2 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8) + (ulong)uVar15 * 6;
      if (7 < uVar15) {
        puVar2 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8);
      }
      uVar22 = *puVar2;
    }
LAB_01d83bd4:
    *puVar26 = uVar22;
    lVar21 = *plVar20;
    bVar24 = *(byte *)(lVar21 + 0x473);
    if ((long)(char)bVar24 == 0xffffffffffffffff) {
      if (*pcVar3 == cVar8) goto LAB_01d83c40;
LAB_01d83c74:
      *(undefined8 *)(puVar12 + 0x108) = 0;
    }
    else {
      puVar1 = (uint *)(lVar21 + 0x48);
      puVar4 = puVar1 + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
      if (7 < bVar24) {
        puVar4 = puVar1;
      }
      if ((*puVar4 & 8) != 0) {
        pcVar3 = (char *)(lVar21 + 0x473);
      }
      if (*pcVar3 == cVar8) {
LAB_01d83c40:
        lVar21 = *(long *)puVar10 + 0xd8 + (ulong)uVar15 * 0x30;
        if (7 < uVar15) {
          lVar21 = *(long *)puVar10 + 0xd8;
        }
        uVar22 = *(undefined8 *)(lVar21 + 8);
      }
      else {
        uVar22 = 0;
        if (((*puVar4 >> 3 & 1) != 0) && (uVar15 != 0xffffffff)) {
          puVar4 = puVar1 + (ulong)uVar15 * 0x20;
          if (7 < uVar15) {
            puVar4 = puVar1;
          }
          if (((byte)*puVar4 >> 3 & 1) == 0) goto LAB_01d83c74;
          goto LAB_01d83c40;
        }
      }
      *(undefined8 *)(puVar12 + 0x108) = uVar22;
    }
  }
  if (*(int *)(*param_2 + 0x34) != 1) {
    *(short *)(puVar12 + 0x100) = *(short *)(puVar12 + 0x100) + 0x100;
  }
  puVar10 = PTR_DAT_04bb2bc0;
  lVar21 = **(long **)puVar9;
  if (*(byte *)(lVar21 + 0x476) < 2) {
    bVar24 = *pbVar23;
  }
  else {
    lVar19 = *(long *)PTR_DAT_04bb39b0;
    if (lVar19 == 0) {
      bVar17 = *PTR_DAT_04bb32e0;
      if (7 < bVar17) goto LAB_01d83d40;
LAB_01d83d90:
      if (7 < bVar17) {
        bVar17 = 0xff;
      }
    }
    else {
      pbVar16 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar19 + 0x15c) != 0) {
        pbVar16 = (byte *)(lVar19 + 0x158);
      }
      bVar17 = *pbVar16;
      if ((bVar17 < 8) ||
         (((*(int *)(lVar19 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (bVar17 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), bVar17 < 8)))) goto LAB_01d83d90;
LAB_01d83d40:
      bVar24 = *(byte *)(lVar21 + 0x473);
      pbVar16 = PTR_DAT_04bb5038;
      if ((long)(char)bVar24 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
        if (7 < bVar24) {
          puVar1 = (uint *)(lVar21 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar16 = (byte *)(lVar21 + 0x471);
        }
      }
      bVar17 = *pbVar16;
      if (7 < bVar17) {
        bVar17 = *PTR_DAT_04bb5038;
        goto LAB_01d83d90;
      }
    }
    bVar24 = *pbVar23;
    bVar18 = bVar24;
    if (7 < bVar24) {
      bVar18 = 0xff;
    }
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    if (bVar18 != bVar17) goto LAB_01d83e50;
  }
  if (7 < bVar24) {
    bVar24 = 0xff;
  }
  local_188 = (undefined *)CONCAT71(local_188._1_7_,bVar24);
  lVar21 = FUN_025830c0(*(undefined8 *)puVar11,&local_188,1);
  if (lVar21 == 0) {
    iVar25 = -1;
  }
  else {
    if ((*(long **)(lVar21 + 0x28) == (long *)0x0) ||
       (puVar26 = (undefined8 *)**(long **)(lVar21 + 0x28), puVar26 == (undefined8 *)0x0)) {
      uVar15 = 1;
    }
    else {
      uVar15 = (**(code **)*puVar26)();
      uVar15 = uVar15 ^ 1;
    }
    bVar24 = *(byte *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8) + 0x10);
    if (7 < bVar24) {
      bVar24 = 0xff;
    }
    iVar25 = (int)(char)bVar24;
    if ((((uVar15 & 1) == 0) && (*(long *)(lVar21 + 0x28) != 0)) &&
       (puVar26 = *(undefined8 **)(*(long *)(lVar21 + 0x28) + 8), puVar26 != (undefined8 *)0x0)) {
      (**(code **)*puVar26)();
    }
  }
  *(int *)(puVar12 + 0xfc) = iVar25;
LAB_01d83e50:
  if ((int)param_2[5] == 7) {
    *(ushort *)(puVar12 + 0x100) = *(ushort *)(puVar12 + 0x100) | 0x40;
  }
  local_160 = 0xffffffff;
  local_158 = puVar10 + 0x10;
  local_174 = 0;
  local_148 = 0x40;
  local_105 = 0;
  local_188 = PTR_DAT_04bb2df8 + 0x10;
  local_144[0] = 0;
  local_f0 = 0x40;
  local_ad = 0;
  local_ec[0] = 0;
  local_178 = 0xb;
  local_170 = 0xffffffff;
  uStack_168 = 0xffffffff00000000;
  puStack_150 = local_144;
  puStack_f8 = local_ec;
  local_a0 = *param_2 + 4;
  local_a8[0] = 10;
  puStack_180 = (undefined2 *)(puVar12 + 0xc);
  local_100 = local_158;
  FUN_006f5e38(&local_188);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_70 = 1;
  local_6c = 0;
  local_98 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_90 = 0;
  FUN_02906b00(&local_98,&local_188,local_a8);
  *(undefined4 *)(puVar12 + 0x50) = *(undefined4 *)*param_2;
  uVar15 = 2;
  if (*(byte *)(*param_2 + 0x18) < 4) {
    uVar15 = (uint)*(byte *)(*param_2 + 0x18);
  }
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar15);
  *(uint *)(puVar12 + 0x58) = uVar15;
  plVar20 = (long *)param_2[2];
  (**(code **)(*plVar20 + 0x18))(plVar20);
  puVar26 = (undefined8 *)plVar20[1];
  uVar22 = *puVar26;
  uVar6 = puVar26[1];
  uVar5 = puVar26[2];
  *(undefined8 *)(puVar12 + 0x74) = puVar26[3];
  *(undefined8 *)(puVar12 + 0x6c) = uVar5;
  *(undefined8 *)(puVar12 + 100) = uVar6;
  *(undefined8 *)(puVar12 + 0x5c) = uVar22;
  uVar22 = puVar26[4];
  uVar6 = puVar26[5];
  uVar5 = puVar26[6];
  *(undefined8 *)(puVar12 + 0x94) = puVar26[7];
  *(undefined8 *)(puVar12 + 0x8c) = uVar5;
  *(undefined8 *)(puVar12 + 0x84) = uVar6;
  *(undefined8 *)(puVar12 + 0x7c) = uVar22;
  uVar22 = puVar26[8];
  uVar6 = puVar26[9];
  uVar5 = puVar26[10];
  *(undefined8 *)(puVar12 + 0xb4) = puVar26[0xb];
  *(undefined8 *)(puVar12 + 0xac) = uVar5;
  *(undefined8 *)(puVar12 + 0xa4) = uVar6;
  *(undefined8 *)(puVar12 + 0x9c) = uVar22;
  uVar22 = puVar26[0xc];
  uVar6 = puVar26[0xd];
  uVar5 = puVar26[0xe];
  uVar7 = puVar26[0xf];
  *(undefined2 *)(puVar12 + 0xdc) = 0;
  *(undefined8 *)(puVar12 + 0xd4) = uVar7;
  *(undefined8 *)(puVar12 + 0xcc) = uVar5;
  *(undefined8 *)(puVar12 + 0xc4) = uVar6;
  *(undefined8 *)(puVar12 + 0xbc) = uVar22;
  uVar15 = (uint)*(ushort *)(puVar12 + 0x100);
  if (*(char *)((long)param_2 + 0x2c) != '\0') {
    uVar15 = uVar15 | 0x80;
    *(short *)(puVar12 + 0x100) = (short)uVar15;
  }
  if ((uVar15 >> 2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  return puVar12;
}

