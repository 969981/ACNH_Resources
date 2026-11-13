
uint FUN_00e9c160(long param_1,long param_2,uint param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 local_78;
  ushort local_74;
  undefined1 local_72;
  undefined *local_70;
  undefined4 local_68;
  uint uStack_64;
  long local_60;
  uint local_54;
  
  bVar6 = *(byte *)(param_2 + 0x2a8);
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  *(byte *)(param_1 + 0x28) = bVar6;
  local_54 = param_3;
  switch(param_3) {
  case 0:
    local_74 = CONCAT11(local_74._1_1_,bVar6);
    *(undefined4 *)(param_1 + 8) = 1;
    uVar18 = FUN_02582fe0(&local_74);
    *(undefined4 *)(param_1 + 0x2c) = uVar18;
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
    if (param_5 == 2) {
      local_78 = 0;
      FUN_02b5e950(&local_78,uVar18);
      *(undefined1 *)(param_1 + 0x48) = 1;
      *(uint *)(param_1 + 0x3c) = local_78;
    }
    else {
      if (param_5 == 1) {
        uVar11 = FUN_02b5e950(&local_70,uVar18);
      }
      else {
        if (param_5 != 0) break;
        uVar11 = FUN_02b5e360(&local_70);
      }
      if ((uVar11 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x3c) = local_70._0_4_;
      }
    }
    break;
  case 1:
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar14 = 0;
      if (DAT_00000028 != '\0') goto LAB_00e9c228;
LAB_00e9c2fc:
      bVar6 = 1;
    }
    else {
      lVar14 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      if (*(char *)(lVar14 + 0x28) == '\0') goto LAB_00e9c2fc;
LAB_00e9c228:
      bVar6 = (**(code **)(*(long *)(lVar14 + 0x20) + 0x18))((long *)(lVar14 + 0x20));
      *(undefined1 *)(lVar14 + 0x28) = 0;
    }
    *(byte *)(lVar14 + 0x29) = bVar6 & 1;
    puVar5 = PTR_DAT_04bb43c0;
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(lVar14 + 0x2c);
    lVar16 = *(long *)puVar5;
    if (lVar16 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        local_60 = 0;
        local_68 = *(undefined4 *)(lVar14 + 0x2c);
        uVar8 = *(uint *)(lVar14 + 0x30);
        local_70 = PTR_DAT_04bc0510 + 0x10;
        uStack_64 = uVar8;
        uVar9 = FUN_0277d6c4(&local_68);
        if (*(long *)puVar5 != 0) {
          lVar15 = *(long *)(lVar16 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar15 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(lVar14 + 0x2c);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
               (lVar14 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8), lVar14 != 0))
            {
              local_60 = lVar14;
            }
          }
        }
        iVar10 = FUN_0277d6c4(&local_68);
        if ((iVar10 == 0xac5) || (iVar10 = FUN_0277d6c4(&local_68), iVar10 == 0x14ed)) {
          local_78 = CONCAT13(local_78._3_1_,0x80023);
          FUN_020fd218(&local_78,uVar8 & 0xff,uVar8 >> 8 & 0xff);
        }
        else {
          local_78 = CONCAT13(local_78._3_1_,0x80023);
        }
        local_72 = local_78._2_1_;
        local_74 = (ushort)local_78;
        if ((local_78 & 0xff) < 0x23) {
          if (((uint)((ushort)local_78 >> 8) <=
               (uint)(byte)PTR_DAT_04bc27f0[(ulong)(ushort)local_78 & 0xff]) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + ((ulong)(ushort)local_78 & 0xff) * 4) >>
               (ulong)((ushort)local_78 >> 8 & 0x1f) & 1) != 0)) {
            if (param_5 != 1) {
              if (param_5 == 0) {
                iVar10 = FUN_021d7d60(&local_74);
                if (iVar10 == -1) goto switchD_00e9c1c4_default;
                *(int *)(param_1 + 0x30) = iVar10;
                *(int *)(param_1 + 0x40) = iVar10;
              }
LAB_00e9c914:
              *(undefined4 *)(param_1 + 8) = 2;
              break;
            }
            iVar10 = FUN_021d7d60(&local_74);
            if (iVar10 != -1) {
              local_78 = 0;
              uVar11 = FUN_02b67a30(&local_78,iVar10);
              if ((uVar11 & 1) != 0) {
                *(int *)(param_1 + 0x30) = iVar10;
                *(uint *)(param_1 + 0x40) = local_78;
                goto LAB_00e9c914;
              }
            }
          }
        }
      }
    }
  default:
