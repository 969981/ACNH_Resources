
/* WARNING: Removing unreachable block (ram,0x03216ffc) */
/* WARNING: Removing unreachable block (ram,0x03216fbc) */
/* WARNING: Removing unreachable block (ram,0x03216f7c) */
/* WARNING: Removing unreachable block (ram,0x03216f3c) */
/* WARNING: Removing unreachable block (ram,0x03216efc) */
/* WARNING: Removing unreachable block (ram,0x03216f1c) */
/* WARNING: Removing unreachable block (ram,0x03216f5c) */
/* WARNING: Removing unreachable block (ram,0x03216f9c) */
/* WARNING: Removing unreachable block (ram,0x03216fdc) */
/* WARNING: Removing unreachable block (ram,0x03217018) */

void FUN_03216440(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined **local_80 [4];
  
  uVar11 = *(uint *)(param_1 + 600);
  iVar10 = -1;
  if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)(param_1 + 0x240))) {
    lVar7 = param_1 + 0x230;
    uVar1 = uVar11 + 1 & 3;
    if (2 < uVar11) {
      uVar11 = uVar11 + 1 & 0xfffffffc;
      do {
        uVar11 = uVar11 - 4;
        lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
      } while (uVar11 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar7 = *(long *)(lVar7 + 8);
    }
    iVar10 = -1;
    if ((lVar7 != 0) && (lVar7 = lVar7 - *(int *)(param_1 + 0x244), lVar7 != 0)) {
      iVar10 = *(int *)(lVar7 + 0x270);
    }
  }
  iVar3 = *(int *)(param_1 + 0x1c358);
  if (iVar3 != 0) {
    lVar7 = *(long *)(param_1 + 0x1c360);
    uVar12 = 0;
    do {
      *(undefined2 *)(lVar7 + (-(uVar12 >> 0x1f) & 0xfffffffe00000000 | uVar12 << 1)) = 0xffff;
      uVar6 = uVar12 + 1;
      uVar12 = uVar6 & 0xffffffff;
    } while (iVar3 != (int)uVar6);
  }
  *(undefined4 *)(param_1 + 0x1c368) = 0;
  puVar4 = PTR_DAT_04bb43c0;
  if (iVar10 == 0) {
    if ((int)(*(uint *)(param_1 + 0x1c338) * 0x10000) < 1) {
LAB_03216bd8:
      uVar11 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x1c338) & 0xffff;
      uVar12 = 0;
      uVar11 = 0;
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      lVar7 = *(long *)PTR_DAT_04bb43c0;
      do {
        uVar5 = FUN_0277d6c4(*(undefined8 *)(*(long *)(param_1 + 0x1c340) + uVar12 * 8));
        lVar8 = *(long *)puVar4;
        if (lVar8 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            uVar5 = uVar11;
            if (*(uint *)(param_1 + 0x1c358) <= uVar11) {
              uVar5 = 0;
            }
            uVar11 = uVar11 + 1;
            *(short *)(*(long *)(param_1 + 0x1c360) + (long)(int)uVar5 * 2) = (short)uVar12;
            lVar8 = *(long *)puVar4;
          }
        }
        uVar12 = uVar12 + 1;
        lVar7 = lVar8;
      } while (uVar1 != uVar12);
    }
  }
  else {
    switch(iVar10) {
    case 0x1d:
      local_80[0] = &PTR_FUN_04b2a250;
      uVar12 = FUN_00b55a24(local_80);
      puVar4 = PTR_DAT_04bb43c0;
      if ((uVar12 & 1) == 0) goto switchD_03216548_default;
      if ((int)(*(uint *)(param_1 + 0x1c338) * 0x10000) < 1) goto LAB_03216bd8;
      uVar1 = *(uint *)(param_1 + 0x1c338) & 0xffff;
      uVar12 = 0;
      uVar11 = 0;
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      do {
        lVar7 = *(long *)puVar4;
        uVar5 = FUN_0277d6c4(*(undefined8 *)(*(long *)(param_1 + 0x1c340) + uVar12 * 8));
        if (*(long *)puVar4 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar6 = (*(code *)*local_80[0])
                                (local_80,*(undefined8 *)(*(long *)(param_1 + 0x1c340) + uVar12 * 8)
                                ), (uVar6 & 1) != 0)) {
            uVar5 = uVar11;
            if (*(uint *)(param_1 + 0x1c358) <= uVar11) {
              uVar5 = 0;
            }
            uVar11 = uVar11 + 1;
            *(short *)(*(long *)(param_1 + 0x1c360) + (long)(int)uVar5 * 2) = (short)uVar12;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar1 != uVar12);
      break;
    case 0x1e:
      local_80[0] = &PTR_FUN_04b2a278;
      uVar12 = FUN_00b55a24(local_80);
      puVar4 = PTR_DAT_04bb43c0;
      if ((uVar12 & 1) == 0) goto switchD_03216548_default;
      if ((int)(*(uint *)(param_1 + 0x1c338) * 0x10000) < 1) goto LAB_03216bd8;
      uVar1 = *(uint *)(param_1 + 0x1c338) & 0xffff;
      uVar12 = 0;
      uVar11 = 0;
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      do {
        lVar7 = *(long *)puVar4;
        uVar5 = FUN_0277d6c4(*(undefined8 *)(*(long *)(param_1 + 0x1c340) + uVar12 * 8));
        if (*(long *)puVar4 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar6 = (*(code *)*local_80[0])
                                (local_80,*(undefined8 *)(*(long *)(param_1 + 0x1c340) + uVar12 * 8)
                                ), (uVar6 & 1) != 0)) {
            uVar5 = uVar11;
            if (*(uint *)(param_1 + 0x1c358) <= uVar11) {
              uVar5 = 0;
            }
            uVar11 = uVar11 + 1;
            *(short *)(*(long *)(param_1 + 0x1c360) + (long)(int)uVar5 * 2) = (short)uVar12;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar1 != uVar12);
      break;
    case 0x1f:
      local_80[0] = &PTR_FUN_04b2a2a0;
      uVar12 = FUN_00b55a24(local_80);
      puVar4 = PTR_DAT_04bb43c0;
      if ((uVar12 & 1) == 0) goto switchD_03216548_default;
      if ((int)(*(uint *)(param_1 + 0x1c338) * 0x10000) < 1) goto LAB_03216bd8;
      uVar1 = *(uint *)(param_1 + 0x1c338) & 0xffff;
      uVar12 = 0;
      uVar11 = 0;
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      do {
        lVar7 = *(long *)puVar4;
        uVar5 = FUN_0277d6c4(*(undefined8 *)(*(long *)(param_1 + 0x1c340) + uVar12 * 8));
        if (*(long *)puVar4 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar6 = (*(code *)*local_80[0])
                                (local_80,*(undefined8 *)(*(long *)(param_1 + 0x1c340) + uVar12 * 8)
                                ), (uVar6 & 1) != 0)) {
            uVar5 = uVar11;
            if (*(uint *)(param_1 + 0x1c358) <= uVar11) {
              uVar5 = 0;
            }
            uVar11 = uVar11 + 1;
            *(short *)(*(long *)(param_1 + 0x1c360) + (long)(int)uVar5 * 2) = (short)uVar12;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar1 != uVar12);
      break;
    case 0x20:
      local_80[0] = &PTR_FUN_04b2a2c8;
      uVar12 = FUN_00b55a24(local_80);
      puVar4 = PTR_DAT_04bb43c0;
      if ((uVar12 & 1) == 0) goto switchD_03216548_default;
      if ((int)(*(uint *)(param_1 + 0x1c338) * 0x10000) < 1) goto LAB_03216bd8;
      uVar1 = *(uint *)(param_1 + 0x1c338) & 0xffff;
      uVar12 = 0;
      uVar11 = 0;
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      do {
        lVar7 = *(long *)puVar4;
        uVar5 = FUN_0277d6c4(*(undefined8 *)(*(long *)(param_1 + 0x1c340) + uVar12 * 8));
        if (*(long *)puVar4 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar6 = (*(code *)*local_80[0])
                                (local_80,*(undefined8 *)(*(long *)(param_1 + 0x1c340) + uVar12 * 8)
                                ), (uVar6 & 1) != 0)) {
            uVar5 = uVar11;
            if (*(uint *)(param_1 + 0x1c358) <= uVar11) {
              uVar5 = 0;
            }
            uVar11 = uVar11 + 1;
            *(short *)(*(long *)(param_1 + 0x1c360) + (long)(int)uVar5 * 2) = (short)uVar12;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar1 != uVar12);
      break;
    case 0x21:
      local_80[0] = &PTR_FUN_04b2a2f0;
      uVar12 = FUN_00b55a24(local_80);
      puVar4 = PTR_DAT_04bb43c0;
      if ((uVar12 & 1) == 0) goto switchD_03216548_default;
      if ((int)(*(uint *)(param_1 + 0x1c338) * 0x10000) < 1) goto LAB_03216bd8;
      uVar1 = *(uint *)(param_1 + 0x1c338) & 0xffff;
      uVar12 = 0;
      uVar11 = 0;
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      do {
        lVar7 = *(long *)puVar4;
        uVar5 = FUN_0277d6c4(*(undefined8 *)(*(long *)(param_1 + 0x1c340) + uVar12 * 8));
        if (*(long *)puVar4 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar6 = (*(code *)*local_80[0])
                                (local_80,*(undefined8 *)(*(long *)(param_1 + 0x1c340) + uVar12 * 8)
                                ), (uVar6 & 1) != 0)) {
            uVar5 = uVar11;
            if (*(uint *)(param_1 + 0x1c358) <= uVar11) {
              uVar5 = 0;
            }
            uVar11 = uVar11 + 1;
            *(short *)(*(long *)(param_1 + 0x1c360) + (long)(int)uVar5 * 2) = (short)uVar12;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar1 != uVar12);
      break;
    case 0x22:
      local_80[0] = &PTR_FUN_04b2a318;
      uVar12 = FUN_00b55a24(local_80);
      puVar4 = PTR_DAT_04bb43c0;
      if ((uVar12 & 1) == 0) goto switchD_03216548_default;
      if ((int)(*(uint *)(param_1 + 0x1c338) * 0x10000) < 1) goto LAB_03216bd8;
      uVar1 = *(uint *)(param_1 + 0x1c338) & 0xffff;
      uVar12 = 0;
      uVar11 = 0;
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      do {
        lVar7 = *(long *)puVar4;
        uVar5 = FUN_0277d6c4(*(undefined8 *)(*(long *)(param_1 + 0x1c340) + uVar12 * 8));
        if (*(long *)puVar4 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar6 = (*(code *)*local_80[0])
                                (local_80,*(undefined8 *)(*(long *)(param_1 + 0x1c340) + uVar12 * 8)
                                ), (uVar6 & 1) != 0)) {
            uVar5 = uVar11;
            if (*(uint *)(param_1 + 0x1c358) <= uVar11) {
              uVar5 = 0;
            }
            uVar11 = uVar11 + 1;
            *(short *)(*(long *)(param_1 + 0x1c360) + (long)(int)uVar5 * 2) = (short)uVar12;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar1 != uVar12);
      break;
    case 0x23:
      local_80[0] = &PTR_FUN_04b2a340;
      uVar12 = FUN_00b55a24(local_80);
      puVar4 = PTR_DAT_04bb43c0;
      if ((uVar12 & 1) == 0) goto switchD_03216548_default;
      if ((int)(*(uint *)(param_1 + 0x1c338) * 0x10000) < 1) goto LAB_03216bd8;
      uVar1 = *(uint *)(param_1 + 0x1c338) & 0xffff;
      uVar12 = 0;
      uVar11 = 0;
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      do {
        lVar7 = *(long *)puVar4;
        uVar5 = FUN_0277d6c4(*(undefined8 *)(*(long *)(param_1 + 0x1c340) + uVar12 * 8));
        if (*(long *)puVar4 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if (((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
             (uVar6 = (*(code *)*local_80[0])
                                (local_80,*(undefined8 *)(*(long *)(param_1 + 0x1c340) + uVar12 * 8)
                                ), (uVar6 & 1) != 0)) {
            uVar5 = uVar11;
            if (*(uint *)(param_1 + 0x1c358) <= uVar11) {
              uVar5 = 0;
            }
            uVar11 = uVar11 + 1;
            *(short *)(*(long *)(param_1 + 0x1c360) + (long)(int)uVar5 * 2) = (short)uVar12;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar1 != uVar12);
      break;
    default:
      goto switchD_03216548_default;
    }
  }
  *(uint *)(param_1 + 0x1c368) = uVar11;
switchD_03216548_default:
  puVar9 = (uint *)(param_1 + 0x1c36c);
  *puVar9 = 0xffffffff;
  uVar11 = *(uint *)(param_1 + 0x1c368);
  uVar1 = *(uint *)(param_1 + 0x1c358);
  lVar7 = *(long *)(param_1 + 0x1c360);
  *(undefined4 *)(param_1 + 0x1c378) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c384) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c390) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c39c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c3a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c3b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c3c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c3cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c3d8) = 0xffffffff;
  if ((-1 < *(int *)(param_1 + 0x1c370)) && (0 < (int)uVar11)) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      if (uVar1 <= uVar5) {
        uVar2 = 0;
      }
      if (*(int *)(param_1 + 0x1c370) == (int)*(short *)(lVar7 + (ulong)uVar2 * 2)) {
        *puVar9 = uVar5;
        iVar10 = *(int *)(param_1 + 0x1c37c);
        goto joined_r0x03216c64;
      }
      uVar5 = uVar5 + 1;
    } while (uVar11 != uVar5);
  }
  iVar10 = *(int *)(param_1 + 0x1c37c);
