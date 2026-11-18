
/* WARNING: Type propagation algorithm not settling */

void FUN_03688330(int *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *******pppppppuVar8;
  undefined8 ****ppppuVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  char cVar21;
  long *plVar22;
  undefined8 local_4b0;
  long *local_4a8;
  undefined8 *******local_4a0;
  undefined8 *******local_498;
  undefined8 ******local_490;
  undefined8 *****local_488;
  undefined8 ****local_480;
  undefined8 ***local_478;
  undefined1 local_470 [104];
  undefined8 *****local_408 [17];
  undefined8 ****local_380 [17];
  undefined8 ***local_2f8 [17];
  undefined8 **local_270 [17];
  undefined8 *local_1e8 [17];
  undefined8 local_160 [17];
  long local_d8 [7];
  undefined8 local_a0;
  undefined1 *local_98;
  undefined8 ****local_90;
  undefined8 ****ppppuStack_88;
  undefined8 ***local_80;
  undefined8 **local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined1 local_60 [32];
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    local_a0 = 0;
    local_98 = (undefined1 *)0x0;
    local_80 = &local_78;
    local_78 = &local_70;
    local_90 = &local_80;
    local_70 = &local_68;
    local_68 = 0;
    if (local_60 != (undefined1 *)0x0) {
      local_a0 = 0x400000000;
      local_98 = local_60;
    }
    local_4b0 = 0;
    local_4a8 = (long *)0x0;
    local_4a0 = &local_490;
    local_490 = local_408;
    local_408[0] = local_380;
    local_380[0] = local_2f8;
    local_270[0] = local_1e8;
    local_2f8[0] = local_270;
    local_1e8[0] = local_160;
    local_160[0] = 0;
    if (local_d8 != (long *)0x0) {
      local_4b0 = 0x700000000;
      local_4a8 = local_d8;
    }
    local_498 = local_4a0;
    ppppuStack_88 = local_90;
    FUN_03686660(&local_4b0);
    if ((uint)local_4b0 == 0) {
      return;
    }
    plVar22 = local_4a8 + (int)(uint)local_4b0;
    do {
      ppppuVar9 = local_90;
      lVar16 = *local_4a8;
      iVar11 = *(int *)(lVar16 + 0x30);
      if (iVar11 != 0) {
        iVar1 = (int)local_a0;
        if ((int)local_a0 != 0) {
          lVar20 = 0;
          do {
            iVar11 = *(int *)(lVar16 + 0x30);
            if (**(int **)(local_98 + lVar20) == iVar11) goto joined_r0x036884c0;
            lVar20 = lVar20 + 8;
          } while ((long)(int)local_a0 * 8 != lVar20);
        }
        if ((int)local_a0 < local_a0._4_4_) {
          if (local_90 != (undefined8 ****)0x0) {
            local_90 = (undefined8 ****)*local_90;
          }
          *(int *)ppppuVar9 = iVar11;
          if ((int)local_a0 < local_a0._4_4_) {
            *(undefined8 *****)(local_98 + (long)(int)local_a0 * 8) = ppppuVar9;
            iVar1 = (int)local_a0 + 1;
            local_a0 = CONCAT44(local_a0._4_4_,iVar1);
          }
        }
joined_r0x036884c0:
        if (iVar1 != 0) {
          lVar20 = 0;
          lVar18 = (long)iVar1 << 3;
          piVar12 = param_1;
          do {
            if (*(int *)(lVar16 + 0x30) == **(int **)(local_98 + lVar20 * 8)) {
              if (3 < (uint)lVar20) {
                piVar12 = param_1;
              }
              *piVar12 = *piVar12 + 1;
              break;
            }
            piVar12 = piVar12 + 1;
            lVar20 = lVar20 + 1;
            lVar18 = lVar18 + -8;
          } while (lVar18 != 0);
        }
      }
      local_4a8 = local_4a8 + 1;
      if (local_4a8 == plVar22) {
        return;
      }
    } while( true );
  }
  local_4b0._4_4_ = 0;
  local_4a8 = (long *)0x0;
  local_490 = &local_488;
  local_488 = &local_480;
  local_4a0 = &local_490;
  local_480 = &local_478;
  local_478 = (undefined8 ***)0x0;
  if (local_470 != (undefined1 *)0x0) {
    local_4b0._4_4_ = 4;
    local_4a8 = (long *)local_470;
  }
  local_4b0._0_4_ = 0;
  local_498 = local_4a0;
  uVar10 = FUN_0376f3e0(param_1,0);
  pppppppuVar8 = local_4a0;
  puVar5 = PTR_DAT_04bb4960;
  lVar16 = *(long *)PTR_DAT_04bb4960;
  if (((lVar16 == 0) ||
      (uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x7f8),
      *(uint *)(lVar16 + 0x7d8) <= uVar10)) ||
     (puVar14 = *(uint **)(*(long *)(lVar16 + 0x7e0) + (long)(int)uVar10 * 8),
     puVar14 == (uint *)0x0)) goto LAB_036889e8;
  uVar10 = *puVar14;
  if (uVar10 == 0 || puVar14 == (uint *)(ulong)uVar10) {
LAB_03688604:
    uVar15 = 0;
  }
  else {
    puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar10);
    if (((*puVar17 == 0) || (uVar10 = puVar17[1], uVar10 == 0)) || ((ulong)(ushort)puVar17[2] == 0))
    goto LAB_03688604;
    lVar16 = 0xc;
    if (*(char *)((long)puVar17 + 10) != '\0') {
      lVar16 = 0x1c;
    }
    lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
    uVar15 = 0;
    if (lVar16 != 0) {
      uVar15 = 0;
      if ((ulong)uVar10 != 0) {
        uVar15 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar10);
      }
      if (*puVar17 <= uVar15) {
        uVar15 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bc3970 <= uVar15) ||
         (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc3970 + 8) + (long)(int)uVar15 * 2),
         uVar15 = (uint)uVar4, 0x14 < uVar4)) goto LAB_03688604;
    }
  }
  if ((int)(uint)local_4b0 < local_4b0._4_4_) {
    if (local_4a0 != (undefined8 *******)0x0) {
      local_4a0 = (undefined8 *******)*local_4a0;
    }
    *(uint *)pppppppuVar8 = uVar15;
    if ((int)(uint)local_4b0 < local_4b0._4_4_) {
      *(undefined8 ********)((long)local_4a8 + (long)(int)(uint)local_4b0 * 8) = pppppppuVar8;
      local_4b0._0_4_ = (uint)local_4b0 + 1;
    }
  }
  pppppppuVar8 = local_4a0;
  puVar7 = PTR_DAT_04bc3980;
  puVar6 = PTR_DAT_04bc3978;
  if (*puVar14 == 0) {
LAB_03688740:
    uVar10 = 0;
  }
  else {
    cVar21 = *PTR_DAT_04bc3978;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar10 = *(uint *)(puVar7 + 0x24);
        if (-1 < (int)uVar10) {
          if (((byte *)((ulong)uVar10 + (long)puVar14) == (byte *)0x0) ||
             (bVar3 = *(byte *)((ulong)uVar10 + (long)puVar14), uVar10 = (uint)bVar3, 0x14 < bVar3))
          goto LAB_03688740;
          goto LAB_03688744;
        }
        if (uVar10 != 0xffffffff) goto LAB_03688740;
      }
      puVar17 = (uint *)(ulong)*puVar14;
      uVar10 = 0;
      if ((*puVar14 == 0) || (puVar14 == puVar17)) goto LAB_03688744;
      lVar16 = 0xc;
      if (*(char *)((long)puVar14 + (10 - (long)puVar17)) != '\0') {
        lVar16 = 0x1c;
      }
      lVar16 = (long)puVar14 + (lVar16 - (long)puVar17);
      if (lVar16 == 0) goto LAB_03688740;
      uVar13 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar17));
      *(undefined4 *)(puVar7 + 0x24) = 0xfffffffe;
      uVar10 = 0;
      if (uVar13 == 0) goto LAB_03688744;
      piVar12 = (int *)(lVar16 + 4);
      while (piVar12[-1] != 0x3297a85e) {
        piVar12 = piVar12 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          uVar10 = 0;
          goto LAB_03688744;
        }
      }
      iVar11 = 0;
      if (*piVar12 != -1) {
        iVar11 = *piVar12;
      }
      *(int *)(puVar7 + 0x24) = iVar11;
    } while (*puVar14 != 0);
    uVar10 = 0;
  }
