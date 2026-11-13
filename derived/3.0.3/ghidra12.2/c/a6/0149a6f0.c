
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0149a6f0(long param_1,uint *param_2,long param_3,int *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined *__s;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  ushort uVar24;
  uint uVar25;
  int *piVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  undefined8 *puVar30;
  char cVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined *local_100;
  uint local_f8;
  int local_f4;
  uint *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 local_58;
  
  lVar20 = *(long *)PTR_DAT_04bb2720;
  if (lVar20 == 0) {
    puVar30 = &DAT_055c04a0;
  }
  else {
    puVar30 = &DAT_055c04a0;
    if (*(long *)(lVar20 + 0x330) != 0) {
      puVar30 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar20 + 0x338));
      iVar13 = FUN_006bd550(*puVar30,0);
      puVar30 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar13 != 0x758f7eaf) {
        puVar30 = &DAT_055c04a0;
      }
    }
  }
  FUN_017baf44(*(undefined4 *)(puVar30 + 7));
  puVar2 = PTR_DAT_04bb43c0;
  switch(*param_4) {
  case 0:
  case 1:
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    uVar16 = FUN_0277e294(param_2);
    puVar2 = PTR_DAT_04bb43c0;
    if ((uVar16 & 1) == 0) {
      uVar17 = 0;
    }
    else {
      local_b8 = (undefined *)0x0;
      local_c8 = PTR_DAT_04bc0510 + 0x10;
      local_c0 = *(undefined8 *)param_2;
      lVar20 = *(long *)PTR_DAT_04bb43c0;
      uVar15 = FUN_0277d6c4(&local_c0);
      if (*(long *)puVar2 != 0) {
        lVar20 = *(long *)(lVar20 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar15 < *(uint *)(lVar20 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
          lVar20 = *(long *)PTR_DAT_04bc0428;
          uVar15 = FUN_0277d6c4(param_2);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if (uVar15 < *(uint *)(lVar20 + 0x1d8)) {
            lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8);
            if (lVar20 != 0) {
              local_b8 = (undefined *)lVar20;
            }
          }
        }
      }
      iVar13 = FUN_01ae7550(&local_c8);
      if (iVar13 != 10) {
        if (iVar13 == 0xc) {
          uVar15 = 2;
          bVar11 = true;
        }
        else if (iVar13 == 0xb) {
          bVar11 = true;
          uVar15 = 1;
        }
        else {
          bVar11 = false;
          uVar15 = 0;
        }
        local_e0 = (undefined *)0x0;
        local_f0 = (uint *)(PTR_DAT_04bbc1a0 + 0x10);
        local_e8 = PTR_DAT_04bb2010 + 0x10;
        local_d0 = (undefined *)0x0;
        local_d8 = local_e8;
        FUN_01afb480(&local_c8,&local_f0);
        uVar27 = (uint)local_e0 + *(int *)(param_3 + 8);
        iVar28 = local_e0._4_4_ + *(int *)(param_3 + 0xc);
        local_e0 = (undefined *)CONCAT44(iVar28,uVar27);
        local_d0._4_4_ = local_d0._4_4_ + *(int *)(param_3 + 0xc);
        local_d0._0_4_ = (int)local_d0 + *(int *)(param_3 + 8);
        iVar13 = local_d0._4_4_ + 1;
        if (!bVar11) {
          if (iVar13 == iVar28) {
            return 9;
          }
          uVar15 = uVar27;
          do {
            if ((int)uVar15 < (int)local_d0) {
              uVar15 = uVar15 + 1;
            }
            else {
              iVar28 = iVar28 + 1;
              uVar15 = uVar27;
            }
          } while ((uVar27 != uVar15) || (iVar13 != iVar28));
          return 9;
        }
        if (uVar15 < 2) {
          uVar15 = 1;
        }
        if (iVar13 != iVar28) {
          puVar2 = PTR_DAT_04bbfe68 + 0x10;
          puVar3 = PTR_DAT_04bb2010 + 0x10;
          puVar4 = PTR_DAT_04bb5438 + 0x10;
          uVar29 = uVar27;
          do {
            uVar18 = 0;
            local_100 = puVar3;
            local_f8 = uVar29;
            local_f4 = iVar28;
            do {
              local_a8 = (undefined *)((ulong)local_a8 & 0xffffffff00000000);
              lVar20 = *(long *)PTR_DAT_04bb2720;
              local_b0 = puVar2;
              if ((lVar20 == 0) || (*(long *)(lVar20 + 0x330) == 0)) {
                puVar30 = &DAT_055c04a0;
              }
              else {
                puVar30 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
                iVar14 = FUN_006bd550(*puVar30,0);
                puVar30 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar14 != 0x758f7eaf) {
                  puVar30 = &DAT_055c04a0;
                }
              }
              local_a8 = (undefined *)CONCAT44(*(undefined4 *)(puVar30 + 7),(int)local_a8);
              uVar12 = FUN_017baf44();
              local_a0 = CONCAT31(local_a0._1_3_,uVar12) & 0xffffff01;
              local_b0 = puVar4;
              lVar20 = FUN_015001e0(&local_b0);
              iVar14 = *(int *)(lVar20 + 0x20);
              lVar20 = *(long *)PTR_DAT_04bb5ce0;
              if (lVar20 == 0) {
                fVar34 = 0.0;
                fVar32 = 0.0;
                fVar33 = 85.0;
                fVar35 = 85.0;
              }
              else {
                fVar32 = (float)*(int *)(lVar20 + 0xd88) * 5.0;
                fVar34 = (float)*(int *)(lVar20 + 0xd8c) * 5.0;
                fVar33 = (float)*(int *)(lVar20 + 0xd98) * 5.0 + 5.0;
                fVar35 = (float)*(int *)(lVar20 + 0xd9c) * 5.0 + 5.0;
              }
              lVar20 = FUN_01a4fa00(&local_b0);
              iVar8 = *(int *)(lVar20 + 0x14);
              FUN_01a4fa00(&local_b0);
              uVar1 = (iVar8 - local_f4) + 7;
              if (((int)uVar1 < 0) || (3 < *param_4 - 2U)) goto LAB_0149b660;
              iVar8 = (int)((float)(int)fVar34 / 5.0) - (uint)(fVar34 < 0.0);
              iVar9 = (int)((float)(int)fVar35 / 5.0) - (uint)(fVar35 < 0.0);
              switch(*param_4) {
              case 2:
                uVar25 = uVar18 + iVar8;
                uVar19 = local_f8;
                break;
              case 3:
                uVar25 = iVar9 + iVar8 + ~local_f8;
                uVar19 = uVar18 + ((int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0));
                break;
              case 4:
                uVar25 = iVar9 + ~uVar18;
                uVar19 = iVar14 - local_f8;
                goto joined_r0x0149b894;
              case 5:
                uVar19 = (~uVar18 - (uint)(fVar33 < 0.0)) + (int)((float)(int)fVar33 / 5.0);
                uVar25 = local_f8;
joined_r0x0149b894:
                if ((int)uVar19 < 0x40) goto LAB_0149b898;
                goto LAB_0149b660;
              }
              if (0x3f < (int)uVar19) goto LAB_0149b660;
LAB_0149b898:
              if ((((int)(uVar19 | uVar1 | uVar25) < 0) || (7 < uVar1)) || (0x3f < (int)uVar25))
              goto LAB_0149b660;
              lVar20 = param_1 + 0x280 + (ulong)uVar19 * 0x3000;
              if (0x3f < uVar19) {
                lVar20 = param_1 + 0x280;
              }
              lVar5 = lVar20 + (ulong)uVar25 * 0xc0;
              if (0x3f < uVar25) {
                lVar5 = lVar20;
              }
              if (*(char *)(lVar5 + (ulong)uVar1 * 0x18) != '\0') {
                return 1;
              }
              local_b0 = PTR_DAT_04bb2010 + 0x10;
              local_a8 = (undefined *)0x0;
              uVar16 = FUN_01500e68(&local_b0,&local_100);
              if ((uVar16 & 1) == 0) goto LAB_0149b660;
              switch(*param_4) {
              case 2:
                uVar25 = 0;
                uVar19 = uVar18;
                if (2 < uVar1) goto LAB_0149b660;
                goto LAB_0149b994;
              case 3:
                uVar19 = 0;
                uVar25 = uVar18;
                break;
              case 4:
                uVar19 = -uVar18;
                uVar25 = 0;
                break;
              case 5:
                uVar25 = -uVar18;
                goto joined_r0x0149b954;
              default:
                uVar25 = 0;
joined_r0x0149b954:
                uVar19 = 0;
              }
              if (uVar1 < 3) {
LAB_0149b994:
                uVar25 = (int)local_a8 + uVar25;
                if (uVar25 < 0x120) {
                  if ((local_a8._4_4_ + uVar19 < 0x100) &&
                     ((*(uint *)(PTR_DAT_04bbcec0 +
                                (ulong)(uVar25 + (local_a8._4_4_ + uVar19) * 0x120 >> 5) * 4 + 8) >>
                       (ulong)(uVar25 & 0x1f) & 1) != 0)) {
                    return 1;
                  }
                }
              }
LAB_0149b660:
              uVar18 = uVar18 + 1;
            } while (uVar15 != uVar18);
            if ((int)uVar29 < (int)local_d0) {
              uVar29 = uVar29 + 1;
            }
            else {
              iVar28 = iVar28 + 1;
              uVar29 = (uint)local_e0;
            }
          } while ((uVar27 != uVar29) || (iVar13 != iVar28));
        }
      }
      uVar17 = 9;
    }
    return uVar17;
  case 6:
    return 9;
  case 7:
    uVar16 = FUN_0277e294(param_2);
    puVar2 = PTR_DAT_04bb43c0;
    if ((uVar16 & 1) == 0) {
      uVar17 = 0;
    }
    else {
      local_58 = PTR_DAT_04bc0510 + 0x10;
      lVar20 = *(long *)PTR_DAT_04bb43c0;
      uVar15 = FUN_0277d6c4((long)register0x00000008 + -0x50);
      if (*(long *)puVar2 != 0) {
        lVar20 = *(long *)(lVar20 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar15 < *(uint *)(lVar20 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
          FUN_0277d6c4(param_2);
        }
      }
      FUN_01afb480(&local_58,(long)register0x00000008 + -0x80);
      uVar27 = *(uint *)(param_3 + 0xc);
      uVar15 = uVar27 + 1;
      if (uVar15 == uVar27) {
        uVar17 = 9;
      }
      else {
        uVar29 = *(uint *)(param_3 + 8);
        uVar17 = 9;
        uVar18 = uVar29;
        do {
          if ((((int)uVar27 < 0x40) && ((int)uVar18 < 0x40)) && (-1 < (int)(uVar27 | uVar18))) {
            lVar20 = param_1 + 0x280 + (ulong)uVar18 * 0x3000;
            if (0x3f < uVar18) {
              lVar20 = param_1 + 0x280;
            }
            lVar5 = lVar20 + (ulong)uVar27 * 0xc0;
            if (0x3f < uVar27) {
              lVar5 = lVar20;
            }
            if (*(char *)(lVar5 + 0xa8) != '\0') {
              return 1;
            }
          }
          if ((int)uVar18 < (int)uVar29) {
            uVar18 = uVar18 + 1;
          }
          else {
            uVar27 = uVar27 + 1;
            uVar18 = uVar29;
          }
        } while ((uVar29 != uVar18) || (uVar15 != uVar27));
      }
    }
    return uVar17;
  default:
    return 0;
  }
  lVar20 = *(long *)PTR_DAT_04bb43c0;
  uVar15 = FUN_0277d6c4(param_2);
  if (*(long *)puVar2 == 0) {
    return 0;
  }
  lVar20 = *(long *)(lVar20 + 0x57e58);
  uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
  if (*(uint *)(lVar20 + 0x1d8) <= uVar15) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8) == 0) {
    return 0;
  }
  lVar20 = *(long *)PTR_DAT_04bb2720;
  if ((lVar20 != 0) && (*(long *)(lVar20 + 0x330) != 0)) {
    puVar30 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
    FUN_006bd550(*puVar30,0);
  }
  FUN_017baf44();
  puVar3 = PTR_DAT_04bc0510;
  lVar20 = *(long *)puVar2;
  local_a8 = PTR_DAT_04bc0510 + 0x10;
  local_98 = (uint *)0x0;
  local_a0 = *param_2;
  uStack_9c = param_2[1];
  uVar15 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar2 != 0) {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((uVar15 < *(uint *)(lVar20 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
      lVar20 = *(long *)PTR_DAT_04bc0428;
      uVar15 = FUN_0277d6c4(param_2);
      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if (uVar15 < *(uint *)(lVar20 + 0x1d8)) {
        puVar21 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8);
        if (puVar21 != (uint *)0x0) {
          local_98 = puVar21;
        }
      }
    }
  }
  local_c0 = 0;
  local_d0 = PTR_DAT_04bbc1a0 + 0x10;
  puVar4 = PTR_DAT_04bb2010 + 0x10;
  local_b0 = (undefined *)0x0;
  local_c8 = puVar4;
  local_b8 = puVar4;
  FUN_01afb480(&local_a8,&local_d0);
  puVar21 = local_98;
  __s = PTR_DAT_04bbfe90;
  puVar10 = PTR_DAT_04bbfe88;
  local_b0 = (undefined *)
             CONCAT44(local_b0._4_4_ + *(int *)(param_3 + 0xc),(int)local_b0 + *(int *)(param_3 + 8)
                     );
  local_c0 = CONCAT44(local_c0._4_4_ + *(int *)(param_3 + 0xc),
                      (uint)local_c0 + *(int *)(param_3 + 8));
  if (*param_4 == 1) {
    local_d8 = (undefined *)0x0;
    local_e0 = puVar4;
    FUN_01a5033c(&local_e8,(long)register0x00000008 + -0x90,0,param_3,&local_e0);
    uVar16 = FUN_0277e294(&local_e8);
    if ((uVar16 & 1) == 0) {
      bVar11 = false;
      fVar32 = 0.0;
      fVar33 = 0.0;
      goto LAB_0149b268;
    }
    lVar20 = *(long *)puVar2;
    local_100 = puVar3 + 0x10;
    local_f0 = (uint *)0x0;
    local_f8 = (uint)local_e8;
    local_f4 = local_e8._4_4_;
    uVar15 = FUN_0277d6c4(&local_f8);
    fVar34 = 0.0;
    if (*(long *)puVar2 == 0) {
LAB_0149acf8:
      puVar21 = (uint *)0x0;
LAB_0149acfc:
      bVar11 = true;
    }
    else {
      lVar20 = *(long *)(lVar20 + 0x57e58);
      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((*(uint *)(lVar20 + 0x1d8) <= uVar15) ||
         (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8) == 0)) goto LAB_0149acf8;
      lVar20 = *(long *)PTR_DAT_04bc0428;
      uVar15 = FUN_0277d6c4(&local_e8);
      puVar3 = PTR_DAT_04bbfe90;
      puVar2 = PTR_DAT_04bbfe88;
      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if (*(uint *)(lVar20 + 0x1d8) <= uVar15) goto LAB_0149acf8;
      puVar21 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8);
      if (puVar21 == (uint *)0x0) goto LAB_0149acfc;
      uVar15 = *puVar21;
      local_f0 = puVar21;
      if (uVar15 != 0) {
        cVar31 = *PTR_DAT_04bbfe88;
        do {
          if (cVar31 == '\0') {
            cVar31 = '\x01';
            *puVar2 = 1;
            memset(puVar3,0xff,0x1ac);
            uVar15 = *puVar21;
          }
          else {
            uVar27 = *(uint *)(puVar3 + 0xf0);
            if (-1 < (int)uVar27) {
              if ((float *)((ulong)uVar27 + (long)puVar21) != (float *)0x0) {
                fVar32 = *(float *)((ulong)uVar27 + (long)puVar21);
                bVar11 = false;
                pcVar7 = PTR_DAT_04bbfe88;
                puVar2 = PTR_DAT_04bbfe90;
                puVar22 = local_98;
                goto joined_r0x0149b3fc;
              }
              break;
            }
            if (uVar27 != 0xffffffff) break;
          }
          puVar22 = (uint *)(ulong)uVar15;
          if ((puVar22 == (uint *)0x0) || (puVar21 == puVar22)) break;
          lVar20 = 0xc;
          if (*(char *)((long)puVar21 + (10 - (long)puVar22)) != '\0') {
            lVar20 = 0x1c;
          }
          lVar20 = (long)puVar21 + (lVar20 - (long)puVar22);
          if (lVar20 == 0) break;
          uVar16 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar22));
          *(undefined4 *)(puVar3 + 0xf0) = 0xfffffffe;
          if (uVar16 == 0) break;
          piVar26 = (int *)(lVar20 + 4);
          while (piVar26[-1] != -0x499d99d4) {
            piVar26 = piVar26 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_0149b404;
          }
          iVar13 = 0;
          if (*piVar26 != -1) {
            iVar13 = *piVar26;
          }
          *(int *)(puVar3 + 0xf0) = iVar13;
          uVar15 = *puVar21;
          if (uVar15 == 0) break;
        } while( true );
      }
