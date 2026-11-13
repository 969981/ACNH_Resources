
/* WARNING: Removing unreachable block (ram,0x014a03a8) */

uint FUN_0149fda0(long param_1,byte param_2,undefined4 *param_3,long param_4,int *param_5)

{
  undefined *puVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *__s;
  undefined *puVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  byte bVar16;
  byte bVar17;
  ushort uVar18;
  uint uVar19;
  long lVar20;
  uint *puVar21;
  uint *puVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  undefined1 *puVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  undefined8 *puVar30;
  char cVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined *local_108;
  undefined8 local_100;
  uint *local_f8;
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint *local_a0;
  undefined *puStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  byte local_88;
  uint local_80;
  undefined4 local_7c;
  
  uVar12 = FUN_0277e294(param_3);
  if ((uVar12 & 1) == 0) goto LAB_014a09b4;
  local_90 = 0;
  lVar20 = *(long *)PTR_DAT_04bb2720;
  if (lVar20 == 0) {
    puVar30 = &DAT_055c04a0;
  }
  else {
    puVar30 = &DAT_055c04a0;
    if (*(long *)(lVar20 + 0x330) != 0) {
      puVar30 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
      iVar13 = FUN_006bd550(*puVar30,0);
      puVar30 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar13 != 0x758f7eaf) {
        puVar30 = &DAT_055c04a0;
      }
    }
  }
  local_8c = *(undefined4 *)(puVar30 + 7);
  local_88 = FUN_017baf44();
  puVar9 = PTR_DAT_04bc0510;
  puVar8 = PTR_DAT_04bb43c0;
  local_88 = local_88 & 1;
  puStack_98 = PTR_DAT_04bb3140 + 0x10;
  local_b0 = PTR_DAT_04bc0510 + 0x10;
  local_a0 = (uint *)0x0;
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  lVar20 = *(long *)PTR_DAT_04bb43c0;
  uVar14 = FUN_0277d6c4(&local_a8);
  if (*(long *)puVar8 != 0) {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((uVar14 < *(uint *)(lVar20 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
      lVar20 = *(long *)PTR_DAT_04bc0428;
      uVar14 = FUN_0277d6c4(param_3);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if (uVar14 < *(uint *)(lVar20 + 0x1d8)) {
        puVar21 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar14 * 8);
        if (puVar21 != (uint *)0x0) {
          local_a0 = puVar21;
        }
      }
    }
  }
  local_c8 = 0;
  local_d8 = PTR_DAT_04bbc1a0 + 0x10;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_b8 = 0;
  puStack_d0 = puVar1;
  local_c0 = puVar1;
  FUN_01afb480(&local_b0,&local_d8);
  puVar21 = local_a0;
  __s = PTR_DAT_04bbfe90;
  uVar14 = (uint)local_c8 + *(int *)(param_4 + 8);
  uVar32 = local_c8._4_4_ + *(int *)(param_4 + 0xc);
  local_c8 = CONCAT44(uVar32,uVar14);
  iVar13 = (int)local_b8 + *(int *)(param_4 + 8);
  iVar27 = local_b8._4_4_ + *(int *)(param_4 + 0xc);
  local_b8 = CONCAT44(iVar27,iVar13);
  if (*param_5 == 1) {
    uStack_e0 = 0;
    local_e8 = puVar1;
    FUN_01a5033c(local_f0,&puStack_98,0,param_4,&local_e8);
    uVar15 = FUN_0277e294(local_f0);
    if ((uVar15 & 1) == 0) {
      bVar11 = false;
      bVar17 = 0;
      fVar34 = 0.0;
      fVar33 = 0.0;
    }
    else {
      local_108 = puVar9 + 0x10;
      lVar20 = *(long *)puVar8;
      local_f8 = (uint *)0x0;
      uVar14 = FUN_0277d6c4(&local_100);
      fVar35 = 0.0;
      if (*(long *)puVar8 == 0) {
LAB_014a024c:
        puVar21 = (uint *)0x0;
LAB_014a0250:
        bVar11 = true;
      }
      else {
        lVar20 = *(long *)(lVar20 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((*(uint *)(lVar20 + 0x1d8) <= uVar14) ||
           (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar14 * 8) == 0)) goto LAB_014a024c;
        lVar20 = *(long *)PTR_DAT_04bc0428;
        uVar14 = FUN_0277d6c4(local_f0);
        puVar9 = PTR_DAT_04bbfe90;
        puVar8 = PTR_DAT_04bbfe88;
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if (*(uint *)(lVar20 + 0x1d8) <= uVar14) goto LAB_014a024c;
        puVar21 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar14 * 8);
        if (puVar21 == (uint *)0x0) goto LAB_014a0250;
        uVar14 = *puVar21;
        local_f8 = puVar21;
        if (uVar14 != 0) {
          cVar31 = *PTR_DAT_04bbfe88;
          do {
            if (cVar31 == '\0') {
              cVar31 = '\x01';
              *puVar8 = 1;
              memset(puVar9,0xff,0x1ac);
              uVar14 = *puVar21;
            }
            else {
              uVar32 = *(uint *)(puVar9 + 0xf0);
              if (-1 < (int)uVar32) {
                if ((float *)((ulong)uVar32 + (long)puVar21) != (float *)0x0) {
                  fVar34 = *(float *)((ulong)uVar32 + (long)puVar21);
                  bVar11 = false;
                  pcVar7 = PTR_DAT_04bbfe88;
                  puVar8 = PTR_DAT_04bbfe90;
                  puVar22 = local_a0;
                  goto joined_r0x014a09f0;
                }
                break;
              }
              if (uVar32 != 0xffffffff) break;
            }
            puVar22 = (uint *)(ulong)uVar14;
            if ((puVar22 == (uint *)0x0) || (puVar21 == puVar22)) break;
            lVar20 = 0xc;
            if (*(char *)((long)puVar21 + (10 - (long)puVar22)) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar21 + (lVar20 - (long)puVar22);
            if (lVar20 == 0) break;
            uVar15 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar22));
            *(undefined4 *)(puVar9 + 0xf0) = 0xfffffffe;
            if (uVar15 == 0) break;
            piVar23 = (int *)(lVar20 + 4);
            while (piVar23[-1] != -0x499d99d4) {
              piVar23 = piVar23 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) goto LAB_014a09f8;
            }
            iVar13 = 0;
            if (*piVar23 != -1) {
              iVar13 = *piVar23;
            }
            *(int *)(puVar9 + 0xf0) = iVar13;
            uVar14 = *puVar21;
            if (uVar14 == 0) break;
          } while( true );
        }
LAB_014a09f8:
        bVar11 = false;
      }
      fVar34 = 0.0;
      pcVar7 = PTR_DAT_04bbfe88;
      puVar8 = PTR_DAT_04bbfe90;
      puVar22 = local_a0;
