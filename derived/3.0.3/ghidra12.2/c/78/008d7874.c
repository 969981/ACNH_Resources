
undefined8 FUN_008d7874(long param_1,int param_2,ulong param_3)

{
  long lVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  short sVar5;
  ushort uVar6;
  short sVar7;
  bool bVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  undefined4 *puVar18;
  byte bVar19;
  short sVar20;
  byte *pbVar21;
  int *piVar22;
  short sVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  long *plVar29;
  long lVar30;
  float fVar31;
  undefined8 local_c8;
  undefined1 local_c0;
  byte local_bf;
  ushort local_be;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_78;
  undefined4 local_70;
  int local_64;
  
  puVar10 = PTR_DAT_04bb39b0;
  iVar14 = (int)param_3;
  local_64 = iVar14;
  if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0) {
    if (*(int *)(param_1 + 0x410) == 8) {
      return 1;
    }
    FUN_008c3440(param_1);
    lVar26 = *(long *)puVar10;
    if (lVar26 == 0) {
      pbVar21 = &DAT_0548e140;
LAB_008d7a84:
      if (7 < *pbVar21) {
LAB_008d7a90:
        if (DAT_0537d558 != (long *)0x0) {
          lVar26 = *DAT_0537d558;
          bVar19 = *(byte *)(lVar26 + 0x473);
          pbVar21 = PTR_DAT_04bb5038;
          if ((long)(char)bVar19 != 0xffffffffffffffff) {
            puVar2 = (uint *)(lVar26 + 0x48) + ((long)(char)bVar19 & 0xffffffffU) * 0x20;
            if (7 < bVar19) {
              puVar2 = (uint *)(lVar26 + 0x48);
            }
            if ((*puVar2 & 8) != 0) {
              pbVar21 = (byte *)(lVar26 + 0x471);
            }
          }
          bVar19 = *pbVar21;
          if (bVar19 < 8) goto LAB_008d7b00;
        }
        pbVar21 = &DAT_0548e168;
      }
    }
    else {
      pbVar21 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar26 + 0x15c) != 0) {
        pbVar21 = (byte *)(lVar26 + 0x158);
      }
      if (7 < *pbVar21) {
        if ((*(int *)(lVar26 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar21 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_008d7a84;
        }
        goto LAB_008d7a90;
      }
    }
    bVar19 = *pbVar21;
    if (7 < bVar19) {
      bVar19 = 0xff;
    }
LAB_008d7b00:
    if (7 < bVar19) {
      bVar19 = 0xff;
    }
    *(byte *)(param_1 + 0x309b8) = bVar19;
    *(undefined4 *)(param_1 + 0x307e4) = *(undefined4 *)(param_1 + 0x307e8);
    *(undefined4 *)(param_1 + 0x307ec) = 2;
    FUN_03ebb160(param_1 + 0x408,8);
    return 1;
  }
  fVar31 = (float)FUN_008d6f70(param_1,param_2,param_3 & 0xffffffff);
  puVar10 = PTR_DAT_04bb6298;
  if (140.0 < fVar31) {
    FUN_008c3440(param_1,*(undefined4 *)(param_1 + 0x410));
    return 1;
  }
  plVar17 = (long *)(param_1 + 0x309c0);
  *(float *)(param_1 + 0x30af4) = fVar31;
  puVar11 = PTR_DAT_04bc39f8;
  sVar7 = *(short *)puVar10;
  if (sVar7 == -1) {
    return 0;
  }
  local_c8 = (ulong)local_c8._4_4_ << 0x20;
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
  if (0xff < (uint)(int)sVar7) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 & 1) == 0) {
    return 0;
  }
  local_78 = 0;
  local_70 = 0x10000;
  if (DAT_04c93e08 == 0) {
    bVar8 = false;
    bVar12 = false;
    local_70 = 0;
    lVar26 = 0;
  }
  else {
    if ((((iVar14 == 0) ||
         (lVar26 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                            (param_3 >> 0x14 & 0xfff) * 8), lVar26 == 0)) ||
        ((*(uint *)(lVar26 + 0x248) >> 1 & 1) != 0)) || (*(int *)(lVar26 + 0x230) != iVar14)) {
      lVar26 = 0;
    }
    local_78 = lVar26;
    if ((*(int *)(DAT_04c93e08 + 0x288) == 1) || (*(int *)(DAT_04c93e08 + 0x288) == -1)) {
      plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      lVar30 = DAT_04c93e08;
      iVar13 = (**(code **)(*plVar16 + 0x60))();
      if (iVar13 < 0x11) {
        bVar8 = true;
      }
      else if ((4 < *(uint *)(lVar30 + 0x5e8)) ||
              (bVar8 = true, (1 << (ulong)(*(uint *)(lVar30 + 0x5e8) & 0x1f) & 0x1aU) == 0))
      goto LAB_008d7a68;
    }
    else {
LAB_008d7a68:
      bVar8 = false;
      local_70._0_3_ = (uint3)(ushort)local_70;
    }
    if (lVar26 == 0) {
      bVar12 = false;
    }
    else {
      bVar12 = *(int *)(lVar26 + 0x150) == 1;
      local_70 = CONCAT22(local_70._2_2_,CONCAT11((char)(*(uint *)(lVar26 + 0x248) >> 4),bVar12)) &
                 0xffff01ff;
    }
  }
  if ((*(int *)(param_1 + 0x410) - 0xfU < 4) || (*(int *)(param_1 + 0x410) == 1)) {
    sVar7 = *(short *)(param_1 + 0x30af0);
    sVar5 = *(short *)(param_1 + 0x30af2);
    if (param_2 == 0) {
LAB_008d7d90:
      sVar23 = -1;
      *(undefined4 *)(param_1 + 0x30af0) = 0xffffffff;
      sVar20 = -1;
    }
    else {
      *(undefined2 *)(param_1 + 0x30af0) = 0;
      if (iVar14 == 0) {
        sVar20 = sVar5;
      }
      else {
        FUN_008d6be0(param_1,&local_64,0);
        lVar26 = *(long *)(param_1 + 0x309c8);
        if (lVar26 == param_1 + 0x309c0) {
          sVar20 = 0;
        }
        else {
          sVar20 = 0;
          do {
            if (*(int *)(lVar26 + -0x10) == iVar14) break;
            lVar26 = *(long *)(lVar26 + 8);
            sVar20 = sVar20 + 1;
          } while (lVar26 + -0x10 != param_1 + 0x309b0);
        }
        *(short *)(param_1 + 0x30af2) = sVar20 + 1;
        sVar20 = sVar20 + 1;
      }
      if (*(int *)(param_1 + 0x309d0) < (int)sVar20) goto LAB_008d7d90;
      sVar23 = *(short *)(param_1 + 0x30af0);
    }
    if ((sVar5 != sVar20) || (sVar23 != sVar7)) {
      FUN_008c4aa0(param_1,*(undefined4 *)(param_1 + 0x307e8),*(undefined4 *)(param_1 + 0x307f0));
      goto LAB_008d7dd0;
    }
    bVar12 = false;
  }
  else {
    FUN_008c3440(param_1);
    *(int *)(param_1 + 0x309bc) = param_2;
    if ((((lVar26 == 0) || (!bVar12)) || (!bVar8)) || (*(int *)(lVar26 + 0x15c) != 10)) {
      plVar16 = *(long **)(param_1 + 0x309c8);
      while (plVar16 != plVar17) {
        plVar3 = (long *)plVar16[1];
        plVar29 = plVar3;
        if (*plVar16 != 0) {
          *(long **)(*plVar16 + 8) = plVar3;
          plVar29 = (long *)plVar16[1];
        }
        if (plVar29 != (long *)0x0) {
          *plVar29 = *plVar16;
        }
        *plVar16 = 0;
        plVar16[1] = 0;
        *(int *)(param_1 + 0x309d0) = *(int *)(param_1 + 0x309d0) + -1;
        plVar16[-2] = *(long *)(param_1 + 0x309d8);
        *(long **)(param_1 + 0x309d8) = plVar16 + -2;
        plVar16 = plVar3;
      }
      if (*(int *)(param_1 + 0x309d0) < *(int *)(param_1 + 0x309e8)) {
        piVar22 = *(int **)(param_1 + 0x309d8);
        if (piVar22 != (int *)0x0) {
          *(undefined8 *)(param_1 + 0x309d8) = *(undefined8 *)piVar22;
        }
        *piVar22 = iVar14;
        piVar22[2] = 0;
        piVar22[3] = 0;
        plVar16 = (long *)(piVar22 + 4);
        *plVar16 = 0;
        piVar22[6] = 0;
        piVar22[7] = 0;
        lVar26 = *plVar17;
        *plVar17 = (long)plVar16;
        *(long **)(piVar22 + 6) = plVar17;
        *plVar16 = lVar26;
        if (lVar26 != 0) {
          *(long **)(lVar26 + 8) = plVar16;
        }
        *(int *)(param_1 + 0x309d0) = *(int *)(param_1 + 0x309d0) + 1;
      }
    }
    else {
      lVar26 = param_1 + 0x309c0;
      FUN_008cf9c0(lVar26);
      FUN_008d7814(lVar26,&local_64);
      FUN_008d71d0(&local_c8,&local_78);
      if ((((char)local_be != '\0') && (local_c8 != 0)) &&
         (((*(ulong *)(*(long *)(local_c8 + 0x3b8) + 0xad58) & 0x10000000000020) != 0 &&
          (*(int *)(*(long *)(local_c8 + 0x3b8) + 0x7d6c) != 0)))) {
        FUN_008cf224(lVar26);
      }
    }
    FUN_03ebb160(param_1 + 0x408,0x10);
LAB_008d7dd0:
    bVar12 = true;
  }
  uVar6 = *(ushort *)(param_1 + 0x30af2);
  if (0 < (short)uVar6) {
    uVar28 = (uint)uVar6;
    if ((int)uVar28 <= (int)*(uint *)(param_1 + 0x309d0)) {
      if (uVar28 - 1 < *(uint *)(param_1 + 0x309d0)) {
        uVar15 = uVar28 & 3;
        lVar26 = param_1 + 0x309c0;
        if (3 < uVar28) {
          uVar28 = uVar28 & 0xfffc;
          do {
            uVar28 = uVar28 - 4;
            lVar26 = *(long *)(*(long *)(*(long *)(*(long *)(lVar26 + 8) + 8) + 8) + 8);
          } while (uVar28 != 0);
        }
        if ((uVar6 & 3) != 0) {
          do {
            lVar26 = *(long *)(lVar26 + 8);
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
      }
      else {
        lVar26 = 0;
      }
      uVar28 = *(uint *)(lVar26 + -0x10);
      local_be = 1;
      if (DAT_04c93e08 != 0) {
        if (((uVar28 == 0) ||
            (lVar26 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                               ((ulong)(uVar28 >> 0x11) & 0x7ff8)), lVar26 == 0)) ||
           (((*(uint *)(lVar26 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar26 + 0x230) != uVar28)))) {
          lVar26 = 0;
        }
        local_c8 = lVar26;
        if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
          plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          lVar30 = DAT_04c93e08;
          iVar14 = (**(code **)(*plVar17 + 0x60))();
          if (iVar14 < 0x11) {
            bVar8 = true;
          }
          else if ((4 < *(uint *)(lVar30 + 0x5e8)) ||
                  (bVar8 = true, (1 << (ulong)(*(uint *)(lVar30 + 0x5e8) & 0x1f) & 0x1aU) == 0))
          goto LAB_008d7efc;
        }
        else {
LAB_008d7efc:
          bVar8 = false;
          local_be = local_be & 0xff00;
        }
        if (lVar26 != 0) {
          local_c0 = *(int *)(lVar26 + 0x150) == 1;
          bVar9 = false;
          if ((bool)local_c0) {
            bVar9 = bVar8;
          }
          local_bf = (byte)(*(uint *)(lVar26 + 0x248) >> 4) & 1;
          if ((bVar9) && (*(int *)(lVar26 + 0x15c) == 10)) {
            FUN_008d71d0(&local_88,&local_c8);
            lVar26 = *(long *)(CONCAT44(uStack_84,local_88) + 0x60);
            puVar18 = (undefined4 *)
                      (**(code **)(*(long *)(lVar26 + 0x5a48) + 0xf0))(lVar26 + 0x5a48);
            *(undefined4 *)(param_1 + 0x30af8) = *puVar18;
          }
        }
      }
      uVar6 = *(ushort *)puVar10;
      if ((long)(short)uVar6 != 0xffffffffffffffff) {
        local_88 = 1;
        puVar2 = (uint *)(puVar11 + ((long)(short)uVar6 & 0xffffffffU) * 8);
        if (0xff < uVar6) {
          puVar2 = (uint *)puVar11;
        }
        if ((*puVar2 >> 1 & 1) != 0) goto LAB_008d7ff0;
      }
      if (*(int *)(param_1 + 0x358) != 0) {
        lVar27 = *(long *)(param_1 + 0x360);
        lVar26 = 0;
        lVar30 = (long)*(int *)(param_1 + 0x358) << 3;
        do {
          iVar14 = (int)lVar26;
          lVar1 = lVar26 * 8;
          lVar26 = lVar26 + 1;
          lVar30 = lVar30 + -8;
          *(bool *)(*(long *)(lVar27 + lVar1) + 0x28) =
               iVar14 == *(short *)(param_1 + 0x30af2) || iVar14 == *(short *)(param_1 + 0x30af0);
        } while (lVar30 != 0);
      }
    }
  }
