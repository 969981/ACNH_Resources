
/* WARNING: Removing unreachable block (ram,0x031f5240) */
/* WARNING: Removing unreachable block (ram,0x031f4b48) */
/* WARNING: Removing unreachable block (ram,0x031f541c) */
/* WARNING: Removing unreachable block (ram,0x031f523c) */
/* WARNING: Removing unreachable block (ram,0x031f5180) */
/* WARNING: Removing unreachable block (ram,0x031f5448) */
/* WARNING: Removing unreachable block (ram,0x031f52a8) */
/* WARNING: Removing unreachable block (ram,0x031f5280) */
/* WARNING: Removing unreachable block (ram,0x031f4b6c) */
/* WARNING: Removing unreachable block (ram,0x031f546c) */
/* WARNING: Removing unreachable block (ram,0x031f52cc) */
/* WARNING: Removing unreachable block (ram,0x031f52a4) */
/* WARNING: Removing unreachable block (ram,0x031f4b98) */
/* WARNING: Removing unreachable block (ram,0x031f4ba0) */

void FUN_031f49c0(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint local_510;
  long local_500 [8];
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined *local_440;
  undefined4 local_438;
  
  puVar4 = PTR_DAT_04bb46d0;
  puVar3 = PTR_DAT_04bb2720;
  uVar17 = 0;
  if (*(uint *)(param_1 + 0x340) <= param_2) {
    param_2 = 0;
  }
  switch(*(undefined4 *)(*(long *)(param_1 + 0x348) + (long)(int)param_2 * 0x70 + 8)) {
  case 0x8c:
    local_500[6] = 0;
    local_500[2] = 0;
    local_500[3] = 0;
    local_500[0] = *(long *)(*(long *)(param_1 + 0x218) + 0x678);
    local_500[4] = 0;
    local_500[5] = 0;
    local_500[1] = 0;
    lVar9 = *(long *)PTR_DAT_04bb2720;
    if (lVar9 == 0) {
LAB_031f5024:
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        iVar7 = FUN_006bd550(*puVar14,0);
        lVar9 = *(long *)puVar3;
        if ((iVar7 != 0x758f7eaf) || (lVar9 == 0)) goto LAB_031f5024;
        iVar7 = 0;
        if (*(long *)(lVar9 + 0x330) != 0) {
          iVar7 = *(int *)(*(long *)(lVar9 + 0x330) + 0x244);
        }
      }
    }
    puVar4 = PTR_DAT_04bbe4b0;
    if (*(int *)(PTR_DAT_04bbe4b0 + 0xb0) == iVar7) {
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x330) != 0)) {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        FUN_006bd550(*puVar14,0);
      }
    }
    else {
      iVar7 = 0;
      if (lVar9 != 0) {
        if (*(long *)(lVar9 + 0x330) == 0) {
          iVar7 = 0;
        }
        else {
          puVar14 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
          iVar6 = FUN_006bd550(*puVar14,0);
          iVar7 = 0;
          if (iVar6 == 0x758f7eaf) {
            iVar7 = 0;
            if (*(long *)puVar3 != 0) {
              lVar9 = *(long *)(*(long *)puVar3 + 0x330);
              iVar7 = 0;
              if (lVar9 != 0) {
                iVar7 = *(int *)(lVar9 + 0x244);
              }
            }
          }
        }
      }
      if (((*(int *)(puVar4 + 0xac) == iVar7) && (lVar9 = *(long *)puVar3, lVar9 != 0)) &&
         (*(long *)(lVar9 + 0x330) != 0)) {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        FUN_006bd550(*puVar14,0);
      }
    }
    uStack_498 = 0;
    local_4a0 = 0;
    memset(&local_440,0,0x400);
    uVar8 = 0;
    lVar9 = 0x70;
    do {
      if ((undefined *)local_500[uVar8] != (undefined *)0x0) {
        uVar11 = uVar8 & 0xffffffff;
        if (0x7f < (uint)uVar8) {
          uVar11 = 0;
        }
        (&local_440)[uVar11] = (undefined *)local_500[uVar8];
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
    FUN_0386f420(&local_440,7,2);
    break;
  case 0x8d:
    local_510 = 0;
    if ((((*(long *)PTR_DAT_04bb46d0 != 0) && (*(long *)PTR_DAT_04bb5ce0 != 0)) &&
        (uVar5 = FUN_017f1174(*(long *)PTR_DAT_04bb5ce0 + 0xda0),
        ((uVar5 ^ 0xffffffff) & 0xffff) != 0)) &&
       ((iVar7 = FUN_017c1d70(*(undefined8 *)puVar4,uVar5,0), iVar7 != 0 &&
        (uVar8 = FUN_0180dd50(), (uVar8 & 1) == 0)))) {
      local_510 = 7;
    }
    if (local_510 < 0xe) {
      lVar9 = *(long *)(param_1 + 0x218);
      local_500[(int)local_510] = *(long *)(lVar9 + 0x580);
      lVar10 = (long)(int)local_510;
      local_510 = (uint)(lVar10 + 1);
      if (local_510 < 0xe) {
        local_500[lVar10 + 1] = *(long *)(lVar9 + 0x588);
        local_510 = local_510 + 1;
      }
      if (local_510 < 0xe) {
        local_500[(int)local_510] = *(long *)(lVar9 + 0x590);
        local_510 = local_510 + 1;
      }
      if (local_510 < 0xe) {
        local_500[(int)local_510] = *(long *)(lVar9 + 0x598);
        local_510 = local_510 + 1;
      }
      if (local_510 < 0xe) {
        local_500[(int)local_510] = *(long *)(lVar9 + 0x5a0);
        local_510 = local_510 + 1;
      }
      if (local_510 < 0xe) {
        local_500[(int)local_510] = *(long *)(lVar9 + 0x5a8);
        local_510 = local_510 + 1;
      }
      if (local_510 < 0xe) {
        local_500[(int)local_510] = *(long *)(lVar9 + 0x5b0);
        local_510 = local_510 + 1;
      }
    }
    memset(&local_440,0,0x400);
    if (local_510 != 0) {
      uVar8 = 0;
      lVar9 = (long)(int)local_510 << 3;
      do {
        if ((undefined *)local_500[uVar8] != (undefined *)0x0) {
          uVar11 = uVar8 & 0xffffffff;
          if (0x7f < (uint)uVar8) {
            uVar11 = 0;
          }
          (&local_440)[uVar11] = (undefined *)local_500[uVar8];
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    FUN_0386f420(&local_440,7,2);
    uVar17 = 0x3f800000;
    break;
  case 0x8e:
    if (*(char *)(param_1 + 0x368) == '\0') {
      memset(&local_440,0,0x400);
    }
    else {
      local_500[0] = *(long *)(*(long *)(param_1 + 0x218) + 0x688);
      local_500[7] = *(undefined8 *)(*(long *)(param_1 + 0x218) + 0x690);
      uStack_4a8 = 0;
      local_4b0 = 0;
      uStack_4b8 = 0;
      local_4c0 = 0;
      local_500[6] = 0;
      local_500[5] = 0;
      local_500[4] = 0;
      local_500[3] = 0;
      local_500[2] = 0;
      local_500[1] = 0;
      uStack_498 = 0;
      local_4a0 = 0;
      memset(&local_440,0,0x400);
      uVar8 = 0;
      lVar9 = 0x70;
      do {
        if ((undefined *)local_500[uVar8] != (undefined *)0x0) {
          uVar11 = uVar8 & 0xffffffff;
          if (0x7f < (uint)uVar8) {
            uVar11 = 0;
          }
          (&local_440)[uVar11] = (undefined *)local_500[uVar8];
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    FUN_0386f420(&local_440,7,2);
    uVar17 = 0x40000000;
    break;
  case 0x8f:
    iVar6 = *(int *)(param_1 + 0x3e0);
    plVar15 = local_500;
    local_510 = 0;
    iVar7 = 0;
    uVar5 = 0;
    iVar12 = 6;
    uVar16 = 0x40800000;
    if (0x10 < iVar6) {
      uVar16 = 0x40a00000;
    }
    lVar9 = *(long *)(param_1 + 0x218) + 0x5b8;
    do {
      if ((int)uVar5 < *(int *)(param_1 + 0x3e0)) {
        if (iVar7 < 0x18) {
          uVar8 = (ulong)uVar5;
          if (0x17 < uVar5) {
            uVar8 = 0;
          }
          plVar15[iVar7] = *(long *)(lVar9 + uVar8 * 8);
          iVar7 = local_510 + 1;
          local_510 = iVar7;
        }
        uVar5 = uVar5 + 1;
      }
      else if (iVar7 < 0x18) {
        plVar15[iVar7] = 0;
        iVar7 = local_510 + 1;
        local_510 = iVar7;
      }
      if ((int)uVar5 < *(int *)(param_1 + 0x3e0)) {
        if (iVar7 < 0x18) {
          uVar8 = (ulong)uVar5;
          if (0x17 < uVar5) {
            uVar8 = 0;
          }
          plVar15[iVar7] = *(long *)(lVar9 + uVar8 * 8);
          iVar7 = local_510 + 1;
          local_510 = iVar7;
        }
        uVar5 = uVar5 + 1;
      }
      else if (iVar7 < 0x18) {
        plVar15[iVar7] = 0;
        iVar7 = local_510 + 1;
        local_510 = iVar7;
      }
      if ((int)uVar5 < *(int *)(param_1 + 0x3e0)) {
        if (iVar7 < 0x18) {
          uVar8 = (ulong)uVar5;
          if (0x17 < uVar5) {
            uVar8 = 0;
          }
          plVar15[iVar7] = *(long *)(lVar9 + uVar8 * 8);
          iVar7 = local_510 + 1;
          local_510 = iVar7;
        }
        uVar5 = uVar5 + 1;
      }
      else if (iVar7 < 0x18) {
        plVar15[iVar7] = 0;
        iVar7 = local_510 + 1;
        local_510 = iVar7;
      }
      if ((int)uVar5 < *(int *)(param_1 + 0x3e0)) {
        if (iVar7 < 0x18) {
          uVar8 = (ulong)uVar5;
          if (0x17 < uVar5) {
            uVar8 = 0;
          }
          plVar15[iVar7] = *(long *)(lVar9 + uVar8 * 8);
          iVar7 = local_510 + 1;
          local_510 = iVar7;
        }
        uVar5 = uVar5 + 1;
      }
      else if (iVar7 < 0x18) {
        plVar15[iVar7] = 0;
        iVar7 = local_510 + 1;
        local_510 = iVar7;
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    uVar5 = *(uint *)(param_1 + 0x3e0);
    uVar17 = 0x40400000;
    if (8 < iVar6) {
      uVar17 = uVar16;
    }
    if (iVar7 != 0) {
      uVar11 = (long)iVar7 - 1U & 0x1fffffffffffffff;
      uVar8 = uVar11 + 1;
      if (uVar11 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar13 = uVar11 & 0xffffffff;
          if (0x7f < (uint)uVar11) {
            uVar13 = 0;
          }
          (&local_440)[uVar13] = (undefined *)*plVar15;
          uVar2 = (uint)uVar11 + 1;
          uVar13 = (ulong)uVar2;
          uVar11 = uVar11 + 2;
          plVar1 = plVar15 + 1;
          plVar15 = plVar15 + 2;
          if (0x7f < uVar2) {
            uVar13 = 0;
          }
          (&local_440)[uVar13] = (undefined *)*plVar1;
        } while ((uVar8 & 0x3ffffffffffffffe) != uVar11);
        if ((uVar8 & 1) == 0) goto LAB_031f4ed4;
      }
      uVar8 = uVar11 & 0xffffffff;
      if (0x7f < (uint)uVar11) {
        uVar8 = 0;
      }
      (&local_440)[uVar8] = (undefined *)*plVar15;
    }
LAB_031f4ed4:
    FUN_0386efd0(&local_440,4,uVar5 >> 2,0,0,1);
  }
  puVar14 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x218) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (((puVar14 != (undefined8 *)0x0) &&
      (uVar8 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bc4e58), (uVar8 & 1) != 0)) &&
     (plVar15 = *(long **)(puVar14[0x45] + (ulong)(2 < *(uint *)(puVar14 + 0x44)) * 0x10),
     plVar15 != (long *)0x0)) {
    local_440 = PTR_DAT_04bc4f00 + 0x10;
    local_438 = 0x14;
    (**(code **)(*plVar15 + 0x18))(plVar15,&local_440);
    (**(code **)(plVar15[3] + 0x158))(uVar17,plVar15[1]);
  }
  return;
}