switchD_00e9c1c4_default:
    uVar8 = 0;
    goto LAB_00e9c924;
  case 2:
    goto switchD_00e9c1c4_caseD_2;
  case 3:
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 8) = 3;
    break;
  case 4:
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar14 = 0;
      if (DAT_00000028 != '\0') goto LAB_00e9c270;
LAB_00e9c44c:
      bVar6 = 1;
    }
    else {
      lVar14 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      if (*(char *)(lVar14 + 0x28) == '\0') goto LAB_00e9c44c;
LAB_00e9c270:
      bVar6 = (**(code **)(*(long *)(lVar14 + 0x20) + 0x18))((long *)(lVar14 + 0x20));
      *(undefined1 *)(lVar14 + 0x28) = 0;
    }
    *(byte *)(lVar14 + 0x29) = bVar6 & 1;
    puVar5 = PTR_DAT_04bb43c0;
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(lVar14 + 0x2c);
    if (*(long *)puVar5 != 0) {
      lVar14 = *(long *)(lVar15 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
        *(undefined4 *)(param_1 + 8) = 2;
        *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
        uVar11 = FUN_02b5fbc0(&local_70);
        if ((uVar11 & 1) != 0) {
          *(undefined4 *)(param_1 + 0x40) = local_70._0_4_;
        }
        break;
      }
    }
    goto switchD_00e9c1c4_default;
  case 5:
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar14 = 0;
      if (DAT_00000028 != '\0') goto LAB_00e9c2a8;
LAB_00e9c4dc:
      bVar6 = 1;
    }
    else {
      lVar14 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      if (*(char *)(lVar14 + 0x28) == '\0') goto LAB_00e9c4dc;
LAB_00e9c2a8:
      bVar6 = (**(code **)(*(long *)(lVar14 + 0x20) + 0x18))((long *)(lVar14 + 0x20));
      *(undefined1 *)(lVar14 + 0x28) = 0;
    }
    *(byte *)(lVar14 + 0x29) = bVar6 & 1;
    puVar5 = PTR_DAT_04bb43c0;
    lVar16 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(lVar14 + 0x2c);
    lVar15 = *(long *)puVar5;
    if (lVar15 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        local_60 = 0;
        local_68 = *(undefined4 *)(lVar14 + 0x2c);
        uStack_64 = *(uint *)(lVar14 + 0x30);
        local_70 = PTR_DAT_04bc0510 + 0x10;
        uVar8 = FUN_0277d6c4(&local_68);
        if (*(long *)puVar5 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            lVar15 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(lVar14 + 0x2c);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
               (lVar14 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8), lVar14 != 0))
            {
              local_60 = lVar14;
            }
          }
        }
        uVar11 = FUN_01ad6944(&local_70);
        if ((uVar11 & 1) != 0) {
          *(undefined4 *)(param_1 + 8) = 4;
          uVar7 = FUN_01ad6be4(&local_70);
          *(undefined2 *)(param_1 + 0x44) = uVar7;
          break;
        }
      }
    }
  case 6:
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar14 = 0;
      if (DAT_00000028 != '\0') goto LAB_00e9c614;