LAB_03688744:
  if ((int)(uint)local_4b0 < local_4b0._4_4_) {
    if (local_4a0 != (undefined8 *******)0x0) {
      local_4a0 = (undefined8 *******)*local_4a0;
    }
    *(uint *)pppppppuVar8 = uVar10;
    if ((int)(uint)local_4b0 < local_4b0._4_4_) {
      *(undefined8 ********)((long)local_4a8 + (long)(int)(uint)local_4b0 * 8) = pppppppuVar8;
      local_4b0._0_4_ = (uint)local_4b0 + 1;
    }
  }
  pppppppuVar8 = local_4a0;
  if (*puVar14 == 0) {
LAB_03688870:
    uVar10 = 0;
  }
  else {
    cVar21 = *puVar6;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar10 = *(uint *)(puVar7 + 0x28);
        if (-1 < (int)uVar10) {
          if (((byte *)((ulong)uVar10 + (long)puVar14) == (byte *)0x0) ||
             (bVar3 = *(byte *)((ulong)uVar10 + (long)puVar14), uVar10 = (uint)bVar3, 0x14 < bVar3))
          goto LAB_03688870;
          goto LAB_03688874;
        }
        if (uVar10 != 0xffffffff) goto LAB_03688870;
      }
      puVar17 = (uint *)(ulong)*puVar14;
      uVar10 = 0;
      if ((*puVar14 == 0) || (puVar14 == puVar17)) goto LAB_03688874;
      lVar16 = 0xc;
      if (*(char *)((long)puVar14 + (10 - (long)puVar17)) != '\0') {
        lVar16 = 0x1c;
      }
      lVar16 = (long)puVar14 + (lVar16 - (long)puVar17);
      if (lVar16 == 0) goto LAB_03688870;
      uVar13 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar17));
      *(undefined4 *)(puVar7 + 0x28) = 0xfffffffe;
      uVar10 = 0;
      if (uVar13 == 0) goto LAB_03688874;
      piVar12 = (int *)(lVar16 + 4);
      while (piVar12[-1] != 0x202207b0) {
        piVar12 = piVar12 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          uVar10 = 0;
          goto LAB_03688874;
        }
      }
      iVar11 = 0;
      if (*piVar12 != -1) {
        iVar11 = *piVar12;
      }
      *(int *)(puVar7 + 0x28) = iVar11;
    } while (*puVar14 != 0);
    uVar10 = 0;
  }