joined_r0x03216c64:
  if ((-1 < iVar10) && (0 < (int)uVar11)) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      if (uVar1 <= uVar5) {
        uVar2 = 0;
      }
      if (iVar10 == *(short *)(lVar7 + (ulong)uVar2 * 2)) {
        *(uint *)(param_1 + 0x1c378) = uVar5;
        iVar10 = *(int *)(param_1 + 0x1c388);
        goto joined_r0x03216ca8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar11 != uVar5);
  }
  iVar10 = *(int *)(param_1 + 0x1c388);
joined_r0x03216ca8:
  if ((-1 < iVar10) && (0 < (int)uVar11)) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      if (uVar1 <= uVar5) {
        uVar2 = 0;
      }
      if (iVar10 == *(short *)(lVar7 + (ulong)uVar2 * 2)) {
        *(uint *)(param_1 + 0x1c384) = uVar5;
        iVar10 = *(int *)(param_1 + 0x1c394);
        goto joined_r0x03216cf4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar11 != uVar5);
  }
  iVar10 = *(int *)(param_1 + 0x1c394);
joined_r0x03216cf4:
  if ((-1 < iVar10) && (0 < (int)uVar11)) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      if (uVar1 <= uVar5) {
        uVar2 = 0;
      }
      if (iVar10 == *(short *)(lVar7 + (ulong)uVar2 * 2)) {
        *(uint *)(param_1 + 0x1c390) = uVar5;
        iVar10 = *(int *)(param_1 + 0x1c3a0);
        goto joined_r0x03216d38;
      }
      uVar5 = uVar5 + 1;
    } while (uVar11 != uVar5);
  }
  iVar10 = *(int *)(param_1 + 0x1c3a0);