joined_r0x014a09f0:
      PTR_DAT_04bbfe88 = pcVar7;
      PTR_DAT_04bbfe90 = puVar8;
      local_a0 = puVar22;
      if ((puVar22 != (uint *)0x0) && (uVar14 = *puVar22, uVar14 != 0)) {
        cVar31 = *pcVar7;
        do {
          if (cVar31 == '\0') {
            cVar31 = '\x01';
            *pcVar7 = '\x01';
            memset(puVar8,0xff,0x1ac);
            uVar14 = *puVar22;
          }
          else {
            uVar32 = *(uint *)(puVar8 + 0x28);
            if (-1 < (int)uVar32) {
              if ((float *)((ulong)uVar32 + (long)puVar22) != (float *)0x0) {
                fVar35 = *(float *)((ulong)uVar32 + (long)puVar22);
              }
              break;
            }
            if (uVar32 != 0xffffffff) break;
          }
          puVar6 = (uint *)(ulong)uVar14;
          if ((puVar6 == (uint *)0x0) || (puVar22 == puVar6)) break;
          lVar20 = 0xc;
          if (*(char *)((long)puVar22 + (10 - (long)puVar6)) != '\0') {
            lVar20 = 0x1c;
          }
          lVar20 = (long)puVar22 + (lVar20 - (long)puVar6);
          if (lVar20 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar6));
          *(undefined4 *)(puVar8 + 0x28) = 0xfffffffe;
          if (uVar15 == 0) break;
          piVar23 = (int *)(lVar20 + 4);
          while (piVar23[-1] != -0x3e783aea) {
            piVar23 = piVar23 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_014a034c;
          }
          iVar13 = 0;
          if (*piVar23 != -1) {
            iVar13 = *piVar23;
          }
          *(int *)(puVar8 + 0x28) = iVar13;
          uVar14 = *puVar22;
          if (uVar14 == 0) break;
        } while( true );
      }