LAB_0149b404:
      bVar11 = false;
    }
    fVar32 = 0.0;
    pcVar7 = PTR_DAT_04bbfe88;
    puVar2 = PTR_DAT_04bbfe90;
    puVar22 = local_98;
joined_r0x0149b3fc:
    PTR_DAT_04bbfe88 = pcVar7;
    PTR_DAT_04bbfe90 = puVar2;
    local_98 = puVar22;
    if ((puVar22 != (uint *)0x0) && (uVar15 = *puVar22, uVar15 != 0)) {
      cVar31 = *pcVar7;
      do {
        if (cVar31 == '\0') {
          cVar31 = '\x01';
          *pcVar7 = '\x01';
          memset(puVar2,0xff,0x1ac);
          uVar15 = *puVar22;
        }
        else {
          uVar27 = *(uint *)(puVar2 + 0x28);
          if (-1 < (int)uVar27) {
            if ((float *)((ulong)uVar27 + (long)puVar22) != (float *)0x0) {
              fVar34 = *(float *)((ulong)uVar27 + (long)puVar22);
            }
            break;
          }
          if (uVar27 != 0xffffffff) break;
        }
        puVar23 = (uint *)(ulong)uVar15;
        if ((puVar23 == (uint *)0x0) || (puVar22 == puVar23)) break;
        lVar20 = 0xc;
        if (*(char *)((long)puVar22 + (10 - (long)puVar23)) != '\0') {
          lVar20 = 0x1c;
        }
        lVar20 = (long)puVar22 + (lVar20 - (long)puVar23);
        if (lVar20 == 0) break;
        uVar16 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar23));
        *(undefined4 *)(puVar2 + 0x28) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar26 = (int *)(lVar20 + 4);
        while (piVar26[-1] != -0x3e783aea) {
          piVar26 = piVar26 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_0149afb8;
        }
        iVar13 = 0;
        if (*piVar26 != -1) {
          iVar13 = *piVar26;
        }
        *(int *)(puVar2 + 0x28) = iVar13;
        uVar15 = *puVar22;
        if (uVar15 == 0) break;
      } while( true );
    }