LAB_008d7ff0:
  if (!bVar12) {
    return 1;
  }
  uVar28 = *(uint *)(param_1 + 0x307e8);
  if (uVar28 == 0x62) {
    (**(code **)(*(long *)(param_1 + 0x30708) + 0x18))((long *)(param_1 + 0x30708));
    uVar15 = FUN_006bd550(*(undefined8 *)(param_1 + 0x30710),0);
    iVar14 = *(int *)(param_1 + 0x305b0);
    if (iVar14 != 0) {
      uVar24 = 0;
      iVar13 = iVar14 + -1;
      if (iVar13 == 0 || iVar14 < 1) {
        lVar26 = *(long *)(param_1 + 0x305b8);
      }
      else {
        lVar26 = *(long *)(param_1 + 0x305b8);
        do {
          iVar14 = iVar13 + uVar24;
          if (iVar14 < 0 != SCARRY4(iVar13,uVar24)) {
            iVar14 = iVar14 + 1;
          }
          uVar25 = iVar14 >> 1;
          uVar4 = *(uint *)(*(long *)(lVar26 + (long)(int)uVar25 * 8) + 0x18);
          if (uVar4 == uVar15) goto LAB_008d8090;
          if (uVar4 < uVar15) {
            uVar24 = uVar25 + 1;
          }
          else {
            iVar13 = uVar25 - 1;
          }
        } while ((int)uVar24 < iVar13);
      }
      uVar25 = uVar24;
      if (*(uint *)(*(long *)(lVar26 + (long)(int)uVar24 * 8) + 0x18) == uVar15) {
LAB_008d8090:
        if ((-1 < (int)uVar25) && (lVar26 = **(long **)(lVar26 + (ulong)uVar25 * 8), lVar26 != 0))
        goto LAB_008d80c4;
      }
    }
  }
  local_c8 = CONCAT44(local_c8._4_4_,uVar28);
  if (uVar28 < *(uint *)(param_1 + 0x548)) {
    lVar26 = *(long *)(*(long *)(param_1 + 0x550) + (long)(int)uVar28 * 8);
  }
  else {
    lVar26 = 0;
  }
LAB_008d80c4:
  FUN_008c0a74(&local_c8,lVar26);
  FUN_008c6430(param_1,0);
  FUN_008cbf4c(param_1,param_1 + 0x30970);
  return 1;
}

