
undefined8
FUN_0269b5c0(byte *param_1,long *param_2,undefined4 *param_3,uint *param_4,uint *param_5,
            ulong param_6)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  undefined4 uVar16;
  char cVar17;
  ushort uVar18;
  uint *puVar19;
  int *piVar20;
  undefined *puVar21;
  char *pcVar22;
  long lVar23;
  uint *puVar24;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  ulong local_108;
  byte local_100 [4];
  uint local_fc;
  undefined8 local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  ulong local_d4;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  int local_94;
  undefined *local_90;
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 local_7c [7];
  undefined1 local_75;
  uint local_6c;
  
  uVar6 = *param_5;
  local_75 = 0;
  local_80 = 8;
  local_7c[0] = 0;
  local_88 = local_7c;
  local_90 = PTR_DAT_04bb3768 + 0x10;
  local_6c = uVar6;
  FUN_038d1270(&local_90,"-----");
  if ((ulong)*param_1 < 0x23) {
    FUN_038d1270(&local_90,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0),
                 param_1[1]);
    uVar6 = local_6c;
  }
  if (((param_6 & 1) == 0) && (uVar6 == 0)) {
    *(undefined2 *)param_2 = *(undefined2 *)(param_1 + 0x13214);
    *(byte *)((long)param_2 + 2) = param_1[0x13216];
    *(byte *)((long)param_2 + 3) = param_1[0x13217];
    *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)(param_1 + 0x13218);
    *(undefined2 *)param_3 = *(undefined2 *)(param_1 + 0x1321c);
    *(byte *)((long)param_3 + 2) = param_1[0x1321e];
    *(byte *)((long)param_3 + 3) = param_1[0x1321f];
    param_3[1] = *(undefined4 *)(param_1 + 0x13220);
    *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x13224);
    *(byte *)((long)param_4 + 2) = param_1[0x13226];
    *(byte *)((long)param_4 + 3) = param_1[0x13227];
    uVar6 = *(uint *)(param_1 + 0x13228);
LAB_0269b6d4:
    param_4[1] = uVar6;
LAB_0269b6d8:
    uVar9 = 1;
  }
  else {
    lVar15 = *(long *)PTR_DAT_04bb3968;
    uVar6 = *(uint *)(lVar15 + 0x16e78);
    uVar7 = uVar6;
    if ((int)uVar6 < 1) {
      lVar23 = *(long *)(lVar15 + 0x16d68);
      if ((lVar23 != 0) && (puVar24 = *(uint **)(lVar23 + 8), puVar24 != (uint *)0x0)) {
        uVar7 = *puVar24;
        goto joined_r0x0269b79c;
      }
    }
    else {
joined_r0x0269b79c:
      if (local_6c < uVar7) {
        if ((param_6 & 1) == 0) {
          local_f8 = CONCAT44(local_f8._4_4_,(uint)param_1[0x1315b]);
          if (param_1[0x1315b] == local_6c) goto LAB_0269b7a0;
        }
        if (local_6c == 0x12) {
          FUN_021df2d0(&local_f8,&local_90);
          *(undefined4 *)param_2 = (undefined4)local_f8;
          *(undefined4 *)((long)param_2 + 4) = local_f8._4_4_;
          FUN_021df470(&local_f8,&local_90);
          *param_3 = (undefined4)local_f8;
          param_3[1] = local_f8._4_4_;
LAB_0269b75c:
          puVar21 = PTR_DAT_04bb37e0;
          *(undefined2 *)param_4 = *(undefined2 *)PTR_DAT_04bb37e0;
          *(undefined *)((long)param_4 + 2) = puVar21[2];
          *(undefined *)((long)param_4 + 3) = puVar21[3];
          uVar6 = *(uint *)(puVar21 + 4);
          goto LAB_0269b6d4;
        }
        if ((int)uVar6 < 1) {
          lVar23 = *(long *)(lVar15 + 0x16d68);
          if ((((lVar23 == 0) || (puVar24 = *(uint **)(lVar23 + 8), puVar24 == (uint *)0x0)) ||
              ((local_6c < *(uint *)(lVar15 + 0x16d80) &&
               (*(char *)(*(long *)(lVar15 + 0x16d88) + (long)(int)local_6c) == '\0')))) ||
             (((*puVar24 <= local_6c || (puVar24[1] == 0)) || ((ushort)puVar24[2] == 0))))
          goto LAB_0269b85c;
          iVar8 = 0xc;
          if (*(char *)((long)puVar24 + 10) != '\0') {
            iVar8 = 0x1c;
          }
          puVar24 = (uint *)((ulong)(puVar24[1] * local_6c + (uint)(ushort)puVar24[2] * 8 + iVar8) +
                            (long)puVar24);
        }
        else if (local_6c < uVar6) {
          uVar6 = local_6c;
          if (*(uint *)(lVar15 + 0x16e68) <= local_6c) {
            uVar6 = 0;
          }
          puVar24 = *(uint **)(*(long *)(lVar15 + 0x16e70) + (ulong)uVar6 * 8);
        }
        else {
LAB_0269b85c:
          puVar24 = (uint *)0x0;
        }
        uVar9 = *(undefined8 *)PTR_DAT_04bb4138;
        (**(code **)(local_90 + 0x18))(&local_90);
        uVar5 = FUN_006bd550(local_88,0);
        local_f8 = CONCAT44(local_f8._4_4_,uVar5);
        puVar10 = (uint *)FUN_0079e770(uVar9,&local_f8);
        if (puVar24 == (uint *)0x0) {
          return 0;
        }
        if (puVar10 == (uint *)0x0) {
          return 0;
        }
        local_f8 = 0;
        local_d8 = 0;
        *(undefined2 *)param_2 = *(undefined2 *)(param_1 + 0x125ec);
        *(byte *)((long)param_2 + 2) = param_1[0x125ee];
        *(byte *)((long)param_2 + 3) = param_1[0x125ef];
        *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)(param_1 + 0x125f0);
        *(undefined2 *)param_3 = *(undefined2 *)(param_1 + 0x12644);
        *(byte *)((long)param_3 + 2) = param_1[0x12646];
        *(byte *)((long)param_3 + 3) = param_1[0x12647];
        param_3[1] = *(undefined4 *)(param_1 + 0x12648);
        *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x12618);
        *(byte *)((long)param_4 + 2) = param_1[0x1261a];
        *(byte *)((long)param_4 + 3) = param_1[0x1261b];
        local_e0 = 0xfffe00000000;
        param_4[1] = *(uint *)(param_1 + 0x1261c);
        FUN_0277d4ac((long)&local_e0 + 4);
        puVar2 = PTR_DAT_04bc2860;
        puVar21 = PTR_DAT_04bc2858;
        local_d4 = 0;
        local_b8 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_94 = 0;
        local_9c = 0;
        local_a4 = 0;
        local_ac = 0;
        if (*puVar24 == 0) {
LAB_0269ba4c:
          uVar6 = 0;
        }
        else {
          cVar17 = *PTR_DAT_04bc2858;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *puVar21 = 1;
              *(undefined4 *)(puVar2 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
            }
            else {
              uVar6 = *(uint *)(puVar2 + 0x10);
              if (-1 < (int)uVar6) {
                if (((uint *)((ulong)uVar6 + (long)puVar24) == (uint *)0x0) ||
                   (uVar6 = *(uint *)((ulong)uVar6 + (long)puVar24), 0x32 < uVar6))
                goto LAB_0269ba4c;
                goto LAB_0269ba50;
              }
              if (uVar6 != 0xffffffff) goto LAB_0269ba4c;
            }
            puVar19 = (uint *)(ulong)*puVar24;
            uVar6 = 0;
            if ((*puVar24 == 0) || (puVar24 == puVar19)) goto LAB_0269ba50;
            lVar15 = 0xc;
            if (*(char *)((long)puVar24 + (10 - (long)puVar19)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar24 + (lVar15 - (long)puVar19);
            if (lVar15 == 0) goto LAB_0269ba4c;
            uVar12 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar19));
            *(undefined4 *)(puVar2 + 0x10) = 0xfffffffe;
            uVar6 = 0;
            if (uVar12 == 0) goto LAB_0269ba50;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != -0x189a4aac) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                uVar6 = 0;
                goto LAB_0269ba50;
              }
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)(puVar2 + 0x10) = iVar8;
          } while (*puVar24 != 0);
          uVar6 = 0;
        }