LAB_03688874:
  if ((int)(uint)local_4b0 < local_4b0._4_4_) {
    if (local_4a0 != (undefined8 *******)0x0) {
      local_4a0 = (undefined8 *******)*local_4a0;
    }
    *(uint *)pppppppuVar8 = uVar10;
    if ((int)(uint)local_4b0 < local_4b0._4_4_) {
      *(undefined8 ********)((long)local_4a8 + (long)(int)(uint)local_4b0 * 8) = pppppppuVar8;
      local_4b0._0_4_ = (uint)local_4b0 + 1;
    }
  }
  pppppppuVar8 = local_4a0;
  if (*puVar14 == 0) {
LAB_036889a0:
    uVar10 = 0;
  }
  else {
    cVar21 = *puVar6;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar10 = *(uint *)(puVar7 + 0x2c);
        if (-1 < (int)uVar10) {
          if (((byte *)((ulong)uVar10 + (long)puVar14) == (byte *)0x0) ||
             (bVar3 = *(byte *)((ulong)uVar10 + (long)puVar14), uVar10 = (uint)bVar3, 0x14 < bVar3))
          goto LAB_036889a0;
          goto LAB_036889a4;
        }
        if (uVar10 != 0xffffffff) goto LAB_036889a0;
      }
      puVar17 = (uint *)(ulong)*puVar14;
      uVar10 = 0;
      if ((*puVar14 == 0) || (puVar14 == puVar17)) goto LAB_036889a4;
      lVar16 = 0xc;
      if (*(char *)((long)puVar14 + (10 - (long)puVar17)) != '\0') {
        lVar16 = 0x1c;
      }
      lVar16 = (long)puVar14 + (lVar16 - (long)puVar17);
      if (lVar16 == 0) goto LAB_036889a0;
      uVar13 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar17));
      *(undefined4 *)(puVar7 + 0x2c) = 0xfffffffe;
      uVar10 = 0;
      if (uVar13 == 0) goto LAB_036889a4;
      piVar12 = (int *)(lVar16 + 4);
      while (piVar12[-1] != -0x67619f2b) {
        piVar12 = piVar12 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          uVar10 = 0;
          goto LAB_036889a4;
        }
      }
      iVar11 = 0;
      if (*piVar12 != -1) {
        iVar11 = *piVar12;
      }
      *(int *)(puVar7 + 0x2c) = iVar11;
    } while (*puVar14 != 0);
    uVar10 = 0;
  }
LAB_036889a4:
  if ((int)(uint)local_4b0 < local_4b0._4_4_) {
    if (local_4a0 != (undefined8 *******)0x0) {
      local_4a0 = (undefined8 *******)*local_4a0;
    }
    *(uint *)pppppppuVar8 = uVar10;
    if ((int)(uint)local_4b0 < local_4b0._4_4_) {
      *(undefined8 ********)((long)local_4a8 + (long)(int)(uint)local_4b0 * 8) = pppppppuVar8;
      local_4b0._0_4_ = (uint)local_4b0 + 1;
    }
  }
LAB_036889e8:
  lVar16 = *(long *)PTR_DAT_04bb4e28;
  if (((lVar16 != 0) && (*(long *)puVar5 != 0)) && (*(int *)(lVar16 + 0xe0) != 0)) {
    plVar22 = *(long **)(lVar16 + 0xe8);
    plVar2 = plVar22 + *(int *)(lVar16 + 0xe0);
    do {
      if (((*(ushort *)(*plVar22 + 0x114) & 0x60) == 0) &&
         (local_a0._0_4_ = *(int *)(*plVar22 + 0xd8), (int)local_a0 != 0)) {
        iVar11 = FUN_03688ad0();
        uVar13 = 0;
        uVar10 = (uint)local_4b0;
        if ((int)(uint)local_4b0 < 5) {
          uVar10 = 4;
        }
        piVar12 = param_1;
        do {
          if (uVar13 < (uint)local_4b0) {
            piVar19 = *(int **)((long)local_4a8 + uVar13 * 8);
          }
          else {
            piVar19 = (int *)0x0;
          }
          if (*piVar19 == iVar11) {
            if ((uVar13 & 0xfffffffc) != 0) {
              piVar12 = param_1;
            }
            *piVar12 = *piVar12 + 1;
            break;
          }
          uVar13 = uVar13 + 1;
          piVar12 = piVar12 + 1;
        } while (uVar10 != uVar13);
      }
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar2);
  }
  return;
}

