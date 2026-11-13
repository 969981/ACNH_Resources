
void FUN_0149bf80(long param_1,undefined4 *param_2,long param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *__s;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  ushort uVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  uint uVar23;
  long lVar24;
  undefined8 *puVar25;
  long *plVar26;
  uint uVar27;
  uint uVar28;
  char cVar29;
  undefined *puVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  uint *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined *local_e8;
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
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar24 = *(long *)PTR_DAT_04bb43c0;
  uVar11 = FUN_0277d6c4(param_2);
  if (*(long *)puVar2 == 0) {
    return;
  }
  lVar24 = *(long *)(lVar24 + 0x57e58);
  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
  if (*(uint *)(lVar24 + 0x1d8) <= uVar11) {
    return;
  }
  if (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) == 0) {
    return;
  }
  local_90 = 0;
  puVar25 = &DAT_055c04a0;
  lVar24 = *(long *)PTR_DAT_04bb2720;
  if ((lVar24 != 0) && (*(long *)(lVar24 + 0x330) != 0)) {
    puVar25 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar24 + 0x338));
    iVar12 = FUN_006bd550(*puVar25,0);
    puVar25 = (undefined8 *)PTR_DAT_04bc3a80;
    if (iVar12 != 0x758f7eaf) {
      puVar25 = &DAT_055c04a0;
    }
  }
  local_8c = *(undefined4 *)(puVar25 + 7);
  local_88 = FUN_017baf44();
  puVar3 = PTR_DAT_04bc0510;
  puVar30 = PTR_DAT_04bb3140;
  local_88 = local_88 & 1;
  lVar24 = *(long *)puVar2;
  puStack_98 = PTR_DAT_04bb3140 + 0x10;
  local_b0 = PTR_DAT_04bc0510 + 0x10;
  local_a0 = (uint *)0x0;
  local_a8 = *param_2;
  uStack_a4 = param_2[1];
  uVar11 = FUN_0277d6c4(&local_a8);
  if (*(long *)puVar2 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      lVar24 = *(long *)PTR_DAT_04bc0428;
      uVar11 = FUN_0277d6c4(param_2);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if (uVar11 < *(uint *)(lVar24 + 0x1d8)) {
        puVar17 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8);
        if (puVar17 != (uint *)0x0) {
          local_a0 = puVar17;
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
  puVar17 = local_a0;
  __s = PTR_DAT_04bbfe90;
  puVar8 = PTR_DAT_04bbfe88;
  local_b8 = CONCAT44(local_b8._4_4_ + *(int *)(param_3 + 0xc),(int)local_b8 + *(int *)(param_3 + 8)
                     );
  local_c8 = CONCAT44(local_c8._4_4_ + *(int *)(param_3 + 0xc),
                      (uint)local_c8 + *(int *)(param_3 + 8));
  if (*param_4 == 1) {
    uStack_e0 = 0;
    local_e8 = puVar1;
    FUN_01a5033c(&local_f0,&puStack_98,0,param_3,&local_e8);
    uVar14 = FUN_0277e294(&local_f0);
    if ((uVar14 & 1) == 0) {
      bVar9 = false;
      fVar32 = 0.0;
      fVar31 = 0.0;
      goto LAB_0149c9c8;
    }
    lVar24 = *(long *)puVar2;
    local_108 = puVar3 + 0x10;
    local_f8 = (uint *)0x0;
    local_100 = local_f0;
    local_fc = uStack_ec;
    uVar11 = FUN_0277d6c4(&local_100);
    fVar33 = 0.0;
    if (*(long *)puVar2 == 0) {
LAB_0149c57c:
      puVar17 = (uint *)0x0;
LAB_0149c580:
      bVar9 = true;
LAB_0149c584:
      fVar32 = 0.0;
      pcVar6 = PTR_DAT_04bbfe88;
      puVar2 = PTR_DAT_04bbfe90;
      puVar18 = local_a0;
    }
    else {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((*(uint *)(lVar24 + 0x1d8) <= uVar11) ||
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_0149c57c;
      lVar24 = *(long *)PTR_DAT_04bc0428;
      uVar11 = FUN_0277d6c4(&local_f0);
      puVar3 = PTR_DAT_04bbfe90;
      puVar2 = PTR_DAT_04bbfe88;
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if (*(uint *)(lVar24 + 0x1d8) <= uVar11) goto LAB_0149c57c;
      puVar17 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8);
      if (puVar17 == (uint *)0x0) goto LAB_0149c580;
      uVar11 = *puVar17;
      local_f8 = puVar17;
      if (uVar11 == 0) {
        bVar9 = false;
        goto LAB_0149c584;
      }
      cVar29 = *PTR_DAT_04bbfe88;
LAB_0149c280:
      if (cVar29 == '\0') {
        cVar29 = '\x01';
        *puVar2 = 1;
        memset(puVar3,0xff,0x1ac);
        uVar11 = *puVar17;
LAB_0149c2b4:
        puVar18 = (uint *)(ulong)uVar11;
        if ((puVar18 == (uint *)0x0) || (puVar17 == puVar18)) goto LAB_0149c6f8;
        lVar24 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar18)) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar17 + (lVar24 - (long)puVar18);
        if (lVar24 == 0) goto LAB_0149c6f8;
        uVar14 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar18));
        *(undefined4 *)(puVar3 + 0xf0) = 0xfffffffe;
        if (uVar14 == 0) goto LAB_0149c6f8;
        piVar22 = (int *)(lVar24 + 4);
        while (piVar22[-1] != -0x499d99d4) {
          piVar22 = piVar22 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_0149c6f8;
        }
        iVar12 = 0;
        if (*piVar22 != -1) {
          iVar12 = *piVar22;
        }
        *(int *)(puVar3 + 0xf0) = iVar12;
        uVar11 = *puVar17;
        if (uVar11 == 0) goto LAB_0149c6f8;
        goto LAB_0149c280;
      }
      uVar20 = *(uint *)(puVar3 + 0xf0);
      if ((int)uVar20 < 0) {
        if (uVar20 != 0xffffffff) goto LAB_0149c6f8;
        goto LAB_0149c2b4;
      }
      if ((float *)((ulong)uVar20 + (long)puVar17) != (float *)0x0) {
        fVar32 = *(float *)((ulong)uVar20 + (long)puVar17);
        goto LAB_0149c700;
      }
