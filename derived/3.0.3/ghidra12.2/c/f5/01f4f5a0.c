
void FUN_01f4f5a0(long param_1,int param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  short *psVar4;
  uint uVar5;
  short sVar6;
  ushort uVar7;
  byte bVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  long *plVar17;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  uint *puVar21;
  ushort *puVar22;
  ulong uVar23;
  long lVar24;
  byte *pbVar25;
  uint uVar26;
  ulong uVar27;
  long *plVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint local_114;
  uint uStack_10c;
  undefined *local_108;
  ushort *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  uint local_e8;
  undefined1 local_e4 [31];
  undefined1 local_c5;
  uint local_bc;
  undefined *local_b8;
  ushort *local_b0;
  int local_a8;
  ushort local_a4 [7];
  undefined2 local_96;
  long *local_90;
  uint local_88;
  undefined *local_80;
  undefined2 *local_78;
  uint local_6c [3];
  
  (**(code **)(*param_3 + 0x18))(param_3);
  puVar11 = PTR_DAT_04bb2da0;
  lVar20 = 0;
  do {
    local_90 = param_3;
    if (*(short *)(param_3[1] + lVar20 * 2) == 0) {
LAB_01f4f658:
      uVar26 = (int)lVar20 + 1;
      local_6c[0] = 0;
      local_88 = 0;
      local_80 = PTR_DAT_04bb8610 + 0x10;
      local_78 = &DAT_04169b2e;
      if ((int)lVar20 != -1) goto LAB_01f4f6a4;
      lVar20 = *(long *)PTR_DAT_04bb27c0;
      if (lVar20 == 0) {
        return;
      }
      uStack_10c = 0;
      goto LAB_01f4fc70;
    }
    lVar24 = param_3[1] + lVar20 * 2;
    if (*(short *)(lVar24 + 2) == 0) {
      lVar20 = lVar20 + 1;
      goto LAB_01f4f658;
    }
    if (*(short *)(lVar24 + 4) == 0) {
      lVar20 = lVar20 + 2;
      goto LAB_01f4f658;
    }
    lVar20 = lVar20 + 3;
  } while (lVar20 != 0x80001);
  uVar26 = 1;
LAB_01f4f6a4:
  local_6c[0] = 0;
  local_78 = &DAT_04169b2e;
  local_80 = PTR_DAT_04bb8610 + 0x10;
  local_88 = 0;
  local_114 = 0;
  uStack_10c = 0;
  bVar15 = false;
  pbVar3 = (byte *)(param_1 + 0x7d68);
  bVar14 = false;
  bVar9 = false;
  bVar13 = true;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  puVar2 = PTR_DAT_04bb8610 + 0x10;
  do {
    local_96 = 0;
    local_a8 = 8;
    local_a4[0] = 0;
    local_b8 = &DAT_04a66b90;
    local_b0 = local_a4;
    FUN_01befda0(&local_90,&local_b8);
    puVar22 = local_b0;
    if (local_a8 < 1) {
      puVar22 = (ushort *)puVar11;
    }
    switch(*puVar22) {
    case 0x4e:
      local_c5 = 0;
      local_bc = 0xffffffff;
      local_e8 = 0x20;
      local_e4[0] = 0;
      local_f8 = puVar1;
      local_f0 = local_e4;
      (**(code **)(local_b8 + 0x18))(&local_b8);
      lVar20 = 0;
      do {
        if (local_b0[lVar20] == 0) {
LAB_01f4f890:
          iVar16 = (int)lVar20;
joined_r0x01f4f894:
          if (0 < iVar16) {
            local_100 = local_b0 + 1;
            goto LAB_01f4f8c0;
          }
          break;
        }
        if (local_b0[lVar20 + 1] == 0) {
          lVar20 = lVar20 + 1;
          goto LAB_01f4f890;
        }
        if (local_b0[lVar20 + 2] == 0) {
          iVar16 = (int)lVar20 + 2;
          goto joined_r0x01f4f894;
        }
        lVar20 = lVar20 + 3;
      } while (lVar20 != 0x80001);
      local_100 = *(ushort **)(PTR_PTR_04bb8620 + 8);
LAB_01f4f8c0:
      local_108 = puVar2;
      (**(code **)(local_f8 + 0x18))(&local_f8);
      uVar5 = local_e8;
      puVar12 = local_f0;
      (**(code **)(local_108 + 0x18))(&local_108);
      if (uVar5 != 0) {
        uVar19 = 0;
        lVar20 = 0x7fffffff;
        puVar22 = local_100;
        do {
          pbVar25 = puVar12 + uVar19;
          if (lVar20 == 0) goto LAB_01f4f9b0;
          uVar7 = *puVar22;
          if (uVar7 == 0) goto LAB_01f4f9b0;
          bVar8 = (byte)uVar7;
          if (uVar7 < 0x80) {
            *pbVar25 = bVar8;
            iVar16 = 1;
          }
          else if (uVar7 < 0x800) {
            if (uVar5 <= uVar19 + 1) break;
            *pbVar25 = (byte)(uVar7 >> 6) | 0xc0;
            pbVar25[1] = bVar8 & 0x3f | 0x80;
            iVar16 = 2;
          }
          else {
            if (uVar5 <= uVar19 + 2) break;
            *pbVar25 = (byte)(uVar7 >> 0xc) | 0xe0;
            pbVar25[1] = (byte)(uVar7 >> 6) & 0x3f | 0x80;
            pbVar25[2] = bVar8 & 0x3f | 0x80;
            iVar16 = 3;
          }
          uVar19 = iVar16 + uVar19;
          lVar20 = lVar20 + -1;
          puVar22 = puVar22 + 1;
        } while (uVar19 < uVar5);
        pbVar25 = puVar12 + (uVar19 - 1);
LAB_01f4f9b0:
        *pbVar25 = 0;
      }
      uVar27 = FUN_038d30c0(&local_bc,&local_f8,0xffffffff);
      if ((uVar27 & 1) != 0) {
        if (local_bc < 0x12) {
          uVar5 = *(uint *)(*(long *)PTR_DAT_04bb3968 + (ulong)local_bc * 4 + 0xa20);
          if (bVar13) {
            local_114 = uVar5;
            local_6c[0] = uVar5;
          }
          else {
            uStack_10c = uVar5;
          }
        }
        bVar15 = (bool)(bVar13 ^ 1U | bVar15);
      }
      break;
    case 0x4f:
      uVar5 = *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xcec);
      if (bVar13) {
        local_114 = uVar5;
        local_6c[0] = uVar5;
      }
      else {
        uStack_10c = uVar5;
      }
      bVar9 = (bool)(bVar13 ^ 1U | bVar9);
      break;
    case 0x50:
      puVar21 = (uint *)PTR_DAT_04bb3238;
      if ((ulong)*pbVar3 < 8) {
        if (*(long *)PTR_DAT_04bb4718 != 0) {
          puVar21 = (uint *)(*(long *)PTR_DAT_04bb4718 + (ulong)*pbVar3 * 4 + 0xde8);
          goto LAB_01f4f800;
        }
        uVar5 = *(uint *)PTR_DAT_04bb3238;
      }
      else {
LAB_01f4f800:
        uVar5 = *puVar21;
      }
      if (bVar13) {
        bVar14 = true;
        local_114 = uVar5;
        local_6c[0] = uVar5;
      }
      else {
        uStack_10c = uVar5;
      }
      break;
    case 0x52:
      puVar22 = local_b0 + 1;
      if (local_a8 < 2) {
        puVar22 = (ushort *)puVar11;
      }
      if (*puVar22 == 0x50) {
        if (bVar13) {
          return;
        }
        uStack_10c = FUN_03772580(*(long *)PTR_DAT_04bb3968 + 0xa20);
        if (uStack_10c == 0) {
          return;
        }
        bVar15 = true;
      }
    }
    uVar5 = local_88;
    plVar28 = local_90;
    uVar27 = (ulong)local_88;
    (**(code **)(*local_90 + 0x18))(local_90);
    lVar20 = 0;
    do {
      if (*(short *)(plVar28[1] + lVar20 * 2) == 0) {
LAB_01f4fa94:
        iVar16 = (int)lVar20;
        goto joined_r0x01f4fab8;
      }
      lVar24 = plVar28[1] + lVar20 * 2;
      if (*(short *)(lVar24 + 2) == 0) {
        lVar20 = lVar20 + 1;
        goto LAB_01f4fa94;
      }
      if (*(short *)(lVar24 + 4) == 0) {
        iVar16 = (int)lVar20 + 2;
        goto joined_r0x01f4fab8;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    iVar16 = 0;
joined_r0x01f4fab8:
    if ((-1 < (int)uVar5) && ((int)uVar5 <= iVar16)) {
      for (; psVar4 = (short *)(local_90[1] + uVar27 * 2), *psVar4 != 0; uVar27 = uVar27 + 1) {
        (**(code **)(local_80 + 0x18))(&local_80);
        uVar23 = 0;
        bVar13 = true;
        sVar6 = *psVar4;
        do {
          if (local_78[uVar23] == 0) break;
          if (local_78[uVar23] == sVar6) {
            if (bVar13) goto LAB_01f4fb54;
            break;
          }
          if (local_78[uVar23 + 1] == 0) break;
          if (local_78[uVar23 + 1] == sVar6) goto LAB_01f4fb54;
          if (local_78[uVar23 + 2] == 0) break;
          if (local_78[uVar23 + 2] == sVar6) goto LAB_01f4fb54;
          bVar13 = uVar23 < 0x7fffe;
          uVar23 = uVar23 + 3;
        } while (uVar23 != 0x80001);
      }
LAB_01f4fb54:
      local_88 = (int)uVar27 + 1;
    }
    puVar10 = PTR_DAT_04bb27c0;
    bVar13 = false;
  } while ((local_90 != param_3) || (local_88 != uVar26));
  if (bVar14) {
    if (7 < *pbVar3) {
      return;
    }
    lVar20 = *(long *)PTR_DAT_04bb27c0;
    if (lVar20 == 0) {
      return;
    }
    if ((((uStack_10c == 0) ||
         (plVar28 = *(long **)(*(long *)(*(long *)(lVar20 + 0x1c0) + 8) +
                              (ulong)(uStack_10c >> 0x14) * 8), plVar28 == (long *)0x0)) ||
        ((*(uint *)(plVar28 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar28 + 0x46) != uStack_10c)) {
      plVar28 = (long *)0x0;
    }
    if ((*(int *)(lVar20 + 0x288) == 1) || (*(int *)(lVar20 + 0x288) == -1)) {
      plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar20 = *(long *)puVar10;
      iVar16 = (**(code **)(*plVar17 + 0x60))();
      if (iVar16 < 0x11) {
        uVar26 = 1;
      }
      else {
        if (4 < *(uint *)(lVar20 + 0x5e8)) goto LAB_01f4fe70;
        uVar26 = 0x1aU >> (ulong)(*(uint *)(lVar20 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01f4fe70:
      uVar26 = 0;
    }
    if (plVar28 == (long *)0x0) {
      return;
    }
    uVar26 = uVar26 ^ 1;
    if ((int)plVar28[0x2a] != 1) {
      uVar26 = 1;
    }
    if (uVar26 != 0) {
      return;
    }
    lVar20 = *(long *)PTR_DAT_04bb3968;
    if (!bVar15) {
      if (!bVar9) {
        return;
      }
      uVar26 = *(uint *)(lVar20 + 0xd64);
      *(uint *)(lVar20 + 0xd64) = uVar26 & 0xfffffffd;
      lVar24 = plVar28[0xd];
      uVar31 = *(undefined4 *)(lVar24 + 0x278);
      uVar30 = *(undefined4 *)(lVar24 + 0x27c);
      uVar29 = *(undefined4 *)(lVar24 + 0x280);
      if (param_2 == 0) {
        uVar26 = uVar26 & 0xfffffff1 | 8;
      }
      else {
        if (param_2 == 4) {
          *(undefined4 *)(lVar20 + 0xd74) = uVar31;
          *(undefined4 *)(lVar20 + 0xd78) = uVar30;
          *(undefined4 *)(lVar20 + 0xd7c) = uVar29;
          *(uint *)(lVar20 + 0xd64) = uVar26 & 0xfffffff1 | 8;
LAB_01f5000c:
          FUN_0071c7c4(&local_f8,local_6c,0);
          if (local_f8 == (undefined *)0x0) {
            return;
          }
          if ((char)local_f0 == '\0') {
            return;
          }
          if (local_f0._1_1_ == '\0') {
            return;
          }
          lVar20 = FUN_01f500e0();
          if (lVar20 == 0) {
            return;
          }
          *(undefined8 *)(lVar20 + 0x368) = 0x1040000000;
          return;
        }
        if (param_2 != 1) {
          return;
        }
        *(undefined4 *)(lVar20 + 0xd68) = uVar31;
        uVar26 = uVar26 & 0xfffffffd | 0xc;
        *(undefined4 *)(lVar20 + 0xd6c) = uVar30;
        *(undefined4 *)(lVar20 + 0xd70) = uVar29;
      }
      *(uint *)(lVar20 + 0xd64) = uVar26;
      *(undefined4 *)(lVar20 + 0xd74) = uVar31;
      *(undefined4 *)(lVar20 + 0xd78) = uVar30;
      *(undefined4 *)(lVar20 + 0xd7c) = uVar29;
      return;
    }
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar16 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    (**(code **)(*plVar28 + 0x20))(plVar28,PTR_DAT_04bb37d0);
    *(uint *)(lVar20 + 0xd64) = *(uint *)(lVar20 + 0xd64) & 0xfffffff1;
    if (param_2 == 0) {
      bVar8 = *(byte *)((long)plVar28 + 0x286) | 8;
    }
    else {
      if (param_2 == 4) {
        *(byte *)((long)plVar28 + 0x286) = *(byte *)((long)plVar28 + 0x286) | 8;
        FUN_00a77ab0(pbVar3,uStack_10c);
        goto LAB_01f5000c;
      }
      if (param_2 != 1) {
        return;
      }
      bVar8 = *(byte *)((long)plVar28 + 0x286) & 0xf7;
    }
    *(byte *)((long)plVar28 + 0x286) = bVar8;
    FUN_00a77ab0(pbVar3,uStack_10c);
    return;
  }
  lVar20 = *(long *)PTR_DAT_04bb27c0;
  if (lVar20 == 0) {
    return;
  }
  if ((((local_114 == 0) ||
       (plVar28 = *(long **)(*(long *)(*(long *)(lVar20 + 0x1c0) + 8) +
                            (ulong)(local_114 >> 0x14) * 8), plVar28 == (long *)0x0)) ||
      ((*(uint *)(plVar28 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar28 + 0x46) != local_114)) {
LAB_01f4fc70:
    plVar28 = (long *)0x0;
  }
  if (*(int *)(lVar20 + 0x288) == 1 || *(int *)(lVar20 + 0x288) == -1) {
    plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar20 = *(long *)PTR_DAT_04bb27c0;
    iVar16 = (**(code **)(*plVar17 + 0x60))();
    if (iVar16 < 0x11) {
      uVar27 = 1;
      uVar26 = 1;
    }
    else {
      if (4 < *(uint *)(lVar20 + 0x5e8)) goto LAB_01f4fce0;
      uVar27 = 0x101000100 >> (((ulong)*(uint *)(lVar20 + 0x5e8) & 7) << 3);
      uVar26 = (uint)uVar27;
    }
    if (plVar28 == (long *)0x0) goto LAB_01f4fd34;
LAB_01f4fce8:
    bVar14 = (int)plVar28[0x2a] == 1;
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar16 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar27 = (**(code **)(*plVar28 + 0x20))(plVar28,PTR_DAT_04bb37d0);
    if ((uVar27 & 1) == 0) {
      uVar26 = 0;
    }
    uVar27 = (ulong)uVar26;
  }
  else {
LAB_01f4fce0:
    uVar27 = 0;
    uVar26 = 0;
    if (plVar28 != (long *)0x0) goto LAB_01f4fce8;
LAB_01f4fd34:
    bVar14 = false;
  }
  puVar11 = PTR_DAT_04bb27c0;
  lVar20 = *(long *)PTR_DAT_04bb27c0;
  if (lVar20 == 0) {
    lVar24 = 0;
    uVar26 = 0;
  }
  else {
    if (((uStack_10c == 0) ||
        (lVar24 = *(long *)(*(long *)(*(long *)(lVar20 + 0x1c0) + 8) +
                           (ulong)(uStack_10c >> 0x14) * 8), lVar24 == 0)) ||
       (((*(uint *)(lVar24 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar24 + 0x230) != uStack_10c)))) {
      lVar24 = 0;
    }
    if ((*(int *)(lVar20 + 0x288) == 1) || (*(int *)(lVar20 + 0x288) == -1)) {
      plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar20 = *(long *)puVar11;
      iVar16 = (**(code **)(*plVar17 + 0x60))();
      if (iVar16 < 0x11) {
        uVar26 = 1;
      }
      else {
        if (4 < *(uint *)(lVar20 + 0x5e8)) goto LAB_01f4fdf4;
        uVar26 = (uint)(0x101000100 >> (((ulong)*(uint *)(lVar20 + 0x5e8) & 7) << 3)) & 1;
      }
    }
    else {
LAB_01f4fdf4:
      uVar26 = 0;
    }
    if (lVar24 != 0) {
      bVar15 = *(int *)(lVar24 + 0x150) == 1;
      goto joined_r0x01f4fdec;
    }
  }
  bVar15 = false;
joined_r0x01f4fdec:
  if (plVar28 == (long *)0x0) {
    return;
  }
  if (!bVar14) {
    return;
  }
  if ((uVar27 & 0xff) == 0) {
    return;
  }
  if (uVar26 == 0) {
    return;
  }
  if (lVar24 == 0) {
    return;
  }
  if (!bVar15) {
    return;
  }
  lVar20 = plVar28[0x77];
  puVar21 = (uint *)(lVar20 + 0x7d14);
  if (param_2 == 0) {
    uVar18 = 1;
    *puVar21 = uStack_10c;
    *(undefined4 *)(lVar20 + 0x7d18) = 0x7fc00000;
  }
  else {
    if (param_2 == 4) {
      *puVar21 = uStack_10c;
      *(undefined4 *)(lVar20 + 0x7d18) = 0x7fc00000;
      FUN_03ebb160(lVar20 + 0x7cb0,1);
      if (plVar28[0x55] == 0) {
        return;
      }
      *(undefined8 *)(plVar28[0x55] + 0x368) = 0x1040000000;
      return;
    }
    if (param_2 != 1) {
      return;
    }
    *puVar21 = uStack_10c;
    uVar18 = 2;
  }
  FUN_03ebb160(lVar20 + 0x7cb0,uVar18);
  return;
}

