
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_03738c30(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined8 *******pppppppuVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 ******local_138;
  undefined8 *puStack_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *******local_108;
  undefined8 *******pppppppuStack_100;
  undefined8 *******local_f8;
  undefined8 *******local_f0;
  undefined8 ******local_e8;
  undefined8 *****local_e0;
  undefined8 ****local_d8;
  undefined8 ***local_d0;
  undefined8 **local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0 [9];
  undefined **local_68;
  long local_60;
  uint local_58;
  uint local_54;
  
  uVar7 = FUN_03722560();
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  if (uVar7 < *(uint *)(param_1 + 0xe0)) {
    lVar19 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar7 * 8);
  }
  else {
    lVar19 = 0;
  }
  if (DAT_05aed670 == 0) {
    puVar18 = &DAT_055c04a0;
  }
  else {
    puVar18 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar18 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar8 = FUN_006bd550(*puVar18,0);
      puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar18 = &DAT_055c04a0;
      }
    }
  }
  uVar7 = local_110._4_4_;
  iVar8 = *(int *)(puVar18 + 7);
  if (DAT_05ac0a90 == iVar8) {
    lVar12 = 0;
    uVar10 = DAT_05ac0a94;
  }
  else if (DAT_05ac0aa0 == iVar8) {
    lVar12 = 1;
    uVar10 = DAT_05ac0aa4;
  }
  else {
    if (DAT_05ac0ab0 == iVar8) {
      lVar12 = 2;
    }
    else if (DAT_05ac0ac0 == iVar8) {
      lVar12 = 3;
    }
    else if (DAT_05ac0ad0 == iVar8) {
      lVar12 = 4;
    }
    else if (DAT_05ac0ae0 == iVar8) {
      lVar12 = 5;
    }
    else if (DAT_05ac0af0 == iVar8) {
      lVar12 = 6;
    }
    else if (DAT_05ac0b00 == iVar8) {
      lVar12 = 7;
    }
    else if (DAT_05ac0b10 == iVar8) {
      lVar12 = 8;
    }
    else {
      if (DAT_05ac0b20 != iVar8) {
        return 0;
      }
      lVar12 = 9;
    }
    uVar10 = (&DAT_05ac0a94)[lVar12 * 4];
    if (DAT_05ac0ab0 == iVar8) {
      lVar12 = 2;
    }
    else if (DAT_05ac0ac0 == iVar8) {
      lVar12 = 3;
    }
    else if (DAT_05ac0ad0 == iVar8) {
      lVar12 = 4;
    }
    else if (DAT_05ac0ae0 == iVar8) {
      lVar12 = 5;
    }
    else if (DAT_05ac0af0 == iVar8) {
      lVar12 = 6;
    }
    else if (DAT_05ac0b00 == iVar8) {
      lVar12 = 7;
    }
    else if (DAT_05ac0b10 == iVar8) {
      lVar12 = 8;
    }
    else {
      if (DAT_05ac0b20 != iVar8) {
        return 0;
      }
      lVar12 = 9;
    }
  }
  local_58 = (&DAT_05ac0a98)[lVar12 * 4];
  puVar14 = (uint *)(param_1 + 0x1460);
  puVar17 = puVar14 + local_58;
  if (2 < local_58) {
    puVar17 = puVar14;
  }
  uVar9 = *puVar17;
  local_68 = &PTR_LAB_04b438d8;
  if ((int)DAT_05ab0ed0 < 1) {
    if ((((DAT_05ab0dc0 == 0) || (puVar17 = *(uint **)(DAT_05ab0dc0 + 8), puVar17 == (uint *)0x0))
        || ((uVar9 < DAT_05ab0dd8 && (*(char *)(DAT_05ab0de0 + (int)uVar9) == '\0')))) ||
       (((*puVar17 <= uVar9 || (puVar17[1] == 0)) || ((ushort)puVar17[2] == 0)))) goto LAB_03738fa8;
    iVar8 = 0xc;
    if (*(char *)((long)puVar17 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    local_60 = (ulong)(puVar17[1] * uVar9 + (uint)(ushort)puVar17[2] * 8 + iVar8) + (long)puVar17;
  }
  else if (uVar9 < DAT_05ab0ed0) {
    if (DAT_05ab0ec0 <= uVar9) {
      uVar9 = 0;
    }
    local_60 = *(long *)(DAT_05ab0ec8 + (ulong)uVar9 * 8);
  }
  else {
LAB_03738fa8:
    local_60 = 0;
  }
  puVar17 = (uint *)(lVar19 + 0xd8);
  if (*puVar17 == 0) goto LAB_0373976c;
  if (DAT_05ab3138 == 0) goto LAB_03739124;
  local_138 = (undefined8 ******)CONCAT44(local_138._4_4_,uVar10);
  local_54 = local_58;
  local_110 = (undefined8 *)((ulong)local_110._4_4_ << 0x20);
  local_118 = 0;
  switch(uVar10) {
  case 0:
    uVar7 = 1;
    goto LAB_0373904c;
  case 1:
    local_118 = 0x300000002;
    local_110 = (undefined8 *)CONCAT44(uVar7,4);
    break;
  case 2:
    local_118 = 0x600000005;
    local_110 = (undefined8 *)CONCAT44(uVar7,10);
    break;
  case 3:
    local_118 = 0x900000007;
    break;
  case 4:
    uVar7 = 8;
LAB_0373904c:
    local_118 = (ulong)uVar7;
  }
  uVar11 = (ulong)local_58;
  if (2 < local_58) {
    uVar11 = 0;
  }
  uVar7 = *(uint *)((long)local_b0 + uVar11 * 4 + -0x68);
  local_118 = CONCAT44(local_118._4_4_,uVar7);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(DAT_05ab3138 + 0x7f8);
  if ((uVar7 < *(uint *)(DAT_05ab3138 + 0x7d8)) &&
     (lVar12 = *(long *)(*(long *)(DAT_05ab3138 + 0x7e0) + (long)(int)uVar7 * 8), lVar12 != 0)) {
    uVar7 = *puVar17;
    uVar9 = FUN_03853b94(lVar12);
    if ((DAT_055b78c0 <= uVar9) ||
       (uVar4 = *(ushort *)(DAT_055b78c8 + (long)(int)uVar9 * 2), uVar9 = (uint)uVar4, 0x14 < uVar4)
       ) {
      uVar9 = 0;
    }
    local_138 = (undefined8 ******)CONCAT44(local_138._4_4_,uVar9);
    if (uVar7 != uVar9) {
      uVar7 = *puVar17;
      uVar9 = FUN_03738930(lVar12);
      local_138 = (undefined8 ******)CONCAT44(local_138._4_4_,uVar9);
      if (uVar7 != uVar9) {
        uVar7 = *puVar17;
        uVar9 = FUN_03738a30(lVar12);
        local_138 = (undefined8 ******)CONCAT44(local_138._4_4_,uVar9);
        if (uVar7 != uVar9) {
          FUN_03738b30(lVar12);
          local_138 = (undefined8 ******)((ulong)local_138 & 0xffffffff00000000);
        }
      }
    }
  }
LAB_03739124:
  local_118._4_4_ = 0;
  local_110 = (undefined8 *)0x0;
  local_f8 = &local_f0;
  local_f0 = &local_e8;
  local_108 = &local_f8;
  local_e8 = &local_e0;
  local_e0 = &local_d8;
  local_b8 = 0;
  local_d8 = &local_d0;
  local_d0 = &local_c8;
  local_c8 = &local_c0;
  local_c0 = &local_b8;
  if (local_b0 != (undefined8 *)0x0) {
    local_118._4_4_ = 9;
    local_110 = local_b0;
  }
  local_118._0_4_ = 0;
  local_54 = *(uint *)(lVar19 + 0xe4);
  uVar11 = (ulong)local_58;
  if (2 < local_58) {
    uVar11 = 0;
  }
  pppppppuStack_100 = local_108;
  if (puVar14[uVar11] == 0) {
    uVar11 = (ulong)&local_138 | 4;
    local_138 = (undefined8 ******)((ulong)local_138 & 0xffffffff00000000);
    FUN_036afdd0(DAT_05ab3138,puVar17,0,&local_138,uVar11);
    pppppppuVar6 = local_108;
    if ((int)local_118 < local_118._4_4_) {
      if (local_108 != (undefined8 *******)0x0) {
        local_108 = (undefined8 *******)*local_108;
      }
      *pppppppuVar6 = local_138;
      if ((int)local_118 < local_118._4_4_) {
        local_110[(int)local_118] = pppppppuVar6;
        local_118._0_4_ = (int)local_118 + 1;
      }
    }
    local_138 = (undefined8 ******)((ulong)local_138 & 0xffffffff00000000);
    FUN_036afdd0(DAT_05ab3138,puVar17,1,&local_138,uVar11);
    pppppppuVar6 = local_108;
    if ((int)local_118 < local_118._4_4_) {
      if (local_108 != (undefined8 *******)0x0) {
        local_108 = (undefined8 *******)*local_108;
      }
      *pppppppuVar6 = local_138;
      if ((int)local_118 < local_118._4_4_) {
        local_110[(int)local_118] = pppppppuVar6;
        local_118._0_4_ = (int)local_118 + 1;
      }
    }
    local_138 = (undefined8 ******)((ulong)local_138 & 0xffffffff00000000);
    FUN_036afdd0(DAT_05ab3138,puVar17,2,&local_138,uVar11);
    pppppppuVar6 = local_108;
    if ((int)local_118 < local_118._4_4_) {
      if (local_108 != (undefined8 *******)0x0) {
        local_108 = (undefined8 *******)*local_108;
      }
      *pppppppuVar6 = local_138;
      if ((int)local_118 < local_118._4_4_) {
        local_110[(int)local_118] = pppppppuVar6;
        local_118._0_4_ = (int)local_118 + 1;
      }
    }
    local_138 = (undefined8 ******)((ulong)local_138 & 0xffffffff00000000);
    FUN_036afdd0(DAT_05ab3138,puVar17,3,&local_138,uVar11);
    pppppppuVar6 = local_108;
    if ((int)local_118 < local_118._4_4_) {
      if (local_108 != (undefined8 *******)0x0) {
        local_108 = (undefined8 *******)*local_108;
      }
      *pppppppuVar6 = local_138;
      if ((int)local_118 < local_118._4_4_) {
        local_110[(int)local_118] = pppppppuVar6;
        local_118._0_4_ = (int)local_118 + 1;
      }
    }
    local_138 = (undefined8 ******)((ulong)local_138 & 0xffffffff00000000);
    FUN_036afdd0(DAT_05ab3138,puVar17,4,&local_138,uVar11);
    pppppppuVar6 = local_108;
    if ((int)local_118 < local_118._4_4_) {
      if (local_108 != (undefined8 *******)0x0) {
        local_108 = (undefined8 *******)*local_108;
      }
      *pppppppuVar6 = local_138;
      if ((int)local_118 < local_118._4_4_) {
        local_110[(int)local_118] = pppppppuVar6;
        local_118._0_4_ = (int)local_118 + 1;
      }
    }
    local_138 = (undefined8 ******)((ulong)local_138 & 0xffffffff00000000);
    FUN_036afdd0(DAT_05ab3138,puVar17,5,&local_138,uVar11);
    pppppppuVar6 = local_108;
    if ((int)local_118 < local_118._4_4_) {
      if (local_108 != (undefined8 *******)0x0) {
        local_108 = (undefined8 *******)*local_108;
      }
      *pppppppuVar6 = local_138;
      if ((int)local_118 < local_118._4_4_) {
        local_110[(int)local_118] = pppppppuVar6;
        local_118._0_4_ = (int)local_118 + 1;
      }
    }
    local_138 = (undefined8 ******)((ulong)local_138 & 0xffffffff00000000);
    FUN_036afdd0(DAT_05ab3138,puVar17,6,&local_138,uVar11);
    pppppppuVar6 = local_108;
    if ((int)local_118 < local_118._4_4_) {
      if (local_108 != (undefined8 *******)0x0) {
        local_108 = (undefined8 *******)*local_108;
      }
      *pppppppuVar6 = local_138;
      if ((int)local_118 < local_118._4_4_) {
        local_110[(int)local_118] = pppppppuVar6;
        local_118._0_4_ = (int)local_118 + 1;
      }
    }
    local_138 = (undefined8 ******)((ulong)local_138 & 0xffffffff00000000);
    FUN_036afdd0(DAT_05ab3138,puVar17,7,&local_138,uVar11);
    pppppppuVar6 = local_108;
    if ((int)local_118 < local_118._4_4_) {
      if (local_108 != (undefined8 *******)0x0) {
        local_108 = (undefined8 *******)*local_108;
      }
      *pppppppuVar6 = local_138;
      if ((int)local_118 < local_118._4_4_) {
        local_110[(int)local_118] = pppppppuVar6;
        local_118._0_4_ = (int)local_118 + 1;
      }
    }
    local_138 = (undefined8 ******)((ulong)local_138 & 0xffffffff00000000);
    FUN_036afdd0(DAT_05ab3138,puVar17,8,&local_138,uVar11);
    pppppppuVar6 = local_108;
    if ((int)local_118 < local_118._4_4_) {
      if (local_108 != (undefined8 *******)0x0) {
        local_108 = (undefined8 *******)*local_108;
      }
      *pppppppuVar6 = local_138;
      if ((int)local_118 < local_118._4_4_) {
        local_110[(int)local_118] = pppppppuVar6;
        local_118._0_4_ = (int)local_118 + 1;
      }
    }
  }
  else {
    puStack_130 = &local_118;
    local_138 = (undefined8 ******)&PTR_LAB_04b46040;
    FUN_036a3834(&local_68,&local_138,*puVar17);
  }
  puVar5 = PTR_DAT_04bc23d0;
  if ((int)local_118 == 0) {
    uVar7 = 0;
  }
  else {
    uVar9 = *(uint *)PTR_DAT_04bc23d0;
    if ((param_3 & 1) == 0) {
      uVar7 = 0;
      lVar12 = (long)(int)local_118 << 3;
      puVar18 = local_110;
      lVar13 = DAT_05ab3138;
      do {
        puVar14 = (uint *)*puVar18;
        uVar15 = *puVar14;
        if ((int)*(uint *)(lVar13 + 0x5c0) < 1) {
          if ((((*(long *)(lVar13 + 0x4b0) != 0) &&
               (puVar17 = *(uint **)(*(long *)(lVar13 + 0x4b0) + 8), puVar17 != (uint *)0x0)) &&
              ((*(uint *)(lVar13 + 0x4c8) <= uVar15 ||
               (*(char *)(*(long *)(lVar13 + 0x4d0) + (long)(int)uVar15) != '\0')))) &&
             (((uVar15 < *puVar17 && (puVar17[1] != 0)) && ((ushort)puVar17[2] != 0)))) {
            iVar8 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              iVar8 = 0x1c;
            }
            puVar17 = (uint *)((ulong)(puVar17[1] * uVar15 + (uint)(ushort)puVar17[2] * 8 + iVar8) +
                              (long)puVar17);
            goto joined_r0x037398f0;
          }
        }
        else if (uVar15 < *(uint *)(lVar13 + 0x5c0)) {
          if (*(uint *)(lVar13 + 0x5b0) <= uVar15) {
            uVar15 = 0;
          }
          puVar17 = *(uint **)(*(long *)(lVar13 + 0x5b8) + (ulong)uVar15 * 8);
joined_r0x037398f0:
          if (puVar17 != (uint *)0x0) {
            uVar15 = *puVar17;
            if (uVar15 == 0 || puVar17 == (uint *)(ulong)uVar15) {
LAB_03739870:
              uVar15 = 0;
            }
            else {
              puVar16 = (uint *)((long)puVar17 - (long)(ulong)uVar15);
              if (((*puVar16 == 0) || (uVar15 = puVar16[1], uVar15 == 0)) ||
                 ((ulong)(ushort)puVar16[2] == 0)) goto LAB_03739870;
              lVar1 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar16 + lVar1 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar1 == 0) goto LAB_03739870;
              uVar2 = 0;
              if ((ulong)uVar15 != 0) {
                uVar2 = (uint)((ulong)((long)puVar17 - lVar1) / (ulong)uVar15);
              }
              if (*puVar16 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar9 <= uVar2) ||
                 (uVar4 = *(ushort *)(*(long *)(puVar5 + 8) + (long)(int)uVar2 * 2),
                 uVar15 = (uint)uVar4, 0xc < uVar4)) goto LAB_03739870;
            }
            local_138 = (undefined8 ******)CONCAT44(local_138._4_4_,uVar15);
            if (uVar15 == 10) {
              uVar15 = puVar14[1];
            }
            else {
              puVar14[1] = 0;
              uVar15 = 0;
              lVar13 = DAT_05ab3138;
            }
            uVar7 = uVar15 + uVar7;
          }
        }
        puVar18 = puVar18 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    else {
      uVar7 = 0;
      lVar12 = (long)(int)local_118 << 3;
      puVar18 = local_110;
      do {
        puVar14 = (uint *)*puVar18;
        if (local_54 == *puVar14) {
          puVar14[1] = 0;
        }
        else {
          uVar15 = *puVar14;
          if ((int)*(uint *)(DAT_05ab3138 + 0x5c0) < 1) {
            if ((((*(long *)(DAT_05ab3138 + 0x4b0) != 0) &&
                 (puVar17 = *(uint **)(*(long *)(DAT_05ab3138 + 0x4b0) + 8), puVar17 != (uint *)0x0)
                 ) && ((*(uint *)(DAT_05ab3138 + 0x4c8) <= uVar15 ||
                       (*(char *)(*(long *)(DAT_05ab3138 + 0x4d0) + (long)(int)uVar15) != '\0'))))
               && (((uVar15 < *puVar17 && (puVar17[1] != 0)) && ((ushort)puVar17[2] != 0)))) {
              iVar8 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                iVar8 = 0x1c;
              }
              puVar17 = (uint *)((ulong)(puVar17[1] * uVar15 + (uint)(ushort)puVar17[2] * 8 + iVar8)
                                + (long)puVar17);
              goto joined_r0x037396c8;
            }
          }
          else if (uVar15 < *(uint *)(DAT_05ab3138 + 0x5c0)) {
            if (*(uint *)(DAT_05ab3138 + 0x5b0) <= uVar15) {
              uVar15 = 0;
            }
            puVar17 = *(uint **)(*(long *)(DAT_05ab3138 + 0x5b8) + (ulong)uVar15 * 8);
joined_r0x037396c8:
            if (puVar17 != (uint *)0x0) {
              uVar15 = *puVar17;
              if (uVar15 == 0 || puVar17 == (uint *)(ulong)uVar15) {
LAB_03739648:
                uVar15 = 0;
              }
              else {
                puVar16 = (uint *)((long)puVar17 - (long)(ulong)uVar15);
                if (((*puVar16 == 0) || (uVar15 = puVar16[1], uVar15 == 0)) ||
                   ((ulong)(ushort)puVar16[2] == 0)) goto LAB_03739648;
                lVar13 = 0xc;
                if (*(char *)((long)puVar16 + 10) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)puVar16 + lVar13 + (ulong)(ushort)puVar16[2] * 8;
                if (lVar13 == 0) goto LAB_03739648;
                uVar2 = 0;
                if ((ulong)uVar15 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar17 - lVar13) / (ulong)uVar15);
                }
                if (*puVar16 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar9 <= uVar2) ||
                   (uVar4 = *(ushort *)(*(long *)(puVar5 + 8) + (long)(int)uVar2 * 2),
                   uVar15 = (uint)uVar4, 0xc < uVar4)) goto LAB_03739648;
              }
              local_138 = (undefined8 ******)CONCAT44(local_138._4_4_,uVar15);
              if (uVar15 == 10) {
                uVar7 = puVar14[1] + uVar7;
              }
              else {
                puVar14[1] = 0;
              }
            }
          }
        }
        puVar18 = puVar18 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
  }
  puVar14 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar9 = *puVar14 ^ *puVar14 << 0xb;
  uVar15 = puVar14[3];
  *puVar14 = puVar14[1];
  puVar14[1] = puVar14[2];
  uVar9 = uVar9 >> 8 ^ uVar15 >> 0x13 ^ uVar9 ^ uVar15;
  puVar14[2] = uVar15;
  puVar14[3] = uVar9;
  if ((int)local_118 != 0) {
    iVar8 = 0;
    lVar12 = (long)(int)local_118 << 3;
    do {
      iVar3 = ((undefined4 *)*local_110)[1];
      if ((iVar3 != 0) &&
         (iVar8 = iVar3 + iVar8, (int)((ulong)uVar9 * (ulong)uVar7 >> 0x20) < iVar8)) {
        uVar10 = *(undefined4 *)*local_110;
        goto LAB_03739770;
      }
      local_110 = local_110 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
LAB_0373976c:
  uVar10 = 0;
LAB_03739770:
  *(undefined4 *)(lVar19 + 0xe4) = uVar10;
  return uVar10;
}

