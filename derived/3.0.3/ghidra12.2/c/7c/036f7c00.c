
bool FUN_036f7c00(long param_1,uint *param_2,uint *param_3,byte param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ushort uVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  short *psVar17;
  byte bVar18;
  char *pcVar19;
  long lVar20;
  char cVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  int *piVar25;
  uint *puVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 uVar29;
  char *pcVar30;
  uint uVar31;
  uint *puVar32;
  uint local_730;
  int iStack_72c;
  undefined8 *local_728;
  uint *local_720;
  undefined *local_d0;
  short local_c8;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  undefined8 local_c0;
  short local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined *local_b0;
  int local_a8;
  int iStack_a4;
  undefined *local_a0;
  undefined8 local_98;
  byte local_90;
  undefined8 local_88;
  float local_80;
  uint local_7c;
  
  FUN_036f9b68(&local_730);
  puVar10 = PTR_DAT_04bc2340;
  uVar31 = *(uint *)(param_1 + 0x1c0);
  iVar13 = 1;
  if (6 < *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 0xb) {
    iVar13 = 2;
  }
  iVar5 = 0;
  if (5 < *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 5) {
    iVar5 = iVar13;
  }
  if (((int)uVar31 < 1) &&
     (((*(long *)(param_1 + 0xb0) == 0 ||
       (puVar32 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar32 == (uint *)0x0)) ||
      (uVar31 = *puVar32, uVar31 == 0)))) {
LAB_036f7d34:
    uVar31 = local_730;
    if (0 < (int)local_730) {
      uVar12 = nn::os::GetSystemTick();
      if (1 < (int)local_730) {
        uVar12 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
        uVar15 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 2;
        uVar14 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 3;
        uVar24 = (ulong)((uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4);
        uVar22 = (ulong)local_730;
        do {
          uVar12 = uVar12 ^ uVar12 << 0xb;
          uVar23 = (uint)uVar24;
          uVar24 = (ulong)(uVar23 >> 0x13 ^ uVar12 >> 8 ^ uVar23 ^ uVar12);
          uVar28 = uVar22 - 1 & 0xffffffff;
          uVar29 = local_728[uVar28];
          uVar27 = uVar22 * uVar24 >> 0x1d & 0x7fffffff8;
          local_728[uVar28] = *(undefined8 *)((long)local_728 + uVar27);
          *(undefined8 *)((long)local_728 + uVar27) = uVar29;
          bVar11 = 2 < uVar22;
          uVar22 = uVar22 - 1;
          uVar12 = uVar15;
          uVar15 = uVar14;
          uVar14 = uVar23;
        } while (bVar11);
      }
      if (*(uint *)*local_728 < 0x51) {
        *param_3 = *(uint *)*local_728;
      }
    }
    return 0 < (int)uVar31;
  }
  uVar12 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bbfe68 + 0x10;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  puVar4 = PTR_DAT_04bc0510 + 0x10;
  pcVar30 = PTR_DAT_04bc2338;
LAB_036f7e7c:
  puVar9 = local_a0;
  if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
    if (((((*(long *)(param_1 + 0xb0) != 0) &&
          (puVar32 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar32 != (uint *)0x0)) &&
         ((*(uint *)(param_1 + 200) <= uVar12 ||
          (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar12) != '\0')))) &&
        ((uVar12 < *puVar32 && (puVar32[1] != 0)))) && ((ushort)puVar32[2] != 0)) {
      iVar13 = 0xc;
      if (*(char *)((long)puVar32 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      puVar32 = (uint *)((ulong)(puVar32[1] * uVar12 + (uint)(ushort)puVar32[2] * 8 + iVar13) +
                        (long)puVar32);
      goto joined_r0x036f7fd0;
    }
  }
  else if (uVar12 < *(uint *)(param_1 + 0x1c0)) {
    uVar15 = uVar12;
    if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
      uVar15 = 0;
    }
    puVar32 = *(uint **)(*(long *)(param_1 + 0x1b8) + (ulong)uVar15 * 8);
joined_r0x036f7fd0:
    if (puVar32 != (uint *)0x0) {
      bVar18 = 0;
      if (*puVar32 != 0) {
        cVar21 = *pcVar30;
        do {
          if (cVar21 != '\0') {
            uVar15 = *(uint *)(puVar10 + 0x20);
            if ((int)uVar15 < 0) {
              if (uVar15 == 0xffffffff) goto LAB_036f7eec;
LAB_036f7fd8:
              bVar18 = 0;
            }
            else {
              bVar18 = 0;
              if ((byte *)((ulong)uVar15 + (long)puVar32) != (byte *)0x0) {
                bVar18 = *(byte *)((ulong)uVar15 + (long)puVar32) >> 5 & 1;
              }
            }
            goto LAB_036f8010;
          }
          cVar21 = '\x01';
          *(undefined8 *)puVar10 = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
          *pcVar30 = '\x01';
          *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar10 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
LAB_036f7eec:
          puVar26 = (uint *)(ulong)*puVar32;
          bVar18 = 0;
          if ((*puVar32 == 0) || (puVar32 == puVar26)) goto LAB_036f8010;
          lVar20 = 0xc;
          if (*(char *)((long)puVar32 + (10 - (long)puVar26)) != '\0') {
            lVar20 = 0x1c;
          }
          lVar20 = (long)puVar32 + (lVar20 - (long)puVar26);
          if (lVar20 == 0) goto LAB_036f7fd8;
          uVar22 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar26));
          *(undefined4 *)(puVar10 + 0x20) = 0xfffffffe;
          bVar18 = 0;
          if (uVar22 == 0) goto LAB_036f8010;
          piVar25 = (int *)(lVar20 + 4);
          while (piVar25[-1] != 0x767f28cb) {
            piVar25 = piVar25 + 2;
            uVar22 = uVar22 - 1;
            if (uVar22 == 0) {
              bVar18 = 0;
              goto LAB_036f8010;
            }
          }
          iVar13 = 0;
          if (*piVar25 != -1) {
            iVar13 = *piVar25;
          }
          *(int *)(puVar10 + 0x20) = iVar13;
        } while (*puVar32 != 0);
        bVar18 = 0;
      }
LAB_036f8010:
      local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
      if (*puVar32 != 0) {
        cVar21 = *pcVar30;
        do {
          if (cVar21 == '\0') {
            cVar21 = '\x01';
            *(undefined8 *)puVar10 = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
            *pcVar30 = '\x01';
            *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
            *(undefined4 *)(puVar10 + 0x38) = 0xffffffff;
            *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar15 = *(uint *)(puVar10 + 0x20);
            if (-1 < (int)uVar15) {
              if (((byte *)((ulong)uVar15 + (long)puVar32) != (byte *)0x0) &&
                 ((*(byte *)((ulong)uVar15 + (long)puVar32) & 1) != 0)) {
                bVar11 = false;
                goto LAB_036f8208;
              }
              break;
            }
            if (uVar15 != 0xffffffff) break;
          }
          lVar20 = (long)puVar32 - (ulong)*puVar32;
          if ((*puVar32 == 0) || (lVar20 == 0)) break;
          lVar6 = 0xc;
          if (*(char *)(lVar20 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          if (lVar6 + lVar20 == 0) break;
          uVar22 = (ulong)*(ushort *)(lVar20 + 8);
          *(undefined4 *)(puVar10 + 0x20) = 0xfffffffe;
          if (uVar22 == 0) break;
          piVar25 = (int *)(lVar6 + lVar20 + 4);
          while (piVar25[-1] != 0x767f28cb) {
            piVar25 = piVar25 + 2;
            uVar22 = uVar22 - 1;
            if (uVar22 == 0) goto LAB_036f8104;
          }
          iVar13 = 0;
          if (*piVar25 != -1) {
            iVar13 = *piVar25;
          }
          *(int *)(puVar10 + 0x20) = iVar13;
          if (*puVar32 == 0) break;
        } while( true );
      }
LAB_036f8104:
      local_a0._4_4_ = SUB84(puVar9,4);
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,3);
      if (*puVar32 != 0) {
        cVar21 = *pcVar30;
        do {
          if (cVar21 == '\0') {
            cVar21 = '\x01';
            *(undefined8 *)puVar10 = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
            *pcVar30 = '\x01';
            *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
            *(undefined4 *)(puVar10 + 0x38) = 0xffffffff;
            *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar15 = *(uint *)(puVar10 + 0x20);
            if (-1 < (int)uVar15) {
              if ((byte *)((ulong)uVar15 + (long)puVar32) != (byte *)0x0) {
                bVar11 = (*(byte *)((ulong)uVar15 + (long)puVar32) >> 3 & 1) == 0;
                goto LAB_036f8208;
              }
              break;
            }
            if (uVar15 != 0xffffffff) break;
          }
          puVar26 = (uint *)(ulong)*puVar32;
          bVar11 = true;
          if ((*puVar32 == 0) || (puVar32 == puVar26)) goto LAB_036f8208;
          lVar20 = 0xc;
          if (*(char *)((long)puVar32 + (10 - (long)puVar26)) != '\0') {
            lVar20 = 0x1c;
          }
          lVar20 = (long)puVar32 + (lVar20 - (long)puVar26);
          if (lVar20 == 0) break;
          uVar22 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar26));
          *(undefined4 *)(puVar10 + 0x20) = 0xfffffffe;
          if (uVar22 == 0) break;
          piVar25 = (int *)(lVar20 + 4);
          while (piVar25[-1] != 0x767f28cb) {
            piVar25 = piVar25 + 2;
            uVar22 = uVar22 - 1;
            if (uVar22 == 0) goto LAB_036f8204;
          }
          iVar13 = 0;
          if (*piVar25 != -1) {
            iVar13 = *piVar25;
          }
          *(int *)(puVar10 + 0x20) = iVar13;
          if (*puVar32 == 0) break;
        } while( true );
      }