joined_r0x03216d38:
  if ((-1 < iVar10) && (0 < (int)uVar11)) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      if (uVar1 <= uVar5) {
        uVar2 = 0;
      }
      if (iVar10 == *(short *)(lVar7 + (ulong)uVar2 * 2)) {
        *(uint *)(param_1 + 0x1c39c) = uVar5;
        iVar10 = *(int *)(param_1 + 0x1c3ac);
        goto joined_r0x03216d84;
      }
      uVar5 = uVar5 + 1;
    } while (uVar11 != uVar5);
  }
  iVar10 = *(int *)(param_1 + 0x1c3ac);
joined_r0x03216d84:
  if ((-1 < iVar10) && (0 < (int)uVar11)) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      if (uVar1 <= uVar5) {
        uVar2 = 0;
      }
      if (iVar10 == *(short *)(lVar7 + (ulong)uVar2 * 2)) {
        *(uint *)(param_1 + 0x1c3a8) = uVar5;
        iVar10 = *(int *)(param_1 + 0x1c3b8);
        goto joined_r0x03216dc8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar11 != uVar5);
  }
  iVar10 = *(int *)(param_1 + 0x1c3b8);
joined_r0x03216dc8:
  if ((-1 < iVar10) && (0 < (int)uVar11)) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      if (uVar1 <= uVar5) {
        uVar2 = 0;
      }
      if (iVar10 == *(short *)(lVar7 + (ulong)uVar2 * 2)) {
        *(uint *)(param_1 + 0x1c3b4) = uVar5;
        iVar10 = *(int *)(param_1 + 0x1c3c4);
        goto joined_r0x03216e14;
      }
      uVar5 = uVar5 + 1;
    } while (uVar11 != uVar5);
  }
  iVar10 = *(int *)(param_1 + 0x1c3c4);
