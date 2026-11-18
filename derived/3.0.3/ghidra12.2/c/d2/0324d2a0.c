
void FUN_0324d2a0(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  char cVar16;
  uint *puVar17;
  int *piVar18;
  undefined8 *puVar19;
  uint uVar20;
  undefined8 uVar21;
  uint *puVar22;
  long *plVar23;
  int iVar24;
  bool bVar25;
  undefined *local_90;
  long lStack_88;
  undefined *local_80;
  undefined4 local_78;
  uint local_64;
  
  lVar13 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar13 + 0x1d40) < 1) {
    if (*(long *)(lVar13 + 0x1c30) == 0) {
      return;
    }
    puVar22 = *(uint **)(*(long *)(lVar13 + 0x1c30) + 8);
    if (puVar22 == (uint *)0x0) {
      return;
    }
    if ((param_2 < *(uint *)(lVar13 + 0x1c48)) &&
       (*(char *)(*(long *)(lVar13 + 0x1c50) + (long)(int)param_2) == '\0')) {
      return;
    }
    if (*puVar22 <= param_2) {
      return;
    }
    if (puVar22[1] == 0) {
      return;
    }
    if ((ushort)puVar22[2] == 0) {
      return;
    }
    iVar7 = 0xc;
    if (*(char *)((long)puVar22 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar22 = (uint *)((ulong)(puVar22[1] * param_2 + (uint)(ushort)puVar22[2] * 8 + iVar7) +
                      (long)puVar22);
  }
  else {
    if (*(uint *)(lVar13 + 0x1d40) <= param_2) {
      return;
    }
    uVar10 = param_2;
    if (*(uint *)(lVar13 + 0x1d30) <= param_2) {
      uVar10 = 0;
    }
    puVar22 = *(uint **)(*(long *)(lVar13 + 0x1d38) + (ulong)uVar10 * 8);
  }
  if (puVar22 == (uint *)0x0) {
    return;
  }
  lVar13 = *(long *)(param_1 + 0x218);
  if ((int)param_2 < *(int *)(lVar13 + 0x3d4)) {
    iVar7 = *(int *)(lVar13 + 0x2e8);
    iVar24 = 0;
    if (iVar7 != 0) {
      iVar24 = (int)param_2 / iVar7;
    }
    iVar14 = *(int *)(lVar13 + 0x430) - *(int *)(lVar13 + 0x438);
    if ((*(byte *)(lVar13 + 1000) >> 1 & 1) != 0) {
      uVar6 = *(uint *)(lVar13 + 0x434);
      uVar10 = 0;
      if ((int)uVar6 < iVar14) {
        uVar10 = ~uVar6;
      }
      if (iVar14 < 0) {
        uVar10 = uVar6 + 1;
      }
      iVar14 = uVar10 + iVar14;
    }
    uVar10 = (param_2 - iVar24 * iVar7) + (iVar24 - iVar14) * iVar7;
    uVar6 = *(uint *)(lVar13 + 0x208);
    bVar4 = (int)uVar10 < 0;
    bVar25 = (int)uVar6 <= (int)uVar10;
    if (bVar4 || bVar25) {
      uVar10 = 0xffffffff;
    }
    if ((((bVar4 || bVar25) || (int)uVar6 <= (int)uVar10) || uVar6 < uVar10) ||
        ((!bVar4 && !bVar25) && (int)uVar10 < (int)uVar6) && uVar6 == uVar10) goto LAB_0324d380;
    puVar19 = *(undefined8 **)(*(long *)(lVar13 + 0x210) + (ulong)uVar10 * 8);
  }
  else {
LAB_0324d380:
    puVar19 = (undefined8 *)0x0;
  }
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if (puVar19 == (undefined8 *)0x0) {
    return;
  }
  uVar9 = (**(code **)*puVar19)(puVar19,PTR_DAT_04bc4d90);
  puVar3 = PTR_DAT_04bb6448;
  puVar2 = PTR_DAT_04bb6440;
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (*puVar22 != 0) {
    cVar16 = *PTR_DAT_04bb6440;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar3 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar10 = *(uint *)(puVar3 + 0x48);
        if (-1 < (int)uVar10) {
          lVar13 = (ulong)uVar10 + (long)puVar22;
          goto LAB_0324d518;
        }
        if (uVar10 != 0xffffffff) break;
      }
      puVar17 = (uint *)(ulong)*puVar22;
      lVar13 = 0;
      if ((*puVar22 == 0) || (puVar22 == puVar17)) goto LAB_0324d518;
      lVar13 = 0xc;
      if (*(char *)((long)puVar22 + (10 - (long)puVar17)) != '\0') {
        lVar13 = 0x1c;
      }
      lVar12 = (long)puVar22 + (lVar13 - (long)puVar17);
      if (lVar12 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar17));
      *(undefined4 *)(puVar3 + 0x48) = 0xfffffffe;
      lVar13 = 0;
      if (uVar9 == 0) goto LAB_0324d518;
      piVar18 = (int *)(lVar12 + 4);
      while (piVar18[-1] != 0x45f320f2) {
        piVar18 = piVar18 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          lVar13 = 0;
          goto LAB_0324d518;
        }
      }
      iVar7 = 0;
      if (*piVar18 != -1) {
        iVar7 = *piVar18;
      }
      *(int *)(puVar3 + 0x48) = iVar7;
    } while (*puVar22 != 0);
  }
  lVar13 = 0;