LAB_014a034c:
      puVar9 = PTR_DAT_04bbfe90;
      puVar8 = PTR_DAT_04bbfe88;
      fVar35 = fVar34 + fVar35;
      if (bVar11) {
        fVar33 = 0.0;
        if (0.0 <= fVar35) {
          fVar33 = fVar35;
        }
        local_80 = 0xbc;
LAB_014a07d0:
        local_7c = 0x15;
        bVar11 = local_80 != 0x15;
      }
      else {
        uVar14 = *puVar21;
        if (uVar14 == 0) {
          fVar33 = 0.0;
          if (0.0 <= fVar35) {
            fVar33 = fVar35;
          }
        }
        else {
          cVar31 = *PTR_DAT_04bbfe88;
          while (cVar31 == '\0') {
            cVar31 = '\x01';
            *puVar8 = 1;
            memset(puVar9,0xff,0x1ac);
            uVar14 = *puVar21;
LAB_014a0430:
            fVar33 = 0.0;
            lVar20 = (long)puVar21 - (ulong)uVar14;
            if (((ulong)uVar14 == 0) || (lVar20 == 0)) goto LAB_014a0678;
            lVar2 = 0xc;
            if (*(char *)(lVar20 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            if (lVar2 + lVar20 == 0) goto LAB_014a0678;
            uVar15 = (ulong)*(ushort *)(lVar20 + 8);
            *(undefined4 *)(puVar9 + 0x28) = 0xfffffffe;
            if (uVar15 == 0) goto LAB_014a0678;
            piVar23 = (int *)(lVar2 + lVar20 + 4);
            while (piVar23[-1] != -0x3e783aea) {
              piVar23 = piVar23 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) goto LAB_014a0678;
            }
            iVar13 = 0;
            if (*piVar23 != -1) {
              iVar13 = *piVar23;
            }
            *(int *)(puVar9 + 0x28) = iVar13;
            uVar14 = *puVar21;
            if (uVar14 == 0) goto LAB_014a0678;
          }
          uVar32 = *(uint *)(puVar9 + 0x28);
          if ((int)uVar32 < 0) {
            if (uVar32 == 0xffffffff) goto LAB_014a0430;
LAB_014a0674:
            fVar33 = 0.0;
          }
          else {
            if ((float *)((ulong)uVar32 + (long)puVar21) == (float *)0x0) goto LAB_014a0674;
            fVar33 = *(float *)((ulong)uVar32 + (long)puVar21);
          }
LAB_014a0678:
          if (fVar33 <= fVar35) {
            fVar33 = fVar35;
          }
        }
        uVar18 = 0;
        uVar14 = *puVar21;
        if ((uVar14 != 0) && (puVar21 != (uint *)(ulong)uVar14)) {
          puVar22 = (uint *)((long)puVar21 - (long)(ulong)uVar14);
          uVar18 = 0;
          if (*puVar22 != 0) {
            uVar14 = puVar22[1];
            if ((uVar14 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
              lVar20 = 0xc;
              if (*(char *)((long)puVar22 + 10) != '\0') {
                lVar20 = 0x1c;
              }
              lVar20 = (long)puVar22 + lVar20 + (ulong)(ushort)puVar22[2] * 8;
              if (lVar20 != 0) {
                uVar32 = 0;
                if ((ulong)uVar14 != 0) {
                  uVar32 = (uint)((ulong)((long)puVar21 - lVar20) / (ulong)uVar14);
                }
                if (*puVar22 <= uVar32) {
                  uVar32 = 0xffffffff;
                }
                if ((uVar32 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar32 * 2),
                   uVar18 < 0xbd)) goto LAB_014a0714;
              }
            }
            uVar18 = 0;
          }
        }
LAB_014a0714:
        if (uVar18 != 0x17) {
          if (bVar11) {
            local_80 = 0xbc;
          }
          else {
            uVar14 = *puVar21;
            local_80 = 0;
            if ((uVar14 != 0) && (puVar21 != (uint *)(ulong)uVar14)) {
              puVar22 = (uint *)((long)puVar21 - (long)(ulong)uVar14);
              local_80 = 0;
              if (*puVar22 != 0) {
                uVar14 = puVar22[1];
                if ((uVar14 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                  lVar20 = 0xc;
                  if (*(char *)((long)puVar22 + 10) != '\0') {
                    lVar20 = 0x1c;
                  }
                  lVar20 = (long)puVar22 + lVar20 + (ulong)(ushort)puVar22[2] * 8;
                  if (lVar20 != 0) {
                    uVar32 = 0;
                    if ((ulong)uVar14 != 0) {
                      uVar32 = (uint)((ulong)((long)puVar21 - lVar20) / (ulong)uVar14);
                    }
                    if (*puVar22 <= uVar32) {
                      uVar32 = 0xffffffff;
                    }
                    if ((uVar32 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_80 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar32 * 2),
                       local_80 < 0xbd)) goto LAB_014a07d0;
                  }
                }
                local_80 = 0;
              }
            }
          }
          goto LAB_014a07d0;
        }
        local_7c = 0x17;
        bVar11 = false;
        local_80 = 0x17;
      }
      bVar17 = param_2 ^ 1;
    }
    uVar14 = (uint)local_c8;
    uVar32 = local_c8._4_4_;
    iVar13 = (int)local_b8;
    iVar27 = local_b8._4_4_;
  }
  else {
    if (local_a0 == (uint *)0x0) {
      local_e8 = (undefined *)CONCAT44(local_e8._4_4_,0xbc);
      uVar24 = 0xbc;
      fVar33 = 0.0;
LAB_014a0630:
      local_e8 = (undefined *)CONCAT44(local_e8._4_4_,uVar24);
      bVar11 = uVar24 != 0x15;
    }
    else {
      uVar24 = *local_a0;
      if (uVar24 == 0) {
LAB_014a04dc:
        fVar33 = 0.0;
      }
      else {
        cVar31 = *PTR_DAT_04bbfe88;
        puVar26 = PTR_DAT_04bbfe88;
        uVar10 = local_e8;
        do {
          local_e8 = (undefined *)uVar10;
          if (cVar31 == '\0') {
            *puVar26 = 1;
            memset(__s,0xff,0x1ac);
            cVar31 = '\x01';
            uVar24 = *puVar21;
            puVar26 = PTR_DAT_04bbfe88;
            uVar10 = local_e8;
          }
          else {
            uVar19 = *(uint *)(__s + 0x28);
            if (-1 < (int)uVar19) {
              if ((float *)((ulong)uVar19 + (long)puVar21) == (float *)0x0) goto LAB_014a04dc;
              fVar33 = *(float *)((ulong)uVar19 + (long)puVar21);
              break;
            }
            uVar10 = local_e8;
            if (uVar19 != 0xffffffff) goto LAB_014a04dc;
          }
          puVar22 = (uint *)(ulong)uVar24;
          fVar33 = 0.0;
          if (puVar22 == (uint *)0x0) break;
          local_e8._4_4_ = (undefined4)((ulong)uVar10 >> 0x20);
          fVar33 = 0.0;
          if (puVar21 == puVar22) break;
          lVar20 = 0xc;
          if (*(char *)((long)puVar21 + (10 - (long)puVar22)) != '\0') {
            lVar20 = 0x1c;
          }
          lVar20 = (long)puVar21 + (lVar20 - (long)puVar22);
          if (lVar20 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar22));
          *(undefined4 *)(__s + 0x28) = 0xfffffffe;
          if (uVar15 == 0) break;
          piVar23 = (int *)(lVar20 + 4);
          while (piVar23[-1] != -0x3e783aea) {
            piVar23 = piVar23 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_014a04dc;
          }
          iVar25 = 0;
          if (*piVar23 != -1) {
            iVar25 = *piVar23;
          }
          *(int *)(__s + 0x28) = iVar25;
          uVar24 = *puVar21;
        } while (uVar24 != 0);
      }
      uVar24 = *puVar21;
      uVar19 = 0;
      if ((uVar24 != 0) && (puVar21 != (uint *)(ulong)uVar24)) {
        puVar22 = (uint *)((long)puVar21 - (long)(ulong)uVar24);
        uVar19 = 0;
        if (*puVar22 != 0) {
          uVar24 = puVar22[1];
          if ((uVar24 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
            lVar20 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar22 + lVar20 + (ulong)(ushort)puVar22[2] * 8;
            if (lVar20 != 0) {
              uVar19 = 0;
              if ((ulong)uVar24 != 0) {
                uVar19 = (uint)((ulong)((long)puVar21 - lVar20) / (ulong)uVar24);
              }
              if (*puVar22 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar19 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar19 * 2),
                 uVar19 < 0xbd)) goto LAB_014a0570;
            }
          }
          uVar19 = 0;
        }
      }
