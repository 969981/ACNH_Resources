
void FUN_028e95f0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 ****ppppuVar4;
  int iVar5;
  undefined8 ***pppuVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 ***pppuVar9;
  undefined8 uVar10;
  undefined8 ***pppuVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uStack_29990;
  undefined1 *puStack_29988;
  undefined8 ****ppppuStack_29980;
  undefined8 ****appppuStack_29970 [559];
  undefined8 ****appppuStack_287f8 [559];
  undefined8 ****appppuStack_27680 [559];
  undefined8 ****appppuStack_26508 [559];
  undefined8 ****appppuStack_25390 [559];
  undefined8 ****appppuStack_24218 [559];
  undefined8 ****appppuStack_230a0 [559];
  undefined8 ****appppuStack_21f28 [559];
  undefined8 ****appppuStack_20db0 [559];
  undefined8 ****appppuStack_1fc38 [559];
  undefined8 ****appppuStack_1eac0 [559];
  undefined8 ****appppuStack_1d948 [559];
  undefined8 ****appppuStack_1c7d0 [559];
  undefined8 ****appppuStack_1b658 [559];
  undefined8 ****appppuStack_1a4e0 [559];
  undefined8 ****appppuStack_19368 [559];
  undefined8 ****appppuStack_181f0 [559];
  undefined8 ****appppuStack_17078 [559];
  undefined8 ****appppuStack_15f00 [559];
  undefined8 ****appppuStack_14d88 [559];
  undefined8 ****appppuStack_13c10 [559];
  undefined8 ****appppuStack_12a98 [559];
  undefined8 ****appppuStack_11920 [559];
  undefined8 ****appppuStack_107a8 [559];
  undefined8 ****local_f630 [559];
  undefined8 ****local_e4b8 [559];
  undefined8 ****local_d340 [559];
  undefined8 ****local_c1c8 [559];
  undefined8 ****local_b050 [559];
  undefined8 ****local_9ed8 [559];
  undefined8 ****local_8d60 [559];
  undefined8 ****local_7be8 [559];
  undefined8 ****local_6a70 [559];
  undefined8 ****local_58f8 [559];
  undefined8 ***local_4780 [559];
  undefined8 **local_3608 [559];
  undefined8 *local_2490 [559];
  undefined8 local_1318 [559];
  undefined1 local_1a0 [304];
  uint local_70;
  uint local_6c;
  
  appppuStack_29970[0] = appppuStack_287f8;
  uStack_29990 = 0;
  puStack_29988 = (undefined1 *)0x0;
  appppuStack_287f8[0] = appppuStack_27680;
  appppuStack_27680[0] = appppuStack_26508;
  appppuStack_20db0[0] = appppuStack_1fc38;
  appppuStack_26508[0] = appppuStack_25390;
  appppuStack_25390[0] = appppuStack_24218;
  appppuStack_24218[0] = appppuStack_230a0;
  appppuStack_230a0[0] = appppuStack_21f28;
  appppuStack_21f28[0] = appppuStack_20db0;
  appppuStack_1fc38[0] = appppuStack_1eac0;
  appppuStack_1eac0[0] = appppuStack_1d948;
  appppuStack_1d948[0] = appppuStack_1c7d0;
  appppuStack_1c7d0[0] = appppuStack_1b658;
  appppuStack_1b658[0] = appppuStack_1a4e0;
  appppuStack_1a4e0[0] = appppuStack_19368;
  appppuStack_19368[0] = appppuStack_181f0;
  appppuStack_181f0[0] = appppuStack_17078;
  appppuStack_17078[0] = appppuStack_15f00;
  appppuStack_15f00[0] = appppuStack_14d88;
  appppuStack_14d88[0] = appppuStack_13c10;
  appppuStack_13c10[0] = appppuStack_12a98;
  appppuStack_12a98[0] = appppuStack_11920;
  appppuStack_11920[0] = appppuStack_107a8;
  appppuStack_107a8[0] = local_f630;
  local_f630[0] = local_e4b8;
  local_e4b8[0] = local_d340;
  local_d340[0] = local_c1c8;
  local_c1c8[0] = local_b050;
  local_b050[0] = local_9ed8;
  local_9ed8[0] = local_8d60;
  local_8d60[0] = local_7be8;
  local_7be8[0] = local_6a70;
  local_6a70[0] = local_58f8;
  local_58f8[0] = local_4780;
  local_4780[0] = local_3608;
  local_3608[0] = local_2490;
  local_2490[0] = local_1318;
  ppppuStack_29980 = appppuStack_29970;
  local_1318[0] = 0;
  if (local_1a0 != (undefined1 *)0x0) {
    uStack_29990 = 0x2600000000;
    puStack_29988 = local_1a0;
  }
  iVar5 = 0;
  iVar8 = 0;
  iVar20 = 0;
  do {
    ppppuVar4 = ppppuStack_29980;
    puVar21 = param_1 + (long)iVar20 * 0x22f;
    if ((*(byte *)((long)puVar21 + 3) & 1) != 0) {
      if (iVar8 < uStack_29990._4_4_) {
        if (ppppuStack_29980 != (undefined8 ****)0x0) {
          ppppuStack_29980 = (undefined8 ****)*ppppuStack_29980;
        }
        *ppppuVar4 = (undefined8 ***)*puVar21;
        *(undefined2 *)(ppppuVar4 + 1) = *(undefined2 *)(param_1 + (long)iVar20 * 0x22f + 1);
        *(undefined2 *)((long)ppppuVar4 + 0xc) =
             *(undefined2 *)((long)param_1 + (long)iVar20 * 0x1178 + 0xc);
        *(undefined1 *)((long)ppppuVar4 + 0xe) =
             *(undefined1 *)((long)param_1 + (long)iVar20 * 0x1178 + 0xe);
        *(undefined1 *)((long)ppppuVar4 + 0xf) =
             *(undefined1 *)((long)param_1 + (long)iVar20 * 0x1178 + 0xf);
        *(undefined4 *)(ppppuVar4 + 2) = *(undefined4 *)(param_1 + (long)iVar20 * 0x22f + 2);
        *(undefined2 *)((long)ppppuVar4 + 0x14) =
             *(undefined2 *)((long)param_1 + (long)iVar20 * 0x1178 + 0x14);
        *(undefined1 *)((long)ppppuVar4 + 0x16) =
             *(undefined1 *)((long)param_1 + (long)iVar20 * 0x1178 + 0x16);
        *(undefined1 *)((long)ppppuVar4 + 0x17) =
             *(undefined1 *)((long)param_1 + (long)iVar20 * 0x1178 + 0x17);
        *(undefined4 *)(ppppuVar4 + 3) = *(undefined4 *)(param_1 + (long)iVar20 * 0x22f + 3);
        *(undefined2 *)((long)ppppuVar4 + 0x1c) =
             *(undefined2 *)((long)param_1 + (long)iVar20 * 0x1178 + 0x1c);
        *(undefined1 *)((long)ppppuVar4 + 0x1e) =
             *(undefined1 *)((long)param_1 + (long)iVar20 * 0x1178 + 0x1e);
        *(undefined1 *)((long)ppppuVar4 + 0x1f) =
             *(undefined1 *)((long)param_1 + (long)iVar20 * 0x1178 + 0x1f);
        *(undefined4 *)(ppppuVar4 + 4) = *(undefined4 *)(param_1 + (long)iVar20 * 0x22f + 4);
        *(undefined4 *)(ppppuVar4 + 5) = *(undefined4 *)(param_1 + (long)iVar20 * 0x22f + 5);
        *(undefined4 *)((long)ppppuVar4 + 0x2c) =
             *(undefined4 *)((long)param_1 + (long)iVar20 * 0x1178 + 0x2c);
        FUN_027c0f28(ppppuVar4 + 6,param_1 + (long)iVar20 * 0x22f + 6);
        pppuVar6 = (undefined8 ***)param_1[(long)iVar20 * 0x22f + 0x15];
        ppppuVar4[0x14] = (undefined8 ***)param_1[(long)iVar20 * 0x22f + 0x14];
        ppppuVar4[0x15] = pppuVar6;
        pppuVar11 = (undefined8 ***)param_1[(long)iVar20 * 0x22f + 0x18];
        pppuVar6 = (undefined8 ***)param_1[(long)iVar20 * 0x22f + 0x16];
        pppuVar9 = (undefined8 ***)param_1[(long)iVar20 * 0x22f + 0x17];
        *(undefined8 *)((long)ppppuVar4 + 0xc5) =
             *(undefined8 *)((long)param_1 + (long)iVar20 * 0x1178 + 0xc5);
        ppppuVar4[0x17] = pppuVar9;
        ppppuVar4[0x18] = pppuVar11;
        ppppuVar4[0x16] = pppuVar6;
        memset((void *)((long)ppppuVar4 + 0xcd),0,0x800);
        uVar3 = *(undefined1 *)((long)param_1 + (long)iVar20 * 0x1178 + 0x8cd);
        *(undefined2 *)((long)ppppuVar4 + 0x8ce) = 0;
        *(undefined1 *)((long)ppppuVar4 + 0x8cd) = uVar3;
        memcpy((void *)((long)ppppuVar4 + 0xcd),
               (void *)((long)param_1 + (long)iVar20 * 0x1178 + 0xcd),0x800);
        FUN_027c1b80(ppppuVar4 + 5);
        *(undefined4 *)(ppppuVar4 + 0x11a) = *(undefined4 *)(param_1 + (long)iVar20 * 0x22f + 0x11a)
        ;
        *(undefined4 *)((long)ppppuVar4 + 0x8d4) =
             *(undefined4 *)((long)param_1 + (long)iVar20 * 0x1178 + 0x8d4);
        FUN_027c0f28(ppppuVar4 + 0x11b,param_1 + (long)iVar20 * 0x22f + 0x11b);
        pppuVar6 = (undefined8 ***)param_1[(long)iVar20 * 0x22f + 0x129];
        ppppuVar4[0x12a] = (undefined8 ***)param_1[(long)iVar20 * 0x22f + 0x12a];
        ppppuVar4[0x129] = pppuVar6;
        pppuVar6 = (undefined8 ***)param_1[(long)iVar20 * 0x22f + 299];
        pppuVar9 = (undefined8 ***)param_1[(long)iVar20 * 0x22f + 300];
        pppuVar11 = (undefined8 ***)param_1[(long)iVar20 * 0x22f + 0x12d];
        *(undefined8 *)((long)ppppuVar4 + 0x96d) =
             *(undefined8 *)((long)param_1 + (long)iVar20 * 0x1178 + 0x96d);
        ppppuVar4[0x12d] = pppuVar11;
        ppppuVar4[300] = pppuVar9;
        ppppuVar4[299] = pppuVar6;
        memset((void *)((long)ppppuVar4 + 0x975),0,0x800);
        uVar3 = *(undefined1 *)((long)param_1 + (long)iVar20 * 0x1178 + 0x1175);
        *(undefined2 *)((long)ppppuVar4 + 0x1176) = 0;
        *(undefined1 *)((long)ppppuVar4 + 0x1175) = uVar3;
        memcpy((void *)((long)ppppuVar4 + 0x975),
               (void *)((long)param_1 + (long)iVar20 * 0x1178 + 0x975),0x800);
        FUN_027c1b80(ppppuVar4 + 0x11a);
        iVar8 = (int)uStack_29990;
        iVar5 = (int)uStack_29990;
        if ((int)uStack_29990 < uStack_29990._4_4_) {
          *(undefined8 *****)(puStack_29988 + (long)(int)uStack_29990 * 8) = ppppuVar4;
          iVar8 = (int)uStack_29990 + 1;
          uStack_29990 = CONCAT44(uStack_29990._4_4_,iVar8);
          iVar5 = iVar8;
        }
      }
    }
    iVar1 = iVar20 + 1;
    *(byte *)((long)puVar21 + 3) = 0;
    *(undefined2 *)puVar21 = 0xffff;
    *(undefined1 *)((long)param_1 + (long)iVar20 * 0x1178 + 2) = 5;
    *(undefined1 *)((long)param_1 + (long)iVar20 * 0x1178 + 4) = 0;
    *(undefined2 *)((long)param_1 + (long)iVar20 * 0x1178 + 6) = 0;
    iVar20 = iVar1;
  } while (iVar1 != 0x26);
  if (1 < iVar5) {
    uVar14 = 0;
    uVar17 = iVar5 - 1;
    do {
      if ((int)uVar17 <= (int)uVar14) break;
      lVar19 = *(long *)(puStack_29988 + (ulong)uVar14 * 8);
      uVar12 = (ulong)uVar14;
      uVar15 = (ulong)uVar17;
      uVar16 = uVar12;
      uVar17 = uVar14;
      do {
        local_6c = (uint)*(byte *)(lVar19 + 2);
        lVar18 = *(long *)(puStack_29988 + uVar16 * 8 + 8);
        local_70 = (uint)*(byte *)(lVar18 + 2);
        if (*(byte *)(lVar19 + 2) == *(byte *)(lVar18 + 2)) {
          local_6c = (uint)*(byte *)(lVar19 + 4);
          if (2 < local_6c) {
            local_6c = 0;
          }
          local_70 = (uint)*(byte *)(lVar18 + 4);
          if (2 < local_70) {
            local_70 = 0;
          }
          if (local_6c != local_70) goto LAB_028e9b24;
          local_6c = (uint)*(ushort *)(lVar19 + 6);
          if (0x14 < local_6c) {
            local_6c = 0;
          }
          local_70 = (uint)*(ushort *)(lVar18 + 6);
          if (0x14 < local_70) {
            local_70 = 0;
          }
          lVar19 = lVar18;
          if (local_6c != local_70) goto LAB_028e9b24;
        }
        else {
LAB_028e9b24:
          lVar19 = lVar18;
          if (local_70 <= local_6c) {
            lVar19 = *(long *)(puStack_29988 + uVar16 * 8);
            *(long *)(puStack_29988 + uVar16 * 8) = lVar18;
            uVar17 = (uint)uVar16;
            *(long *)(puStack_29988 + uVar16 * 8 + 8) = lVar19;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar15 != uVar16);
      if ((int)uVar17 <= (int)uVar14) break;
      lVar19 = *(long *)(puStack_29988 + (ulong)uVar17 * 8);
      uVar16 = (ulong)uVar17;
      uVar14 = uVar17;
      do {
        local_6c = (uint)*(byte *)(lVar19 + 2);
        lVar18 = *(long *)(puStack_29988 + uVar16 * 8 + -8);
        local_70 = (uint)*(byte *)(lVar18 + 2);
        if (*(byte *)(lVar19 + 2) == *(byte *)(lVar18 + 2)) {
          local_6c = (uint)*(byte *)(lVar19 + 4);
          if (2 < local_6c) {
            local_6c = 0;
          }
          local_70 = (uint)*(byte *)(lVar18 + 4);
          if (2 < local_70) {
            local_70 = 0;
          }
          if (local_6c != local_70) goto LAB_028e9c14;
          local_6c = (uint)*(ushort *)(lVar19 + 6);
          if (0x14 < local_6c) {
            local_6c = 0;
          }
          local_70 = (uint)*(ushort *)(lVar18 + 6);
          if (0x14 < local_70) {
            local_70 = 0;
          }
          lVar19 = lVar18;
          if (local_6c != local_70) goto LAB_028e9c14;
        }
        else {
LAB_028e9c14:
          lVar19 = lVar18;
          if (local_6c < local_70) {
            lVar19 = *(long *)(puStack_29988 + uVar16 * 8);
            *(long *)(puStack_29988 + uVar16 * 8) = lVar18;
            uVar14 = (uint)uVar16;
            *(long *)(puStack_29988 + uVar16 * 8 + -8) = lVar19;
          }
        }
        uVar16 = uVar16 - 1;
      } while ((long)uVar12 < (long)uVar16);
    } while (uVar14 != uVar17);
    iVar5 = (int)uStack_29990;
  }
  if (iVar5 != 0) {
    uVar16 = 0;
    lVar19 = (long)iVar5 << 3;
    puVar21 = param_1;
    do {
      puVar22 = *(undefined8 **)(puStack_29988 + uVar16 * 8);
      puVar2 = puVar21;
      if (0x25 < uVar16) {
        puVar2 = param_1;
      }
      *puVar2 = *puVar22;
      *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar22 + 1);
      *(undefined2 *)((long)puVar2 + 0xc) = *(undefined2 *)((long)puVar22 + 0xc);
      *(undefined1 *)((long)puVar2 + 0xe) = *(undefined1 *)((long)puVar22 + 0xe);
      *(undefined1 *)((long)puVar2 + 0xf) = *(undefined1 *)((long)puVar22 + 0xf);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar22 + 2);
      *(undefined2 *)((long)puVar2 + 0x14) = *(undefined2 *)((long)puVar22 + 0x14);
      *(undefined1 *)((long)puVar2 + 0x16) = *(undefined1 *)((long)puVar22 + 0x16);
      *(undefined1 *)((long)puVar2 + 0x17) = *(undefined1 *)((long)puVar22 + 0x17);
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar22 + 3);
      *(undefined2 *)((long)puVar2 + 0x1c) = *(undefined2 *)((long)puVar22 + 0x1c);
      *(undefined1 *)((long)puVar2 + 0x1e) = *(undefined1 *)((long)puVar22 + 0x1e);
      *(undefined1 *)((long)puVar2 + 0x1f) = *(undefined1 *)((long)puVar22 + 0x1f);
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar22 + 4);
      *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(puVar22 + 5);
      *(undefined4 *)((long)puVar2 + 0x2c) = *(undefined4 *)((long)puVar22 + 0x2c);
      puVar2[6] = puVar22[6];
      puVar2[7] = puVar22[7];
      uVar7 = puVar22[8];
      uVar10 = puVar22[9];
      uVar13 = puVar22[0xb];
      puVar2[10] = puVar22[10];
      puVar2[0xb] = uVar13;
      puVar2[8] = uVar7;
      puVar2[9] = uVar10;
      uVar13 = puVar22[0xe];
      uVar7 = puVar22[0xc];
      uVar10 = puVar22[0xd];
      *(undefined1 *)(puVar2 + 0xf) = *(undefined1 *)(puVar22 + 0xf);
      puVar2[0xd] = uVar10;
      puVar2[0xe] = uVar13;
      puVar2[0xc] = uVar7;
      uVar7 = *(undefined8 *)((long)puVar22 + 0x7c);
      uVar10 = *(undefined8 *)((long)puVar22 + 0x84);
      *(undefined8 *)((long)puVar2 + 0x8c) = *(undefined8 *)((long)puVar22 + 0x8c);
      *(undefined8 *)((long)puVar2 + 0x84) = uVar10;
      *(undefined8 *)((long)puVar2 + 0x7c) = uVar7;
      uVar17 = *(uint *)((long)puVar22 + 0x94);
      if (1 < uVar17) {
        uVar17 = 0;
      }
      *(uint *)((long)puVar2 + 0x94) = uVar17;
      *(undefined1 *)(puVar2 + 0x13) = *(undefined1 *)(puVar22 + 0x13);
      *(undefined1 *)((long)puVar2 + 0x99) = *(undefined1 *)((long)puVar22 + 0x99);
      *(undefined2 *)((long)puVar2 + 0x9a) = *(undefined2 *)((long)puVar22 + 0x9a);
      uVar7 = puVar22[0x15];
      puVar2[0x14] = puVar22[0x14];
      puVar2[0x15] = uVar7;
      uVar13 = puVar22[0x18];
      uVar7 = puVar22[0x16];
      uVar10 = puVar22[0x17];
      *(undefined8 *)((long)puVar2 + 0xc5) = *(undefined8 *)((long)puVar22 + 0xc5);
      puVar2[0x17] = uVar10;
      puVar2[0x18] = uVar13;
      puVar2[0x16] = uVar7;
      memcpy((void *)((long)puVar2 + 0xcd),(void *)((long)puVar22 + 0xcd),0x800);
      uVar3 = *(undefined1 *)((long)puVar22 + 0x8cd);
      *(undefined2 *)((long)puVar2 + 0x8ce) = 0;
      *(undefined1 *)((long)puVar2 + 0x8cd) = uVar3;
      FUN_027c1b80(puVar2 + 5);
      *(undefined4 *)(puVar2 + 0x11a) = *(undefined4 *)(puVar22 + 0x11a);
      *(undefined4 *)((long)puVar2 + 0x8d4) = *(undefined4 *)((long)puVar22 + 0x8d4);
      puVar2[0x11b] = puVar22[0x11b];
      puVar2[0x11c] = puVar22[0x11c];
      uVar7 = puVar22[0x11d];
      uVar10 = puVar22[0x11e];
      uVar13 = puVar22[0x11f];
      puVar2[0x120] = puVar22[0x120];
      puVar2[0x11f] = uVar13;
      puVar2[0x11e] = uVar10;
      puVar2[0x11d] = uVar7;
      uVar7 = puVar22[0x121];
      uVar10 = puVar22[0x122];
      uVar13 = puVar22[0x123];
      *(undefined1 *)(puVar2 + 0x124) = *(undefined1 *)(puVar22 + 0x124);
      puVar2[0x123] = uVar13;
      puVar2[0x122] = uVar10;
      puVar2[0x121] = uVar7;
      uVar7 = *(undefined8 *)((long)puVar22 + 0x924);
      uVar10 = *(undefined8 *)((long)puVar22 + 0x92c);
      *(undefined8 *)((long)puVar2 + 0x934) = *(undefined8 *)((long)puVar22 + 0x934);
      *(undefined8 *)((long)puVar2 + 0x92c) = uVar10;
      *(undefined8 *)((long)puVar2 + 0x924) = uVar7;
      uVar17 = *(uint *)((long)puVar22 + 0x93c);
      if (1 < uVar17) {
        uVar17 = 0;
      }
      *(uint *)((long)puVar2 + 0x93c) = uVar17;
      *(undefined1 *)(puVar2 + 0x128) = *(undefined1 *)(puVar22 + 0x128);
      *(undefined1 *)((long)puVar2 + 0x941) = *(undefined1 *)((long)puVar22 + 0x941);
      *(undefined2 *)((long)puVar2 + 0x942) = *(undefined2 *)((long)puVar22 + 0x942);
      uVar7 = puVar22[0x129];
      puVar2[0x12a] = puVar22[0x12a];
      puVar2[0x129] = uVar7;
      uVar7 = puVar22[299];
      uVar10 = puVar22[300];
      uVar13 = puVar22[0x12d];
      *(undefined8 *)((long)puVar2 + 0x96d) = *(undefined8 *)((long)puVar22 + 0x96d);
      puVar2[0x12d] = uVar13;
      puVar2[300] = uVar10;
      puVar2[299] = uVar7;
      memcpy((void *)((long)puVar2 + 0x975),(void *)((long)puVar22 + 0x975),0x800);
      uVar3 = *(undefined1 *)((long)puVar22 + 0x1175);
      *(undefined2 *)((long)puVar2 + 0x1176) = 0;
      *(undefined1 *)((long)puVar2 + 0x1175) = uVar3;
      FUN_027c1b80(puVar2 + 0x11a);
      FUN_028e4260(puVar2,uVar16 & 0xffffffff);
      uVar16 = uVar16 + 1;
      puVar21 = puVar21 + 0x22f;
      lVar19 = lVar19 + -8;
    } while (lVar19 != 0);
  }
  return;
}