LAB_0324d518:
  lStack_88 = *(long *)PTR_PTR_04bb6438;
  if (lVar13 != 0) {
    lStack_88 = lVar13;
  }
  local_90 = PTR_DAT_04bb2020 + 0x10;
  plVar23 = *(long **)(puVar19[0x5e] + (ulong)(2 < *(uint *)(puVar19 + 0x5d)) * 0x10);
  if (plVar23 != (long *)0x0) {
    uVar9 = FUN_0279c960(param_1 + 0x1f8,&local_90,1);
    local_80 = PTR_DAT_04bc4e68;
    if (((uVar9 & 1) == 0) && (uVar9 = FUN_032566f0(param_1 + 0x1f8,&local_90), (uVar9 & 1) != 0)) {
      local_80 = local_80 + 0x10;
      local_78 = 7;
      (**(code **)(*plVar23 + 0x18))(plVar23,&local_80);
      puVar11 = (undefined8 *)(plVar23[3] + 0x1c0);
    }
    else {
      local_80 = local_80 + 0x10;
      local_78 = 6;
      (**(code **)(*plVar23 + 0x18))(plVar23,&local_80);
      puVar11 = (undefined8 *)(plVar23[3] + 0x1b8);
    }
    (*(code *)*puVar11)(plVar23[1]);
  }
  lVar13 = param_1 + 0x1f8;
  uVar5 = FUN_02798760(lVar13,&local_90);
  uVar6 = FUN_027a51c0(&local_90);
  uVar10 = uVar6;
  if (5 < (int)uVar6) {
    uVar10 = 6;
  }
  uVar9 = FUN_03256ab0(&local_90);
  if ((uVar9 & 1) == 0) {
    iVar7 = FUN_02798b88(lVar13,&local_90,uVar5);
    if (0 < (int)uVar6) {
      lVar12 = 0x28;
      if (*(uint *)(puVar19 + 0x5d) < 6) {
        lVar12 = 0;
      }
      plVar23 = *(long **)(puVar19[0x5e] + lVar12);
      if (plVar23 != (long *)0x0) {
        local_80 = PTR_DAT_04bc4f00 + 0x10;
        local_78 = 0x14;
        (**(code **)(*plVar23 + 0x18))(plVar23,&local_80);
        (**(code **)(plVar23[3] + 0x158))((float)(int)(uVar10 - 1),plVar23[1]);
      }
      if (iVar7 < 1) {
        uVar6 = 0;
      }
      else {
        iVar24 = 0;
        uVar6 = 0;
        do {
          iVar24 = iVar24 + 1;
          uVar8 = FUN_0279bb10(lVar13,&local_90,iVar24);
          uVar6 = uVar6 + (uVar8 & 1);
        } while (iVar7 != iVar24);
      }
      lVar12 = *(long *)(param_1 + 0x218);
      iVar24 = -6;
      if ((int)param_2 < *(int *)(lVar12 + 0x3d4)) {
        iVar24 = *(int *)(lVar12 + 0x2e8);
        iVar14 = 0;
        if (iVar24 != 0) {
          iVar14 = (int)param_2 / iVar24;
        }
        iVar15 = *(int *)(lVar12 + 0x430) - *(int *)(lVar12 + 0x438);
        if ((*(byte *)(lVar12 + 1000) >> 1 & 1) != 0) {
          uVar1 = *(uint *)(lVar12 + 0x434);
          uVar8 = 0;
          if ((int)uVar1 < iVar15) {
            uVar8 = ~uVar1;
          }
          if (iVar15 < 0) {
            uVar8 = uVar1 + 1;
          }
          iVar15 = uVar8 + iVar15;
        }
        uVar8 = (param_2 - iVar14 * iVar24) + (iVar14 - iVar15) * iVar24;
        iVar24 = uVar8 * 6;
        if (*(int *)(lVar12 + 0x208) <= (int)uVar8 || 0x7fffffff < uVar8) {
          iVar24 = -6;
        }
      }
      uVar8 = 0;
      if ((int)uVar10 < 2) {
        uVar10 = 1;
      }
      do {
        uVar1 = uVar8;
        if (*(uint *)(puVar19 + 0x68) <= uVar8) {
          uVar1 = 0;
        }
        if (*(long *)(puVar19[0x69] + (ulong)uVar1 * 8) != 0) {
          uVar1 = iVar24 + uVar8;
          uVar20 = uVar1;
          if (*(uint *)(param_1 + 0x230) <= uVar1) {
            uVar20 = 0;
          }
          plVar23 = *(long **)(*(long *)(param_1 + 0x238) + (long)(int)uVar20 * 8);
          if (uVar8 < uVar6) {
            uVar9 = (**(code **)(*plVar23 + 0xf0))(plVar23);
            if ((uVar9 & 1) != 0) {
              *(undefined1 *)((long)plVar23 + 0x21c) = 1;
              *(undefined4 *)(plVar23 + 0x43) = 0xffffffff;
              if (*(int *)((long)plVar23 + (ulong)*(byte *)(plVar23 + 0x40) * 4 + 0x1f0) == -1) {
                *(undefined4 *)((long)plVar23 + (ulong)*(byte *)(plVar23 + 0x40) * 4 + 0x1f0) = 2;
              }
            }
            puVar22 = (uint *)FUN_0279b8c0(lVar13,&local_90,uVar8 + 1);
            local_64 = *puVar22;
            uVar9 = nn::time::IsValidDate
                              (local_64 & 0xffff,local_64 >> 0x10 & 0xff,local_64 >> 0x18);
            if ((uVar9 & 1) == 0) {
              uVar20 = (uint)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
              uVar9 = nn::time::IsValidDate
                                (uVar20 & 0xffff,uVar20 >> 0x10 & 0xff,
                                 (uint)((ulong)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060)
                                       >> 0x18) & 0xff);
              if ((uVar9 & 1) != 0) {
                local_64 = uVar20;
              }
            }
            uVar20 = uVar1;
            if (*(uint *)(param_1 + 0x230) <= uVar1) {
              uVar20 = 0;
            }
            FUN_031284e0(*(undefined8 *)(*(long *)(param_1 + 0x238) + (long)(int)uVar20 * 8),
                         &local_64);
            if (*(uint *)(param_1 + 0x230) <= uVar1) {
              uVar1 = 0;
            }
            uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x238) + (long)(int)uVar1 * 8);
            uVar5 = FUN_0279cca8(&local_90);
            local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar5);
            FUN_03128bd0(uVar21,&local_90,uVar5);
          }
          else {
            (**(code **)(*plVar23 + 0xb0))(plVar23);
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar10 != uVar8);
      bVar25 = (int)uVar6 < iVar7;
      goto LAB_0324dad0;
    }
  }
  else if (0 < (int)uVar6) {
    lVar12 = *(long *)(param_1 + 0x218);
    iVar7 = -6;
    if ((int)param_2 < *(int *)(lVar12 + 0x3d4)) {
      iVar7 = *(int *)(lVar12 + 0x2e8);
      iVar24 = 0;
      if (iVar7 != 0) {
        iVar24 = (int)param_2 / iVar7;
      }
      iVar14 = *(int *)(lVar12 + 0x430) - *(int *)(lVar12 + 0x438);
      if ((*(byte *)(lVar12 + 1000) >> 1 & 1) != 0) {
        uVar8 = *(uint *)(lVar12 + 0x434);
        uVar6 = 0;
        if ((int)uVar8 < iVar14) {
          uVar6 = ~uVar8;
        }
        if (iVar14 < 0) {
          uVar6 = uVar8 + 1;
        }
        iVar14 = uVar6 + iVar14;
      }
      uVar6 = (param_2 - iVar24 * iVar7) + (iVar24 - iVar14) * iVar7;
      iVar7 = uVar6 * 6;
      if (*(int *)(lVar12 + 0x208) <= (int)uVar6 || 0x7fffffff < uVar6) {
        iVar7 = -6;
      }
    }
    bVar25 = false;
    uVar6 = 0;
    if ((int)uVar10 < 2) {
      uVar10 = 1;
    }
    do {
      uVar8 = uVar6 + 1;
      uVar1 = uVar6;
      if (*(uint *)(puVar19 + 0x68) <= uVar6) {
        uVar1 = 0;
      }
      if (*(long *)(puVar19[0x69] + (ulong)uVar1 * 8) != 0) {
        uVar9 = FUN_0279d6d0(lVar13,&local_90,uVar6);
        uVar1 = iVar7 + uVar6;
        if ((uVar9 & 1) == 0) {
          if (*(uint *)(param_1 + 0x230) <= uVar1) {
            uVar1 = 0;
          }
          (**(code **)(**(long **)(*(long *)(param_1 + 0x238) + (long)(int)uVar1 * 8) + 0xb0))();
        }
        else {
          uVar9 = FUN_0279bb10(lVar13,&local_90,uVar8);
          uVar20 = uVar1;
          if (*(uint *)(param_1 + 0x230) <= uVar1) {
            uVar20 = 0;
          }
          plVar23 = *(long **)(*(long *)(param_1 + 0x238) + (long)(int)uVar20 * 8);
          if ((uVar9 & 1) == 0) {
            (**(code **)(*plVar23 + 0xb0))(plVar23);
            bVar25 = true;
          }
          else {
            uVar9 = (**(code **)(*plVar23 + 0xf0))(plVar23);
            if ((uVar9 & 1) != 0) {
              *(undefined1 *)((long)plVar23 + 0x21c) = 1;
              *(undefined4 *)(plVar23 + 0x43) = 0xffffffff;
              if (*(int *)((long)plVar23 + (ulong)*(byte *)(plVar23 + 0x40) * 4 + 0x1f0) == -1) {
                *(undefined4 *)((long)plVar23 + (ulong)*(byte *)(plVar23 + 0x40) * 4 + 0x1f0) = 2;
              }
            }
            puVar22 = (uint *)FUN_0279b8c0(lVar13,&local_90,uVar8);
            uVar20 = *puVar22;
            local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar20);
            uVar9 = nn::time::IsValidDate(uVar20 & 0xffff,uVar20 >> 0x10 & 0xff,uVar20 >> 0x18);
            if ((uVar9 & 1) == 0) {
              uVar20 = (uint)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
              uVar9 = nn::time::IsValidDate
                                (uVar20 & 0xffff,uVar20 >> 0x10 & 0xff,
                                 (uint)((ulong)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060)
                                       >> 0x18) & 0xff);
              if ((uVar9 & 1) != 0) {
                local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar20);
              }
            }
            uVar20 = uVar1;
            if (*(uint *)(param_1 + 0x230) <= uVar1) {
              uVar20 = 0;
            }
            FUN_031284e0(*(undefined8 *)(*(long *)(param_1 + 0x238) + (long)(int)uVar20 * 8),
                         &local_80);
            if (*(uint *)(param_1 + 0x230) <= uVar1) {
              uVar1 = 0;
            }
            FUN_03128d70(*(undefined8 *)(*(long *)(param_1 + 0x238) + (long)(int)uVar1 * 8),
                         &local_90,uVar6);
          }
        }
      }
      uVar6 = uVar8;
    } while (uVar10 != uVar8);
    goto LAB_0324dad0;
  }
  bVar25 = false;
LAB_0324dad0:
  plVar23 = *(long **)(puVar19[0x5e] + (ulong)(1 < *(uint *)(puVar19 + 0x5d)) * 8);
  if (plVar23 != (long *)0x0) {
    local_80 = PTR_DAT_04bc4e68 + 0x10;
    if (bVar25) {
      local_78 = 7;
      (**(code **)(*plVar23 + 0x18))(plVar23,&local_80);
      puVar19 = (undefined8 *)(plVar23[3] + 0x1c0);
    }
    else {
      local_78 = 6;
      (**(code **)(*plVar23 + 0x18))(plVar23,&local_80);
      puVar19 = (undefined8 *)(plVar23[3] + 0x1b8);
    }
    (*(code *)*puVar19)(plVar23[1]);
  }
  return;
}