LAB_0149afb8:
    puVar3 = PTR_DAT_04bbfe90;
    puVar2 = PTR_DAT_04bbfe88;
    fVar34 = fVar32 + fVar34;
    if (bVar11) {
      fVar33 = 0.0;
      if (0.0 <= fVar34) {
        fVar33 = fVar34;
      }
      uVar24 = 0xbc;
    }
    else {
      uVar15 = *puVar21;
      if (uVar15 == 0) {
        fVar33 = 0.0;
        if (0.0 <= fVar34) {
          fVar33 = fVar34;
        }
      }
      else {
        cVar31 = *PTR_DAT_04bbfe88;
        while (cVar31 == '\0') {
          cVar31 = '\x01';
          *puVar2 = 1;
          memset(puVar3,0xff,0x1ac);
          uVar15 = *puVar21;
LAB_0149b064:
          fVar33 = 0.0;
          lVar20 = (long)puVar21 - (ulong)uVar15;
          if (((ulong)uVar15 == 0) || (lVar20 == 0)) goto LAB_0149b0fc;
          lVar5 = 0xc;
          if (*(char *)(lVar20 + 10) != '\0') {
            lVar5 = 0x1c;
          }
          if (lVar5 + lVar20 == 0) goto LAB_0149b0fc;
          uVar16 = (ulong)*(ushort *)(lVar20 + 8);
          *(undefined4 *)(puVar3 + 0x28) = 0xfffffffe;
          if (uVar16 == 0) goto LAB_0149b0fc;
          piVar26 = (int *)(lVar5 + lVar20 + 4);
          while (piVar26[-1] != -0x3e783aea) {
            piVar26 = piVar26 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_0149b0fc;
          }
          iVar13 = 0;
          if (*piVar26 != -1) {
            iVar13 = *piVar26;
          }
          *(int *)(puVar3 + 0x28) = iVar13;
          uVar15 = *puVar21;
          if (uVar15 == 0) goto LAB_0149b0fc;
        }
        uVar27 = *(uint *)(puVar3 + 0x28);
        if ((int)uVar27 < 0) {
          if (uVar27 == 0xffffffff) goto LAB_0149b064;
LAB_0149b0f8:
          fVar33 = 0.0;
        }
        else {
          if ((float *)((ulong)uVar27 + (long)puVar21) == (float *)0x0) goto LAB_0149b0f8;
          fVar33 = *(float *)((ulong)uVar27 + (long)puVar21);
        }
LAB_0149b0fc:
        if (fVar33 <= fVar34) {
          fVar33 = fVar34;
        }
      }
      uVar24 = 0;
      uVar15 = *puVar21;
      if ((uVar15 != 0) && (puVar21 != (uint *)(ulong)uVar15)) {
        puVar22 = (uint *)((long)puVar21 - (long)(ulong)uVar15);
        uVar24 = 0;
        if (*puVar22 != 0) {
          uVar15 = puVar22[1];
          if ((uVar15 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
            lVar20 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar22 + lVar20 + (ulong)(ushort)puVar22[2] * 8;
            if (lVar20 != 0) {
              uVar27 = 0;
              if ((ulong)uVar15 != 0) {
                uVar27 = (uint)((ulong)((long)puVar21 - lVar20) / (ulong)uVar15);
              }
              if (*puVar22 <= uVar27) {
                uVar27 = 0xffffffff;
              }
              if ((uVar27 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar24 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar27 * 2),
                 uVar24 < 0xbd)) goto LAB_0149b198;
            }
          }
          uVar24 = 0;
        }
      }
LAB_0149b198:
      if (uVar24 == 0x17) {
        bVar11 = false;
        goto LAB_0149b268;
      }
      if (bVar11) {
        uVar24 = 0xbc;
      }
      else {
        uVar15 = *puVar21;
        uVar24 = 0;
        if ((uVar15 != 0) && (puVar21 != (uint *)(ulong)uVar15)) {
          puVar22 = (uint *)((long)puVar21 - (long)(ulong)uVar15);
          uVar24 = 0;
          if (*puVar22 != 0) {
            uVar15 = puVar22[1];
            if ((uVar15 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
              lVar20 = 0xc;
              if (*(char *)((long)puVar22 + 10) != '\0') {
                lVar20 = 0x1c;
              }
              lVar20 = (long)puVar22 + lVar20 + (ulong)(ushort)puVar22[2] * 8;
              if (lVar20 != 0) {
                uVar27 = 0;
                if ((ulong)uVar15 != 0) {
                  uVar27 = (uint)((ulong)((long)puVar21 - lVar20) / (ulong)uVar15);
                }
                if (*puVar22 <= uVar27) {
                  uVar27 = 0xffffffff;
                }
                if ((uVar27 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar24 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar27 * 2),
                   uVar24 < 0xbd)) goto LAB_0149b254;
              }
            }
            uVar24 = 0;
          }
        }
      }
    }