LAB_0269ba50:
        local_f8 = CONCAT44(uVar6,local_6c);
        if (*puVar24 == 0) {
LAB_0269bb38:
          iVar8 = 0;
        }
        else {
          cVar17 = *puVar21;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *puVar21 = 1;
              *(undefined4 *)(puVar2 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
            }
            else {
              uVar6 = *(uint *)(puVar2 + 0xc);
              if (-1 < (int)uVar6) {
                if ((int *)((ulong)uVar6 + (long)puVar24) == (int *)0x0) goto LAB_0269bb38;
                iVar8 = *(int *)((ulong)uVar6 + (long)puVar24);
                goto LAB_0269bb3c;
              }
              if (uVar6 != 0xffffffff) goto LAB_0269bb38;
            }
            puVar19 = (uint *)(ulong)*puVar24;
            iVar8 = 0;
            if ((*puVar24 == 0) || (puVar24 == puVar19)) goto LAB_0269bb3c;
            lVar15 = 0xc;
            if (*(char *)((long)puVar24 + (10 - (long)puVar19)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar24 + (lVar15 - (long)puVar19);
            if (lVar15 == 0) goto LAB_0269bb38;
            uVar12 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar19));
            *(undefined4 *)(puVar2 + 0xc) = 0xfffffffe;
            iVar8 = 0;
            if (uVar12 == 0) goto LAB_0269bb3c;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != 0x1f401b52) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                iVar8 = 0;
                goto LAB_0269bb3c;
              }
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)(puVar2 + 0xc) = iVar8;
          } while (*puVar24 != 0);
          iVar8 = 0;
        }
LAB_0269bb3c:
        local_f0 = (float)iVar8;
        if (*puVar24 == 0) {
LAB_0269bc28:
          iVar8 = 0;
        }
        else {
          cVar17 = *puVar21;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *puVar21 = 1;
              *(undefined4 *)(puVar2 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
            }
            else {
              uVar6 = *(uint *)(puVar2 + 0x18);
              if (-1 < (int)uVar6) {
                if ((int *)((ulong)uVar6 + (long)puVar24) == (int *)0x0) goto LAB_0269bc28;
                iVar8 = *(int *)((ulong)uVar6 + (long)puVar24);
                goto LAB_0269bc2c;
              }
              if (uVar6 != 0xffffffff) goto LAB_0269bc28;
            }
            puVar19 = (uint *)(ulong)*puVar24;
            iVar8 = 0;
            if ((*puVar24 == 0) || (puVar24 == puVar19)) goto LAB_0269bc2c;
            lVar15 = 0xc;
            if (*(char *)((long)puVar24 + (10 - (long)puVar19)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar24 + (lVar15 - (long)puVar19);
            if (lVar15 == 0) goto LAB_0269bc28;
            uVar12 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar19));
            *(undefined4 *)(puVar2 + 0x18) = 0xfffffffe;
            iVar8 = 0;
            if (uVar12 == 0) goto LAB_0269bc2c;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != 0x79be959d) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                iVar8 = 0;
                goto LAB_0269bc2c;
              }
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)(puVar2 + 0x18) = iVar8;
          } while (*puVar24 != 0);
          iVar8 = 0;
        }
LAB_0269bc2c:
        local_ec = (float)iVar8;
        if (*puVar24 == 0) {
LAB_0269bd18:
          iVar8 = 0;
        }
        else {
          cVar17 = *puVar21;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *puVar21 = 1;
              *(undefined4 *)(puVar2 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
            }
            else {
              uVar6 = *(uint *)(puVar2 + 0x1c);
              if (-1 < (int)uVar6) {
                if ((int *)((ulong)uVar6 + (long)puVar24) == (int *)0x0) goto LAB_0269bd18;
                iVar8 = *(int *)((ulong)uVar6 + (long)puVar24);
                goto LAB_0269bd1c;
              }
              if (uVar6 != 0xffffffff) goto LAB_0269bd18;
            }
            puVar19 = (uint *)(ulong)*puVar24;
            iVar8 = 0;
            if ((*puVar24 == 0) || (puVar24 == puVar19)) goto LAB_0269bd1c;
            lVar15 = 0xc;
            if (*(char *)((long)puVar24 + (10 - (long)puVar19)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar24 + (lVar15 - (long)puVar19);
            if (lVar15 == 0) goto LAB_0269bd18;
            uVar12 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar19));
            *(undefined4 *)(puVar2 + 0x1c) = 0xfffffffe;
            iVar8 = 0;
            if (uVar12 == 0) goto LAB_0269bd1c;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != -0x5c2383b4) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                iVar8 = 0;
                goto LAB_0269bd1c;
              }
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)(puVar2 + 0x1c) = iVar8;
          } while (*puVar24 != 0);
          iVar8 = 0;
        }
