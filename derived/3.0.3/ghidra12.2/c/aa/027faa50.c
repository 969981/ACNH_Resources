
undefined8
FUN_027faa50(short *param_1,undefined4 *param_2,undefined1 *param_3,uint *param_4,undefined8 param_5
            )

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uVar11;
  short sVar12;
  uint uVar13;
  short *psVar14;
  short *psVar15;
  long lVar16;
  short *psVar17;
  long lVar18;
  uint uVar19;
  short *psVar20;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  
  local_a0 = *param_2;
  uStack_9c = param_2[1];
  FUN_0277e56c(&local_a0,1);
  puVar2 = PTR_DAT_04bb43c0;
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_a0);
  lVar16 = *(long *)puVar2;
  if (lVar16 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_b8 = (undefined *)CONCAT44(uStack_9c,local_a0);
      FUN_01b09918(&local_90,&local_b8);
      local_a0 = (undefined4)local_90;
      uStack_9c = local_90._4_4_;
      lVar16 = *(long *)puVar2;
    }
  }
  puVar1 = PTR_DAT_04bc0510;
  local_a8 = 0;
  local_b0 = local_a0;
  uStack_ac = uStack_9c;
  local_b8 = PTR_DAT_04bc0510 + 0x10;
  uVar3 = FUN_0277d6c4(&local_b0);
  if (*(long *)puVar2 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar16 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(&local_a0);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if (uVar3 < *(uint *)(lVar16 + 0x1d8)) {
        lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar3 * 8);
        if (lVar16 != 0) {
          local_a8 = lVar16;
        }
      }
    }
  }
  uVar8 = FUN_01af0020(&local_b8);
  if ((uVar8 & 1) != 0) {
    uVar3 = 0;
    if (*(byte *)(param_1 + 0xbc) < 3) {
      uVar3 = (uint)*(byte *)(param_1 + 0xbc);
    }
    local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar3);
    uVar8 = 0x1e;
    if (uVar3 != 1) {
      uVar8 = 0x14;
    }
    uVar10 = 0x28;
    if (uVar3 != 2) {
      uVar10 = uVar8;
    }
    iVar4 = FUN_01af02d0(&local_b8);
    iVar5 = FUN_01af2610(&local_b8);
    psVar17 = param_1 + 0x5c;
    uVar8 = 0;
    iVar7 = 0;
    psVar15 = psVar17;
    do {
      uVar3 = *(uint *)(param_1 + 0xac);
      if (0x13 < uVar3) {
        uVar3 = 0x14;
      }
      if (uVar8 < uVar3) {
        psVar20 = psVar15;
        if (*psVar15 != -2) {
LAB_027faca0:
          lVar16 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(psVar20);
          if (*(long *)puVar2 == 0) goto LAB_027fad10;
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          psVar14 = (short *)PTR_DAT_04bb37e0;
          if (uVar3 < *(uint *)(lVar16 + 0x1d8)) {
            if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar3 * 8) != 0) {
              psVar14 = psVar20;
            }
          }
          goto LAB_027fad14;
        }
        sVar12 = -2;
      }
      else {
        uVar13 = (uint)(uVar8 + -uVar3);
        if ((int)uVar13 < 0) {
LAB_027fad10:
          psVar14 = (short *)PTR_DAT_04bb37e0;
LAB_027fad14:
          sVar12 = *psVar14;
          psVar20 = psVar14;
        }
        else {
          uVar19 = *(uint *)(param_1 + 0x50);
          if (0x13 < uVar19) {
            uVar19 = 0x14;
          }
          psVar14 = (short *)PTR_DAT_04bb37e0;
          if (uVar19 <= uVar13) goto LAB_027fad14;
          psVar20 = param_1 + (uVar8 + -uVar3 & 0xffffffff) * 4;
          if (*psVar20 != -2) goto LAB_027faca0;
          sVar12 = -2;
        }
      }
      local_6c = *(undefined4 *)(psVar20 + 2);
      local_70 = CONCAT13(*(undefined1 *)((long)psVar20 + 3),CONCAT12((char)psVar20[1],sVar12));
      if (sVar12 == -2) {
        iVar7 = iVar7 + iVar5;
      }
      else {
        lVar16 = *(long *)puVar2;
        uVar3 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar2 != 0) {
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if (((uVar3 < *(uint *)(lVar16 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
             (uVar9 = FUN_01af28ac(&local_b8,&local_70), (uVar9 & 1) != 0)) {
            local_80 = (undefined *)0x0;
            lVar16 = *(long *)puVar2;
            local_88 = (short *)CONCAT44(local_6c,local_70);
            local_90 = (undefined **)(puVar1 + 0x10);
            uVar3 = FUN_0277d6c4(&local_88);
            if (*(long *)puVar2 != 0) {
              lVar16 = *(long *)(lVar16 + 0x57e58);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
              if ((uVar3 < *(uint *)(lVar16 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
                lVar16 = *(long *)PTR_DAT_04bc0428;
                uVar3 = FUN_0277d6c4(&local_70);
                uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                if (uVar3 < *(uint *)(lVar16 + 0x1d8)) {
                  lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar3 * 8);
                  if (lVar16 != 0) {
                    local_80 = (undefined *)lVar16;
                  }
                }
              }
            }
            iVar6 = FUN_01af02d0(&local_90);
            iVar7 = (iVar7 + iVar5) - iVar6;
          }
        }
      }
      uVar8 = uVar8 + 1;
      psVar15 = psVar15 + 4;
    } while (uVar10 != uVar8);
    if (iVar4 <= iVar7) {
      psVar15 = param_1 + 0x52;
      uVar8 = 0;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      do {
        uVar3 = *(uint *)(param_1 + 0xac);
        if (0x13 < uVar3) {
          uVar3 = 0x14;
        }
        if (uVar8 < uVar3) {
          sVar12 = *psVar17;
          psVar20 = psVar17;
joined_r0x027fb328:
          psVar14 = psVar20;
          if (sVar12 != -2) {
            lVar16 = *(long *)puVar2;
            uVar3 = FUN_0277d6c4(psVar20);
            if (*(long *)puVar2 == 0) goto LAB_027fb380;
            lVar16 = *(long *)(lVar16 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            psVar14 = (short *)PTR_DAT_04bb37e0;
            if (uVar3 < *(uint *)(lVar16 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar3 * 8) != 0) {
                psVar14 = psVar20;
              }
            }
          }
        }
        else {
          uVar13 = (uint)(uVar8 + -uVar3);
          if ((int)uVar13 < 0) {
LAB_027fb380:
            psVar14 = (short *)PTR_DAT_04bb37e0;
          }
          else {
            uVar19 = *(uint *)(param_1 + 0x50);
            if (0x13 < uVar19) {
              uVar19 = 0x14;
            }
            psVar14 = (short *)PTR_DAT_04bb37e0;
            if (uVar13 < uVar19) {
              sVar12 = param_1[(uVar8 + -uVar3 & 0xffffffff) * 4];
              psVar20 = param_1 + (uVar8 + -uVar3 & 0xffffffff) * 4;
              goto joined_r0x027fb328;
            }
          }
        }
        local_70 = *(undefined4 *)psVar14;
        local_6c = *(undefined4 *)(psVar14 + 2);
        lVar16 = *(long *)puVar2;
        uVar3 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar2 != 0) {
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar16 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            uVar9 = FUN_01af28ac(&local_b8,&local_70);
            if ((uVar9 & 1) != 0) {
              local_80 = (undefined *)0x0;
              lVar16 = *(long *)puVar2;
              local_88 = (short *)CONCAT44(local_6c,local_70);
              local_90 = (undefined **)puVar1;
              uVar3 = FUN_0277d6c4(&local_88);
              if (*(long *)puVar2 != 0) {
                lVar16 = *(long *)(lVar16 + 0x57e58);
                uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                if ((uVar3 < *(uint *)(lVar16 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
                  lVar16 = *(long *)PTR_DAT_04bc0428;
                  uVar3 = FUN_0277d6c4(&local_70);
                  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                  if (uVar3 < *(uint *)(lVar16 + 0x1d8)) {
                    lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar3 * 8);
                    if (lVar16 != 0) {
                      local_80 = (undefined *)lVar16;
                    }
                  }
                }
              }
              iVar7 = FUN_01af02d0(&local_90);
              iVar7 = iVar5 - iVar7;
              if (0 < iVar7) {
                uVar3 = (uint)uVar8;
                if (iVar4 - iVar7 == 0 || iVar4 < iVar7) {
                  local_98 = 0xfffe;
                  FUN_0277d4ac(&local_98);
                  local_c0 = 0xfffe;
                  FUN_0277d4ac(&local_c0);
                  FUN_01af4104(local_c8,&local_c0,&local_70,&local_a0);
                  if (param_4 != (uint *)0x0) {
                    *param_4 = uVar3;
                  }
                  if (param_3 != (undefined1 *)0x0) {
                    if (uVar8 < 0x28) {
                      uVar13 = *(uint *)(param_1 + 0xac);
                      if (0x13 < uVar13) {
                        uVar13 = 0x14;
                      }
                      psVar14 = (short *)((long)psVar15 + (ulong)(uVar3 - uVar13));
                      if (0x13 < uVar3 - uVar13) {
                        psVar14 = psVar15;
                      }
                      psVar20 = (short *)((long)param_1 + uVar8 + 0x15c);
                      if (uVar13 <= uVar8) {
                        psVar20 = psVar14;
                      }
                      uVar11 = (undefined1)*psVar20;
                    }
                    else {
                      uVar11 = 0xff;
                    }
                    *param_3 = uVar11;
                  }
                  uVar9 = FUN_027fa2dc(param_1,uVar8,&local_98,param_5);
                  if ((uVar9 & 1) != 0) {
                    return 1;
                  }
                }
                else {
                  local_98 = 0xfffe;
                  FUN_0277d4ac(&local_98);
                  local_c0 = 0xfffe;
                  FUN_0277d4ac(&local_c0);
                  FUN_01af4104(local_c8,&local_c0,&local_70,&local_a0);
                  if (param_4 != (uint *)0x0) {
                    *param_4 = uVar3;
                  }
                  if (param_3 != (undefined1 *)0x0) {
                    if (uVar8 < 0x28) {
                      uVar13 = *(uint *)(param_1 + 0xac);
                      if (0x13 < uVar13) {
                        uVar13 = 0x14;
                      }
                      psVar14 = (short *)((long)psVar15 + (ulong)(uVar3 - uVar13));
                      if (0x13 < uVar3 - uVar13) {
                        psVar14 = psVar15;
                      }
                      psVar20 = (short *)((long)param_1 + uVar8 + 0x15c);
                      if (uVar13 <= uVar8) {
                        psVar20 = psVar14;
                      }
                      uVar11 = (undefined1)*psVar20;
                    }
                    else {
                      uVar11 = 0xff;
                    }
                    *param_3 = uVar11;
                  }
                  uVar9 = FUN_027fa2dc(param_1,uVar8,&local_98,param_5);
                  if ((uVar9 & 1) != 0) {
                    local_a0 = (undefined4)local_c0;
                    uStack_9c = local_c0._4_4_;
                    iVar4 = iVar4 - iVar7;
                  }
                }
              }
            }
          }
        }
        uVar8 = uVar8 + 1;
        psVar17 = psVar17 + 4;
      } while (uVar10 != uVar8);
    }
  }
  uVar13 = *(uint *)(param_1 + 0xac);
  psVar17 = param_1 + 0x5c;
  uVar3 = uVar13;
  if (0x13 < uVar13) {
    uVar3 = 0x14;
  }
  if (uVar3 != 0) {
    uVar8 = 0;
    psVar15 = psVar17;
    do {
      if (*psVar15 == -2) {
        if (-1 < (int)(uint)uVar8) {
          if ((uint)uVar8 < 0x14) goto LAB_027fb004;
          goto LAB_027faf0c;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      psVar15 = psVar15 + 4;
    } while (uVar3 != uVar8);
  }
  uVar3 = *(uint *)(param_1 + 0x50);
  if (0x13 < uVar3) {
    uVar3 = 0x14;
  }
  if (uVar3 != 0) {
    uVar8 = 0;
    psVar15 = param_1;
    do {
      if (*psVar15 == -2) {
        if (-1 < (int)(uint)uVar8) {
          if (0x13 < (uint)uVar8) goto LAB_027faf0c;
          goto LAB_027fafec;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      psVar15 = psVar15 + 4;
    } while (uVar3 != uVar8);
  }
  uVar8 = (ulong)DAT_0559bc2c;
  if (0x27 < DAT_0559bc2c) {
LAB_027faf0c:
    FUN_027fb5c0(param_1);
    local_90 = (undefined **)0x172c;
    FUN_0277d4ac(&local_90);
    FUN_027fb8e0(param_1,&local_90);
    uVar13 = *(uint *)(param_1 + 0xac);
    uVar3 = uVar13;
    if (0x13 < uVar13) {
      uVar3 = 0x14;
    }
    if (uVar3 != 0) {
      uVar8 = 0;
      psVar15 = psVar17;
      do {
        if (*psVar15 == -2) {
          if (-1 < (int)(uint)uVar8) {
            if (0x13 < (uint)uVar8) {
              return 0;
            }
            goto LAB_027fb004;
          }
          break;
        }
        uVar8 = uVar8 + 1;
        psVar15 = psVar15 + 4;
      } while (uVar3 != uVar8);
    }
    uVar3 = *(uint *)(param_1 + 0x50);
    if (0x13 < uVar3) {
      uVar3 = 0x14;
    }
    if (uVar3 != 0) {
      uVar8 = 0;
      psVar15 = param_1;
      do {
        if (*psVar15 == -2) {
          if (-1 < (int)(uint)uVar8) {
            if (0x13 < (uint)uVar8) {
              return 0;
            }
LAB_027fafec:
            uVar8 = uVar8 + 0x14;
            goto LAB_027fb004;
          }
          break;
        }
        uVar8 = uVar8 + 1;
        psVar15 = psVar15 + 4;
      } while (uVar3 != uVar8);
    }
    uVar8 = (ulong)DAT_0559bc2c;
    if (0x27 < DAT_0559bc2c) {
      return 0;
    }
  }
LAB_027fb004:
  uVar3 = (uint)uVar8;
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar3;
    uVar13 = *(uint *)(param_1 + 0xac);
  }
  if (param_3 != (undefined1 *)0x0) {
    if (0x13 < uVar13) {
      uVar13 = 0x14;
    }
    psVar15 = (short *)((long)(param_1 + 0x52) + (ulong)(uVar3 - uVar13));
    if (0x13 < uVar3 - uVar13) {
      psVar15 = param_1 + 0x52;
    }
    psVar14 = (short *)((long)param_1 + (uVar8 & 0xffffffff) + 0x15c);
    if (uVar13 <= uVar3) {
      psVar14 = psVar15;
    }
    *param_3 = (char)*psVar14;
    uVar13 = *(uint *)(param_1 + 0xac);
  }
  if (0x13 < uVar13) {
    uVar13 = 0x14;
  }
  uVar19 = uVar3 - uVar13;
  if (uVar3 < uVar13) {
    local_98._0_4_ = local_a0;
    local_98._4_4_ = uStack_9c;
    FUN_0277e56c(&local_98,1);
    lVar16 = *(long *)puVar2;
    uVar3 = FUN_0277d6c4(&local_98);
    if (*(long *)puVar2 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        local_70 = (undefined4)local_98;
        local_6c = local_98._4_4_;
        FUN_01b09918(&local_90,&local_70);
        local_98._0_4_ = SUB84(local_90,0);
        local_98._4_4_ = local_90._4_4_;
      }
    }
    uVar10 = FUN_0277e788(&local_98);
    if ((uVar10 & 1) != 0) {
      local_90 = &PTR_LAB_04a91620;
      uVar3 = *(uint *)(param_1 + 0xac);
      local_80 = PTR_LAB_04bc3870;
      uStack_78 = 0;
      if (0x13 < uVar3) {
        uVar3 = 0x14;
      }
      local_88 = psVar17;
      uVar10 = FUN_0277b494(uVar8 & 0xffffffff,&local_98,uVar3,&local_90,0,param_5);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      *(undefined1 *)((long)param_1 + (uVar8 & 0xffffffff) + 0x15c) = 0xff;
      return 1;
    }
  }
  else {
    local_98._0_4_ = local_a0;
    local_98._4_4_ = uStack_9c;
    FUN_0277e56c(&local_98,1);
    lVar16 = *(long *)puVar2;
    uVar3 = FUN_0277d6c4(&local_98);
    if (*(long *)puVar2 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        local_70 = (undefined4)local_98;
        local_6c = local_98._4_4_;
        FUN_01b09918(&local_90,&local_70);
        local_98._0_4_ = SUB84(local_90,0);
        local_98._4_4_ = local_90._4_4_;
      }
    }
    uVar8 = FUN_0277e8b4(&local_98);
    if ((uVar8 & 1) != 0) {
      local_90 = (undefined **)(PTR_DAT_04bc3868 + 0x10);
      local_80 = PTR_LAB_04bc3860;
      uStack_78 = 0;
      uVar3 = *(uint *)(param_1 + 0x50);
      if (0x13 < uVar3) {
        uVar3 = 0x14;
      }
      local_88 = param_1;
      uVar8 = FUN_0277b494(uVar19,&local_98,uVar3,&local_90,0,param_5);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      psVar17 = (short *)((long)(param_1 + 0x52) + (ulong)uVar19);
      if (0x13 < uVar19) {
        psVar17 = param_1 + 0x52;
      }
      *(undefined1 *)psVar17 = 0xff;
      return 1;
    }
  }
  return 0;
}