LAB_00e9c63c:
      bVar6 = 1;
    }
    else {
      lVar14 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      if (*(char *)(lVar14 + 0x28) == '\0') goto LAB_00e9c63c;
LAB_00e9c614:
      bVar6 = (**(code **)(*(long *)(lVar14 + 0x20) + 0x18))((long *)(lVar14 + 0x20));
      *(undefined1 *)(lVar14 + 0x28) = 0;
    }
    *(byte *)(lVar14 + 0x29) = bVar6 & 1;
    puVar5 = PTR_DAT_04bb43c0;
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(lVar14 + 0x2c);
    lVar16 = *(long *)puVar5;
    if (lVar16 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        local_60 = 0;
        local_68 = *(undefined4 *)(lVar14 + 0x2c);
        uVar8 = *(uint *)(lVar14 + 0x30);
        local_70 = PTR_DAT_04bc0510 + 0x10;
        uStack_64 = uVar8;
        uVar9 = FUN_0277d6c4(&local_68);
        if (*(long *)puVar5 != 0) {
          lVar15 = *(long *)(lVar16 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar15 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(lVar14 + 0x2c);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
               (lVar14 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8), lVar14 != 0))
            {
              local_60 = lVar14;
            }
          }
        }
        iVar10 = FUN_0277d6c4(&local_68);
        if ((iVar10 == 0x38e) || (iVar10 = FUN_0277d6c4(&local_68), iVar10 == 0x10d7)) {
          *(undefined4 *)(param_1 + 8) = 5;
          iVar10 = FUN_0277d6c4(&local_68);
          if ((iVar10 == 0x38e) || (iVar10 = FUN_0277d6c4(&local_68), iVar10 == 0x10d7)) {
            lVar14 = *(long *)PTR_DAT_04bb5008;
            uVar9 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x13f0);
            if (uVar9 < *(uint *)(lVar14 + 0x13d0)) {
              uVar13 = 0;
              if (*(long *)(*(long *)(lVar14 + 0x13d8) + (long)(int)uVar9 * 8) != 0) {
                uVar13 = uVar8;
              }
              *(short *)(param_1 + 0x46) = (short)uVar13;
              break;
            }
          }
          *(undefined2 *)(param_1 + 0x46) = 0;
          break;
        }
      }
    }
switchD_00e9c1c4_caseD_2:
    *(undefined4 *)(param_1 + 8) = 3;
    uVar18 = 2;
    goto LAB_00e9c7d0;
  case 7:
    *(undefined4 *)(param_1 + 8) = 3;
    uVar18 = 5;
    goto LAB_00e9c7d0;
  case 8:
    *(undefined4 *)(param_1 + 8) = 3;
    uVar18 = 6;