LAB_0269bd1c:
        local_e8 = (float)iVar8;
        local_e4 = 0;
        if (*puVar24 != 0) {
          cVar17 = *puVar21;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *puVar21 = 1;
              *(undefined4 *)(puVar2 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
            }
            else {
              uVar6 = *(uint *)(puVar2 + 0x14);
              if (-1 < (int)uVar6) {
                if ((undefined4 *)((ulong)uVar6 + (long)puVar24) != (undefined4 *)0x0) {
                  local_e4 = *(undefined4 *)((ulong)uVar6 + (long)puVar24);
                }
                break;
              }
              if (uVar6 != 0xffffffff) break;
            }
            lVar15 = (long)puVar24 - (ulong)*puVar24;
            if ((*puVar24 == 0) || (lVar15 == 0)) break;
            lVar23 = 0xc;
            if (*(char *)(lVar15 + 10) != '\0') {
              lVar23 = 0x1c;
            }
            if (lVar23 + lVar15 == 0) break;
            uVar12 = (ulong)*(ushort *)(lVar15 + 8);
            *(undefined4 *)(puVar2 + 0x14) = 0xfffffffe;
            puVar21 = PTR_DAT_04bc2858;
            if (uVar12 == 0) break;
            piVar20 = (int *)(lVar23 + lVar15 + 4);
            while (piVar20[-1] != -0x344162d3) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_0269be04;
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)(puVar2 + 0x14) = iVar8;
            if (*puVar24 == 0) break;
          } while( true );
        }
LAB_0269be04:
        uVar5 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
        puVar2 = PTR_DAT_04bb40b8;
        puVar21 = PTR_DAT_04bb40b0;
        local_e0 = CONCAT44(local_e0._4_4_,uVar5);
        if (*puVar10 != 0) {
          cVar17 = *PTR_DAT_04bb40b0;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *puVar21 = 1;
              *(undefined4 *)(puVar2 + 0xa0) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
            }
            else {
              uVar6 = *(uint *)(puVar2 + 0x50);
              if (-1 < (int)uVar6) {
                if ((ushort *)((ulong)uVar6 + (long)puVar10) != (ushort *)0x0) {
                  uVar18 = *(ushort *)((ulong)uVar6 + (long)puVar10);
                  goto LAB_0269bf20;
                }
                break;
              }
              if (uVar6 != 0xffffffff) break;
            }
            puVar19 = (uint *)(ulong)*puVar10;
            uVar18 = 0xfffe;
            if ((*puVar10 == 0) || (puVar10 == puVar19)) goto LAB_0269bf20;
            lVar15 = 0xc;
            if (*(char *)((long)puVar10 + (10 - (long)puVar19)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar10 + (lVar15 - (long)puVar19);
            if (lVar15 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar19));
            *(undefined4 *)(puVar2 + 0x50) = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != -0x78f0e1d7) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_0269bf1c;
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)(puVar2 + 0x50) = iVar8;
            if (*puVar10 == 0) break;
          } while( true );
        }
LAB_0269bf1c:
        uVar18 = 0xfffe;
LAB_0269bf20:
        local_118 = (undefined *)(ulong)uVar18;
        FUN_0277d4ac(&local_118);
        uVar6 = 0;
        local_e0 = CONCAT44((uint)local_118,(undefined4)local_e0);
        local_d8 = local_118._4_4_;
        puVar19 = (uint *)((long)puVar10 - (ulong)*puVar10);
        if ((*puVar10 != 0) && (puVar19 != (uint *)0x0)) {
          uVar6 = 0;
          if (*puVar19 != 0) {
            uVar6 = puVar19[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar19 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar19 + lVar15 + (ulong)(ushort)puVar19[2] * 8;
              if (lVar15 != 0) {
                uVar7 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar7 = (uint)((ulong)((long)puVar10 - lVar15) / (ulong)uVar6);
                }
                if (*puVar19 <= uVar7) {
                  uVar7 = 0xffffffff;
                }
                if ((uVar7 < *(uint *)PTR_DAT_04bb9bf8) &&
                   (uVar6 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bb9bf8 + 8) + (long)(int)uVar7 * 2),
                   uVar6 < 3)) goto LAB_0269bfd8;
              }
            }
            uVar6 = 0;
          }
        }