LAB_014a0570:
      local_e8 = (undefined *)CONCAT44(local_e8._4_4_,uVar19);
      if (uVar19 != 0x17) {
        if (puVar21 == (uint *)0x0) {
          uVar24 = 0xbc;
        }
        else {
          uVar19 = *puVar21;
          uVar24 = 0;
          if ((uVar19 != 0) && (puVar21 != (uint *)(ulong)uVar19)) {
            puVar22 = (uint *)((long)puVar21 - (long)(ulong)uVar19);
            if ((*puVar22 == 0) ||
               ((uVar19 = puVar22[1], uVar19 == 0 || ((ulong)(ushort)puVar22[2] == 0)))) {
LAB_014a0624:
              uVar24 = 0;
            }
            else {
              lVar20 = 0xc;
              if (*(char *)((long)puVar22 + 10) != '\0') {
                lVar20 = 0x1c;
              }
              lVar20 = (long)puVar22 + lVar20 + (ulong)(ushort)puVar22[2] * 8;
              uVar24 = 0;
              if (lVar20 != 0) {
                uVar24 = 0;
                if ((ulong)uVar19 != 0) {
                  uVar24 = (uint)((ulong)((long)puVar21 - lVar20) / (ulong)uVar19);
                }
                if (*puVar22 <= uVar24) {
                  uVar24 = 0xffffffff;
                }
                if ((*(uint *)PTR_DAT_04bc00c8 <= uVar24) ||
                   (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar24 * 2),
                   uVar24 = (uint)uVar18, 0xbc < uVar18)) goto LAB_014a0624;
              }
            }
          }
        }
        goto LAB_014a0630;
      }
      bVar11 = false;
    }
    bVar17 = 0;
    fVar34 = 0.0;
  }
  fVar34 = fVar34 / 5.0;
  fVar33 = fVar33 / 5.0;
  uVar24 = 0;
  if (fVar34 != (float)(int)fVar34) {
    uVar24 = (uint)(fVar34 < 0.0);
  }
  uVar19 = 0;
  if (fVar33 != (float)(int)fVar33) {
    uVar19 = (uint)(fVar33 < 0.0);
  }
  iVar5 = (int)fVar33 - uVar19;
  iVar25 = iVar5;
  if (6 < iVar5) {
    iVar25 = 7;
  }
  uVar19 = iVar27 + 1;
  if (!bVar11) {
    iVar25 = iVar5;
  }
  if ((int)((int)fVar34 - uVar24) < iVar25) {
    if (uVar19 != uVar32) {
      uVar29 = uVar14;
      uVar28 = uVar14;
      do {
        pbVar4 = (byte *)(param_1 + 0x280) + (ulong)uVar28 * 0x3000;
        if (0x3f < uVar28) {
          pbVar4 = (byte *)(param_1 + 0x280);
        }
        pbVar3 = pbVar4 + (ulong)uVar32 * 0xc0;
        if (0x3f < uVar32) {
          pbVar3 = pbVar4;
        }
        if ((int)uVar28 < 0x40) {
          if ((int)uVar32 < 0x40) {
            uVar29 = (int)fVar34 - uVar24;
            do {
              if (((int)uVar29 < 8) && (-1 < (int)(uVar32 | uVar28 | uVar29))) {
                pbVar4 = pbVar3 + (ulong)uVar29 * 0x18;
                if (7 < uVar29) {
                  pbVar4 = pbVar3;
                }
                *pbVar4 = param_2 & 1;
                if ((param_2 & 1) == 0) {
                  bVar16 = 0;
                }
                else {
                  bVar16 = (byte)*param_5;
                }
                pbVar4[1] = bVar16;
                *(undefined4 *)(pbVar4 + 0x10) = *(undefined4 *)(param_4 + 8);
                *(undefined4 *)(pbVar4 + 0x14) = *(undefined4 *)(param_4 + 0xc);
              }
              uVar29 = uVar29 + 1;
            } while ((int)uVar29 < iVar25);
            iVar13 = (int)local_b8;
            uVar29 = (uint)local_c8;
          }
        }
        if ((int)uVar28 < iVar13) {
          uVar28 = uVar28 + 1;
        }
        else {
          uVar32 = uVar32 + 1;
          uVar28 = uVar29;
        }
      } while ((uVar14 != uVar28) || (uVar19 != uVar32));
    }
  }
  else if (uVar19 != uVar32) {
    uVar24 = uVar14;
    do {
      if ((int)uVar24 < iVar13) {
        uVar24 = uVar24 + 1;
      }
      else {
        uVar32 = uVar32 + 1;
        uVar24 = uVar14;
      }
    } while ((uVar14 != uVar24) || (uVar19 != uVar32));
  }
  if ((bVar17 & 1) != 0) {
    local_108 = PTR_DAT_04bb2010 + 0x10;
    local_100 = 0;
    FUN_01a5033c(&local_e8,&puStack_98,0,param_4,&local_108);
    local_f0[0] = 0;
    FUN_0149fda0(param_1,1,&local_e8,&local_108,local_f0);
  }
LAB_014a09b4:
  return uVar12 & 1;
}