LAB_0149b254:
    bVar11 = uVar24 != 0x15;
    goto LAB_0149b268;
  }
  fVar32 = 0.0;
  if ((local_98 != (uint *)0x0) && (uVar15 = *local_98, uVar15 != 0)) {
    cVar31 = *PTR_DAT_04bbfe88;
    do {
      if (cVar31 == '\0') {
        cVar31 = '\x01';
        *puVar10 = 1;
        memset(__s,0xff,0x1ac);
        uVar15 = *puVar21;
      }
      else {
        uVar27 = *(uint *)(__s + 0x28);
        if (-1 < (int)uVar27) {
          if ((float *)((ulong)uVar27 + (long)puVar21) != (float *)0x0) {
            fVar32 = *(float *)((ulong)uVar27 + (long)puVar21);
          }
          break;
        }
        if (uVar27 != 0xffffffff) break;
      }
      puVar22 = (uint *)(ulong)uVar15;
      if ((puVar22 == (uint *)0x0) || (puVar21 == puVar22)) break;
      lVar20 = 0xc;
      if (*(char *)((long)puVar21 + (10 - (long)puVar22)) != '\0') {
        lVar20 = 0x1c;
      }
      lVar20 = (long)puVar21 + (lVar20 - (long)puVar22);
      if (lVar20 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar22));
      *(undefined4 *)(__s + 0x28) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar26 = (int *)(lVar20 + 4);
      while (piVar26[-1] != -0x3e783aea) {
        piVar26 = piVar26 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_0149ae04;
      }
      iVar13 = 0;
      if (*piVar26 != -1) {
        iVar13 = *piVar26;
      }
      *(int *)(__s + 0x28) = iVar13;
      uVar15 = *puVar21;
      if (uVar15 == 0) break;
    } while( true );
  }