LAB_0149c6f8:
      fVar32 = 0.0;
LAB_0149c700:
      bVar9 = false;
      puVar30 = PTR_DAT_04bb3140;
      pcVar6 = PTR_DAT_04bbfe88;
      puVar2 = PTR_DAT_04bbfe90;
      puVar18 = local_a0;
    }
    PTR_DAT_04bbfe88 = pcVar6;
    PTR_DAT_04bbfe90 = puVar2;
    local_a0 = puVar18;
    if ((puVar18 != (uint *)0x0) && (uVar11 = *puVar18, uVar11 != 0)) {
      cVar29 = *pcVar6;
      do {
        if (cVar29 == '\0') {
          cVar29 = '\x01';
          *pcVar6 = '\x01';
          memset(puVar2,0xff,0x1ac);
          uVar11 = *puVar18;
        }
        else {
          uVar20 = *(uint *)(puVar2 + 0x28);
          if (-1 < (int)uVar20) {
            if ((float *)((ulong)uVar20 + (long)puVar18) != (float *)0x0) {
              fVar33 = *(float *)((ulong)uVar20 + (long)puVar18);
            }
            break;
          }
          if (uVar20 != 0xffffffff) break;
        }
        puVar19 = (uint *)(ulong)uVar11;
        if ((puVar19 == (uint *)0x0) || (puVar18 == puVar19)) break;
        lVar24 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar19)) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar18 + (lVar24 - (long)puVar19);
        if (lVar24 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar19));
        *(undefined4 *)(puVar2 + 0x28) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar22 = (int *)(lVar24 + 4);
        while (piVar22[-1] != -0x3e783aea) {
          piVar22 = piVar22 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_0149c710;
        }
        iVar12 = 0;
        if (*piVar22 != -1) {
          iVar12 = *piVar22;
        }
        *(int *)(puVar2 + 0x28) = iVar12;
        uVar11 = *puVar18;
        if (uVar11 == 0) break;
      } while( true );
    }
