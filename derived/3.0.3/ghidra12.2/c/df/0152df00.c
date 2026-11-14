
/* WARNING: Removing unreachable block (ram,0x0152ece8) */
/* WARNING: Removing unreachable block (ram,0x0152ec48) */
/* WARNING: Removing unreachable block (ram,0x0152eba4) */
/* WARNING: Removing unreachable block (ram,0x0152eb00) */
/* WARNING: Removing unreachable block (ram,0x0152ea5c) */
/* WARNING: Removing unreachable block (ram,0x0152e9f0) */
/* WARNING: Removing unreachable block (ram,0x0152eab0) */
/* WARNING: Removing unreachable block (ram,0x0152eb54) */
/* WARNING: Removing unreachable block (ram,0x0152ebf8) */
/* WARNING: Removing unreachable block (ram,0x0152ec9c) */
/* WARNING: Removing unreachable block (ram,0x0153095c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0152df00(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  ushort uVar4;
  char *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  ushort *puVar19;
  ulong uVar20;
  long *plVar21;
  uint *puVar22;
  ushort uVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined *puVar29;
  undefined *puVar30;
  float fVar31;
  float fVar32;
  undefined8 local_120;
  long lStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long lStack_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined2 local_e6;
  undefined4 local_e4;
  uint *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  
  if (param_2 != 1) {
    return;
  }
  if ((((**(char **)(param_1 + 0x1200) != '\0') &&
       (lVar14 = *(long *)(*(long *)(param_1 + 0x48) + 0x78), lVar14 != 0)) &&
      (lVar14 = FUN_0074f690(lVar14,param_1 + 0x11f8), lVar14 != 0)) &&
     (*(long *)(param_1 + 0x1150) != 0)) {
    FUN_01664990(*(undefined8 *)PTR_DAT_04bb2200,*(long *)(param_1 + 0x1150),lVar14,0);
  }
  plVar25 = *(long **)(*(long *)(param_1 + 0x48) + 0x240);
  plVar21 = (long *)(param_1 + 0x12a8);
  FUN_016100c4(plVar21,*(undefined8 *)(param_1 + 0x1150));
  puVar30 = PTR_DAT_04bb2020;
  if (*(long *)(param_1 + 0x12b8) == 0) {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    if (lVar14 == 0) {
      puVar17 = malloc(8);
joined_r0x0152e104:
      if (puVar17 != (undefined8 *)0x0) {
        *puVar17 = 0xffffffffffffffff;
        *(undefined8 **)(param_1 + 0x12b8) = puVar17;
        *(undefined4 *)(param_1 + 0x12b0) = 2;
        goto LAB_0152e024;
      }
    }
    else {
      plVar16 = plVar25;
      if (plVar25 != (long *)0x0) {
LAB_0152dff0:
        puVar17 = (undefined8 *)(**(code **)(*plVar16 + 0x30))(plVar16,8,8);
        goto joined_r0x0152e104;
      }
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar16 = (long *)(lVar14 + 8);
      if (lVar15 != 0) {
        plVar16 = (long *)(lVar15 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 != (long *)0x0) goto LAB_0152dff0;
    }
    if (*(long *)(param_1 + 0x12b8) != 0) goto LAB_0152e024;
  }
  else {
LAB_0152e024:
    local_c0 = puVar30 + 0x10;
    local_b8 = s_TorsoHead_049a78b0;
    lVar14 = *plVar21;
    if (lVar14 != 0) {
      if (*(int *)(lVar14 + 0x30) == 0) {
        uVar8 = 0xffffffff;
      }
      else {
        lVar27 = *(long *)(lVar14 + 0x38);
        lVar15 = 0;
        lVar14 = (long)*(int *)(lVar14 + 0x30) << 3;
        uVar8 = 0xffffffff;
        do {
          plVar16 = (long *)**(undefined8 **)(lVar27 + lVar15 * 8);
          iVar7 = (**(code **)(*plVar16 + 0x38))(plVar16,&local_c0);
          if (iVar7 != -1) {
            uVar8 = (uint)lVar15 & 0xffff | iVar7 << 0x10;
            break;
          }
          lVar15 = lVar15 + 1;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
      **(uint **)(param_1 + 0x12b8) = uVar8;
    }
  }
  local_c0 = puVar30 + 0x10;
  local_b8 = s_PictureBindPosition_049a78ba;
  if ((*(long *)(param_1 + 0x12b8) != 0) && (lVar14 = *plVar21, lVar14 != 0)) {
    if (*(int *)(lVar14 + 0x30) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      lVar27 = *(long *)(lVar14 + 0x38);
      lVar15 = 0;
      lVar14 = (long)*(int *)(lVar14 + 0x30) << 3;
      uVar8 = 0xffffffff;
      do {
        plVar16 = (long *)**(undefined8 **)(lVar27 + lVar15 * 8);
        iVar7 = (**(code **)(*plVar16 + 0x38))(plVar16,&local_c0);
        if (iVar7 != -1) {
          uVar8 = (uint)lVar15 & 0xffff | iVar7 << 0x10;
          break;
        }
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    *(uint *)(*(long *)(param_1 + 0x12b8) + (ulong)(1 < *(uint *)(param_1 + 0x12b0)) * 4) = uVar8;
  }
  if (*(long *)(param_1 + 0x12d8) == 0) {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    if (lVar14 == 0) {
      puVar17 = malloc(0x30);
joined_r0x0152e2b0:
      if (puVar17 != (undefined8 *)0x0) {
        puVar17[4] = 0xffffffffffffffff;
        puVar17[5] = 0xffffffffffffffff;
        puVar17[2] = 0xffffffffffffffff;
        puVar17[3] = 0xffffffffffffffff;
        *puVar17 = 0xffffffffffffffff;
        puVar17[1] = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 0x12d0) = 0xc;
        *(undefined8 **)(param_1 + 0x12d8) = puVar17;
        goto LAB_0152e1c8;
      }
    }
    else {
      plVar16 = plVar25;
      if (plVar25 != (long *)0x0) {
LAB_0152e18c:
        puVar17 = (undefined8 *)(**(code **)(*plVar16 + 0x30))(plVar16,0x30,8);
        goto joined_r0x0152e2b0;
      }
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar16 = (long *)(lVar14 + 8);
      if (lVar15 != 0) {
        plVar16 = (long *)(lVar15 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 != (long *)0x0) goto LAB_0152e18c;
    }
    if (*(long *)(param_1 + 0x12d8) != 0) goto LAB_0152e1c8;
  }
  else {
LAB_0152e1c8:
    local_c0 = puVar30 + 0x10;
    local_b8 = s_mReBody_049a76c8;
    lVar14 = *plVar21;
    if (lVar14 != 0) {
      if (*(int *)(lVar14 + 0x30) == 0) {
        uVar8 = 0xffffffff;
      }
      else {
        lVar27 = *(long *)(lVar14 + 0x38);
        lVar15 = 0;
        lVar14 = (long)*(int *)(lVar14 + 0x30) << 3;
        uVar8 = 0xffffffff;
        do {
          plVar16 = (long *)**(undefined8 **)(lVar27 + lVar15 * 8);
          iVar7 = (**(code **)(*plVar16 + 0xc0))(plVar16,&local_c0);
          if (iVar7 != -1) {
            uVar8 = (uint)lVar15 & 0xffff | iVar7 << 0x10;
            break;
          }
          lVar15 = lVar15 + 1;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
      **(uint **)(param_1 + 0x12d8) = uVar8;
    }
  }
  local_b8 = s_mReFabric_049a76d0;
  if ((*(long *)(param_1 + 0x12d8) != 0) && (lVar14 = *plVar21, lVar14 != 0)) {
    if (*(int *)(lVar14 + 0x30) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      lVar27 = *(long *)(lVar14 + 0x38);
      lVar15 = 0;
      lVar14 = (long)*(int *)(lVar14 + 0x30) << 3;
      uVar8 = 0xffffffff;
      local_c0 = puVar30 + 0x10;
      do {
        plVar16 = (long *)**(undefined8 **)(lVar27 + lVar15 * 8);
        iVar7 = (**(code **)(*plVar16 + 0xc0))(plVar16,&local_c0);
        if (iVar7 != -1) {
          uVar8 = (uint)lVar15 & 0xffff | iVar7 << 0x10;
          break;
        }
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    *(uint *)(*(long *)(param_1 + 0x12d8) + (ulong)(1 < *(uint *)(param_1 + 0x12d0)) * 4) = uVar8;
  }
  local_b8 = s_mTops_049a76da;
  if ((*(long *)(param_1 + 0x12d8) != 0) && (lVar14 = *plVar21, lVar14 != 0)) {
    if (*(int *)(lVar14 + 0x30) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      lVar27 = *(long *)(lVar14 + 0x38);
      lVar15 = 0;
      lVar14 = (long)*(int *)(lVar14 + 0x30) << 3;
      uVar8 = 0xffffffff;
      local_c0 = puVar30 + 0x10;
      do {
        plVar16 = (long *)**(undefined8 **)(lVar27 + lVar15 * 8);
        iVar7 = (**(code **)(*plVar16 + 0xc0))(plVar16,&local_c0);
        if (iVar7 != -1) {
          uVar8 = (uint)lVar15 & 0xffff | iVar7 << 0x10;
          break;
        }
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    *(uint *)(*(long *)(param_1 + 0x12d8) + (ulong)(2 < *(uint *)(param_1 + 0x12d0)) * 8) = uVar8;
  }
  local_b8 = s_mTopsFront_049a76e0;
  if ((*(long *)(param_1 + 0x12d8) != 0) && (lVar14 = *plVar21, lVar14 != 0)) {
    if (*(int *)(lVar14 + 0x30) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      lVar27 = *(long *)(lVar14 + 0x38);
      lVar15 = 0;
      lVar14 = (long)*(int *)(lVar14 + 0x30) << 3;
      uVar8 = 0xffffffff;
      local_c0 = puVar30 + 0x10;
      do {
        plVar16 = (long *)**(undefined8 **)(lVar27 + lVar15 * 8);
        iVar7 = (**(code **)(*plVar16 + 0xc0))(plVar16,&local_c0);
        if (iVar7 != -1) {
          uVar8 = (uint)lVar15 & 0xffff | iVar7 << 0x10;
          break;
        }
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    lVar14 = 0xc;
    if (*(uint *)(param_1 + 0x12d0) < 4) {
      lVar14 = 0;
    }
    *(uint *)(*(long *)(param_1 + 0x12d8) + lVar14) = uVar8;
  }
  local_b8 = s_mTopsBack_049a76eb;
  if ((*(long *)(param_1 + 0x12d8) != 0) && (lVar14 = *plVar21, lVar14 != 0)) {
    if (*(int *)(lVar14 + 0x30) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      lVar27 = *(long *)(lVar14 + 0x38);
      lVar15 = 0;
      lVar14 = (long)*(int *)(lVar14 + 0x30) << 3;
      uVar8 = 0xffffffff;
      local_c0 = puVar30 + 0x10;
      do {
        plVar16 = (long *)**(undefined8 **)(lVar27 + lVar15 * 8);
        iVar7 = (**(code **)(*plVar16 + 0xc0))(plVar16,&local_c0);
        if (iVar7 != -1) {
          uVar8 = (uint)lVar15 & 0xffff | iVar7 << 0x10;
          break;
        }
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    *(uint *)(*(long *)(param_1 + 0x12d8) + (ulong)(4 < *(uint *)(param_1 + 0x12d0)) * 0x10) = uVar8
    ;
  }
  puVar29 = puVar30 + 0x10;
  local_b8 = s_mTopsLeft_049a76f5;
  if ((*(long *)(param_1 + 0x12d8) != 0) && (lVar14 = *plVar21, lVar14 != 0)) {
    if (*(int *)(lVar14 + 0x30) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      lVar27 = *(long *)(lVar14 + 0x38);
      lVar15 = 0;
      lVar14 = (long)*(int *)(lVar14 + 0x30) << 3;
      uVar8 = 0xffffffff;
      local_c0 = puVar29;
      do {
        plVar16 = (long *)**(undefined8 **)(lVar27 + lVar15 * 8);
        iVar7 = (**(code **)(*plVar16 + 0xc0))(plVar16,&local_c0);
        if (iVar7 != -1) {
          uVar8 = (uint)lVar15 & 0xffff | iVar7 << 0x10;
          break;
        }
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
      puVar30 = PTR_DAT_04bb2020;
    }
    lVar14 = 0x14;
    if (*(uint *)(param_1 + 0x12d0) < 6) {
      lVar14 = 0;
    }
    *(uint *)(*(long *)(param_1 + 0x12d8) + lVar14) = uVar8;
  }
  local_b8 = s_mTopsRight_049a76ff;
  if ((*(long *)(param_1 + 0x12d8) != 0) && (lVar14 = *plVar21, lVar14 != 0)) {
    if (*(int *)(lVar14 + 0x30) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      lVar27 = *(long *)(lVar14 + 0x38);
      lVar15 = 0;
      lVar14 = (long)*(int *)(lVar14 + 0x30) << 3;
      uVar8 = 0xffffffff;
      local_c0 = puVar29;
      do {
        plVar16 = (long *)**(undefined8 **)(lVar27 + lVar15 * 8);
        iVar7 = (**(code **)(*plVar16 + 0xc0))(plVar16,&local_c0);
        if (iVar7 != -1) {
          uVar8 = (uint)lVar15 & 0xffff | iVar7 << 0x10;
          break;
        }
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    lVar14 = 0x18;
    if (*(uint *)(param_1 + 0x12d0) < 7) {
      lVar14 = 0;
    }
    *(uint *)(*(long *)(param_1 + 0x12d8) + lVar14) = uVar8;
  }
  puVar29 = puVar30 + 0x10;
  local_b8 = s_mBottoms_049a770a;
  if ((*(long *)(param_1 + 0x12d8) != 0) && (lVar14 = *plVar21, lVar14 != 0)) {
    if (*(int *)(lVar14 + 0x30) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      lVar27 = *(long *)(lVar14 + 0x38);
      lVar15 = 0;
      lVar14 = (long)*(int *)(lVar14 + 0x30) << 3;
      uVar8 = 0xffffffff;
      local_c0 = puVar29;
      do {
        plVar16 = (long *)**(undefined8 **)(lVar27 + lVar15 * 8);
        iVar7 = (**(code **)(*plVar16 + 0xc0))(plVar16,&local_c0);
        if (iVar7 != -1) {
          uVar8 = (uint)lVar15 & 0xffff | iVar7 << 0x10;
          break;
        }
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
      puVar30 = PTR_DAT_04bb2020;
    }
    lVar14 = 0x1c;
    if (*(uint *)(param_1 + 0x12d0) < 8) {
      lVar14 = 0;
    }
    *(uint *)(*(long *)(param_1 + 0x12d8) + lVar14) = uVar8;
  }
  local_b8 = s_mSocks_049a7713;
  if ((*(long *)(param_1 + 0x12d8) != 0) && (lVar14 = *plVar21, lVar14 != 0)) {
    if (*(int *)(lVar14 + 0x30) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      lVar27 = *(long *)(lVar14 + 0x38);
      lVar15 = 0;
      lVar14 = (long)*(int *)(lVar14 + 0x30) << 3;
      uVar8 = 0xffffffff;
      local_c0 = puVar29;
      do {
        plVar16 = (long *)**(undefined8 **)(lVar27 + lVar15 * 8);
        iVar7 = (**(code **)(*plVar16 + 0xc0))(plVar16,&local_c0);
        if (iVar7 != -1) {
          uVar8 = (uint)lVar15 & 0xffff | iVar7 << 0x10;
          break;
        }
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    *(uint *)(*(long *)(param_1 + 0x12d8) + (ulong)(8 < *(uint *)(param_1 + 0x12d0)) * 0x20) = uVar8
    ;
  }
  puVar29 = puVar30 + 0x10;
  local_b8 = s_mBody_049a771a;
  if ((*(long *)(param_1 + 0x12d8) != 0) && (lVar14 = *plVar21, lVar14 != 0)) {
    if (*(int *)(lVar14 + 0x30) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      lVar27 = *(long *)(lVar14 + 0x38);
      lVar15 = 0;
      lVar14 = (long)*(int *)(lVar14 + 0x30) << 3;
      uVar8 = 0xffffffff;
      local_c0 = puVar29;
      do {
        plVar16 = (long *)**(undefined8 **)(lVar27 + lVar15 * 8);
        iVar7 = (**(code **)(*plVar16 + 0xc0))(plVar16,&local_c0);
        if (iVar7 != -1) {
          uVar8 = (uint)lVar15 & 0xffff | iVar7 << 0x10;
          break;
        }
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
      puVar30 = PTR_DAT_04bb2020;
    }
    lVar14 = 0x24;
    if (*(uint *)(param_1 + 0x12d0) < 10) {
      lVar14 = 0;
    }
    *(uint *)(*(long *)(param_1 + 0x12d8) + lVar14) = uVar8;
  }
  local_b8 = s_mSoftmesh_049a7720;
  if ((*(long *)(param_1 + 0x12d8) != 0) && (lVar14 = *plVar21, lVar14 != 0)) {
    if (*(int *)(lVar14 + 0x30) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      lVar27 = *(long *)(lVar14 + 0x38);
      lVar15 = 0;
      lVar14 = (long)*(int *)(lVar14 + 0x30) << 3;
      uVar8 = 0xffffffff;
      local_c0 = puVar29;
      do {
        plVar16 = (long *)**(undefined8 **)(lVar27 + lVar15 * 8);
        iVar7 = (**(code **)(*plVar16 + 0xc0))(plVar16,&local_c0);
        if (iVar7 != -1) {
          uVar8 = (uint)lVar15 & 0xffff | iVar7 << 0x10;
          break;
        }
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    lVar14 = 0x28;
    if (*(uint *)(param_1 + 0x12d0) < 0xb) {
      lVar14 = 0;
    }
    *(uint *)(*(long *)(param_1 + 0x12d8) + lVar14) = uVar8;
  }
  local_c0 = puVar30 + 0x10;
  local_b8 = &DAT_049a772a;
  if ((*(long *)(param_1 + 0x12d8) != 0) && (lVar14 = *plVar21, lVar14 != 0)) {
    if (*(int *)(lVar14 + 0x30) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      lVar27 = *(long *)(lVar14 + 0x38);
      lVar15 = 0;
      lVar14 = (long)*(int *)(lVar14 + 0x30) << 3;
      uVar8 = 0xffffffff;
      do {
        plVar16 = (long *)**(undefined8 **)(lVar27 + lVar15 * 8);
        iVar7 = (**(code **)(*plVar16 + 0xc0))(plVar16,&local_c0);
        if (iVar7 != -1) {
          uVar8 = (uint)lVar15 & 0xffff | iVar7 << 0x10;
          break;
        }
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    lVar14 = 0x2c;
    if (*(uint *)(param_1 + 0x12d0) < 0xc) {
      lVar14 = 0;
    }
    *(uint *)(*(long *)(param_1 + 0x12d8) + lVar14) = uVar8;
  }
  if ((*(byte *)(param_1 + 0x1299) >> 1 & 1) == 0) {
    if (*(long *)(param_1 + 0x12c8) == 0) {
      lVar14 = *(long *)PTR_DAT_04bb2698;
      if (lVar14 == 0) {
        puVar18 = malloc(0x60);
      }
      else {
        if (plVar25 == (long *)0x0) {
          lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          puVar17 = (undefined8 *)(lVar14 + 8);
          if (lVar15 != 0) {
            puVar17 = (undefined8 *)(lVar15 + 0xa8);
          }
          plVar25 = (long *)*puVar17;
          if (plVar25 == (long *)0x0) goto LAB_0152e9d4;
        }
        puVar18 = (undefined4 *)(**(code **)(*plVar25 + 0x30))(plVar25,0x60,8);
      }
      if (puVar18 != (undefined4 *)0x0) {
        *(undefined2 *)(puVar18 + 1) = 0xffff;
        *(undefined2 *)(puVar18 + 3) = 0xffff;
        *(undefined2 *)(puVar18 + 5) = 0xffff;
        *(undefined2 *)(puVar18 + 7) = 0xffff;
        *(undefined2 *)(puVar18 + 9) = 0xffff;
        *(undefined2 *)(puVar18 + 0xb) = 0xffff;
        *(undefined2 *)(puVar18 + 0xc) = 0xffff;
        *(undefined2 *)(puVar18 + 0xe) = 0xffff;
        *(undefined2 *)(puVar18 + 0x11) = 0xffff;
        *(undefined2 *)(puVar18 + 0x13) = 0xffff;
        *(undefined2 *)(puVar18 + 0x15) = 0xffff;
        *(undefined2 *)(puVar18 + 0x17) = 0xffff;
        *puVar18 = 0xffffffff;
        puVar18[2] = 0xffffffff;
        puVar18[4] = 0xffffffff;
        puVar18[6] = 0xffffffff;
        puVar18[8] = 0xffffffff;
        puVar18[10] = 0xffffffff;
        *(undefined4 *)((long)puVar18 + 0x32) = 0xffffffff;
        *(undefined4 *)((long)puVar18 + 0x3a) = 0xffffffff;
        puVar18[0x10] = 0xffffffff;
        puVar18[0x12] = 0xffffffff;
        puVar18[0x14] = 0xffffffff;
        puVar18[0x16] = 0xffffffff;
        *(undefined4 *)(param_1 + 0x12c0) = 0xc;
        *(undefined4 **)(param_1 + 0x12c8) = puVar18;
      }
    }
LAB_0152e9d4:
    puVar29 = puVar30 + 0x10;
    local_f0._0_4_ = 2;
    local_b8 = s_mTops_049a76da;
    local_88 = PTR_s_tex_srt1_049a7830;
    local_c0 = puVar29;
    local_90 = puVar29;
    FUN_016102c0(plVar21,2,&local_c0,&local_90);
    local_d0._0_4_ = 3;
    local_b8 = s_mTops_049a76da;
    local_88 = PTR_s_const_color0_049a7838;
    puVar1 = puVar30 + 0x10;
    local_c0 = puVar29;
    local_90 = puVar1;
    FUN_016102c0(plVar21,3,&local_c0,&local_90);
    local_f0._0_4_ = 4;
    local_b8 = s_mTopsFront_049a76e0;
    local_88 = PTR_s_tex_srt1_049a7840;
    local_c0 = puVar1;
    local_90 = puVar1;
    FUN_016102c0(plVar21,4,&local_c0,&local_90);
    local_d0._0_4_ = 5;
    local_b8 = s_mTopsFront_049a76e0;
    local_88 = PTR_s_const_color0_049a7848;
    puVar29 = puVar30 + 0x10;
    local_c0 = puVar1;
    local_90 = puVar29;
    FUN_016102c0(plVar21,5,&local_c0,&local_90);
    local_f0._0_4_ = 6;
    local_b8 = s_mTopsBack_049a76eb;
    local_88 = PTR_s_tex_srt1_049a7850;
    local_c0 = puVar29;
    local_90 = puVar29;
    FUN_016102c0(plVar21,6,&local_c0,&local_90);
    local_d0._0_4_ = 7;
    local_b8 = s_mTopsBack_049a76eb;
    local_88 = PTR_s_const_color0_049a7858;
    puVar1 = puVar30 + 0x10;
    local_c0 = puVar29;
    local_90 = puVar1;
    FUN_016102c0(plVar21,7,&local_c0,&local_90);
    local_f0._0_4_ = 8;
    local_b8 = s_mTopsLeft_049a76f5;
    local_88 = PTR_s_tex_srt1_049a7860;
    local_c0 = puVar1;
    local_90 = puVar1;
    FUN_016102c0(plVar21,8,&local_c0,&local_90);
    local_d0._0_4_ = 9;
    local_b8 = s_mTopsLeft_049a76f5;
    local_88 = PTR_s_const_color0_049a7868;
    puVar29 = puVar30 + 0x10;
    local_c0 = puVar1;
    local_90 = puVar29;
    FUN_016102c0(plVar21,9,&local_c0,&local_90);
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,10);
    local_b8 = s_mTopsRight_049a76ff;
    local_88 = PTR_s_tex_srt1_049a7870;
    local_c0 = puVar29;
    local_90 = puVar29;
    FUN_016102c0(plVar21,10,&local_c0,&local_90);
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0xb);
    local_b8 = s_mTopsRight_049a76ff;
    local_88 = PTR_s_const_color0_049a7878;
    local_90 = puVar30 + 0x10;
    local_c0 = puVar29;
    FUN_016102c0(plVar21,0xb,&local_c0,&local_90);
  }
  else if (*(long *)(param_1 + 0x1290) != 0) {
    FUN_0178ade0(*(long *)(param_1 + 0x1290),param_1,plVar25);
    FUN_0178b5f0(*(undefined8 *)(param_1 + 0x1290),param_1);
  }
  puVar29 = PTR_DAT_04bc0510;
  plVar25 = (long *)PTR_DAT_04bb43c0;
  lVar14 = param_1 + 0x129c;
  local_e8 = *(undefined2 *)(param_1 + 0x129c);
  local_e0 = (uint *)0x0;
  local_f0 = PTR_DAT_04bc0510 + 0x10;
  local_e6 = *(undefined2 *)(param_1 + 0x129e);
  local_e4 = *(undefined4 *)(param_1 + 0x12a0);
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_e8);
  if (*plVar25 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(lVar14);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if (uVar8 < *(uint *)(lVar15 + 0x1d8)) {
        puVar22 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8);
        if (puVar22 != (uint *)0x0) {
          local_e0 = puVar22;
        }
      }
    }
  }
  FUN_01adf970(&local_c0,&local_f0);
  uVar8 = *(uint *)(param_1 + 0x1298);
  if ((uVar8 >> 3 & 1) == 0) {
    if ((uVar8 >> 4 & 1) == 0) {
      if ((uVar8 >> 5 & 1) == 0) {
        if (((((uVar8 >> 6 & 1) != 0) &&
             (lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x78), lVar15 != 0)) &&
            (lVar15 = FUN_0074f690(lVar15,&local_c0), lVar15 != 0)) &&
           (*(long *)(param_1 + 0x1150) != 0)) {
          FUN_01664990(*(undefined8 *)PTR_DAT_04bb2200,*(long *)(param_1 + 0x1150),lVar15,0);
        }
      }
      else {
        local_90 = puVar30 + 0x10;
        local_88 = s_mSocks_049a7713;
        if (((*(long *)(param_1 + 0x1150) != 0) &&
            (lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x78), lVar15 != 0)) &&
           ((lVar15 = FUN_0074f690(lVar15,&local_c0), lVar15 != 0 &&
            ((lVar27 = *(long *)(param_1 + 0x1150), lVar27 != 0 &&
             (uVar8 = *(uint *)(lVar27 + 0x30), 0 < (int)uVar8)))))) {
          uVar20 = 0;
          lVar24 = lVar15;
          do {
            lVar24 = FUN_01664b40(lVar24,**(undefined8 **)(*(long *)(lVar27 + 0x38) + uVar20 * 8),
                                  &local_90,lVar15,0);
            uVar20 = uVar20 + 1;
          } while (uVar8 != uVar20);
        }
      }
    }
    else {
      local_90 = puVar30 + 0x10;
      local_88 = s_mBottoms_049a770a;
      if (*(long *)(param_1 + 0x1150) != 0) {
        lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
        if (lVar15 != 0) {
          lVar15 = FUN_0074f690(lVar15,&local_c0);
          lVar27 = *(long *)(param_1 + 0x1150);
          if (lVar15 != 0) {
            if (lVar27 == 0) goto LAB_0152f30c;
            uVar8 = *(uint *)(lVar27 + 0x30);
            if ((int)uVar8 < 1) goto LAB_0152f194;
            uVar20 = 0;
            lVar24 = lVar15;
            do {
              lVar24 = FUN_01664b40(lVar24,**(undefined8 **)(*(long *)(lVar27 + 0x38) + uVar20 * 8),
                                    &local_90,lVar15,0);
              uVar20 = uVar20 + 1;
            } while (uVar8 != uVar20);
            lVar27 = *(long *)(param_1 + 0x1150);
          }
          local_90 = puVar30 + 0x10;
          local_88 = s_mSoftmesh_049a7720;
          if (lVar27 == 0) goto LAB_0152f30c;
        }
LAB_0152f194:
        local_88 = s_mSoftmesh_049a7720;
        local_90 = puVar30 + 0x10;
        lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
        if ((((lVar15 != 0) && (lVar15 = FUN_0074f690(lVar15,&local_c0), lVar15 != 0)) &&
            (lVar27 = *(long *)(param_1 + 0x1150), lVar27 != 0)) &&
           (uVar8 = *(uint *)(lVar27 + 0x30), 0 < (int)uVar8)) {
          uVar20 = 0;
          lVar24 = lVar15;
          do {
            lVar24 = FUN_01664b40(lVar24,**(undefined8 **)(*(long *)(lVar27 + 0x38) + uVar20 * 8),
                                  &local_90,lVar15,0);
            uVar20 = uVar20 + 1;
          } while (uVar8 != uVar20);
        }
      }
    }
  }
  else {
    local_90 = puVar30 + 0x10;
    local_88 = s_mTops_049a76da;
    if (*(long *)(param_1 + 0x1150) != 0) {
      lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
      if (lVar15 != 0) {
        lVar15 = FUN_0074f690(lVar15,&local_c0);
        lVar27 = *(long *)(param_1 + 0x1150);
        if (lVar15 != 0) {
          if (lVar27 == 0) goto LAB_0152f30c;
          uVar8 = *(uint *)(lVar27 + 0x30);
          if ((int)uVar8 < 1) goto LAB_0152ef74;
          uVar20 = 0;
          lVar24 = lVar15;
          do {
            lVar24 = FUN_01664b40(lVar24,**(undefined8 **)(*(long *)(lVar27 + 0x38) + uVar20 * 8),
                                  &local_90,lVar15,0);
            uVar20 = uVar20 + 1;
          } while (uVar8 != uVar20);
          lVar27 = *(long *)(param_1 + 0x1150);
        }
        local_90 = puVar30 + 0x10;
        local_88 = s_mTopsFront_049a76e0;
        if (lVar27 == 0) goto LAB_0152f30c;
      }
LAB_0152ef74:
      local_88 = s_mTopsFront_049a76e0;
      local_90 = puVar30 + 0x10;
      lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
      if (lVar15 != 0) {
        lVar15 = FUN_0074f690(lVar15,&local_c0);
        lVar27 = *(long *)(param_1 + 0x1150);
        if (lVar15 != 0) {
          if (lVar27 == 0) goto LAB_0152f30c;
          uVar8 = *(uint *)(lVar27 + 0x30);
          if ((int)uVar8 < 1) goto LAB_0152f07c;
          uVar20 = 0;
          lVar24 = lVar15;
          do {
            lVar24 = FUN_01664b40(lVar24,**(undefined8 **)(*(long *)(lVar27 + 0x38) + uVar20 * 8),
                                  &local_90,lVar15,0);
            uVar20 = uVar20 + 1;
          } while (uVar8 != uVar20);
          lVar27 = *(long *)(param_1 + 0x1150);
        }
        local_90 = puVar30 + 0x10;
        local_88 = s_mTopsBack_049a76eb;
        if (lVar27 == 0) goto LAB_0152f30c;
      }
LAB_0152f07c:
      local_88 = s_mTopsBack_049a76eb;
      local_90 = puVar30 + 0x10;
      lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
      if (lVar15 != 0) {
        lVar15 = FUN_0074f690(lVar15,&local_c0);
        lVar27 = *(long *)(param_1 + 0x1150);
        if (lVar15 != 0) {
          if (lVar27 == 0) goto LAB_0152f30c;
          uVar8 = *(uint *)(lVar27 + 0x30);
          if ((int)uVar8 < 1) goto LAB_0152f104;
          uVar20 = 0;
          lVar24 = lVar15;
          do {
            lVar24 = FUN_01664b40(lVar24,**(undefined8 **)(*(long *)(lVar27 + 0x38) + uVar20 * 8),
                                  &local_90,lVar15,0);
            uVar20 = uVar20 + 1;
          } while (uVar8 != uVar20);
          lVar27 = *(long *)(param_1 + 0x1150);
        }
        local_90 = puVar30 + 0x10;
        local_88 = s_mTopsLeft_049a76f5;
        if (lVar27 == 0) goto LAB_0152f30c;
      }
LAB_0152f104:
      local_88 = s_mTopsLeft_049a76f5;
      local_90 = puVar30 + 0x10;
      lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
      if (lVar15 != 0) {
        lVar15 = FUN_0074f690(lVar15,&local_c0);
        lVar27 = *(long *)(param_1 + 0x1150);
        if (lVar15 != 0) {
          if (lVar27 == 0) goto LAB_0152f30c;
          uVar8 = *(uint *)(lVar27 + 0x30);
          if ((int)uVar8 < 1) goto LAB_0152f21c;
          uVar20 = 0;
          lVar24 = lVar15;
          do {
            lVar24 = FUN_01664b40(lVar24,**(undefined8 **)(*(long *)(lVar27 + 0x38) + uVar20 * 8),
                                  &local_90,lVar15,0);
            uVar20 = uVar20 + 1;
          } while (uVar8 != uVar20);
          lVar27 = *(long *)(param_1 + 0x1150);
        }
        local_90 = puVar30 + 0x10;
        local_88 = s_mTopsRight_049a76ff;
        if (lVar27 == 0) goto LAB_0152f30c;
      }
LAB_0152f21c:
      local_88 = s_mTopsRight_049a76ff;
      local_90 = puVar30 + 0x10;
      lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
      if (lVar15 != 0) {
        lVar15 = FUN_0074f690(lVar15,&local_c0);
        lVar27 = *(long *)(param_1 + 0x1150);
        if (lVar15 != 0) {
          if (lVar27 == 0) goto LAB_0152f30c;
          uVar8 = *(uint *)(lVar27 + 0x30);
          if ((int)uVar8 < 1) goto LAB_0152f2a4;
          uVar20 = 0;
          lVar24 = lVar15;
          do {
            lVar24 = FUN_01664b40(lVar24,**(undefined8 **)(*(long *)(lVar27 + 0x38) + uVar20 * 8),
                                  &local_90,lVar15,0);
            uVar20 = uVar20 + 1;
          } while (uVar8 != uVar20);
          lVar27 = *(long *)(param_1 + 0x1150);
        }
        local_90 = puVar30 + 0x10;
        local_88 = s_mSoftmesh_049a7720;
        if (lVar27 == 0) goto LAB_0152f30c;
      }
LAB_0152f2a4:
      local_88 = s_mSoftmesh_049a7720;
      local_90 = puVar30 + 0x10;
      lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
      if (((lVar15 != 0) && (lVar15 = FUN_0074f690(lVar15,&local_c0), lVar15 != 0)) &&
         ((lVar27 = *(long *)(param_1 + 0x1150), lVar27 != 0 &&
          (uVar8 = *(uint *)(lVar27 + 0x30), 0 < (int)uVar8)))) {
        uVar20 = 0;
        lVar24 = lVar15;
        do {
          lVar24 = FUN_01664b40(lVar24,**(undefined8 **)(*(long *)(lVar27 + 0x38) + uVar20 * 8),
                                &local_90,lVar15,0);
          uVar20 = uVar20 + 1;
        } while (uVar8 != uVar20);
      }
    }
  }
LAB_0152f30c:
  puVar1 = PTR_DAT_04bb2200;
  lVar15 = *(long *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x12e8) != param_1 + 0x12e0) {
    lVar24 = (long)*(int *)(param_1 + 0x12f4);
    lVar26 = (param_1 + 0x12e0) - lVar24;
    lVar27 = *(long *)(param_1 + 0x12e8) - lVar24;
    if (*(long *)(lVar15 + 0x78) == 0) {
      do {
        lVar27 = *(long *)(lVar27 + lVar24 + 8) + -lVar24;
      } while (lVar27 != lVar26);
    }
    else {
      do {
        lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
        if (((lVar15 != 0) && (lVar15 = FUN_0074f690(lVar15,lVar27 + 0x10), lVar15 != 0)) &&
           (*(long *)(param_1 + 0x1150) != 0)) {
          FUN_01664990(*(undefined8 *)puVar1,*(long *)(param_1 + 0x1150),lVar15,0);
        }
        lVar27 = *(long *)(lVar27 + lVar24 + 8) + -lVar24;
      } while (lVar27 != lVar26);
      lVar15 = *(long *)(param_1 + 0x48);
      puVar29 = PTR_DAT_04bc0510;
    }
  }
  if (*(long *)(lVar15 + 0x78) != 0) {
    FUN_01530c60(*(long *)(lVar15 + 0x78),param_1,lVar14);
  }
  iVar7 = FUN_01afcfa0(&local_f0);
  if ((iVar7 != 0) &&
     (((((iVar7 = FUN_01afcfa0(&local_f0), iVar7 == 0 ||
         (puVar19 = (ushort *)FUN_01afd600(&local_f0), puVar19 == (ushort *)0x0)) ||
        (uVar23 = *puVar19 >> 3 & 3, uVar23 == 3)) || (uVar23 == 0)) &&
      ((uVar20 = FUN_01aff620(&local_f0), (uVar20 & 1) != 0 &&
       (iVar7 = FUN_01ae3a80(&local_f0), iVar7 == 0)))))) {
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,1);
    FUN_0161043c(plVar21,1,0);
  }
  lVar15 = *(long *)(param_1 + 0x1150);
  if (lVar15 != 0) {
    if ((*(byte *)(param_1 + 0x1299) >> 1 & 1) == 0) {
      local_c0 = puVar29 + 0x10;
      local_b8 = *(char **)(param_1 + 0x129c);
      local_b0 = 0;
      lVar27 = *plVar25;
      uVar8 = FUN_0277d6c4(&local_b8);
      if (*plVar25 != 0) {
        lVar27 = *(long *)(lVar27 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar27 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar27 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(lVar14);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
          if (uVar8 < *(uint *)(lVar27 + 0x1d8)) {
            lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar8 * 8);
            if (lVar27 != 0) {
              local_b0 = lVar27;
            }
          }
        }
      }
      if (((DAT_0520f3c0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0520f3c0), iVar7 != 0)) {
        DAT_0520f3b8 = 0;
        __cxa_guard_release(&DAT_0520f3c0);
      }
      if (((DAT_0520f3d0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0520f3d0), iVar7 != 0)) {
        DAT_0520f3c8 = 1;
        __cxa_guard_release(&DAT_0520f3d0);
      }
      iVar7 = FUN_01ad7260(&local_c0);
      fVar32 = 0.0;
      if ((iVar7 != 0) && (puVar19 = (ushort *)FUN_01afd600(&local_c0), puVar19 != (ushort *)0x0)) {
        uVar8 = *puVar19 & 7;
        uVar9 = FUN_01ad7260(&local_c0);
        if (uVar9 <= uVar8) {
          uVar8 = 0;
        }
        fVar32 = (float)uVar8 * 0.125;
      }
      iVar7 = FUN_01ae3a80(&local_c0);
      iVar10 = FUN_01ad7260(&local_c0);
      iVar11 = FUN_01afcfa0(&local_c0);
      if ((iVar11 == 0) || (puVar19 = (ushort *)FUN_01afd600(&local_c0), puVar19 == (ushort *)0x0))
      {
        bVar6 = true;
      }
      else {
        uVar4 = *puVar19 >> 3 & 3;
        uVar23 = 0;
        if (uVar4 != 3) {
          uVar23 = uVar4;
        }
        bVar6 = uVar23 == 0;
      }
      uVar20 = (ulong)*(uint *)(lVar15 + 0x30);
      if (0 < (int)*(uint *)(lVar15 + 0x30)) {
        if (iVar10 == 0) {
          uVar28 = 0;
          if (bVar6) {
            puVar30 = PTR_DAT_04bb2020 + 0x10;
            do {
              plVar25 = (long *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + uVar28 * 8);
              if ((plVar25 != (long *)0x0) &&
                 (iVar10 = (**(code **)(*plVar25 + 0xb8))(plVar25), 0 < iVar10)) {
                iVar11 = 0;
                do {
                  local_88 = "";
                  if (DAT_0520f3c8 < 0xc) {
                    local_88 = (&PTR_s_const_float0_049a7820)[DAT_0520f3c8];
                  }
                  local_90 = puVar30;
                  iVar12 = (**(code **)(*plVar25 + 0xd0))(plVar25,iVar11,&local_90);
                  if (iVar12 != -1) {
                    (**(code **)(*plVar25 + 0x118))((float)iVar7 * 0.125,plVar25,iVar11,iVar12);
                  }
                  iVar11 = iVar11 + 1;
                } while (iVar10 != iVar11);
              }
              uVar28 = uVar28 + 1;
            } while (uVar28 != uVar20);
          }
          else {
            do {
              plVar25 = (long *)**(long **)(*(long *)(lVar15 + 0x38) + uVar28 * 8);
              if (plVar25 != (long *)0x0) {
                (**(code **)(*plVar25 + 0xb8))();
              }
              uVar28 = uVar28 + 1;
            } while (uVar20 != uVar28);
          }
        }
        else if (bVar6) {
          uVar28 = 0;
          puVar30 = PTR_DAT_04bb2020 + 0x10;
          do {
            plVar25 = (long *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + uVar28 * 8);
            if ((plVar25 != (long *)0x0) &&
               (iVar10 = (**(code **)(*plVar25 + 0xb8))(plVar25), 0 < iVar10)) {
              iVar11 = 0;
              do {
                local_88 = (char *)&DAT_0407ebb1;
                if (DAT_0520f3b8 < 0xc) {
                  local_88 = (&PTR_s_const_float0_049a7820)[DAT_0520f3b8];
                }
                local_90 = puVar30;
                iVar12 = (**(code **)(*plVar25 + 0xd0))(plVar25,iVar11,&local_90);
                if (iVar12 != -1) {
                  (**(code **)(*plVar25 + 0x118))(fVar32,plVar25,iVar11,iVar12);
                }
                local_88 = "";
                if (DAT_0520f3c8 < 0xc) {
                  local_88 = (&PTR_s_const_float0_049a7820)[DAT_0520f3c8];
                }
                local_90 = PTR_DAT_04bb2020 + 0x10;
                iVar12 = (**(code **)(*plVar25 + 0xd0))(plVar25,iVar11,&local_90);
                if (iVar12 != -1) {
                  (**(code **)(*plVar25 + 0x118))((float)iVar7 * 0.125,plVar25,iVar11,iVar12);
                }
                iVar11 = iVar11 + 1;
              } while (iVar10 != iVar11);
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 != uVar20);
        }
        else {
          uVar28 = 0;
          puVar30 = PTR_DAT_04bb2020 + 0x10;
          do {
            plVar25 = (long *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + uVar28 * 8);
            if ((plVar25 != (long *)0x0) &&
               (iVar7 = (**(code **)(*plVar25 + 0xb8))(plVar25), 0 < iVar7)) {
              iVar10 = 0;
              do {
                local_88 = "";
                if (DAT_0520f3b8 < 0xc) {
                  local_88 = (&PTR_s_const_float0_049a7820)[DAT_0520f3b8];
                }
                local_90 = puVar30;
                iVar11 = (**(code **)(*plVar25 + 0xd0))(plVar25,iVar10,&local_90);
                if (iVar11 != -1) {
                  (**(code **)(*plVar25 + 0x118))(fVar32,plVar25,iVar10,iVar11);
                }
                iVar10 = iVar10 + 1;
              } while (iVar7 != iVar10);
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 != uVar20);
        }
      }
      plVar25 = (long *)PTR_DAT_04bb43c0;
      puVar29 = PTR_DAT_04bc0510;
      puVar30 = PTR_DAT_04bb2020;
    }
  }
  if (local_e0 == (uint *)0x0) {
    local_90._0_4_ = 2.63444e-43;
LAB_0152faa4:
    if ((float)local_90 == 1.63952e-43) goto LAB_0152fab8;
  }
  else {
    uVar8 = *local_e0;
    local_90._0_4_ = 0.0;
    if ((uVar8 != 0) && (local_e0 != (uint *)(ulong)uVar8)) {
      puVar22 = (uint *)((long)local_e0 - (long)(ulong)uVar8);
      local_90._0_4_ = 0.0;
      if (*puVar22 != 0) {
        uVar8 = puVar22[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
          lVar15 = 0xc;
          if (*(char *)((long)puVar22 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar22 + lVar15 + (ulong)(ushort)puVar22[2] * 8;
          if (lVar15 != 0) {
            uVar9 = 0;
            if ((ulong)uVar8 != 0) {
              uVar9 = (uint)((ulong)((long)local_e0 - lVar15) / (ulong)uVar8);
            }
            if (*puVar22 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_90._0_4_ =
                     (float)(uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2),
               (uint)(float)local_90 < 0xbd)) goto LAB_0152f9d4;
          }
        }
        local_90._0_4_ = 0.0;
      }
    }
LAB_0152f9d4:
    if ((float)local_90 != 1.62551e-43) {
      local_90._0_4_ = 0.0;
      uVar8 = *local_e0;
      if ((uVar8 != 0) && (local_e0 != (uint *)(ulong)uVar8)) {
        puVar22 = (uint *)((long)local_e0 - (long)(ulong)uVar8);
        local_90._0_4_ = 0.0;
        if (*puVar22 != 0) {
          uVar8 = puVar22[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar22 + lVar15 + (ulong)(ushort)puVar22[2] * 8;
            if (lVar15 != 0) {
              uVar9 = 0;
              if ((ulong)uVar8 != 0) {
                uVar9 = (uint)((ulong)((long)local_e0 - lVar15) / (ulong)uVar8);
              }
              if (*puVar22 <= uVar9) {
                uVar9 = 0xffffffff;
              }
              if ((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_90._0_4_ =
                       (float)(uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2),
                 (uint)(float)local_90 < 0xbd)) goto LAB_0152faa4;
            }
          }
          local_90._0_4_ = 0.0;
        }
      }
      goto LAB_0152faa4;
    }
LAB_0152fab8:
    lVar15 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
    if (lVar15 != 0) {
      local_c0 = puVar29 + 0x10;
      local_b8 = *(char **)(param_1 + 0x129c);
      local_b0 = 0;
      lVar27 = *plVar25;
      uVar8 = FUN_0277d6c4(&local_b8);
      if (*plVar25 != 0) {
        lVar27 = *(long *)(lVar27 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar27 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar27 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(lVar14);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
          if (uVar8 < *(uint *)(lVar27 + 0x1d8)) {
            lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar8 * 8);
            if (lVar27 != 0) {
              local_b0 = lVar27;
            }
          }
        }
      }
      FUN_01adf970(&local_90,&local_c0);
      lVar15 = FUN_0074f690(lVar15,&local_90);
      if ((((lVar15 != 0) && (*(long *)(lVar15 + 8) != 0)) &&
          (*(long *)(*(long *)(lVar15 + 8) + 0x20) != 0)) &&
         (((lVar15 = FUN_038fde10(), lVar15 != 0 && (**(long **)(lVar15 + 0x28) != 0)) &&
          (*(long *)(param_1 + 0x1150) != 0)))) {
        FUN_039a9540(*(long *)(param_1 + 0x1150),**(long **)(lVar15 + 0x28),&DAT_0520f1b8);
      }
    }
  }
  local_c0 = puVar29 + 0x10;
  local_b8 = *(char **)(param_1 + 0x129c);
  local_b0 = 0;
  lVar15 = *plVar25;
  uVar8 = FUN_0277d6c4(&local_b8);
  if (*plVar25 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(lVar14);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if (uVar8 < *(uint *)(lVar15 + 0x1d8)) {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8);
        if (lVar15 != 0) {
          local_b0 = lVar15;
        }
      }
    }
  }
  iVar7 = FUN_0277d6c4(&local_b8);
  if (iVar7 == 0x1c2a) {
    lVar15 = *(long *)(param_1 + 0x1150);
    if (lVar15 != 0) {
      uVar20 = 0xffffffffffff;
      local_d4 = 2;
      iVar7 = 2;
      lVar27 = *(long *)(param_1 + 0x12c8);
      lVar24 = *(long *)(param_1 + 0x12a8);
      if ((lVar27 != 0) && (lVar24 != 0)) {
        if (*(uint *)(param_1 + 0x12c0) < 3) {
          iVar7 = 0;
        }
        uVar20 = *(ulong *)(lVar27 + (long)iVar7 * 8);
      }
      if ((((((uint)(uVar20 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
          ((((uint)uVar20 ^ 0xffffffff) & 0xffff) != 0)) &&
         ((((uint)(uVar20 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
        local_90 = (undefined *)0x0;
        local_d0 = (undefined *)0x0;
        uVar28 = -(uVar20 >> 0xf & 1) & 0xfffffffffff80000 | (uVar20 & 0xffff) << 3;
        iVar7 = (int)(short)(uVar20 >> 0x10);
        iVar10 = (int)(short)(uVar20 >> 0x20);
        local_d8 = 0;
        plVar16 = (long *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + uVar28);
        (**(code **)(*plVar16 + 0x170))(plVar16,iVar7,iVar10,&local_90,&local_d8,&local_d0);
        local_90._4_4_ = local_90._4_4_ + local_90._4_4_;
        local_90._0_4_ = (float)local_90 + (float)local_90;
        plVar16 = (long *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + uVar28);
        (**(code **)(*plVar16 + 0x178))(local_d8,plVar16,iVar7,iVar10,&local_90,&local_d0);
        lVar27 = *(long *)(param_1 + 0x12c8);
        lVar24 = *(long *)(param_1 + 0x12a8);
      }
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,3);
      puVar1 = local_d0;
      uVar20 = 0xffffffffffff;
      local_d0._0_4_ = 3;
      if ((lVar27 != 0) && (lVar24 != 0)) {
        if (*(uint *)(param_1 + 0x12c0) < 4) {
          local_d0._0_4_ = 0;
        }
        uVar20 = *(ulong *)(lVar27 + (long)(int)local_d0 * 8);
      }
      local_d0 = puVar1;
      if ((((((uint)(uVar20 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
          ((((uint)uVar20 ^ 0xffffffff) & 0xffff) != 0)) &&
         ((((uint)(uVar20 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
        local_90._0_4_ = (float)NEON_ucvtf((uint)DAT_04c47c7b);
        local_90._0_4_ = (float)local_90 / 255.0;
        local_90._4_4_ = (float)NEON_ucvtf((uint)DAT_04c47c7a);
        fVar32 = (float)NEON_ucvtf((uint)DAT_04c47c79);
        local_90._4_4_ = local_90._4_4_ / 255.0;
        fVar31 = (float)NEON_ucvtf((uint)DAT_04c47c78);
        local_88 = (char *)CONCAT44(fVar31 / 255.0,fVar32 / 255.0);
        plVar16 = (long *)**(undefined8 **)
                            (*(long *)(lVar15 + 0x38) +
                            (-(uVar20 >> 0xf & 1) & 0xfffffffffff80000 | (uVar20 & 0xffff) << 3));
        (**(code **)(*plVar16 + 0x158))
                  (plVar16,(int)(short)(uVar20 >> 0x10),(int)(short)(uVar20 >> 0x20),&local_90);
      }
    }
  }
  local_c0 = puVar29 + 0x10;
  local_b8 = *(char **)(param_1 + 0x129c);
  local_b0 = 0;
  lVar15 = *plVar25;
  uVar8 = FUN_0277d6c4(&local_b8);
  if (*plVar25 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(lVar14);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if (uVar8 < *(uint *)(lVar15 + 0x1d8)) {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8);
        if (lVar15 != 0) {
          local_b0 = lVar15;
        }
      }
    }
  }
  iVar7 = FUN_0277d6c4(&local_b8);
  if ((iVar7 == 0x3920) && (lVar15 = *(long *)(param_1 + 0x1150), lVar15 != 0)) {
    local_d4 = 2;
    uVar20 = 0xffffffffffff;
    iVar7 = 2;
    if ((*(long *)(param_1 + 0x12c8) != 0) && (*(long *)(param_1 + 0x12a8) != 0)) {
      if (*(uint *)(param_1 + 0x12c0) < 3) {
        iVar7 = 0;
      }
      uVar20 = *(ulong *)(*(long *)(param_1 + 0x12c8) + (long)iVar7 * 8);
    }
    if ((((((uint)(uVar20 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
        ((((uint)uVar20 ^ 0xffffffff) & 0xffff) != 0)) &&
       ((((uint)(uVar20 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
      local_90 = (undefined *)0x0;
      local_d0 = (undefined *)0x0;
      uVar28 = -(uVar20 >> 0xf & 1) & 0xfffffffffff80000 | (uVar20 & 0xffff) << 3;
      iVar7 = (int)(short)(uVar20 >> 0x10);
      iVar10 = (int)(short)(uVar20 >> 0x20);
      local_d8 = 0;
      plVar16 = (long *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + uVar28);
      (**(code **)(*plVar16 + 0x170))(plVar16,iVar7,iVar10,&local_90,&local_d8,&local_d0);
      local_90._4_4_ = local_90._4_4_ + local_90._4_4_;
      local_90._0_4_ = (float)local_90 + (float)local_90;
      plVar16 = (long *)**(undefined8 **)(*(long *)(lVar15 + 0x38) + uVar28);
      (**(code **)(*plVar16 + 0x178))(local_d8,plVar16,iVar7,iVar10,&local_90,&local_d0);
    }
  }
  local_c0._0_4_ = 0x56;
  if (local_e0 == (uint *)0x0) {
    uVar23 = 0xbc;
  }
  else {
    uVar8 = *local_e0;
    uVar23 = 0;
    if ((uVar8 != 0) && (local_e0 != (uint *)(ulong)uVar8)) {
      puVar22 = (uint *)((long)local_e0 - (long)(ulong)uVar8);
      uVar23 = 0;
      if (*puVar22 != 0) {
        uVar8 = puVar22[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
          lVar15 = 0xc;
          if (*(char *)((long)puVar22 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar22 + lVar15 + (ulong)(ushort)puVar22[2] * 8;
          if (lVar15 != 0) {
            uVar9 = 0;
            if ((ulong)uVar8 != 0) {
              uVar9 = (uint)((ulong)((long)local_e0 - lVar15) / (ulong)uVar8);
            }
            if (*puVar22 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar23 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2),
               uVar23 < 0xbd)) goto LAB_0153006c;
          }
        }
        uVar23 = 0;
      }
    }
  }
LAB_0153006c:
  if (uVar23 == 0x56) {
    local_90._0_4_ = 1.0;
    local_90._4_4_ = 1.0;
    local_88 = &DAT_3f8000003f800000;
    FUN_0124ef24(lVar14,&local_90);
    if ((*(long *)(param_1 + 0x1150) != 0) &&
       (uVar8 = *(uint *)(*(long *)(param_1 + 0x1150) + 0x30), 0 < (int)uVar8)) {
      uVar20 = 0;
      do {
        plVar16 = (long *)**(undefined8 **)
                            (*(long *)(*(long *)(param_1 + 0x1150) + 0x38) + uVar20 * 8);
        iVar7 = (**(code **)(*plVar16 + 0x1e0))(plVar16);
        if (0 < iVar7) {
          do {
            local_c0._0_4_ = (uint)(float)local_90;
            local_c0._4_4_ = local_90._4_4_;
            local_b8 = local_88;
            FUN_039d4cd0(plVar16,0,&local_c0);
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar8);
    }
  }
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0xa9);
  if (local_e0 == (uint *)0x0) {
    uVar8 = 0xbc;
  }
  else {
    uVar9 = *local_e0;
    uVar8 = 0;
    if ((uVar9 != 0) && (local_e0 != (uint *)(ulong)uVar9)) {
      puVar22 = (uint *)((long)local_e0 - (long)(ulong)uVar9);
      uVar8 = 0;
      if (*puVar22 != 0) {
        uVar8 = puVar22[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
          lVar15 = 0xc;
          if (*(char *)((long)puVar22 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar22 + lVar15 + (ulong)(ushort)puVar22[2] * 8;
          if (lVar15 != 0) {
            uVar9 = 0;
            if ((ulong)uVar8 != 0) {
              uVar9 = (uint)((ulong)((long)local_e0 - lVar15) / (ulong)uVar8);
            }
            if (*puVar22 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2),
               uVar8 < 0xbd)) goto LAB_015301c4;
          }
        }
        uVar8 = 0;
      }
    }
  }
LAB_015301c4:
  local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar8);
  lVar15 = (long)local_c0;
  if (uVar8 == 0xa9) {
    FUN_01adf970(&local_c0,&local_f0);
    (**(code **)((long)local_c0 + 0x18))(&local_c0);
    (**(code **)((long)local_c0 + 0x18))(&local_c0);
    pcVar5 = local_b8;
    (**(code **)(DAT_0520f298 + 0x18))(&DAT_0520f298);
    if (pcVar5 != DAT_0520f2a0) {
      lVar15 = (long)local_c0;
      if (*local_b8 != *DAT_0520f2a0) goto LAB_015302f8;
      if (*local_b8 != '\0') {
        lVar27 = 0;
        do {
          if ((lVar27 == 0x80000) || (local_b8[lVar27 + 1] != DAT_0520f2a0[lVar27 + 1]))
          goto LAB_015302f8;
          if (local_b8[lVar27 + 1] == '\0') break;
          lVar24 = lVar27 + 2;
          if (local_b8[lVar24] != DAT_0520f2a0[lVar27 + 2]) goto LAB_015302f8;
          lVar27 = lVar27 + 2;
        } while (local_b8[lVar24] != '\0');
      }
    }
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,9);
    lVar15 = (long)local_c0;
    local_c0._0_4_ = 9;
    if (*plVar21 != 0) {
      if (*(long *)(param_1 + 0x12d8) != 0) {
        if (*(uint *)(param_1 + 0x12d0) < 10) {
          local_c0._0_4_ = 0;
        }
        uVar8 = *(uint *)(*(long *)(param_1 + 0x12d8) + (long)(int)(uint)local_c0 * 4);
        if ((uVar8 < 0xffff0000) && ((uVar8 & 0xffff) != 0xffff)) {
          plVar16 = (long *)**(undefined8 **)
                              (*(long *)(*plVar21 + 0x38) +
                              (-((ulong)(uVar8 >> 0xf) & 1) & 0xfffffffffff80000 |
                              ((ulong)uVar8 & 0xffff) << 3));
          local_c0 = (undefined *)lVar15;
          (**(code **)(*plVar16 + 0x1c8))(plVar16,(int)uVar8 >> 0x10,0);
          lVar15 = (long)local_c0;
        }
      }
    }
  }
LAB_015302f8:
  local_c0 = (undefined *)lVar15;
  uVar20 = FUN_01ad98d0(&local_f0);
  lVar15 = (long)local_c0;
  if ((uVar20 & 1) != 0) {
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0xb);
    lVar15 = (long)local_c0;
    local_c0._0_4_ = 0xb;
    if (*plVar21 != 0) {
      if (*(long *)(param_1 + 0x12d8) != 0) {
        if (*(uint *)(param_1 + 0x12d0) < 0xc) {
          local_c0._0_4_ = 0;
        }
        uVar8 = *(uint *)(*(long *)(param_1 + 0x12d8) + (long)(int)(uint)local_c0 * 4);
        if ((uVar8 < 0xffff0000) && ((uVar8 & 0xffff) != 0xffff)) {
          plVar21 = (long *)**(undefined8 **)
                              (*(long *)(*plVar21 + 0x38) +
                              (-((ulong)(uVar8 >> 0xf) & 1) & 0xfffffffffff80000 |
                              ((ulong)uVar8 & 0xffff) << 3));
          local_c0 = (undefined *)lVar15;
          (**(code **)(*plVar21 + 0x1c8))(plVar21,(int)uVar8 >> 0x10,0);
          lVar15 = (long)local_c0;
        }
      }
    }
  }
  local_c0 = (undefined *)lVar15;
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,1);
  uVar8 = FUN_01afb8e8(&local_f0);
  local_90._0_4_ = (float)uVar8;
  if (uVar8 == (uint)local_c0) {
LAB_01530534:
    uVar8 = 0;
    lVar15 = *(long *)(param_1 + 0x1150);
    if (lVar15 != 0) {
LAB_01530540:
      uVar9 = *(uint *)(lVar15 + 0x30);
      if (0 < (int)uVar9) {
        uVar20 = 0;
        do {
          if (((*(long *)(param_1 + 0x1150) != 0) &&
              (uVar13 = (**(code **)(*(long *)**(undefined8 **)
                                                (*(long *)(*(long *)(param_1 + 0x1150) + 0x38) +
                                                uVar20 * 8) + 0xb8))(), 0 < (int)uVar13)) &&
             (lVar15 = *(long *)(param_1 + 0x1150), lVar15 != 0)) {
            lVar27 = 0;
            lVar24 = 0;
            while( true ) {
              if (((lVar15 != 0) &&
                  (lVar15 = **(long **)(*(long *)(lVar15 + 0x38) + uVar20 * 8), lVar15 != 0)) &&
                 (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) {
                puVar22 = (uint *)(*(long *)(lVar15 + 0x10) + lVar27);
                if (*(int *)(lVar15 + 8) <= lVar24) {
                  puVar22 = (uint *)0x0;
                }
                *puVar22 = *puVar22 & 0xffffffdf | uVar8;
              }
              if ((ulong)uVar13 - 1 == lVar24) break;
              lVar15 = *(long *)(param_1 + 0x1150);
              lVar27 = lVar27 + 4;
              lVar24 = lVar24 + 1;
            }
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar9);
      }
    }
  }
  else {
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,2);
    local_90._0_4_ = (float)FUN_01afb8e8(&local_f0);
    if ((float)local_90 == (float)(uint)local_c0) goto LAB_01530534;
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0x17);
    if (local_e0 == (uint *)0x0) {
      local_90._0_4_ = 2.63444e-43;
    }
    else {
      uVar8 = *local_e0;
      local_90._0_4_ = 0.0;
      if ((uVar8 != 0) && (local_e0 != (uint *)(ulong)uVar8)) {
        puVar22 = (uint *)((long)local_e0 - (long)(ulong)uVar8);
        local_90._0_4_ = 0.0;
        if (*puVar22 != 0) {
          uVar8 = puVar22[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar22 + lVar15 + (ulong)(ushort)puVar22[2] * 8;
            if (lVar15 != 0) {
              uVar9 = 0;
              if ((ulong)uVar8 != 0) {
                uVar9 = (uint)((ulong)((long)local_e0 - lVar15) / (ulong)uVar8);
              }
              if (*puVar22 <= uVar9) {
                uVar9 = 0xffffffff;
              }
              if ((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_90._0_4_ =
                       (float)(uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2),
                 (uint)(float)local_90 < 0xbd)) goto LAB_01530454;
            }
          }
          local_90._0_4_ = 0.0;
        }
      }
LAB_01530454:
      if ((float)local_90 == 3.22299e-44) goto LAB_01530534;
      local_90._0_4_ = 0.0;
      uVar8 = *local_e0;
      if ((uVar8 != 0) && (local_e0 != (uint *)(ulong)uVar8)) {
        puVar22 = (uint *)((long)local_e0 - (long)(ulong)uVar8);
        local_90._0_4_ = 0.0;
        if (*puVar22 != 0) {
          uVar8 = puVar22[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar22 + lVar15 + (ulong)(ushort)puVar22[2] * 8;
            if (lVar15 != 0) {
              uVar9 = 0;
              if ((ulong)uVar8 != 0) {
                uVar9 = (uint)((ulong)((long)local_e0 - lVar15) / (ulong)uVar8);
              }
              if (*puVar22 <= uVar9) {
                uVar9 = 0xffffffff;
              }
              if ((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_90._0_4_ =
                       (float)(uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2),
                 (uint)(float)local_90 < 0xbd)) goto LAB_01530520;
            }
          }
          local_90._0_4_ = 0.0;
        }
      }
    }
LAB_01530520:
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0x15);
    if ((float)local_90 == 2.94273e-44) goto LAB_01530534;
    local_c0 = (undefined *)((ulong)(uint)local_c0._4_4_ << 0x20);
    local_90._0_4_ = (float)FUN_01afb8e8(&local_f0);
    if ((float)local_90 == (float)(uint)local_c0) {
      uVar8 = 0x20;
      lVar15 = *(long *)(param_1 + 0x1150);
      if (lVar15 == 0) goto LAB_01530634;
      goto LAB_01530540;
    }
  }
LAB_01530634:
  plVar21 = *(long **)(*(long *)(param_1 + 0x48) + 0x68);
  if (plVar21 != (long *)0x0) {
    FUN_015324a8(param_1);
    (**(code **)(*plVar21 + 0x178))(plVar21);
  }
  uVar20 = FUN_01aeb830(&local_f0);
  if ((uVar20 & 1) == 0) {
    if (local_e0 == (uint *)0x0) {
      uVar8 = 0xbc;
    }
    else {
      uVar9 = *local_e0;
      uVar8 = 0;
      if ((uVar9 != 0) && (local_e0 != (uint *)(ulong)uVar9)) {
        puVar22 = (uint *)((long)local_e0 - (long)(ulong)uVar9);
        uVar8 = 0;
        if (*puVar22 != 0) {
          uVar8 = puVar22[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar22 + lVar15 + (ulong)(ushort)puVar22[2] * 8;
            if (lVar15 != 0) {
              uVar9 = 0;
              if ((ulong)uVar8 != 0) {
                uVar9 = (uint)((ulong)((long)local_e0 - lVar15) / (ulong)uVar8);
              }
              if (*puVar22 <= uVar9) {
                uVar9 = 0xffffffff;
              }
              if ((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2),
                 uVar8 < 0xbd)) goto LAB_01530700;
            }
          }
          uVar8 = 0;
        }
      }
    }
LAB_01530700:
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar8);
    if ((uVar8 & 0xfffffffd) == 0xa4) {
      local_90 = puVar29 + 0x10;
      bVar3 = *(byte *)(param_1 + 0x129e);
      local_80 = 0;
      lVar15 = *plVar25;
      local_88 = *(char **)(param_1 + 0x129c);
      uVar8 = FUN_0277d6c4(&local_88);
      if (*plVar25 != 0) {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar15 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(lVar14);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (uVar8 < *(uint *)(lVar15 + 0x1d8)) {
            lVar14 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8);
            if (lVar14 != 0) {
              local_80 = lVar14;
            }
          }
        }
      }
      if (((bVar3 >> 3 & 1) == 0) && (lVar14 = *(long *)(param_1 + 0x1150), lVar14 != 0)) {
        uStack_108 = _UNK_04102848;
        local_110 = _DAT_04102840;
        lStack_f8 = _UNK_04102888;
        local_100 = _DAT_04102880;
        lStack_118 = _UNK_04102208;
        local_120 = _DAT_04102200;
        if ((*(long *)(param_1 + 0x12b8) != 0) &&
           (((*(long *)(param_1 + 0x12a8) != 0 &&
             (uVar8 = *(uint *)(*(long *)(param_1 + 0x12b8) +
                               (ulong)(1 < *(uint *)(param_1 + 0x12b0)) * 4), uVar8 < 0xffff0000))
            && (((uVar8 ^ 0xffffffff) & 0xffff) != 0)))) {
          local_c8 = (char *)((ulong)local_c8 & 0xffffffff00000000);
          local_d0 = (undefined *)0x0;
          local_b0 = *(long *)(PTR_DAT_04bb2f80 + 0x10);
          uStack_a8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
          local_a0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
          uStack_98 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
          local_c0 = *(undefined **)PTR_DAT_04bb2f80;
          local_b8 = *(char **)(PTR_DAT_04bb2f80 + 8);
          plVar21 = (long *)**(undefined8 **)(*(long *)(lVar14 + 0x38) + (long)(short)uVar8 * 8);
          (**(code **)(*plVar21 + 0x60))(plVar21,&local_c0,&local_d0,(int)uVar8 >> 0x10);
          lStack_f8 = (ulong)(uint)(0.0 - uStack_a8._4_4_) << 0x20;
          lStack_118 = (ulong)(uint)(0.0 - local_b8._4_4_) << 0x20;
          uStack_108 = CONCAT44(0.0 - uStack_98._4_4_,0x3f800000);
          local_100 = 0x3f80000000000000;
          local_120 = 0x3f800000;
          local_110 = 0x80000000;
        }
        uVar8 = FUN_01afceb4(&local_90);
        if (uVar8 < 2) {
          local_c8 = (&PTR_s_FtrArtEasel1x1_049a78a0)[uVar8];
        }
        else {
          local_c8 = "";
        }
        local_d0 = puVar30 + 0x10;
        if (*(int *)(lVar14 + 0x30) == 0) {
          iVar7 = -1;
        }
        else {
          puVar17 = *(undefined8 **)(lVar14 + 0x38);
          iVar7 = 0;
          puVar2 = puVar17 + *(int *)(lVar14 + 0x30);
          do {
            (**(code **)(**(long **)*puVar17 + 0x28))(&local_c0);
            (**(code **)(local_d0 + 0x18))(&local_d0);
            (**(code **)(local_d0 + 0x18))(&local_d0);
            pcVar5 = local_c8;
            (**(code **)((long)local_c0 + 0x18))(&local_c0);
            if (pcVar5 == local_b8) goto LAB_015309e0;
            uVar20 = 0;
            bVar6 = true;
            do {
              if (local_c8[uVar20] != local_b8[uVar20]) break;
              if (local_c8[uVar20] == '\0') {
                if (bVar6) goto LAB_015309e0;
                break;
              }
              if (local_c8[uVar20 + 1] != local_b8[uVar20 + 1]) break;
              if (local_c8[uVar20 + 1] == '\0') goto LAB_015309e0;
              if (local_c8[uVar20 + 2] != local_b8[uVar20 + 2]) break;
              if (local_c8[uVar20 + 2] == '\0') goto LAB_015309e0;
              bVar6 = uVar20 < 0x7fffe;
              uVar20 = uVar20 + 3;
            } while (uVar20 != 0x80001);
            puVar17 = puVar17 + 1;
            iVar7 = iVar7 + 1;
          } while (puVar17 != puVar2);
          iVar7 = -1;
        }
LAB_015309e0:
        *(int *)(param_1 + 0x13c8) = iVar7;
        FUN_01adf970(&local_d0,&local_90);
        if (*(int *)(lVar14 + 0x30) == 0) {
          iVar7 = -1;
        }
        else {
          puVar17 = *(undefined8 **)(lVar14 + 0x38);
          iVar7 = 0;
          puVar2 = puVar17 + *(int *)(lVar14 + 0x30);
          do {
            (**(code **)(**(long **)*puVar17 + 0x28))(&local_c0);
            (**(code **)(local_d0 + 0x18))(&local_d0);
            (**(code **)(local_d0 + 0x18))(&local_d0);
            pcVar5 = local_c8;
            (**(code **)((long)local_c0 + 0x18))(&local_c0);
            if (pcVar5 == local_b8) goto LAB_01530a14;
            uVar20 = 0;
            bVar6 = true;
            do {
              if (local_c8[uVar20] != local_b8[uVar20]) break;
              if (local_c8[uVar20] == '\0') {
                if (bVar6) goto LAB_01530a14;
                break;
              }
              if (local_c8[uVar20 + 1] != local_b8[uVar20 + 1]) break;
              if (local_c8[uVar20 + 1] == '\0') goto LAB_01530a14;
              if (local_c8[uVar20 + 2] != local_b8[uVar20 + 2]) break;
              if (local_c8[uVar20 + 2] == '\0') goto LAB_01530a14;
              bVar6 = uVar20 < 0x7fffe;
              uVar20 = uVar20 + 3;
            } while (uVar20 != 0x80001);
            puVar17 = puVar17 + 1;
            iVar7 = iVar7 + 1;
          } while (puVar17 != puVar2);
          iVar7 = -1;
        }
LAB_01530a14:
        *(int *)(param_1 + 0x13cc) = iVar7;
        *(uint *)(param_1 + 0x1298) = *(uint *)(param_1 + 0x1298) | 0x80;
        *(long *)(param_1 + 0x13d8) = lStack_118;
        *(undefined8 *)(param_1 + 0x13d0) = local_120;
        *(long *)(param_1 + 0x13e8) = lStack_f8;
        *(undefined8 *)(param_1 + 0x13e0) = local_100;
        *(undefined8 *)(param_1 + 0x13f8) = uStack_108;
        *(undefined8 *)(param_1 + 0x13f0) = local_110;
      }
      goto LAB_0153090c;
    }
    iVar7 = FUN_0277d6c4(lVar14);
    if (iVar7 != 0x33df) goto LAB_0153090c;
  }
  FUN_015317d0(param_1);
LAB_0153090c:
  if (*(char *)(param_1 + 0x1298) < '\0') {
    lVar14 = 0;
    if (*(long *)(param_1 + 0x1138) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x1138) + 0x2c1) = 1;
      lVar14 = *(long *)(param_1 + 0x1138);
    }
    lVar15 = *(long *)(param_1 + 0x1148);
    if (lVar14 != 0) {
      lVar15 = lVar14 + 0xc0;
    }
    if (lVar15 != 0) {
      *(undefined1 **)(lVar15 + 0x48) = &LAB_01533018;
      *(undefined8 *)(lVar15 + 0x50) = 0;
      *(undefined ***)(lVar15 + 0x38) = &PTR_LAB_049a78f0;
      *(long *)(lVar15 + 0x40) = param_1;
      *(undefined1 *)(lVar15 + 0x172) = 1;
    }
  }
  return;
}