LAB_0269bfd8:
        puVar19 = (uint *)((long)puVar10 - (ulong)*puVar10);
        if ((((*puVar10 == 0) || (puVar19 == (uint *)0x0)) || (*puVar19 == 0)) ||
           ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0)))) {
LAB_0269c070:
          local_fc = 0;
          local_cc = true;
          local_d4 = (ulong)uVar6;
        }
        else {
          lVar15 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar19 + lVar15 + (ulong)(ushort)puVar19[2] * 8;
          if (lVar15 == 0) goto LAB_0269c070;
          uVar14 = 0;
          if ((ulong)uVar7 != 0) {
            uVar14 = (uint)((ulong)((long)puVar10 - lVar15) / (ulong)uVar7);
          }
          if (*puVar19 <= uVar14) {
            uVar14 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bb6a50 <= uVar14) ||
             (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bb6a50 + 8) + (long)(int)uVar14 * 2),
             7 < uVar18)) goto LAB_0269c070;
          local_fc = (uint)uVar18;
          local_cc = local_fc < 4;
          local_d4 = (ulong)CONCAT24(uVar18,uVar6);
        }
        if (*puVar10 == 0) {
LAB_0269c180:
          uVar6 = 0;
        }
        else {
          cVar17 = *puVar21;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *puVar21 = 1;
              *(undefined4 *)(puVar2 + 0xa0) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
            }
            else {
              uVar6 = *(uint *)(puVar2 + 0x68);
              if (-1 < (int)uVar6) {
                if (((byte *)((long)puVar10 + (ulong)uVar6) == (byte *)0x0) ||
                   (bVar13 = *(byte *)((long)puVar10 + (ulong)uVar6), uVar6 = (uint)bVar13,
                   0xe < bVar13)) goto LAB_0269c180;
                goto LAB_0269c184;
              }
              if (uVar6 != 0xffffffff) goto LAB_0269c180;
            }
            puVar19 = (uint *)(ulong)*puVar10;
            uVar6 = 0;
            if ((*puVar10 == 0) || (puVar10 == puVar19)) goto LAB_0269c184;
            lVar15 = 0xc;
            if (*(char *)((long)puVar10 + (10 - (long)puVar19)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar10 + (lVar15 - (long)puVar19);
            if (lVar15 == 0) goto LAB_0269c180;
            uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar19));
            *(undefined4 *)(puVar2 + 0x68) = 0xfffffffe;
            uVar6 = 0;
            if (uVar12 == 0) goto LAB_0269c184;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != 0x34eb5dc3) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                uVar6 = 0;
                goto LAB_0269c184;
              }
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)(puVar2 + 0x68) = iVar8;
          } while (*puVar10 != 0);
          uVar6 = 0;
        }
LAB_0269c184:
        if (*puVar10 == 0) {
LAB_0269c280:
          uVar7 = 0;
        }
        else {
          cVar17 = *puVar21;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *puVar21 = 1;
              *(undefined4 *)(puVar2 + 0xa0) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
            }
            else {
              uVar7 = *(uint *)(puVar2 + 0x6c);
              if (-1 < (int)uVar7) {
                if (((byte *)((long)puVar10 + (ulong)uVar7) == (byte *)0x0) ||
                   (bVar13 = *(byte *)((long)puVar10 + (ulong)uVar7), uVar7 = (uint)bVar13,
                   0xe < bVar13)) goto LAB_0269c280;
                goto LAB_0269c284;
              }
              if (uVar7 != 0xffffffff) goto LAB_0269c280;
            }
            puVar19 = (uint *)(ulong)*puVar10;
            uVar7 = 0;
            if ((*puVar10 == 0) || (puVar10 == puVar19)) goto LAB_0269c284;
            lVar15 = 0xc;
            if (*(char *)((long)puVar10 + (10 - (long)puVar19)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar10 + (lVar15 - (long)puVar19);
            if (lVar15 == 0) goto LAB_0269c280;
            uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar19));
            *(undefined4 *)(puVar2 + 0x6c) = 0xfffffffe;
            uVar7 = 0;
            if (uVar12 == 0) goto LAB_0269c284;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != 0x265ef22d) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                uVar7 = 0;
                goto LAB_0269c284;
              }
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)(puVar2 + 0x6c) = iVar8;
          } while (*puVar10 != 0);
          uVar7 = 0;
        }
LAB_0269c284:
        local_c8 = CONCAT44(uVar7,uVar6);
        if (*puVar10 == 0) {
LAB_0269c37c:
          uVar6 = 0;
        }
        else {
          cVar17 = *puVar21;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *puVar21 = 1;
              *(undefined4 *)(puVar2 + 0xa0) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
            }
            else {
              uVar6 = *(uint *)(puVar2 + 8);
              if (-1 < (int)uVar6) {
                if (((uint *)((long)puVar10 + (ulong)uVar6) == (uint *)0x0) ||
                   (uVar6 = *(uint *)((long)puVar10 + (ulong)uVar6), 6 < uVar6)) goto LAB_0269c37c;
                goto LAB_0269c380;
              }
              if (uVar6 != 0xffffffff) goto LAB_0269c37c;
            }
            puVar19 = (uint *)(ulong)*puVar10;
            uVar6 = 0;
            if ((*puVar10 == 0) || (puVar10 == puVar19)) goto LAB_0269c380;
            lVar15 = 0xc;
            if (*(char *)((long)puVar10 + (10 - (long)puVar19)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar10 + (lVar15 - (long)puVar19);
            if (lVar15 == 0) goto LAB_0269c37c;
            uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar19));
            *(undefined4 *)(puVar2 + 8) = 0xfffffffe;
            uVar6 = 0;
            if (uVar12 == 0) goto LAB_0269c380;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != 0x5ef86f1f) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                uVar6 = 0;
                goto LAB_0269c380;
              }
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)(puVar2 + 8) = iVar8;
          } while (*puVar10 != 0);
          uVar6 = 0;
        }
LAB_0269c380:
        if (*puVar10 == 0) {
LAB_0269c47c:
          uVar7 = 0;
        }
        else {
          cVar17 = *puVar21;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *puVar21 = 1;
              *(undefined4 *)(puVar2 + 0xa0) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
            }
            else {
              uVar7 = *(uint *)(puVar2 + 0xc);
              if (-1 < (int)uVar7) {
                if (((uint *)((long)puVar10 + (ulong)uVar7) == (uint *)0x0) ||
                   (uVar7 = *(uint *)((long)puVar10 + (ulong)uVar7), 6 < uVar7)) goto LAB_0269c47c;
                goto LAB_0269c480;
              }
              if (uVar7 != 0xffffffff) goto LAB_0269c47c;
            }
            puVar19 = (uint *)(ulong)*puVar10;
            uVar7 = 0;
            if ((*puVar10 == 0) || (puVar10 == puVar19)) goto LAB_0269c480;
            lVar15 = 0xc;
            if (*(char *)((long)puVar10 + (10 - (long)puVar19)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar10 + (lVar15 - (long)puVar19);
            if (lVar15 == 0) goto LAB_0269c47c;
            uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar19));
            *(undefined4 *)(puVar2 + 0xc) = 0xfffffffe;
            uVar7 = 0;
            if (uVar12 == 0) goto LAB_0269c480;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != 0x195815cf) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                uVar7 = 0;
                goto LAB_0269c480;
              }
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)(puVar2 + 0xc) = iVar8;
          } while (*puVar10 != 0);
          uVar7 = 0;
        }