LAB_0149c710:
    puVar3 = PTR_DAT_04bbfe90;
    puVar2 = PTR_DAT_04bbfe88;
    fVar33 = fVar32 + fVar33;
    if (bVar9) {
      fVar31 = 0.0;
      if (0.0 <= fVar33) {
        fVar31 = fVar33;
      }
      local_80 = 0xbc;
    }
    else {
      uVar11 = *puVar17;
      if (uVar11 == 0) {
        fVar31 = 0.0;
        if (0.0 <= fVar33) {
          fVar31 = fVar33;
        }
      }
      else {
        cVar29 = *PTR_DAT_04bbfe88;
        while (cVar29 == '\0') {
          cVar29 = '\x01';
          *puVar2 = 1;
          memset(puVar3,0xff,0x1ac);
          uVar11 = *puVar17;
LAB_0149c7bc:
          fVar31 = 0.0;
          lVar24 = (long)puVar17 - (ulong)uVar11;
          if (((ulong)uVar11 == 0) || (lVar24 == 0)) goto LAB_0149c858;
          lVar4 = 0xc;
          if (*(char *)(lVar24 + 10) != '\0') {
            lVar4 = 0x1c;
          }
          if (lVar4 + lVar24 == 0) goto LAB_0149c858;
          uVar14 = (ulong)*(ushort *)(lVar24 + 8);
          *(undefined4 *)(puVar3 + 0x28) = 0xfffffffe;
          if (uVar14 == 0) goto LAB_0149c858;
          piVar22 = (int *)(lVar4 + lVar24 + 4);
          while (piVar22[-1] != -0x3e783aea) {
            piVar22 = piVar22 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_0149c858;
          }
          iVar12 = 0;
          if (*piVar22 != -1) {
            iVar12 = *piVar22;
          }
          *(int *)(puVar3 + 0x28) = iVar12;
          uVar11 = *puVar17;
          if (uVar11 == 0) goto LAB_0149c858;
        }
        uVar20 = *(uint *)(puVar3 + 0x28);
        if ((int)uVar20 < 0) {
          if (uVar20 == 0xffffffff) goto LAB_0149c7bc;
LAB_0149c854:
          fVar31 = 0.0;
        }
        else {
          if ((float *)((ulong)uVar20 + (long)puVar17) == (float *)0x0) goto LAB_0149c854;
          fVar31 = *(float *)((ulong)uVar20 + (long)puVar17);
        }
LAB_0149c858:
        if (fVar31 <= fVar33) {
          fVar31 = fVar33;
        }
      }
      uVar11 = *puVar17;
      uVar16 = 0;
      if ((uVar11 != 0) && (puVar17 != (uint *)(ulong)uVar11)) {
        puVar18 = (uint *)((long)puVar17 - (long)(ulong)uVar11);
        uVar16 = 0;
        if (*puVar18 != 0) {
          uVar11 = puVar18[1];
          if ((uVar11 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar20 = 0;
              if ((ulong)uVar11 != 0) {
                uVar20 = (uint)((ulong)((long)puVar17 - lVar24) / (ulong)uVar11);
              }
              if (*puVar18 <= uVar20) {
                uVar20 = 0xffffffff;
              }
              if ((uVar20 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar16 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar20 * 2),
                 uVar16 < 0xbd)) goto LAB_0149c8f8;
            }
          }
          uVar16 = 0;
        }
      }