LAB_0149ae04:
  iVar13 = FUN_0277d6c4(&local_a0);
  fVar33 = 15.0;
  if (iVar13 != 0x2b56) {
    fVar33 = fVar32;
  }
  if (local_98 == (uint *)0x0) {
    uVar24 = 0xbc;
LAB_0149af90:
    bVar11 = uVar24 != 0x15;
  }
  else {
    uVar15 = *local_98;
    uVar24 = 0;
    if ((uVar15 != 0) && (local_98 != (uint *)(ulong)uVar15)) {
      puVar21 = (uint *)((long)local_98 - (long)(ulong)uVar15);
      uVar24 = 0;
      if (*puVar21 != 0) {
        uVar15 = puVar21[1];
        if ((uVar15 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
          lVar20 = 0xc;
          if (*(char *)((long)puVar21 + 10) != '\0') {
            lVar20 = 0x1c;
          }
          lVar20 = (long)puVar21 + lVar20 + (ulong)(ushort)puVar21[2] * 8;
          if (lVar20 != 0) {
            uVar27 = 0;
            if ((ulong)uVar15 != 0) {
              uVar27 = (uint)((ulong)((long)local_98 - lVar20) / (ulong)uVar15);
            }
            if (*puVar21 <= uVar27) {
              uVar27 = 0xffffffff;
            }
            if ((uVar27 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar24 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar27 * 2),
               uVar24 < 0xbd)) goto LAB_0149aeb8;
          }
        }
        uVar24 = 0;
      }
    }
LAB_0149aeb8:
    if (uVar24 != 0x17) {
      uVar24 = 0;
      uVar15 = *local_98;
      if ((uVar15 != 0) && (local_98 != (uint *)(ulong)uVar15)) {
        puVar21 = (uint *)((long)local_98 - (long)(ulong)uVar15);
        uVar24 = 0;
        if (*puVar21 != 0) {
          uVar15 = puVar21[1];
          if ((uVar15 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
            lVar20 = 0xc;
            if (*(char *)((long)puVar21 + 10) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar21 + lVar20 + (ulong)(ushort)puVar21[2] * 8;
            if (lVar20 != 0) {
              uVar27 = 0;
              if ((ulong)uVar15 != 0) {
                uVar27 = (uint)((ulong)((long)local_98 - lVar20) / (ulong)uVar15);
              }
              if (*puVar21 <= uVar27) {
                uVar27 = 0xffffffff;
              }
              if ((uVar27 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar24 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar27 * 2),
                 uVar24 < 0xbd)) goto LAB_0149af90;
            }
          }
          uVar24 = 0;
        }
      }
      goto LAB_0149af90;
    }
    bVar11 = false;
  }
  fVar32 = 0.0;
LAB_0149b268:
  fVar32 = fVar32 / 5.0;
  fVar33 = fVar33 / 5.0;
  uVar15 = 0;
  if (fVar32 != (float)(int)fVar32) {
    uVar15 = (uint)(fVar32 < 0.0);
  }
  uVar27 = 0;
  if (fVar33 != (float)(int)fVar33) {
    uVar27 = (uint)(fVar33 < 0.0);
  }
  iVar28 = (int)fVar33 - uVar27;
  iVar13 = iVar28;
  if (6 < iVar28) {
    iVar13 = 7;
  }
  if (!bVar11) {
    iVar13 = iVar28;
  }
  uVar27 = local_b0._4_4_ + 1;
  if (iVar13 <= (int)((int)fVar32 - uVar15)) {
    if (uVar27 == local_c0._4_4_) {
      return 9;
    }
    uVar15 = (uint)local_c0;
    do {
      if ((int)uVar15 < (int)local_b0) {
        uVar15 = uVar15 + 1;
      }
      else {
        local_c0._4_4_ = local_c0._4_4_ + 1;
        uVar15 = (uint)local_c0;
      }
    } while (((uint)local_c0 != uVar15) || (uVar27 != local_c0._4_4_));
    return 9;
  }
  if (uVar27 == local_c0._4_4_) {
    return 9;
  }
  uVar29 = (uint)local_c0;
  do {
    pcVar7 = (char *)(param_1 + 0x280) + (ulong)uVar29 * 0x3000;
    if (0x3f < uVar29) {
      pcVar7 = (char *)(param_1 + 0x280);
    }
    pcVar6 = pcVar7 + (ulong)local_c0._4_4_ * 0xc0;
    if (0x3f < local_c0._4_4_) {
      pcVar6 = pcVar7;
    }
    if (((int)uVar29 < 0x40) && ((int)local_c0._4_4_ < 0x40)) {
      uVar18 = (int)fVar32 - uVar15;
      do {
        if (((int)uVar18 < 8) && (-1 < (int)(local_c0._4_4_ | uVar29 | uVar18))) {
          pcVar7 = pcVar6 + (ulong)uVar18 * 0x18;
          if (7 < uVar18) {
            pcVar7 = pcVar6;
          }
          if ((*pcVar7 != '\0') && (1 < (byte)pcVar7[1])) {
            return 1;
          }
        }
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < iVar13);
    }
    if ((int)uVar29 < (int)local_b0) {
      uVar29 = uVar29 + 1;
    }
    else {
      local_c0._4_4_ = local_c0._4_4_ + 1;
      uVar29 = (uint)local_c0;
    }
  } while (((uint)local_c0 != uVar29) || (uVar27 != local_c0._4_4_));
  return 9;
}