LAB_036f8204:
      bVar11 = true;
LAB_036f8208:
      if (bVar11 || ((param_5 ^ 1) & 1) != 0) {
        uVar15 = *param_2;
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar15);
        if (*puVar32 != 0) {
          cVar21 = *pcVar30;
          do {
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *(undefined8 *)puVar10 = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
              *pcVar30 = '\x01';
              *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
              *(undefined4 *)(puVar10 + 0x38) = 0xffffffff;
              *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
            }
            else {
              uVar14 = *(uint *)(puVar10 + 0x34);
              if (-1 < (int)uVar14) {
                if ((ulong)uVar14 + (long)puVar32 != 0) {
                  uVar23 = uVar15 + 7;
                  if (-1 < (int)uVar15) {
                    uVar23 = uVar15;
                  }
                  if ((*(byte *)((ulong)uVar14 + (long)puVar32 + (ulong)(uint)((int)uVar23 >> 3)) >>
                       (ulong)(uVar15 & 7) & 1) != 0) {
                    uVar15 = *puVar32;
                    if (uVar15 == 0) goto LAB_036f8384;
                    uVar22 = (ulong)*(uint *)(puVar10 + 0x38);
                    goto LAB_036f8314;
                  }
                }
                break;
              }
              if (uVar14 != 0xffffffff) break;
            }
            lVar20 = (long)puVar32 - (ulong)*puVar32;
            if ((*puVar32 == 0) || (lVar20 == 0)) break;
            lVar6 = 0xc;
            if (*(char *)(lVar20 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            if (lVar6 + lVar20 == 0) break;
            uVar22 = (ulong)*(ushort *)(lVar20 + 8);
            *(undefined4 *)(puVar10 + 0x34) = 0xfffffffe;
            if (uVar22 == 0) break;
            piVar25 = (int *)(lVar6 + lVar20 + 4);
            while (piVar25[-1] != -0x5e4c7403) {
              piVar25 = piVar25 + 2;
              uVar22 = uVar22 - 1;
              if (uVar22 == 0) goto LAB_036f7e70;
            }
            iVar13 = 0;
            if (*piVar25 != -1) {
              iVar13 = *piVar25;
            }
            *(int *)(puVar10 + 0x34) = iVar13;
            if (*puVar32 == 0) break;
          } while( true );
        }
      }
    }
  }
  goto LAB_036f7e70;
  while( true ) {
    lVar20 = (long)puVar32 - (ulong)uVar15;
    pcVar19 = (char *)0x0;
    if (lVar20 == 0) goto LAB_036f8388;
    lVar6 = 0xc;
    if (*(char *)(lVar20 + 10) != '\0') {
      lVar6 = 0x1c;
    }
    if (lVar6 + lVar20 == 0) break;
    uVar22 = (ulong)*(ushort *)(lVar20 + 8);
    *(undefined4 *)(puVar10 + 0x38) = 0xfffffffe;
    pcVar19 = (char *)0x0;
    if (uVar22 == 0) goto LAB_036f8388;
    puVar26 = (uint *)(lVar6 + lVar20 + 4);
    while (puVar26[-1] != 0x62a2abe9) {
      puVar26 = puVar26 + 2;
      uVar22 = uVar22 - 1;
      if (uVar22 == 0) {
        pcVar19 = (char *)0x0;
        goto LAB_036f8388;
      }
    }
    uVar22 = 0;
    if (*puVar26 != 0xffffffff) {
      uVar22 = (ulong)*puVar26;
    }
    *(int *)(puVar10 + 0x38) = (int)uVar22;
    uVar15 = *puVar32;
    if (uVar15 == 0) break;
LAB_036f8314:
    if (-1 < (int)uVar22) {
      pcVar19 = (char *)(uVar22 + (long)puVar32);
      goto LAB_036f8388;
    }
    if (uVar22 != 0xffffffff) break;
  }