LAB_0149c8f8:
      if (uVar16 == 0x17) {
        local_7c = 0x17;
        bVar9 = false;
        local_80 = 0x17;
        goto LAB_0149c9c8;
      }
      if (bVar9) {
        local_80 = 0xbc;
      }
      else {
        uVar11 = *puVar17;
        local_80 = 0;
        if ((uVar11 != 0) && (puVar17 != (uint *)(ulong)uVar11)) {
          puVar18 = (uint *)((long)puVar17 - (long)(ulong)uVar11);
          local_80 = 0;
          if (*puVar18 != 0) {
            uVar11 = puVar18[1];
            if ((uVar11 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
              lVar24 = 0xc;
              if (*(char *)((long)puVar18 + 10) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
              if (lVar24 != 0) {
                uVar20 = 0;
                if ((ulong)uVar11 != 0) {
                  uVar20 = (uint)((ulong)((long)puVar17 - lVar24) / (ulong)uVar11);
                }
                if (*puVar18 <= uVar20) {
                  uVar20 = 0xffffffff;
                }
                if ((uVar20 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_80 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar20 * 2),
                   local_80 < 0xbd)) goto LAB_0149c9b4;
              }
            }
            local_80 = 0;
          }
        }
      }
    }
LAB_0149c9b4:
    local_7c = 0x15;
    bVar9 = local_80 != 0x15;
    goto LAB_0149c9c8;
  }
  fVar32 = 0.0;
  if (local_a0 != (uint *)0x0) {
    uVar11 = *local_a0;
    if (uVar11 != 0) {
      cVar29 = *PTR_DAT_04bbfe88;
      do {
        if (cVar29 == '\0') {
          cVar29 = '\x01';
          *puVar8 = 1;
          memset(__s,0xff,0x1ac);
          uVar11 = *puVar17;
        }
        else {
          uVar20 = *(uint *)(__s + 0x28);
          if (-1 < (int)uVar20) {
            puVar30 = PTR_DAT_04bb3140;
            if ((float *)((ulong)uVar20 + (long)puVar17) != (float *)0x0) {
              fVar32 = *(float *)((ulong)uVar20 + (long)puVar17);
            }
            break;
          }
          if (uVar20 != 0xffffffff) goto LAB_0149c404;
        }
        puVar18 = (uint *)(ulong)uVar11;
        if ((puVar18 == (uint *)0x0) || (puVar17 == puVar18)) goto LAB_0149c404;
        lVar24 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar18)) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar17 + (lVar24 - (long)puVar18);
        if (lVar24 == 0) goto LAB_0149c404;
        uVar14 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar18));
        *(undefined4 *)(__s + 0x28) = 0xfffffffe;
        if (uVar14 == 0) goto LAB_0149c404;
        piVar22 = (int *)(lVar24 + 4);
        while (piVar22[-1] != -0x3e783aea) {
          piVar22 = piVar22 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_0149c404;
        }
        iVar12 = 0;
        if (*piVar22 != -1) {
          iVar12 = *piVar22;
        }
        *(int *)(__s + 0x28) = iVar12;
        uVar11 = *puVar17;
        if (uVar11 == 0) goto LAB_0149c404;
      } while( true );
    }
  }