LAB_0269c480:
        local_c0 = CONCAT44(uVar7,uVar6);
        uVar6 = *puVar10;
        if (uVar6 != 0) {
          cVar17 = *puVar21;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *puVar21 = 1;
              *(undefined4 *)(puVar2 + 0xa0) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
              uVar6 = *puVar10;
            }
            else {
              uVar7 = *(uint *)puVar2;
              if (-1 < (int)uVar7) {
                if (((uint *)((long)puVar10 + (ulong)uVar7) != (uint *)0x0) &&
                   (uVar6 = *(uint *)((long)puVar10 + (ulong)uVar7), uVar6 < 0x33))
                goto LAB_0269c580;
                break;
              }
              if (uVar7 != 0xffffffff) break;
            }
            puVar19 = (uint *)(ulong)uVar6;
            uVar6 = 0;
            if ((puVar19 == (uint *)0x0) || (puVar10 == puVar19)) goto LAB_0269c580;
            lVar15 = 0xc;
            if (*(char *)((long)puVar10 + (10 - (long)puVar19)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar10 + (lVar15 - (long)puVar19);
            uVar6 = 0;
            if (lVar15 == 0) goto LAB_0269c580;
            uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar19));
            *(undefined4 *)puVar2 = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != -0x5ab06d03) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_0269c57c;
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)puVar2 = iVar8;
            uVar6 = *puVar10;
            if (uVar6 == 0) break;
          } while( true );
        }
LAB_0269c57c:
        uVar6 = 0;
LAB_0269c580:
        if (*puVar10 == 0) {
LAB_0269c67c:
          uVar7 = 0;
        }
        else {
          cVar17 = *puVar21;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar2 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *puVar21 = 1;
              *(undefined4 *)(puVar2 + 0xa0) = 0xffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
            }
            else {
              uVar7 = *(uint *)(puVar2 + 4);
              if (-1 < (int)uVar7) {
                if (((uint *)((long)puVar10 + (ulong)uVar7) == (uint *)0x0) ||
                   (uVar7 = *(uint *)((long)puVar10 + (ulong)uVar7), 0x32 < uVar7))
                goto LAB_0269c67c;
                goto LAB_0269c680;
              }
              if (uVar7 != 0xffffffff) goto LAB_0269c67c;
            }
            puVar19 = (uint *)(ulong)*puVar10;
            uVar7 = 0;
            if ((*puVar10 == 0) || (puVar10 == puVar19)) goto LAB_0269c680;
            lVar15 = 0xc;
            if (*(char *)((long)puVar10 + (10 - (long)puVar19)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar10 + (lVar15 - (long)puVar19);
            if (lVar15 == 0) goto LAB_0269c67c;
            uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar19));
            *(undefined4 *)(puVar2 + 4) = 0xfffffffe;
            uVar7 = 0;
            if (uVar12 == 0) goto LAB_0269c680;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != -0x1d1017d3) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                uVar7 = 0;
                goto LAB_0269c680;
              }
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)(puVar2 + 4) = iVar8;
          } while (*puVar10 != 0);
          uVar7 = 0;
        }
LAB_0269c680:
        local_b0 = false;
        local_b8 = CONCAT44(uVar7,uVar6);
        uVar6 = local_6c;
        if (((param_6 & 1) != 0) && (local_6c == 0)) {
          if (DAT_05594b4c == '\x01') {
            uVar6 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
            DAT_05582b70 = DAT_05582b74;
            DAT_05582b74 = DAT_05582b78;
            uVar7 = uVar6 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar6 ^ DAT_05582b7c;
            DAT_05582b78 = DAT_05582b7c;
            uVar6 = 0;
            DAT_05582b7c = uVar7;
          }
          else {
            uVar6 = nn::os::GetSystemTick();
            uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
            uVar7 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
            uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
            uVar7 = uVar6 ^ uVar6 * 0x800 ^ (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
            uVar6 = local_6c;
          }
          local_b0 = uVar7 >> 0x1e == 0;
        }
        local_af = 0;
        local_9c = 0;
        local_94 = 0;
        local_ac = 0;
        local_a4 = 0;
        if (((param_6 & 1) == 0) || (uVar6 != 0)) {
          FUN_0252d11c(&local_11c);
          if ((byte)local_11c < 8) {
            local_100[0] = (byte)local_11c;
            lVar15 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_100,1);
            if (lVar15 != 0) {
              local_af = 1;
              local_108 = CONCAT71(local_108._1_7_,1);
              local_110 = (char *)(lVar15 + 0x17f40);
              if (*(long **)(lVar15 + 0x17f68) == (long *)0x0) {
                uVar4 = 0;
              }
              else {
                puVar11 = (undefined8 *)**(long **)(lVar15 + 0x17f68);
                uVar4 = 0;
                if (puVar11 != (undefined8 *)0x0) {
                  uVar4 = (**(code **)*puVar11)();
                }
              }
              local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar4,(undefined1)local_108)) &
                          0xffffffffffff01ff;
              local_118 = PTR_DAT_04bb6c08 + 0x10;
              piVar20 = (int *)(*(long *)(lVar15 + 0x17f50) + *(long *)(lVar15 + 0x17f48));
              if (*piVar20 != 0) {
                local_ac = *(undefined8 *)piVar20;
                local_a4 = *(undefined8 *)(piVar20 + 2);
                local_9c = *(undefined8 *)(piVar20 + 4);
                local_94 = piVar20[6];
              }
              FUN_02640184(&local_118);
            }
          }
          if (local_6c == 0x15) goto LAB_0269c824;
        }
        else {
LAB_0269c824:
          local_af = 1;
        }
        uVar12 = FUN_021ded20();
        uVar6 = 6;
        if ((uVar12 & 1) == 0) {
          uVar6 = 2;
        }
        uVar7 = *puVar24;
        uVar14 = 0;
        if ((uVar7 != 0) && (puVar24 != (uint *)(ulong)uVar7)) {
          puVar10 = (uint *)((long)puVar24 - (long)(ulong)uVar7);
          uVar14 = 0;
          if (*puVar10 != 0) {
            uVar7 = puVar10[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar15 != 0) {
                uVar14 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar14 = (uint)((ulong)((long)puVar24 - lVar15) / (ulong)uVar7);
                }
                if (*puVar10 <= uVar14) {
                  uVar14 = 0xffffffff;
                }
                if ((uVar14 < *(uint *)PTR_DAT_04bc2868) &&
                   (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc2868 + 8) + (long)(int)uVar14 * 2),
                   uVar14 = (uint)uVar18, uVar18 < 4)) goto LAB_0269c8cc;
              }
            }
            uVar14 = 0;
          }
        }
