
undefined8 FUN_01519e00(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  ulong uVar21;
  byte *pbVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  byte local_140 [4];
  undefined4 local_13c;
  undefined2 local_138;
  long *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 local_f0;
  byte local_e8 [4];
  undefined4 local_e4;
  undefined2 local_e0;
  float local_dc [2];
  float local_d4;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  byte local_c0;
  undefined4 local_b8 [6];
  
  local_c8 = 0;
  lVar16 = *(long *)PTR_DAT_04bb2720;
  if (lVar16 == 0) {
    puVar20 = &DAT_055c04a0;
  }
  else {
    puVar20 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar20 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar8 = FUN_006bd550(*puVar20,0);
      puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar20 = &DAT_055c04a0;
      }
    }
  }
  local_c4 = *(undefined4 *)(puVar20 + 7);
  local_c0 = FUN_017baf44();
  local_c0 = local_c0 & 1;
  local_d0 = PTR_DAT_04bb3140 + 0x10;
  local_d4 = ((float)*(int *)(param_1 + 0x14) * 5.0 + (float)*(int *)(param_1 + 0x24) * 5.0 + 5.0) *
             0.5;
  local_dc[0] = ((float)*(int *)(param_1 + 0x10) * 5.0 + (float)*(int *)(param_1 + 0x20) * 5.0 + 5.0
                ) * 0.5;
  lVar16 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar16 != 0) && (*(long *)(lVar16 + 0xa8) != 0)) && (*(char *)(lVar16 + 0x11c8) == '\0')) {
    FUN_0093a950(lVar16 + 0x28,local_dc,0);
  }
  FUN_02507c6c(local_e8,7,1,1,0);
  puVar7 = PTR_DAT_04bb5038;
  puVar6 = PTR_DAT_04bb4718;
  puVar5 = PTR_DAT_04bb3238;
  local_13c = local_e4;
  local_140[0] = 0xff;
  if (local_e8[0] < 8) {
    local_140[0] = local_e8[0];
  }
  local_138 = local_e0;
  if (local_e8[0] < 8) {
    puVar1 = PTR_DAT_04bb3780 + 0x10;
    do {
      lVar16 = FUN_0251b3b0(local_140,1);
      uVar21 = (ulong)local_140[0];
      if (lVar16 != 0) {
        puVar17 = (undefined4 *)puVar5;
        if ((local_140[0] < 8) && (lVar16 = *(long *)puVar6, lVar16 != 0)) {
          puVar17 = (undefined4 *)(lVar16 + uVar21 * 4 + 0xde8);
        }
        local_b8[0] = *puVar17;
        FUN_0071cb58(&local_110,local_b8,puVar5,0);
        plVar9 = local_110;
        if (local_110 != (long *)0x0) {
          if (((*PTR_DAT_04bb3778 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar8 != 0)) {
            *(undefined **)PTR_DAT_04bb3770 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb3778);
          }
          uVar21 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3770);
          if ((uVar21 & 1) == 0) {
            local_108._0_3_ = (uint3)(ushort)local_108;
          }
        }
        if (((local_110 != (long *)0x0) && ((char)local_108 != '\0')) && (local_108._2_1_ != '\0'))
        {
          plVar9 = (long *)local_110[0xc];
          if ((plVar9 == (long *)0x0) && (plVar9 = &DAT_05240280, (DAT_052461c0 & 1) == 0)) {
            iVar8 = __cxa_guard_acquire(&DAT_052461c0);
            if (iVar8 == 0) {
              plVar9 = &DAT_05240280;
            }
            else {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
              plVar9 = &DAT_05240280;
            }
          }
          uVar21 = (**(code **)(*plVar9 + 0x100))();
          if ((uVar21 & 1) == 0) {
            lVar16 = *(long *)puVar6;
            if (lVar16 == 0) {
              puVar20 = &DAT_054f0958;
              if ((DAT_054f0960 & 1) == 0) {
                iVar8 = __cxa_guard_acquire(&DAT_054f0960);
                if (iVar8 == 0) {
                  puVar20 = &DAT_054f0958;
                }
                else {
                  DAT_054f0958 = 0;
                  __cxa_guard_release(&DAT_054f0960);
                  puVar20 = &DAT_054f0958;
                }
              }
            }
            else {
              puVar20 = (undefined8 *)(lVar16 + 0x204);
              if ((ulong)local_140[0] < 8) {
                puVar20 = puVar20 + local_140[0];
              }
            }
            local_b8[0] = 0x2f;
            if ((*(uint *)((long)puVar20 + 4) >> 0xf & 1) == 0) {
              iVar8 = *(int *)(param_1 + 0x20);
              iVar19 = *(int *)(param_1 + 0x24);
              lVar16 = local_110[0x302];
              iVar15 = *(int *)(param_1 + 0x10);
              iVar18 = *(int *)(param_1 + 0x14);
              pfVar10 = (float *)FUN_0251b3b0(local_140,0);
              if (pfVar10 != (float *)0x0) {
                fVar23 = (float)((iVar8 - iVar15) + 1) * 5.0;
                fVar24 = (float)((iVar19 - iVar18) + 1) * 5.0;
                if (fVar23 <= fVar24) {
                  fVar23 = fVar24;
                }
                lVar11 = FUN_0251e98c(1);
                pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x2a0) + 0xf0))(lVar11 + 0x2a0);
                fVar24 = *pfVar12 * 0.5;
                if ((int)lVar16 != 7) {
                  fVar24 = *pfVar12;
                }
                fVar26 = ((float)iVar18 * 5.0 + (float)iVar19 * 5.0 + 5.0) * 0.5 - pfVar10[2];
                fVar25 = ((float)iVar15 * 5.0 + (float)iVar8 * 5.0 + 5.0) * 0.5 - *pfVar10;
                if (SQRT(fVar26 * fVar26 + fVar25 * fVar25) < fVar23 * 0.5 + fVar24 * 0.98) {
                  return 0;
                }
              }
            }
          }
        }
        uVar21 = (ulong)local_140[0];
      }
      if ((7 < (uint)uVar21) || (uVar21 + 1 == 8)) break;
      pbVar22 = puVar7 + uVar21 + 1;
      uVar13 = FUN_02507924(local_140,pbVar22);
      if ((uVar13 & 1) == 0) {
        if (uVar21 + 2 == 8) break;
        pbVar22 = puVar7 + uVar21 + 2;
        uVar13 = FUN_02507924(local_140,pbVar22);
        if ((uVar13 & 1) == 0) {
          if (uVar21 + 3 == 8) break;
          pbVar22 = puVar7 + uVar21 + 3;
          uVar13 = FUN_02507924(local_140,pbVar22);
          if ((uVar13 & 1) == 0) {
            if (uVar21 + 4 == 8) break;
            pbVar22 = puVar7 + uVar21 + 4;
            uVar13 = FUN_02507924(local_140,pbVar22);
            if ((uVar13 & 1) == 0) {
              if (uVar21 + 5 == 8) break;
              pbVar22 = puVar7 + uVar21 + 5;
              uVar13 = FUN_02507924(local_140,pbVar22);
              if ((uVar13 & 1) == 0) {
                if (uVar21 + 6 == 8) break;
                pbVar22 = puVar7 + uVar21 + 6;
                uVar13 = FUN_02507924(local_140,pbVar22);
                if ((uVar13 & 1) == 0) {
                  if (uVar21 + 7 == 8) break;
                  pbVar22 = puVar7 + uVar21 + 7;
                  uVar13 = FUN_02507924(local_140,pbVar22);
                  if ((uVar13 & 1) == 0) {
                    if ((uint)uVar21 == 0) break;
                    pbVar22 = puVar7 + uVar21 + 8;
                    FUN_02507924(local_140,pbVar22);
                  }
                }
              }
            }
          }
        }
      }
      if (7 < *pbVar22) break;
      local_140[0] = *pbVar22;
    } while( true );
  }
  lVar16 = *(long *)PTR_DAT_04bb2720;
  if (lVar16 == 0) {
    puVar20 = &DAT_055c04a0;
  }
  else {
    puVar20 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar20 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar8 = FUN_006bd550(*puVar20,0);
      puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar20 = &DAT_055c04a0;
      }
    }
  }
  puVar5 = PTR_DAT_04bbc1a0;
  iVar8 = *(int *)(puVar20 + 7);
  if (DAT_05ac0a90 == iVar8) {
    lVar16 = 0;
  }
  else if (DAT_05ac0aa0 == iVar8) {
    lVar16 = 1;
  }
  else if (DAT_05ac0ab0 == iVar8) {
    lVar16 = 2;
  }
  else if (DAT_05ac0ac0 == iVar8) {
    lVar16 = 3;
  }
  else if (DAT_05ac0ad0 == iVar8) {
    lVar16 = 4;
  }
  else if (DAT_05ac0ae0 == iVar8) {
    lVar16 = 5;
  }
  else if (DAT_05ac0af0 == iVar8) {
    lVar16 = 6;
  }
  else if (DAT_05ac0b00 == iVar8) {
    lVar16 = 7;
  }
  else if (DAT_05ac0b10 == iVar8) {
    lVar16 = 8;
  }
  else {
    if (DAT_05ac0b20 != iVar8) goto LAB_0151a630;
    lVar16 = 9;
  }
  if ((&DAT_05ac0a98)[lVar16 * 4] == 0) {
    local_110 = (long *)(PTR_DAT_04bbc1a0 + 0x10);
    local_100 = 0;
    local_108 = PTR_DAT_04bb2010 + 0x10;
    local_f0 = 0;
    local_f8 = local_108;
    FUN_01811430(&local_110);
    lVar16 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar16 == 0) {
      iVar15 = 0;
      iVar8 = 0;
      iVar18 = 0x10;
      iVar19 = 0x10;
    }
    else {
      iVar15 = *(int *)(lVar16 + 0xd88);
      iVar8 = *(int *)(lVar16 + 0xd8c);
      iVar19 = *(int *)(lVar16 + 0xd98);
      iVar18 = *(int *)(lVar16 + 0xd9c);
    }
    iVar4 = local_100._4_4_ + -2;
    iVar3 = (int)local_f0;
    if ((int)local_f0 <= (int)local_100) {
      iVar3 = (int)local_100;
    }
    iVar2 = local_f0._4_4_;
    if (local_f0._4_4_ <= iVar4) {
      iVar2 = iVar4;
    }
    if ((((*(int *)(param_1 + 0x10) < (int)local_100) || (iVar3 < *(int *)(param_1 + 0x20))) ||
        (*(int *)(param_1 + 0x14) < iVar4)) || (iVar2 < *(int *)(param_1 + 0x24))) {
      iVar3 = iVar8;
      if (iVar8 <= iVar18) {
        iVar3 = iVar18;
      }
      if (iVar18 <= iVar8) {
        iVar8 = iVar18;
      }
      iVar18 = iVar15;
      if (iVar15 <= iVar19) {
        iVar18 = iVar19;
      }
      if (iVar19 <= iVar15) {
        iVar15 = iVar19;
      }
      if (((*(int *)(param_1 + 0x10) < iVar15) || (iVar18 < *(int *)(param_1 + 0x20))) ||
         ((*(int *)(param_1 + 0x14) < iVar8 || (iVar3 < *(int *)(param_1 + 0x24))))) {
        return 0;
      }
    }
  }
LAB_0151a630:
  local_110 = (long *)(puVar5 + 0x10);
  local_108 = PTR_DAT_04bb2010 + 0x10;
  local_f8 = local_108;
                    /* WARNING: Could not recover jumptable at 0x0151a6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar14 = (*(code *)(&UNK_0151a6d8 + (ulong)DAT_041758a8 * 4))(local_dc[0],local_d4);
  return uVar14;
}

