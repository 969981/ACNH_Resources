
void FUN_02d5fe90(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint *puVar20;
  undefined2 *puVar21;
  long *plVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  undefined2 local_88 [2];
  undefined2 local_84 [2];
  int local_80;
  undefined1 uStack_79;
  undefined1 local_78 [16];
  undefined1 *local_68;
  
  puVar7 = PTR_DAT_04bc4d98;
  if ((*(long *)(param_1 + 0x1680) == 0) ||
     (lVar24 = *(long *)(*(long *)(param_1 + 0x1680) + 0x570), lVar24 == 0)) {
    puVar19 = (undefined8 *)0x0;
    puVar18 = (undefined8 *)0x0;
    local_88[0] = *(undefined2 *)PTR_DAT_04bb3170;
    local_84[0] = local_88[0];
  }
  else {
    iVar9 = *(int *)(lVar24 + 0x3d4);
    uVar25 = 0xffffffff;
    if ((int)param_2 < iVar9) {
      iVar4 = *(int *)(lVar24 + 0x2e8);
      iVar14 = 0;
      if (iVar4 != 0) {
        iVar14 = (int)param_2 / iVar4;
      }
      iVar16 = *(int *)(lVar24 + 0x430) - *(int *)(lVar24 + 0x438);
      if ((*(byte *)(lVar24 + 1000) >> 1 & 1) != 0) {
        uVar23 = *(uint *)(lVar24 + 0x434);
        uVar25 = 0;
        if ((int)uVar23 < iVar16) {
          uVar25 = ~uVar23;
        }
        if (iVar16 < 0) {
          uVar25 = uVar23 + 1;
        }
        iVar16 = uVar25 + iVar16;
      }
      uVar25 = (param_2 - iVar14 * iVar4) + (iVar14 - iVar16) * iVar4;
      if (*(int *)(lVar24 + 0x208) <= (int)uVar25 || 0x7fffffff < uVar25) {
        uVar25 = 0xffffffff;
      }
    }
    uVar23 = 0xffffffff;
    if ((int)param_3 < iVar9) {
      iVar4 = *(int *)(lVar24 + 0x2e8);
      iVar14 = 0;
      if (iVar4 != 0) {
        iVar14 = (int)param_3 / iVar4;
      }
      iVar16 = *(int *)(lVar24 + 0x430) - *(int *)(lVar24 + 0x438);
      if ((*(byte *)(lVar24 + 1000) >> 1 & 1) != 0) {
        uVar15 = *(uint *)(lVar24 + 0x434);
        uVar23 = 0;
        if ((int)uVar15 < iVar16) {
          uVar23 = ~uVar15;
        }
        if (iVar16 < 0) {
          uVar23 = uVar15 + 1;
        }
        iVar16 = uVar23 + iVar16;
      }
      uVar23 = (param_3 - iVar14 * iVar4) + (iVar14 - iVar16) * iVar4;
      if (*(int *)(lVar24 + 0x208) <= (int)uVar23 || 0x7fffffff < uVar23) {
        uVar23 = 0xffffffff;
      }
    }
    if ((int)param_2 < iVar9) {
      iVar9 = *(int *)(lVar24 + 0x2e8);
      iVar4 = 0;
      if (iVar9 != 0) {
        iVar4 = (int)param_2 / iVar9;
      }
      iVar14 = *(int *)(lVar24 + 0x430) - *(int *)(lVar24 + 0x438);
      if ((*(byte *)(lVar24 + 1000) >> 1 & 1) != 0) {
        uVar5 = *(uint *)(lVar24 + 0x434);
        uVar15 = 0;
        if ((int)uVar5 < iVar14) {
          uVar15 = ~uVar5;
        }
        if (iVar14 < 0) {
          uVar15 = uVar5 + 1;
        }
        iVar14 = uVar15 + iVar14;
      }
      uVar15 = (param_2 - iVar4 * iVar9) + (iVar4 - iVar14) * iVar9;
      uVar5 = *(uint *)(lVar24 + 0x208);
      bVar8 = (int)uVar15 < 0;
      bVar1 = (int)uVar5 <= (int)uVar15;
      if (bVar8 || bVar1) {
        uVar15 = 0xffffffff;
      }
      if ((((bVar8 || bVar1) || (int)uVar5 <= (int)uVar15) || uVar5 < uVar15) ||
          ((!bVar8 && !bVar1) && (int)uVar15 < (int)uVar5) && uVar5 == uVar15) goto LAB_02d5fffc;
      puVar18 = *(undefined8 **)(*(long *)(lVar24 + 0x210) + (ulong)uVar15 * 8);
    }
    else {
LAB_02d5fffc:
      puVar18 = (undefined8 *)0x0;
    }
    if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    if (puVar18 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)0x0;
    }
    else {
      uVar10 = (**(code **)*puVar18)(puVar18,PTR_DAT_04bc4d90);
      if ((uVar10 & 1) == 0) {
        puVar18 = (undefined8 *)0x0;
      }
    }
    if ((int)param_3 < *(int *)(lVar24 + 0x3d4)) {
      iVar9 = *(int *)(lVar24 + 0x2e8);
      iVar4 = 0;
      if (iVar9 != 0) {
        iVar4 = (int)param_3 / iVar9;
      }
      iVar14 = *(int *)(lVar24 + 0x430) - *(int *)(lVar24 + 0x438);
      if ((*(byte *)(lVar24 + 1000) >> 1 & 1) != 0) {
        uVar5 = *(uint *)(lVar24 + 0x434);
        uVar15 = 0;
        if ((int)uVar5 < iVar14) {
          uVar15 = ~uVar5;
        }
        if (iVar14 < 0) {
          uVar15 = uVar5 + 1;
        }
        iVar14 = uVar15 + iVar14;
      }
      uVar15 = (param_3 - iVar4 * iVar9) + (iVar4 - iVar14) * iVar9;
      uVar5 = *(uint *)(lVar24 + 0x208);
      bVar8 = (int)uVar15 < 0;
      bVar1 = (int)uVar5 <= (int)uVar15;
      if (bVar8 || bVar1) {
        uVar15 = 0xffffffff;
      }
      if ((((bVar8 || bVar1) || (int)uVar5 <= (int)uVar15) || uVar5 < uVar15) ||
          ((!bVar8 && !bVar1) && (int)uVar15 < (int)uVar5) && uVar5 == uVar15) goto LAB_02d600e0;
      puVar19 = *(undefined8 **)(*(long *)(lVar24 + 0x210) + (ulong)uVar15 * 8);
      bVar3 = *puVar7;
    }
    else {
LAB_02d600e0:
      puVar19 = (undefined8 *)0x0;
      bVar3 = *puVar7;
    }
    if (((bVar3 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    if (puVar19 == (undefined8 *)0x0) {
      puVar19 = (undefined8 *)0x0;
    }
    else {
      uVar10 = (**(code **)*puVar19)(puVar19,PTR_DAT_04bc4d90);
      if ((uVar10 & 1) == 0) {
        puVar19 = (undefined8 *)0x0;
      }
    }
    puVar21 = (undefined2 *)PTR_DAT_04bb3170;
    local_88[0] = *(undefined2 *)PTR_DAT_04bb3170;
    local_84[0] = local_88[0];
    if (uVar23 != 0xffffffff) {
      uVar15 = *(uint *)(param_1 + 0x1578);
      if ((int)uVar15 < 0) {
        iVar9 = -1;
        local_78._0_4_ = 0xffffffff;
        if (-1 < (int)param_2) goto LAB_02d601dc;
      }
      else {
        iVar9 = -1;
        if ((int)uVar15 < *(int *)(param_1 + 0x1560)) {
          lVar24 = param_1 + 0x1550;
          uVar5 = uVar15 + 1 & 3;
          if (2 < uVar15) {
            uVar15 = uVar15 + 1 & 0xfffffffc;
            do {
              uVar15 = uVar15 - 4;
              lVar24 = *(long *)(*(long *)(*(long *)(*(long *)(lVar24 + 8) + 8) + 8) + 8);
            } while (uVar15 != 0);
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            lVar24 = *(long *)(lVar24 + 8);
          }
          iVar9 = -1;
          if ((lVar24 != 0) && (lVar24 = lVar24 - *(int *)(param_1 + 0x1564), lVar24 != 0)) {
            iVar9 = *(int *)(lVar24 + 0x270);
          }
        }
        local_78._0_4_ = iVar9;
        if (-1 < (int)param_2) {
LAB_02d601dc:
          if (local_78._0_4_ == 0x53) {
            if ((int)param_2 < *(int *)(param_1 + 0x1db0)) {
              lVar24 = 0x1db8;
              goto LAB_02d60214;
            }
          }
          else if ((local_78._0_4_ == 0x52) && ((int)param_2 < *(int *)(param_1 + 0x1750))) {
            lVar24 = 0x1758;
LAB_02d60214:
            iVar4 = **(int **)(*(long *)(param_1 + lVar24) + (ulong)param_2 * 8);
            if (iVar4 != -1) {
              FUN_0344d0c0(local_84,iVar4,iVar9 == 0x53);
            }
          }
        }
      }
      if (*(long *)(param_1 + 0x218) != 0) {
        if (*(uint *)(param_1 + 0x210) <= uVar23) {
          uVar23 = 0;
        }
        plVar22 = (long *)(*(long *)(param_1 + 0x218) + (long)(int)uVar23 * 0x20);
        puVar20 = (uint *)(plVar22 + 1);
        uVar23 = *puVar20;
        if ((uVar23 < 100) &&
           (lVar24 = param_1 + (ulong)uVar23 * 0x30, 2 < *(uint *)(lVar24 + 0x27c))) {
          *(undefined4 *)(lVar24 + 0x27c) = 2;
        }
        lVar24 = param_1 + 0x250;
        lVar2 = lVar24 + (ulong)uVar23 * 0x30;
        if (99 < uVar23) {
          lVar2 = lVar24;
        }
        if (*(int *)(lVar2 + 0x2c) != 0) {
          iVar9 = *(int *)(lVar2 + 0x2c);
          if (iVar9 == 1) {
            if ((*(ushort *)(lVar2 + 0x10) >> 1 & 1) == 0) {
              uVar11 = 0;
              goto LAB_02d60330;
            }
          }
          else if (iVar9 == 4) {
            uVar10 = FUN_01596728(lVar2);
            if ((uVar10 & 1) != 0) {
              uVar11 = 5;
              goto LAB_02d60330;
            }
          }
          else if ((iVar9 == 2) &&
                  (((*(ushort *)(lVar2 + 0x10) >> 1 & 1) == 0 ||
                   (uVar10 = FUN_015a30c0(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x100),lVar2),
                   (uVar10 & 1) != 0)))) {
            uVar11 = 1;
LAB_02d60330:
            *(undefined4 *)(lVar2 + 0x2c) = uVar11;
          }
        }
        uVar23 = 0;
        iVar9 = 0;
        do {
          piVar13 = (int *)(lVar24 + (long)iVar9 * 0x30 + 0x2c);
          if (*piVar13 == 0) {
            *(undefined2 *)(lVar24 + (long)iVar9 * 0x30 + 0x28) = local_84[0];
            *piVar13 = 3;
            if (*puVar20 != uVar23) {
              *puVar20 = uVar23;
              *(undefined4 *)(plVar22 + 3) = 1;
            }
            goto LAB_02d603a4;
          }
          uVar23 = uVar23 + 1;
          iVar9 = iVar9 + 1;
        } while (uVar23 != 100);
        if (*puVar20 != 0xffffffff) {
          *puVar20 = 0xffffffff;
        }
LAB_02d603a4:
        (**(code **)(*plVar22 + 0x18))(plVar22,param_1 + 0x248);
        puVar21 = (undefined2 *)PTR_DAT_04bb3170;
      }
    }
    if (uVar25 != 0xffffffff) {
      uVar23 = *(uint *)(param_1 + 0x1578);
      if ((int)uVar23 < 0) {
        iVar9 = -1;
        local_78._0_4_ = 0xffffffff;
        if (-1 < (int)param_3) goto LAB_02d6045c;
LAB_02d604c8:
        local_88[0] = *puVar21;
      }
      else {
        iVar9 = -1;
        if ((int)uVar23 < *(int *)(param_1 + 0x1560)) {
          lVar24 = param_1 + 0x1550;
          uVar15 = uVar23 + 1 & 3;
          if (2 < uVar23) {
            uVar23 = uVar23 + 1 & 0xfffffffc;
            do {
              uVar23 = uVar23 - 4;
              lVar24 = *(long *)(*(long *)(*(long *)(*(long *)(lVar24 + 8) + 8) + 8) + 8);
            } while (uVar23 != 0);
          }
          for (; uVar15 != 0; uVar15 = uVar15 - 1) {
            lVar24 = *(long *)(lVar24 + 8);
          }
          iVar9 = -1;
          if ((lVar24 != 0) && (lVar24 = lVar24 - *(int *)(param_1 + 0x1564), lVar24 != 0)) {
            iVar9 = *(int *)(lVar24 + 0x270);
          }
        }
        local_78._0_4_ = iVar9;
        if ((int)param_3 < 0) goto LAB_02d604c8;
LAB_02d6045c:
        if (local_78._0_4_ == 0x53) {
          if ((int)param_3 < *(int *)(param_1 + 0x1db0)) {
            lVar24 = 0x1db8;
            goto LAB_02d60494;
          }
          goto LAB_02d604c8;
        }
        if ((local_78._0_4_ != 0x52) || (*(int *)(param_1 + 0x1750) <= (int)param_3))
        goto LAB_02d604c8;
        lVar24 = 0x1758;
LAB_02d60494:
        iVar4 = **(int **)(*(long *)(param_1 + lVar24) + (ulong)param_3 * 8);
        if (iVar4 == -1) goto LAB_02d604c8;
        FUN_0344d0c0(local_88,iVar4,iVar9 == 0x53);
      }
      if (*(long *)(param_1 + 0x218) != 0) {
        if (*(uint *)(param_1 + 0x210) <= uVar25) {
          uVar25 = 0;
        }
        plVar22 = (long *)(*(long *)(param_1 + 0x218) + (long)(int)uVar25 * 0x20);
        puVar20 = (uint *)(plVar22 + 1);
        uVar25 = *puVar20;
        if ((uVar25 < 100) &&
           (lVar24 = param_1 + (ulong)uVar25 * 0x30, 2 < *(uint *)(lVar24 + 0x27c))) {
          *(undefined4 *)(lVar24 + 0x27c) = 2;
        }
        lVar24 = param_1 + 0x250;
        lVar2 = lVar24 + (ulong)uVar25 * 0x30;
        if (99 < uVar25) {
          lVar2 = lVar24;
        }
        if (*(int *)(lVar2 + 0x2c) != 0) {
          iVar9 = *(int *)(lVar2 + 0x2c);
          if (iVar9 == 1) {
            if ((*(ushort *)(lVar2 + 0x10) >> 1 & 1) == 0) {
              uVar11 = 0;
              goto LAB_02d605c0;
            }
          }
          else if (iVar9 == 4) {
            uVar10 = FUN_01596728(lVar2);
            if ((uVar10 & 1) != 0) {
              uVar11 = 5;
              goto LAB_02d605c0;
            }
          }
          else if ((iVar9 == 2) &&
                  (((*(ushort *)(lVar2 + 0x10) >> 1 & 1) == 0 ||
                   (uVar10 = FUN_015a30c0(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x100),lVar2),
                   (uVar10 & 1) != 0)))) {
            uVar11 = 1;
LAB_02d605c0:
            *(undefined4 *)(lVar2 + 0x2c) = uVar11;
          }
        }
        uVar25 = 0;
        iVar9 = 0;
        do {
          piVar13 = (int *)(lVar24 + (long)iVar9 * 0x30 + 0x2c);
          if (*piVar13 == 0) {
            *(undefined2 *)(lVar24 + (long)iVar9 * 0x30 + 0x28) = local_88[0];
            *piVar13 = 3;
            if (*puVar20 != uVar25) {
              *puVar20 = uVar25;
              *(undefined4 *)(plVar22 + 3) = 1;
            }
            goto LAB_02d60634;
          }
          uVar25 = uVar25 + 1;
          iVar9 = iVar9 + 1;
        } while (uVar25 != 100);
        if (*puVar20 != 0xffffffff) {
          *puVar20 = 0xffffffff;
        }
LAB_02d60634:
        (**(code **)(*plVar22 + 0x18))(plVar22,param_1 + 0x248);
      }
    }
  }
  uVar25 = *(uint *)(param_1 + 0x1578);
  local_80 = -1;
  if ((-1 < (int)uVar25) && ((int)uVar25 < *(int *)(param_1 + 0x1560))) {
    lVar24 = param_1 + 0x1550;
    uVar23 = uVar25 + 1 & 3;
    if (2 < uVar25) {
      uVar25 = uVar25 + 1 & 0xfffffffc;
      do {
        uVar25 = uVar25 - 4;
        lVar24 = *(long *)(*(long *)(*(long *)(*(long *)(lVar24 + 8) + 8) + 8) + 8);
      } while (uVar25 != 0);
    }
    for (; uVar23 != 0; uVar23 = uVar23 - 1) {
      lVar24 = *(long *)(lVar24 + 8);
    }
    local_80 = -1;
    if ((lVar24 != 0) && (lVar24 = lVar24 - *(int *)(param_1 + 0x1564), lVar24 != 0)) {
      local_80 = *(int *)(lVar24 + 0x270);
    }
  }
  local_78 = FUN_02642d30();
  uVar10 = local_78._8_8_ & 0xffffffff;
  if (uVar10 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00d72dc0();
  }
  local_68 = &uStack_79;
  lVar24 = (*(code *)(&PTR_LAB_04a88330)[uVar10])(&local_68,local_78);
  if (lVar24 != 0) {
    if (local_80 == 0x52) {
      if ((param_2 < *(uint *)(param_1 + 0x1750)) && (param_3 < *(uint *)(param_1 + 0x1750))) {
        lVar24 = *(long *)(param_1 + 0x1758);
        plVar22 = (long *)(param_1 + 0x1758);
        goto LAB_02d60768;
      }
    }
    else if (((local_80 == 0x53) && (param_2 < *(uint *)(param_1 + 0x1db0))) &&
            (param_3 < *(uint *)(param_1 + 0x1db0))) {
      lVar24 = *(long *)(param_1 + 0x1db8);
      plVar22 = (long *)(param_1 + 0x1db8);
LAB_02d60768:
      puVar12 = (undefined8 *)(lVar24 + (long)(int)param_3 * 8);
      uVar17 = *puVar12;
      *puVar12 = *(undefined8 *)(lVar24 + (long)(int)param_2 * 8);
      *(undefined8 *)(*plVar22 + (long)(int)param_2 * 8) = uVar17;
    }
  }
  if ((puVar18 != (undefined8 *)0x0) && (plVar22 = *(long **)puVar18[0x5e], plVar22 != (long *)0x0))
  {
    local_78._8_4_ = 0x14;
    local_78._0_8_ = PTR_DAT_04bc4f00 + 0x10;
    (**(code **)(*plVar22 + 0x18))(plVar22,local_78);
    (**(code **)(plVar22[3] + 0x158))(0,plVar22[1]);
  }
  iVar4 = *(int *)(param_1 + 0x26e0);
  iVar9 = *(int *)(param_1 + 0x26e4);
  if (iVar4 < iVar9) {
    puVar12 = *(undefined8 **)(param_1 + 0x26f0);
    if (puVar12 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x26f0) = *puVar12;
    }
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    uVar6 = *(undefined2 *)PTR_DAT_04bb3170;
    *(undefined4 *)((long)puVar12 + 0xc) = 0xffffffff;
    *(undefined2 *)(puVar12 + 1) = uVar6;
    if (*(int *)(param_1 + 0x26e0) < *(int *)(param_1 + 0x26e4)) {
      *(undefined8 **)(*(long *)(param_1 + 0x26e8) + (long)*(int *)(param_1 + 0x26e0) * 8) = puVar12
      ;
      *(int *)(param_1 + 0x26e0) = *(int *)(param_1 + 0x26e0) + 1;
    }
    *puVar12 = puVar18;
    *(uint *)((long)puVar12 + 0xc) = param_2;
    *(undefined1 *)(puVar12 + 2) = 0;
    *(undefined2 *)(puVar12 + 1) = local_84[0];
    iVar4 = *(int *)(param_1 + 0x26e0);
    iVar9 = *(int *)(param_1 + 0x26e4);
  }
  if (iVar4 < iVar9) {
    plVar22 = *(long **)(param_1 + 0x26f0);
    if (plVar22 != (long *)0x0) {
      *(long *)(param_1 + 0x26f0) = *plVar22;
    }
    plVar22[1] = 0;
    plVar22[2] = 0;
    *plVar22 = 0;
    uVar6 = *(undefined2 *)PTR_DAT_04bb3170;
    *(undefined4 *)((long)plVar22 + 0xc) = 0xffffffff;
    *(undefined2 *)(plVar22 + 1) = uVar6;
    if (*(int *)(param_1 + 0x26e0) < *(int *)(param_1 + 0x26e4)) {
      *(long **)(*(long *)(param_1 + 0x26e8) + (long)*(int *)(param_1 + 0x26e0) * 8) = plVar22;
      *(int *)(param_1 + 0x26e0) = *(int *)(param_1 + 0x26e0) + 1;
    }
    *plVar22 = (long)puVar19;
    *(uint *)((long)plVar22 + 0xc) = param_3;
    *(undefined1 *)(plVar22 + 2) = 0;
    *(undefined2 *)(plVar22 + 1) = local_88[0];
  }
  FUN_02d6b500(*(undefined8 *)(param_1 + 0x1680),0);
  if (*(long *)(param_1 + 0x1680) == 0) {
    return;
  }
  lVar24 = *(long *)(*(long *)(param_1 + 0x1680) + 0x570);
  if (lVar24 == 0) {
    return;
  }
  if (*(uint *)(lVar24 + 0x298) < 2) {
    uVar25 = 0;
    if (param_3 != 0) goto LAB_02d6090c;
  }
  else {
    uVar25 = *(int *)(lVar24 + 0x444) + *(int *)(lVar24 + 0x2e8) * *(int *)(lVar24 + 0x440);
    if (uVar25 != param_3) {
LAB_02d6090c:
      if (uVar25 != param_2) {
        return;
      }
    }
  }
  uVar23 = *(uint *)(param_1 + 0x1578);
  iVar9 = -1;
  if ((-1 < (int)uVar23) && ((int)uVar23 < *(int *)(param_1 + 0x1560))) {
    lVar24 = param_1 + 0x1550;
    uVar15 = uVar23 + 1 & 3;
    if (2 < uVar23) {
      uVar23 = uVar23 + 1 & 0xfffffffc;
      do {
        uVar23 = uVar23 - 4;
        lVar24 = *(long *)(*(long *)(*(long *)(*(long *)(lVar24 + 8) + 8) + 8) + 8);
      } while (uVar23 != 0);
    }
    for (; uVar15 != 0; uVar15 = uVar15 - 1) {
      lVar24 = *(long *)(lVar24 + 8);
    }
    iVar9 = -1;
    if ((lVar24 != 0) && (lVar24 = lVar24 - *(int *)(param_1 + 0x1564), lVar24 != 0)) {
      iVar9 = *(int *)(lVar24 + 0x270);
    }
  }
  local_78._0_4_ = iVar9;
  if (-1 < (int)uVar25) {
    if (iVar9 == 0x53) {
      if ((int)uVar25 < *(int *)(param_1 + 0x1db0)) {
        lVar24 = 0x1db8;
        goto LAB_02d609d4;
      }
    }
    else if ((iVar9 == 0x52) && ((int)uVar25 < *(int *)(param_1 + 0x1750))) {
      lVar24 = 0x1758;
LAB_02d609d4:
      iVar4 = **(int **)(*(long *)(param_1 + lVar24) + (ulong)uVar25 * 8);
      if (iVar4 != -1) {
        FUN_0344d0c0((undefined2 *)(param_1 + 0x1668),iVar4,iVar9 == 0x53);
        goto LAB_02d60a0c;
      }
    }
  }
  *(undefined2 *)(param_1 + 0x1668) = *(undefined2 *)PTR_DAT_04bb3170;
LAB_02d60a0c:
  *(uint *)(param_1 + 0x16ac) = uVar25;
  return;
}