LAB_00e9c7d0:
    *(undefined4 *)(param_1 + 0x38) = uVar18;
    break;
  case 9:
    *(undefined4 *)(param_1 + 8) = 1;
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  if (param_5 == 1) {
    uVar8 = 1;
    if (local_54 < 10) {
      if ((1 << (ulong)(local_54 & 0x1f) & 0x38fU) == 0) goto LAB_00e9c80c;
      uVar8 = 1;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
  }
  else {
LAB_00e9c80c:
    uVar8 = 1;
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
LAB_00e9c924:
  puVar5 = PTR_DAT_04bb27c0;
  lVar14 = *(long *)(param_2 + 0x288);
  if (param_4 == 2) {
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar15 = 0;
      if (DAT_00000028 != '\0') goto LAB_00e9c994;
LAB_00e9caec:
      bVar6 = 1;
    }
    else {
      lVar15 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      if (*(char *)(lVar15 + 0x28) == '\0') goto LAB_00e9caec;
LAB_00e9c994:
      bVar6 = (**(code **)(*(long *)(lVar15 + 0x20) + 0x18))((long *)(lVar15 + 0x20));
      *(undefined1 *)(lVar15 + 0x28) = 0;
    }
    fVar17 = 0.0;
    *(byte *)(lVar15 + 0x29) = bVar6 & 1;
    if (lVar14 == 0) {
LAB_00e9cb24:
      uVar18 = 0;
      fVar19 = 0.0;
      fVar21 = 0.0;
    }
    else {
      if (((*(float *)(lVar14 + 0xd64) == 0.0) && (*(float *)(lVar14 + 0xd68) == 0.0)) &&
         (*(float *)(lVar14 + 0xd6c) == 0.0)) goto LAB_00e9cb24;
      fVar21 = *(float *)(lVar14 + 0xd64) + 0.0;
      fVar19 = *(float *)(lVar14 + 0xd68) + 0.0;
      uVar18 = *(undefined4 *)(lVar14 + 0xd60);
      fVar17 = *(float *)(lVar14 + 0xd6c) + -20.0;
    }
    *(float *)(param_1 + 0xc) = fVar21;
    *(float *)(param_1 + 0x10) = fVar19;
    *(float *)(param_1 + 0x14) = fVar17;
LAB_00e9cb60:
    *(undefined4 *)(param_1 + 0x18) = uVar18;
    *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(lVar15 + 0x2c);
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(lVar15 + 0x2e);
    *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(lVar15 + 0x2f);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar15 + 0x30);
  }
  else {
    if (param_4 != 1) {
      if (param_4 != 0) {
        uVar9 = 0;
        goto LAB_00e9cb88;
      }
      if (*(long *)PTR_DAT_04bb2230 == 0) {
        lVar15 = 0;
        if (DAT_00000028 != '\0') goto LAB_00e9c95c;
LAB_00e9ca98:
        bVar6 = 1;
      }
      else {
        lVar15 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
        if (*(char *)(lVar15 + 0x28) == '\0') goto LAB_00e9ca98;
LAB_00e9c95c:
        bVar6 = (**(code **)(*(long *)(lVar15 + 0x20) + 0x18))((long *)(lVar15 + 0x20));
        *(undefined1 *)(lVar15 + 0x28) = 0;
      }
      *(byte *)(lVar15 + 0x29) = bVar6 & 1;
      if (lVar14 == 0) {
LAB_00e9cacc:
        uVar18 = 0;
        fVar17 = 0.0;
        fVar19 = 0.0;
        fVar21 = 0.0;
      }
      else {
        fVar17 = *(float *)(lVar14 + 0xd64);
        fVar19 = *(float *)(lVar14 + 0xd68);
        fVar21 = *(float *)(lVar14 + 0xd6c);
        if (((fVar17 == 0.0) && (fVar19 == 0.0)) && (fVar21 == 0.0)) goto LAB_00e9cacc;
        uVar18 = *(undefined4 *)(lVar14 + 0xd60);
      }
      *(float *)(param_1 + 0xc) = fVar17;
      *(float *)(param_1 + 0x10) = fVar19;
      *(float *)(param_1 + 0x14) = fVar21;
      goto LAB_00e9cb60;
    }
    uVar9 = *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xd20);
    puVar1 = (uint *)(*(long *)PTR_DAT_04bb3968 + 0xa20);
    puVar2 = puVar1 + uVar9;
    if (0x11 < uVar9) {
      puVar2 = puVar1;
    }
    puVar1 = (uint *)PTR_DAT_04bb3238;
    if (uVar9 != 0xffffffff) {
      puVar1 = puVar2;
    }
    lVar14 = *(long *)PTR_DAT_04bb27c0;
    if (lVar14 != 0) {
      uVar9 = *puVar1;
      if (((uVar9 == 0) ||
          (lVar15 = *(long *)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                             ((ulong)(uVar9 >> 0x11) & 0x7ff8)), lVar15 == 0)) ||
         (((*(uint *)(lVar15 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar15 + 0x230) != uVar9)))) {
        lVar15 = 0;
      }
      if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
        plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar14 = *(long *)puVar5;
        iVar10 = (**(code **)(*plVar12 + 0x60))();
        if (iVar10 < 0x11) {
          uVar13 = 1;
        }
        else {
          if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_00e9cba8;
          uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_00e9cba8:
        uVar13 = 0;
      }
      if (lVar15 != 0) {
        uVar13 = uVar13 ^ 1;
        uVar9 = 1;
        if (*(int *)(lVar15 + 0x150) != 1) {
          uVar13 = 1;
        }
        if (uVar13 == 0) {
          lVar14 = *(long *)(lVar15 + 0x68);
          puVar3 = (undefined4 *)((long)PTR_DAT_04bb2150 + 4);
          puVar4 = (undefined4 *)PTR_DAT_04bb2150;
          if (lVar14 != 0) {
            puVar3 = (undefined4 *)(lVar14 + 0x27c);
            puVar4 = (undefined4 *)(lVar14 + 0x278);
          }
          uVar18 = *puVar4;
          puVar4 = (undefined4 *)((long)PTR_DAT_04bb2150 + 8);
          if (lVar14 != 0) {
            puVar4 = (undefined4 *)(lVar14 + 0x280);
          }
          uVar22 = *puVar3;
          uVar20 = *puVar4;
          *(undefined4 *)(param_1 + 0x18) = 0;
          *(undefined4 *)(param_1 + 0xc) = uVar18;
          puVar5 = PTR_DAT_04bb37e0;
          *(undefined4 *)(param_1 + 0x10) = uVar22;
          *(undefined4 *)(param_1 + 0x14) = uVar20;
          *(undefined1 *)(param_1 + 0x34) = 1;
          uVar18 = *(undefined4 *)(puVar5 + 4);
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)puVar5;
          *(undefined4 *)(param_1 + 0x24) = uVar18;
        }
        goto LAB_00e9cb88;
      }
    }
  }
  uVar9 = 1;
LAB_00e9cb88:
  return uVar8 & uVar9;
}