joined_r0x03216e14:
  if ((-1 < iVar10) && (0 < (int)uVar11)) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      if (uVar1 <= uVar5) {
        uVar2 = 0;
      }
      if (iVar10 == *(short *)(lVar7 + (ulong)uVar2 * 2)) {
        *(uint *)(param_1 + 0x1c3c0) = uVar5;
        iVar10 = *(int *)(param_1 + 0x1c3d0);
        goto joined_r0x03216e58;
      }
      uVar5 = uVar5 + 1;
    } while (uVar11 != uVar5);
  }
  iVar10 = *(int *)(param_1 + 0x1c3d0);
joined_r0x03216e58:
  if ((-1 < iVar10) && (0 < (int)uVar11)) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      if (uVar1 <= uVar5) {
        uVar2 = 0;
      }
      if (iVar10 == *(short *)(lVar7 + (ulong)uVar2 * 2)) {
        *(uint *)(param_1 + 0x1c3cc) = uVar5;
        iVar10 = *(int *)(param_1 + 0x1c3dc);
        goto joined_r0x03216ea4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar11 != uVar5);
  }
  iVar10 = *(int *)(param_1 + 0x1c3dc);
joined_r0x03216ea4:
  if ((-1 < iVar10) && (0 < (int)uVar11)) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      if (uVar1 <= uVar5) {
        uVar2 = 0;
      }
      if (iVar10 == *(short *)(lVar7 + (ulong)uVar2 * 2)) {
        *(uint *)(param_1 + 0x1c3d8) = uVar5;
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar11 != uVar5);
  }
  if (*(long *)(*(long *)(param_1 + 0x210) + 0x590) != 0) {
    *(uint *)(param_1 + 0x1c2ec) = *puVar9;
    *(undefined4 *)(param_1 + 0x1c2f0) = *(undefined4 *)(param_1 + 0x1c378);
    *(undefined4 *)(param_1 + 0x1c2f4) = *(undefined4 *)(param_1 + 0x1c384);
    *(undefined4 *)(param_1 + 0x1c2f8) = *(undefined4 *)(param_1 + 0x1c390);
    *(undefined4 *)(param_1 + 0x1c2fc) = *(undefined4 *)(param_1 + 0x1c39c);
    *(undefined4 *)(param_1 + 0x1c300) = *(undefined4 *)(param_1 + 0x1c3a8);
    *(undefined4 *)(param_1 + 0x1c304) = *(undefined4 *)(param_1 + 0x1c3b4);
    *(undefined4 *)(param_1 + 0x1c308) = *(undefined4 *)(param_1 + 0x1c3c0);
    *(undefined4 *)(param_1 + 0x1c30c) = *(undefined4 *)(param_1 + 0x1c3cc);
    *(undefined4 *)(param_1 + 0x1c310) = *(undefined4 *)(param_1 + 0x1c3d8);
  }
  return;
}