LAB_0269c8cc:
        local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar14);
        uVar12 = FUN_021df610(&local_118);
        if ((uVar12 & 1) == 0) {
          uVar16 = local_d8;
          uVar5 = local_e0._4_4_;
        }
        else {
          local_11c = 9;
          puVar10 = (uint *)((long)puVar24 - (ulong)*puVar24);
          if ((*puVar24 == 0) || (puVar10 == (uint *)0x0)) {
            bVar3 = false;
LAB_0269c9f8:
            uVar14 = 0;
          }
          else {
            uVar18 = 0;
            if (*puVar10 == 0) {
LAB_0269c980:
              bVar3 = uVar18 == 1;
            }
            else {
              uVar7 = puVar10[1];
              if ((uVar7 == 0) || ((ulong)(ushort)puVar10[2] == 0)) {
LAB_0269c97c:
                uVar18 = 0;
                goto LAB_0269c980;
              }
              lVar15 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar15 == 0) goto LAB_0269c97c;
              uVar14 = 0;
              if ((ulong)uVar7 != 0) {
                uVar14 = (uint)((ulong)((long)puVar24 - lVar15) / (ulong)uVar7);
              }
              if (*puVar10 <= uVar14) {
                uVar14 = 0xffffffff;
              }
              if (*(uint *)PTR_DAT_04bc2870 <= uVar14) goto LAB_0269c97c;
              uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc2870 + 8) + (long)(int)uVar14 * 2);
              if (uVar18 < 2) goto LAB_0269c980;
              bVar3 = false;
            }
            if (((*puVar10 == 0) || (uVar7 = puVar10[1], uVar7 == 0)) ||
               ((ulong)(ushort)puVar10[2] == 0)) goto LAB_0269c9f8;
            lVar15 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
            uVar14 = 0;
            if (lVar15 != 0) {
              uVar14 = 0;
              if ((ulong)uVar7 != 0) {
                uVar14 = (uint)((ulong)((long)puVar24 - lVar15) / (ulong)uVar7);
              }
              if (*puVar10 <= uVar14) {
                uVar14 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bc2878 <= uVar14) ||
                 (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc2878 + 8) + (long)(int)uVar14 * 2),
                 uVar14 = (uint)uVar18, 2 < uVar18)) goto LAB_0269c9f8;
            }
          }
          FUN_026b9500(&local_118,param_1,&local_f8,&local_11c,bVar3,
                       uVar6 >> (ulong)(uVar14 & 0x1f) & 1,param_1 + 0x125ec);
          uVar16 = local_118._4_4_;
          uVar5 = (uint)local_118;
        }
        *(undefined4 *)param_2 = uVar5;
        *(undefined4 *)((long)param_2 + 4) = uVar16;
        puVar21 = PTR_DAT_04bb43c0;
        lVar23 = *(long *)PTR_DAT_04bb43c0;
        uVar7 = FUN_0277d6c4(param_2);
        lVar15 = *(long *)puVar21;
        if (lVar15 != 0) {
          lVar23 = *(long *)(lVar23 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar23 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            local_108 = 0;
            local_110 = (char *)*param_2;
            local_118 = PTR_DAT_04bc0510 + 0x10;
            uVar7 = FUN_0277d6c4(&local_110);
            if (*(long *)puVar21 != 0) {
              lVar15 = *(long *)(lVar15 + 0x57e58);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                lVar15 = *(long *)PTR_DAT_04bc0428;
                uVar7 = FUN_0277d6c4(param_2);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                   (uVar12 = *(ulong *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8),
                   uVar12 != 0)) {
                  local_108 = uVar12;
                }
              }
            }
            uVar12 = FUN_01ad9cb4(&local_118);
            if ((uVar12 & 1) != 0) {
              *(undefined4 *)param_2 = local_e0._4_4_;
              *(undefined4 *)((long)param_2 + 4) = local_d8;
            }
          }
        }
        puVar21 = PTR_DAT_04bc2860;
        pcVar22 = PTR_DAT_04bc2858;
        if (*puVar24 == 0) {
          uVar7 = 0;
        }
        else {
          cVar17 = *PTR_DAT_04bc2858;
          do {
            if (cVar17 != '\0') {
              uVar7 = *(uint *)(puVar21 + 0x24);
              if ((int)uVar7 < 0) {
                if (uVar7 == 0xffffffff) goto LAB_0269cb90;
              }
              else if (((byte *)((ulong)uVar7 + (long)puVar24) != (byte *)0x0) &&
                      (bVar13 = *(byte *)((ulong)uVar7 + (long)puVar24), uVar7 = (uint)bVar13,
                      bVar13 < 4)) goto LAB_0269cc14;
LAB_0269cec0:
              uVar7 = 0;
              goto LAB_0269cc14;
            }
            cVar17 = '\x01';
            *(undefined8 *)puVar21 = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 8) = 0xffffffffffffffff;
            *pcVar22 = 1;
            *(undefined4 *)(puVar21 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar21 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x48) = 0xffffffffffffffff;
LAB_0269cb90:
            puVar10 = (uint *)(ulong)*puVar24;
            uVar7 = 0;
            if ((*puVar24 == 0) || (puVar24 == puVar10)) goto LAB_0269cc14;
            lVar15 = 0xc;
            if (*(char *)((long)puVar24 + (10 - (long)puVar10)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar24 + (lVar15 - (long)puVar10);
            if (lVar15 == 0) goto LAB_0269cec0;
            uVar12 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar10));
            *(undefined4 *)(puVar21 + 0x24) = 0xfffffffe;
            uVar7 = 0;
            if (uVar12 == 0) goto LAB_0269cc14;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != -0x6309fc6) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                uVar7 = 0;
                goto LAB_0269cc14;
              }
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)(puVar21 + 0x24) = iVar8;
          } while (*puVar24 != 0);
          uVar7 = 0;
        }