LAB_036f8384:
  pcVar19 = (char *)0x0;
LAB_036f8388:
  local_98 = "";
  if (pcVar19 != (char *)0x0) {
    local_98 = pcVar19;
  }
  local_a0 = puVar1;
  if ((*local_98 == '\0') ||
     (iVar13 = FUN_02758850(&local_a0), pcVar30 = PTR_DAT_04bc2338, iVar13 != 0)) {
    if (iVar5 == 2) {
      if (*puVar32 != 0) {
        cVar21 = *pcVar30;
        do {
          if (cVar21 == '\0') {
            cVar21 = '\x01';
            *(undefined8 *)puVar10 = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
            *pcVar30 = '\x01';
            *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
            *(undefined4 *)(puVar10 + 0x38) = 0xffffffff;
            *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar15 = *(uint *)(puVar10 + 0x24);
            uVar22 = (ulong)uVar15;
            if (-1 < (int)uVar15) goto LAB_036f8634;
            if (uVar15 != 0xffffffff) break;
          }
          lVar20 = (long)puVar32 - (ulong)*puVar32;
          if ((*puVar32 == 0) || (lVar20 == 0)) break;
          lVar6 = 0xc;
          if (*(char *)(lVar20 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          if (lVar6 + lVar20 == 0) break;
          uVar22 = (ulong)*(ushort *)(lVar20 + 8);
          *(undefined4 *)(puVar10 + 0x24) = 0xfffffffe;
          if (uVar22 == 0) break;
          piVar25 = (int *)(lVar6 + lVar20 + 4);
          while (piVar25[-1] != -0x49d2539d) {
            piVar25 = piVar25 + 2;
            uVar22 = uVar22 - 1;
            if (uVar22 == 0) goto LAB_036f7e70;
          }
          iVar13 = 0;
          if (*piVar25 != -1) {
            iVar13 = *piVar25;
          }
          *(int *)(puVar10 + 0x24) = iVar13;
          if (*puVar32 == 0) break;
        } while( true );
      }
    }
    else if (iVar5 == 1) {
      if (*puVar32 != 0) {
        cVar21 = *pcVar30;
        do {
          if (cVar21 == '\0') {
            cVar21 = '\x01';
            *(undefined8 *)puVar10 = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
            *pcVar30 = '\x01';
            *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
            *(undefined4 *)(puVar10 + 0x38) = 0xffffffff;
            *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar15 = *(uint *)(puVar10 + 0x30);
            uVar22 = (ulong)uVar15;
            if (-1 < (int)uVar15) goto LAB_036f8634;
            if (uVar15 != 0xffffffff) break;
          }
          lVar20 = (long)puVar32 - (ulong)*puVar32;
          if ((*puVar32 == 0) || (lVar20 == 0)) break;
          lVar6 = 0xc;
          if (*(char *)(lVar20 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          if (lVar6 + lVar20 == 0) break;
          uVar22 = (ulong)*(ushort *)(lVar20 + 8);
          *(undefined4 *)(puVar10 + 0x30) = 0xfffffffe;
          if (uVar22 == 0) break;
          piVar25 = (int *)(lVar6 + lVar20 + 4);
          while (piVar25[-1] != -0xd99804c) {
            piVar25 = piVar25 + 2;
            uVar22 = uVar22 - 1;
            if (uVar22 == 0) goto LAB_036f7e70;
          }
          iVar13 = 0;
          if (*piVar25 != -1) {
            iVar13 = *piVar25;
          }
          *(int *)(puVar10 + 0x30) = iVar13;
          if (*puVar32 == 0) break;
        } while( true );
      }
    }
    else if ((iVar5 == 0) && (*puVar32 != 0)) {
      cVar21 = *pcVar30;
      do {
        if (cVar21 == '\0') {
          cVar21 = '\x01';
          *(undefined8 *)puVar10 = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
          *pcVar30 = '\x01';
          *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar10 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar15 = *(uint *)(puVar10 + 0x2c);
          uVar22 = (ulong)uVar15;
          if (-1 < (int)uVar15) goto LAB_036f8634;
          if (uVar15 != 0xffffffff) break;
        }
        lVar20 = (long)puVar32 - (ulong)*puVar32;
        if ((*puVar32 == 0) || (lVar20 == 0)) break;
        lVar6 = 0xc;
        if (*(char *)(lVar20 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        if (lVar6 + lVar20 == 0) break;
        uVar22 = (ulong)*(ushort *)(lVar20 + 8);
        *(undefined4 *)(puVar10 + 0x2c) = 0xfffffffe;
        if (uVar22 == 0) break;
        piVar25 = (int *)(lVar6 + lVar20 + 4);
        while (piVar25[-1] != -0x2c18df71) {
          piVar25 = piVar25 + 2;
          uVar22 = uVar22 - 1;
          if (uVar22 == 0) goto LAB_036f7e70;
        }
        iVar13 = 0;
        if (*piVar25 != -1) {
          iVar13 = *piVar25;
        }
        *(int *)(puVar10 + 0x2c) = iVar13;
        if (*puVar32 == 0) break;
      } while( true );
    }
  }
  goto LAB_036f7e70;
LAB_036f8634:
  if (((char *)(uVar22 + (long)puVar32) == (char *)0x0) ||
     (*(char *)(uVar22 + (long)puVar32) == '\0')) goto LAB_036f7e70;
  local_88 = 0;
  local_80 = 0.0;
  uVar22 = FUN_036f98d0(param_1,param_2,&local_88);
  if ((uVar22 & 1) == 0) {
    pcVar30 = PTR_DAT_04bc2338;
    goto LAB_036f7e70;
  }
  local_98 = (char *)((ulong)local_98 & 0xffffffff00000000);
  lVar20 = *(long *)PTR_DAT_04bb2720;
  local_a0 = puVar2;
  if ((lVar20 == 0) || (*(long *)(lVar20 + 0x330) == 0)) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
    iVar13 = FUN_006bd550(*puVar16,0);
    puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
    if (iVar13 != 0x758f7eaf) {
      puVar16 = &DAT_055c04a0;
    }
  }
  local_98 = (char *)CONCAT44(*(undefined4 *)(puVar16 + 7),(undefined4)local_98);
  local_90 = FUN_017baf44();
  local_90 = local_90 & 1;
  local_a8 = (int)((float)(int)(float)local_88 / 5.0) - (uint)((float)local_88 < 0.0);
  iStack_a4 = (int)((float)(int)local_80 / 5.0) - (uint)(local_80 < 0.0);
  local_b0 = puVar3;
  psVar17 = (short *)FUN_01a5190c(&local_a0,0,&local_b0,0);
  local_b8 = *psVar17;
  local_b6 = (undefined1)psVar17[1];
  local_b5 = *(undefined1 *)((long)psVar17 + 3);
  local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
  local_b4 = *(undefined4 *)(psVar17 + 2);
  if (*puVar32 != 0) {
    cVar21 = *PTR_DAT_04bc2338;
    do {
      puVar9 = PTR_DAT_04bc2338;
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined4 *)(puVar10 + 0x38) = 0xffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar15 = *(uint *)(puVar10 + 0x20);
        if (-1 < (int)uVar15) {
          if ((byte *)((ulong)uVar15 + (long)puVar32) != (byte *)0x0) {
            bVar11 = (*(byte *)((ulong)uVar15 + (long)puVar32) & 1) == 0;
            goto LAB_036f8898;
          }
          break;
        }
        if (uVar15 != 0xffffffff) break;
      }
      puVar26 = (uint *)(ulong)*puVar32;
      bVar11 = true;
      if ((*puVar32 == 0) || (puVar32 == puVar26)) goto LAB_036f8898;
      lVar20 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar26)) != '\0') {
        lVar20 = 0x1c;
      }
      lVar20 = (long)puVar32 + (lVar20 - (long)puVar26);
      if (lVar20 == 0) break;
      uVar22 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar26));
      *(undefined4 *)(puVar10 + 0x20) = 0xfffffffe;
      if (uVar22 == 0) break;
      piVar25 = (int *)(lVar20 + 4);
      while (piVar25[-1] != 0x767f28cb) {
        piVar25 = piVar25 + 2;
        uVar22 = uVar22 - 1;
        if (uVar22 == 0) goto LAB_036f8890;
      }
      iVar13 = 0;
      if (*piVar25 != -1) {
        iVar13 = *piVar25;
      }
      *(int *)(puVar10 + 0x20) = iVar13;
      if (*puVar32 == 0) break;
    } while( true );
  }