LAB_0149c40c:
  iVar12 = FUN_0277d6c4(&local_a8);
  fVar31 = 15.0;
  if (iVar12 != 0x2b56) {
    fVar31 = fVar32;
  }
  if (local_a0 == (uint *)0x0) {
    local_e8 = (undefined *)CONCAT44(local_e8._4_4_,0xbc);
    uVar11 = 0xbc;
LAB_0149c698:
    local_e8 = (undefined *)CONCAT44(local_e8._4_4_,uVar11);
    bVar9 = uVar11 != 0x15;
  }
  else {
    uVar11 = *local_a0;
    uVar20 = 0;
    if ((uVar11 != 0) && (local_a0 != (uint *)(ulong)uVar11)) {
      puVar17 = (uint *)((long)local_a0 - (long)(ulong)uVar11);
      uVar20 = 0;
      if (*puVar17 != 0) {
        uVar11 = puVar17[1];
        if ((uVar11 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
          lVar24 = 0xc;
          if (*(char *)((long)puVar17 + 10) != '\0') {
            lVar24 = 0x1c;
          }
          lVar24 = (long)puVar17 + lVar24 + (ulong)(ushort)puVar17[2] * 8;
          if (lVar24 != 0) {
            uVar20 = 0;
            if ((ulong)uVar11 != 0) {
              uVar20 = (uint)((ulong)((long)local_a0 - lVar24) / (ulong)uVar11);
            }
            if (*puVar17 <= uVar20) {
              uVar20 = 0xffffffff;
            }
            if ((uVar20 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar20 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar20 * 2),
               uVar20 < 0xbd)) goto LAB_0149c4c0;
          }
        }
        uVar20 = 0;
      }
    }
LAB_0149c4c0:
    local_e8 = (undefined *)CONCAT44(local_e8._4_4_,uVar20);
    if (uVar20 != 0x17) {
      uVar11 = 0;
      uVar20 = *local_a0;
      if ((uVar20 != 0) && (local_a0 != (uint *)(ulong)uVar20)) {
        puVar17 = (uint *)((long)local_a0 - (long)(ulong)uVar20);
        uVar11 = 0;
        if (*puVar17 != 0) {
          uVar11 = puVar17[1];
          if ((uVar11 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar17 + lVar24 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar24 != 0) {
              uVar20 = 0;
              if ((ulong)uVar11 != 0) {
                uVar20 = (uint)((ulong)((long)local_a0 - lVar24) / (ulong)uVar11);
              }
              if (*puVar17 <= uVar20) {
                uVar20 = 0xffffffff;
              }
              if ((uVar20 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar11 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar20 * 2),
                 uVar11 < 0xbd)) goto LAB_0149c698;
            }
          }
          uVar11 = 0;
        }
      }
      goto LAB_0149c698;
    }
    bVar9 = false;
  }
  fVar32 = 0.0;