LAB_0269cc14:
        local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar7);
        uVar12 = FUN_021df610(&local_118);
        puVar21 = PTR_DAT_04bc2860;
        if ((uVar12 & 1) == 0) {
          if (local_6c != 0xd) goto LAB_0269ce7c;
          uVar9 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
          local_118 = PTR_DAT_04bb2020 + 0x10;
          local_110 = "WoreNewYearHat";
          iVar8 = FUN_02749340(param_1 + 0x1267c,&local_118);
          if (iVar8 != 0) {
LAB_0269cd58:
            pcVar22 = PTR_DAT_04bc2858;
            FUN_021e2c70(&local_118,local_fc);
            goto LAB_0269cf30;
          }
          if (((uint)((ulong)uVar9 >> 0x20) & 0xff) == 0x17) {
            uVar7 = FUN_021e2c30(local_fc);
            if (uVar7 <= (uint)((int)((ulong)uVar9 >> 0x10) >> 0x18)) goto LAB_0269cd58;
            pcVar22 = PTR_DAT_04bc2858;
          }
          else {
            pcVar22 = PTR_DAT_04bc2858;
            if ((char)((ulong)uVar9 >> 0x20) < '\x05') goto LAB_0269cd58;
          }
LAB_0269ce7c:
          puVar21 = PTR_DAT_04bb37e0;
          *(undefined2 *)param_3 = *(undefined2 *)PTR_DAT_04bb37e0;
          *(undefined *)((long)param_3 + 2) = puVar21[2];
          *(undefined *)((long)param_3 + 3) = puVar21[3];
          param_3[1] = *(undefined4 *)(puVar21 + 4);
        }
        else {
          local_11c = 0x10;
          if (*puVar24 == 0) {
            bVar13 = 0;
          }
          else {
            cVar17 = *pcVar22;
            do {
              if (cVar17 != '\0') {
                uVar7 = *(uint *)(puVar21 + 0x28);
                if ((int)uVar7 < 0) {
                  if (uVar7 == 0xffffffff) goto LAB_0269cc90;
                }
                else {
                  bVar13 = 0;
                  if (((byte *)((ulong)uVar7 + (long)puVar24) == (byte *)0x0) ||
                     (bVar13 = *(byte *)((ulong)uVar7 + (long)puVar24), bVar13 < 2))
                  goto LAB_0269cd6c;
                }
LAB_0269cee0:
                bVar13 = 0;
                goto LAB_0269cd6c;
              }
              cVar17 = '\x01';
              *(undefined8 *)puVar21 = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 8) = 0xffffffffffffffff;
              *pcVar22 = 1;
              *(undefined4 *)(puVar21 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar21 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x48) = 0xffffffffffffffff;
LAB_0269cc90:
              puVar10 = (uint *)(ulong)*puVar24;
              bVar13 = 0;
              if ((*puVar24 == 0) || (puVar24 == puVar10)) goto LAB_0269cd6c;
              lVar15 = 0xc;
              if (*(char *)((long)puVar24 + (10 - (long)puVar10)) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar24 + (lVar15 - (long)puVar10);
              if (lVar15 == 0) goto LAB_0269cee0;
              uVar12 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar10));
              *(undefined4 *)(puVar21 + 0x28) = 0xfffffffe;
              bVar13 = 0;
              if (uVar12 == 0) goto LAB_0269cd6c;
              piVar20 = (int *)(lVar15 + 4);
              while (piVar20[-1] != 0x2c2a379e) {
                piVar20 = piVar20 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) {
                  bVar13 = 0;
                  goto LAB_0269cd6c;
                }
              }
              iVar8 = 0;
              if (*piVar20 != -1) {
                iVar8 = *piVar20;
              }
              *(int *)(puVar21 + 0x28) = iVar8;
            } while (*puVar24 != 0);
            bVar13 = 0;
          }
LAB_0269cd6c:
          if (*puVar24 == 0) {
LAB_0269cf00:
            uVar7 = 0;
          }
          else {
            cVar17 = *pcVar22;
            do {
              if (cVar17 == '\0') {
                cVar17 = '\x01';
                *(undefined8 *)puVar21 = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 8) = 0xffffffffffffffff;
                *pcVar22 = 1;
                *(undefined4 *)(puVar21 + 0x50) = 0xffffffff;
                *(undefined8 *)(puVar21 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x48) = 0xffffffffffffffff;
              }
              else {
                uVar7 = *(uint *)(puVar21 + 0x2c);
                if (-1 < (int)uVar7) {
                  if (((byte *)((ulong)uVar7 + (long)puVar24) == (byte *)0x0) ||
                     (bVar1 = *(byte *)((ulong)uVar7 + (long)puVar24), uVar7 = (uint)bVar1,
                     2 < bVar1)) goto LAB_0269cf00;
                  goto LAB_0269cf04;
                }
                if (uVar7 != 0xffffffff) goto LAB_0269cf00;
              }
              puVar10 = (uint *)(ulong)*puVar24;
              uVar7 = 0;
              if ((*puVar24 == 0) || (puVar24 == puVar10)) goto LAB_0269cf04;
              lVar15 = 0xc;
              if (*(char *)((long)puVar24 + (10 - (long)puVar10)) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar24 + (lVar15 - (long)puVar10);
              if (lVar15 == 0) goto LAB_0269cf00;
              uVar12 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar10));
              *(undefined4 *)(puVar21 + 0x2c) = 0xfffffffe;
              uVar7 = 0;
              if (uVar12 == 0) goto LAB_0269cf04;
              piVar20 = (int *)(lVar15 + 4);
              while (piVar20[-1] != -0x5bc694d7) {
                piVar20 = piVar20 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) {
                  uVar7 = 0;
                  goto LAB_0269cf04;
                }
              }
              iVar8 = 0;
              if (*piVar20 != -1) {
                iVar8 = *piVar20;
              }
              *(int *)(puVar21 + 0x2c) = iVar8;
            } while (*puVar24 != 0);
            uVar7 = 0;
          }
LAB_0269cf04:
          FUN_026b9500(&local_118,param_1,&local_f8,&local_11c,bVar13 == 1,
                       uVar6 >> (ulong)(uVar7 & 0x1f) & 1,param_1 + 0x12644);