LAB_036f8890:
  bVar11 = true;
LAB_036f8898:
  puVar9 = PTR_DAT_04bb43c0;
  bVar8 = bVar11;
  if (local_b8 != -2) {
    local_c0 = 0;
    lVar20 = *(long *)PTR_DAT_04bb43c0;
    local_d0 = puVar4;
    local_c8 = local_b8;
    local_c6 = local_b6;
    local_c5 = local_b5;
    local_c4 = local_b4;
    uVar14 = FUN_0277d6c4(&local_c8);
    uVar15 = 0;
    if (*(long *)puVar9 != 0) {
      lVar20 = *(long *)(lVar20 + 0x57e58);
      uVar15 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((uVar15 < *(uint *)(lVar20 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
        lVar20 = *(long *)PTR_DAT_04bc0428;
        uVar15 = FUN_0277d6c4(&local_b8);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar15 < *(uint *)(lVar20 + 0x1d8)) &&
           ((puVar32 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8),
            puVar32 != (uint *)0x0 &&
            (uVar15 = *puVar32, uVar15 != 0 && puVar32 != (uint *)(ulong)uVar15)))) {
          puVar26 = (uint *)((long)puVar32 - (long)(ulong)uVar15);
          if ((*puVar26 != 0) &&
             ((uVar15 = puVar26[1], uVar15 != 0 && ((ulong)(ushort)puVar26[2] != 0)))) {
            lVar20 = 0xc;
            if (*(char *)((long)puVar26 + 10) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar26 + lVar20 + (ulong)(ushort)puVar26[2] * 8;
            if (lVar20 != 0) {
              uVar14 = 0;
              if ((ulong)uVar15 != 0) {
                uVar14 = (uint)((ulong)((long)puVar32 - lVar20) / (ulong)uVar15);
              }
              if (*puVar26 <= uVar14) {
                uVar14 = 0xffffffff;
              }
              if ((uVar14 < *(uint *)PTR_DAT_04bc0048) &&
                 (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar14 * 2),
                 uVar15 = (uint)uVar7, uVar7 < 0x52)) goto LAB_036f89d8;
            }
          }
        }
      }
      uVar15 = 0;
    }
LAB_036f89d8:
    local_7c = uVar15;
    bVar8 = false;
    if (local_7c - 1 < 9) {
      bVar8 = (bool)(bVar11 ^ 1);
    }
  }
  puVar32 = local_720;
  pcVar30 = PTR_DAT_04bc2338;
  if ((((uVar12 < 0x51) && (bVar8)) && (((bVar18 ^ param_4 ^ 1) & 1) != 0)) &&
     ((int)local_730 < iStack_72c)) {
    if (local_720 != (uint *)0x0) {
      local_720 = *(uint **)local_720;
    }
    *puVar32 = uVar12;
    if ((int)local_730 < iStack_72c) {
      local_728[(int)local_730] = puVar32;
      local_730 = local_730 + 1;
    }
  }
LAB_036f7e70:
  uVar12 = uVar12 + 1;
  if (uVar12 == uVar31) goto LAB_036f7d34;
  goto LAB_036f7e7c;
}