LAB_0149c9c8:
  uVar20 = (uint)local_c8;
  fVar32 = fVar32 / 5.0;
  fVar31 = fVar31 / 5.0;
  uVar11 = 0;
  if (fVar32 != (float)(int)fVar32) {
    uVar11 = (uint)(fVar32 < 0.0);
  }
  uVar23 = 0;
  if (fVar31 != (float)(int)fVar31) {
    uVar23 = (uint)(fVar31 < 0.0);
  }
  iVar13 = (int)fVar31 - uVar23;
  iVar12 = iVar13;
  if (6 < iVar13) {
    iVar12 = 7;
  }
  if (!bVar9) {
    iVar12 = iVar13;
  }
  uVar23 = local_b8._4_4_ + 1;
  if ((int)((int)fVar32 - uVar11) < iVar12) {
    if (uVar23 != local_c8._4_4_) {
      puVar2 = PTR_DAT_04bbfe68 + 0x10;
      puVar3 = PTR_DAT_04bb3290 + 0x10;
      uVar28 = local_c8._4_4_;
      iVar13 = (int)local_b8;
      uVar27 = (uint)local_c8;
      uVar21 = (uint)local_c8;
      do {
        pcVar6 = (char *)(param_1 + 0x280) + (ulong)uVar27 * 0x3000;
        if (0x3f < uVar27) {
          pcVar6 = (char *)(param_1 + 0x280);
        }
        pcVar5 = pcVar6 + (ulong)uVar28 * 0xc0;
        if (0x3f < uVar28) {
          pcVar5 = pcVar6;
        }
        if ((int)uVar27 < 0x40) {
          if ((int)uVar28 < 0x40) {
            uVar21 = (int)fVar32 - uVar11;
            do {
              if (((int)uVar21 < 8) && (-1 < (int)(uVar28 | uVar27 | uVar21))) {
                pcVar6 = pcVar5 + (ulong)uVar21 * 0x18;
                if (7 < uVar21) {
                  pcVar6 = pcVar5;
                }
                if ((*pcVar6 != '\0') && (1 < (byte)pcVar6[1])) {
                  local_100 = 0;
                  lVar24 = *(long *)PTR_DAT_04bb2720;
                  local_108 = puVar2;
                  if ((lVar24 == 0) || (*(long *)(lVar24 + 0x330) == 0)) {
                    puVar25 = &DAT_055c04a0;
                  }
                  else {
                    puVar25 = (undefined8 *)
                              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar24 + 0x338))
                    ;
                    iVar13 = FUN_006bd550(*puVar25,0);
                    puVar25 = (undefined8 *)PTR_DAT_04bc3a80;
                    if (iVar13 != 0x758f7eaf) {
                      puVar25 = &DAT_055c04a0;
                    }
                  }
                  local_fc = *(undefined4 *)(puVar25 + 7);
                  uVar10 = FUN_017baf44();
                  local_f8 = (uint *)(CONCAT71(local_f8._1_7_,uVar10) & 0xffffffffffffff01);
                  local_108 = puVar30 + 0x10;
                  puVar17 = (uint *)FUN_014fbd50(&local_108,pcVar6[1],pcVar6 + 8);
                  uVar7 = *puVar17;
                  if ((((uVar7 == 0) ||
                       (plVar26 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0)
                                                      + 8) + ((ulong)(uVar7 >> 0x11) & 0x7ff8)),
                       plVar26 == (long *)0x0)) || ((*(uint *)(plVar26 + 0x49) >> 1 & 1) != 0)) ||
                     (*(uint *)(plVar26 + 0x46) != uVar7)) {
                    plVar26 = (long *)0x0;
                  }
                  iVar13 = *(int *)(*(long *)PTR_DAT_04bb27c0 + 0x288);
                  if ((iVar13 == 1) || (iVar13 == -1)) {
                    plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                           (*(long *)PTR_DAT_04bb3350 + 0x68));
                    (**(code **)(*plVar15 + 0x60))();
                  }
                  if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar13 != 0)) {
                    *(undefined **)PTR_DAT_04bb5920 = puVar3;
                    __cxa_guard_release(PTR_DAT_04bb5928);
                  }
                  (**(code **)(*plVar26 + 0x20))(plVar26,PTR_DAT_04bb5920);
                  local_e8 = (undefined *)CONCAT71(local_e8._1_7_,6);
                  FUN_014719b0(plVar26,&local_e8);
                }
              }
              uVar21 = uVar21 + 1;
            } while ((int)uVar21 < iVar12);
            iVar13 = (int)local_b8;
            uVar21 = (uint)local_c8;
          }
        }
        if ((int)uVar27 < iVar13) {
          uVar27 = uVar27 + 1;
        }
        else {
          uVar28 = uVar28 + 1;
          uVar27 = uVar21;
        }
      } while ((uVar20 != uVar27) || (uVar23 != uVar28));
    }
  }
  else if (uVar23 != local_c8._4_4_) {
    uVar11 = (uint)local_c8;
    do {
      if ((int)uVar11 < (int)local_b8) {
        uVar11 = uVar11 + 1;
      }
      else {
        local_c8._4_4_ = local_c8._4_4_ + 1;
        uVar11 = (uint)local_c8;
      }
    } while (((uint)local_c8 != uVar11) || (uVar23 != local_c8._4_4_));
  }
  return;
LAB_0149c404:
  puVar30 = PTR_DAT_04bb3140;
  goto LAB_0149c40c;
}