LAB_0269cf30:
          *param_3 = (uint)local_118;
          param_3[1] = local_118._4_4_;
        }
        puVar21 = PTR_DAT_04bc2860;
        if (*puVar24 == 0) {
LAB_0269d024:
          uVar7 = 0;
        }
        else {
          cVar17 = *pcVar22;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar21 = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 8) = 0xffffffffffffffff;
              *pcVar22 = '\x01';
              *(undefined4 *)(puVar21 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar21 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x48) = 0xffffffffffffffff;
            }
            else {
              uVar7 = *(uint *)(puVar21 + 0x30);
              if (-1 < (int)uVar7) {
                if (((byte *)((ulong)uVar7 + (long)puVar24) == (byte *)0x0) ||
                   (bVar13 = *(byte *)((ulong)uVar7 + (long)puVar24), uVar7 = (uint)bVar13,
                   3 < bVar13)) goto LAB_0269d024;
                goto LAB_0269d028;
              }
              if (uVar7 != 0xffffffff) goto LAB_0269d024;
            }
            puVar10 = (uint *)(ulong)*puVar24;
            uVar7 = 0;
            if ((*puVar24 == 0) || (puVar24 == puVar10)) goto LAB_0269d028;
            lVar15 = 0xc;
            if (*(char *)((long)puVar24 + (10 - (long)puVar10)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar24 + (lVar15 - (long)puVar10);
            if (lVar15 == 0) goto LAB_0269d024;
            uVar12 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar10));
            *(undefined4 *)(puVar21 + 0x30) = 0xfffffffe;
            uVar7 = 0;
            if (uVar12 == 0) goto LAB_0269d028;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != 0x744b3452) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                uVar7 = 0;
                goto LAB_0269d028;
              }
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)(puVar21 + 0x30) = iVar8;
          } while (*puVar24 != 0);
          uVar7 = 0;
        }
LAB_0269d028:
        local_118._0_4_ = uVar7;
        uVar12 = FUN_021df610(&local_118);
        puVar21 = PTR_DAT_04bc2860;
        if ((uVar12 & 1) == 0) goto LAB_0269b75c;
        local_11c = 0x12;
        if (*puVar24 == 0) {
          bVar13 = 0;
        }
        else {
          cVar17 = *pcVar22;
          do {
            if (cVar17 != '\0') {
              uVar7 = *(uint *)(puVar21 + 0x34);
              if ((int)uVar7 < 0) {
                if (uVar7 == 0xffffffff) goto LAB_0269d0a4;
              }
              else {
                bVar13 = 0;
                if (((byte *)((ulong)uVar7 + (long)puVar24) == (byte *)0x0) ||
                   (bVar13 = *(byte *)((ulong)uVar7 + (long)puVar24), bVar13 < 2))
                goto LAB_0269d124;
              }
LAB_0269d210:
              bVar13 = 0;
              goto LAB_0269d124;
            }
            cVar17 = '\x01';
            *(undefined8 *)puVar21 = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 8) = 0xffffffffffffffff;
            *pcVar22 = '\x01';
            *(undefined4 *)(puVar21 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar21 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x48) = 0xffffffffffffffff;
LAB_0269d0a4:
            puVar10 = (uint *)(ulong)*puVar24;
            bVar13 = 0;
            if ((*puVar24 == 0) || (puVar24 == puVar10)) goto LAB_0269d124;
            lVar15 = 0xc;
            if (*(char *)((long)puVar24 + (10 - (long)puVar10)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar24 + (lVar15 - (long)puVar10);
            if (lVar15 == 0) goto LAB_0269d210;
            uVar12 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar10));
            *(undefined4 *)(puVar21 + 0x34) = 0xfffffffe;
            bVar13 = 0;
            if (uVar12 == 0) goto LAB_0269d124;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != -0x5f8c557f) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                bVar13 = 0;
                goto LAB_0269d124;
              }
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)(puVar21 + 0x34) = iVar8;
          } while (*puVar24 != 0);
          bVar13 = 0;
        }
LAB_0269d124:
        if (*puVar24 == 0) {
LAB_0269d230:
          uVar7 = 0;
        }
        else {
          cVar17 = *pcVar22;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar21 = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 8) = 0xffffffffffffffff;
              *pcVar22 = '\x01';
              *(undefined4 *)(puVar21 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar21 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar21 + 0x48) = 0xffffffffffffffff;
            }
            else {
              uVar7 = *(uint *)(puVar21 + 0x38);
              if (-1 < (int)uVar7) {
                if (((byte *)((ulong)uVar7 + (long)puVar24) == (byte *)0x0) ||
                   (bVar1 = *(byte *)((ulong)uVar7 + (long)puVar24), uVar7 = (uint)bVar1, 2 < bVar1)
                   ) goto LAB_0269d230;
                goto LAB_0269d234;
              }
              if (uVar7 != 0xffffffff) goto LAB_0269d230;
            }
            puVar10 = (uint *)(ulong)*puVar24;
            uVar7 = 0;
            if ((*puVar24 == 0) || (puVar24 == puVar10)) goto LAB_0269d234;
            lVar15 = 0xc;
            if (*(char *)((long)puVar24 + (10 - (long)puVar10)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar24 + (lVar15 - (long)puVar10);
            if (lVar15 == 0) goto LAB_0269d230;
            uVar12 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar10));
            *(undefined4 *)(puVar21 + 0x38) = 0xfffffffe;
            uVar7 = 0;
            if (uVar12 == 0) goto LAB_0269d234;
            piVar20 = (int *)(lVar15 + 4);
            while (piVar20[-1] != -0x2076f85) {
              piVar20 = piVar20 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                uVar7 = 0;
                goto LAB_0269d234;
              }
            }
            iVar8 = 0;
            if (*piVar20 != -1) {
              iVar8 = *piVar20;
            }
            *(int *)(puVar21 + 0x38) = iVar8;
          } while (*puVar24 != 0);
          uVar7 = 0;
        }
LAB_0269d234:
        FUN_026b9500(&local_118,param_1,&local_f8,&local_11c,bVar13 == 1,
                     uVar6 >> (ulong)(uVar7 & 0x1f) & 1,param_1 + 0x12618);
        *param_4 = (uint)local_118;
        param_4[1] = local_118._4_4_;
        goto LAB_0269b6d8;
      }
    }
LAB_0269b7a0:
    uVar9 = 0;
  }
  return uVar9;
}

