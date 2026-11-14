
/* WARNING: Type propagation algorithm not settling */

ulong FUN_019da7a0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined2 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  byte bVar18;
  byte bVar19;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  
  puVar6 = PTR_DAT_04bb2720;
  puVar5 = PTR_DAT_04bb2640;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if ((lVar14 == 0) || (*(long *)(lVar14 + 0x330) == 0)) {
LAB_019da85c:
    plVar16 = &DAT_055c04a0;
  }
  else {
    puVar10 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
    iVar7 = FUN_006bd550(*puVar10,0);
    if ((iVar7 != 0x758f7eaf) || (lVar14 = *(long *)puVar6, lVar14 == 0)) goto LAB_019da85c;
    plVar16 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(**(long **)puVar5 + 0x18))
                          (*(long **)puVar5,*(undefined4 *)(lVar14 + 0x338));
      iVar7 = FUN_006bd550(*puVar10,0);
      plVar16 = (long *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        plVar16 = &DAT_055c04a0;
      }
    }
  }
  (**(code **)(*plVar16 + 0x18))(plVar16);
  iVar7 = FUN_00b08880(plVar16[1],0,0);
  puVar5 = PTR_DAT_04bb27c0;
  if ((iVar7 != -0x477aafe0 && iVar7 != -0x83ceb3d) && iVar7 != -0xe632453) {
    return 0;
  }
  lVar14 = *(long *)PTR_DAT_04bb27c0;
  if (lVar14 != 0) {
    uVar9 = *(uint *)PTR_DAT_04bbea10;
    if ((((uVar9 == 0) ||
         (plVar16 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                              ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
        ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar9)) {
      plVar16 = (long *)0x0;
    }
    if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
      plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar14 = *(long *)puVar5;
      iVar8 = (**(code **)(*plVar11 + 0x60))();
      if (iVar8 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_019da95c;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_019da95c:
      uVar9 = 0;
    }
    if (plVar16 != (long *)0x0) {
      lVar14 = plVar16[0x2a];
      if (((*PTR_DAT_04bbe9f0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbe9f0), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bbe9e8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbe9f0);
      }
      uVar13 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bbe9e8);
      uVar1 = 0;
      if ((int)lVar14 == 1) {
        uVar1 = uVar9;
      }
      if (((uVar13 & 1) != 0) && (uVar1 != 0)) {
        uVar13 = FUN_019434d8(*(undefined8 *)PTR_DAT_04bb4808);
        return uVar13;
      }
    }
  }
  puVar5 = PTR_DAT_04bb4008;
  if (*(long *)PTR_DAT_04bb4008 != 0) {
    if (*(char *)(param_1 + 0x80c) == '\0') {
      uVar9 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 0x12;
      *(uint *)(param_1 + 0x808) = (uint)(uVar9 < 0xfffffff4);
      *(undefined1 *)(param_1 + 0x80c) = 1;
      if (0xfffffff3 < uVar9) {
        return 0;
      }
    }
    else if (*(int *)(param_1 + 0x808) != 1) {
      return 0;
    }
    lVar14 = *(long *)PTR_DAT_04bb46b0;
    if (lVar14 != 0) {
      puVar10 = *(undefined8 **)(lVar14 + 0x10);
      if ((*(byte *)(lVar14 + 0x453) & 1) == 0) {
        lVar14 = (**(code **)(*(long *)*puVar10 + 0x38))();
        if (lVar14 != 0) {
          lVar14 = lVar14 + 0x70;
          goto LAB_019daa88;
        }
      }
      else if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
              (lVar14 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar14 != 0)) {
LAB_019daa88:
        if ((*(long **)(lVar14 + 0x1bf1b8) == (long *)0x0) ||
           (puVar10 = (undefined8 *)**(long **)(lVar14 + 0x1bf1b8), puVar10 == (undefined8 *)0x0)) {
          uVar9 = 1;
        }
        else {
          uVar9 = (**(code **)*puVar10)();
          uVar9 = uVar9 ^ 1;
        }
        if (iVar7 == -0x477aafe0) {
          param_1 = param_1 + 0x6e8;
        }
        else if (iVar7 == -0x83ceb3d) {
          param_1 = param_1 + 0x5c8;
        }
        else {
          param_1 = param_1 + 0x4a8;
        }
        if (0 < *(int *)(param_1 + 0x78)) {
          lVar17 = 0;
          bVar18 = 0;
          do {
            puVar12 = (undefined2 *)
                      (**(code **)(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + lVar17 * 8) +
                                            0x30) + 0xf0))();
            uVar4 = *puVar12;
            FUN_01a12390(*(undefined8 *)puVar5,3,uVar4);
            lVar2 = *(long *)(lVar14 + 0x1bf198);
            lVar3 = *(long *)(lVar14 + 0x1bf1a0);
            local_56 = 0;
            local_54 = 0;
            local_58 = uVar4;
            FUN_0277d4ac(&local_58);
            uVar13 = FUN_027bf130(lVar3 + lVar2,&local_58);
            bVar19 = 1 < (byte)(bVar18 + 1);
            uVar15 = (ulong)bVar19;
            if ((uVar13 & 1) == 0) {
              bVar19 = 4;
            }
            if ((bVar19 | 4) != 4) goto LAB_019dabb0;
            lVar17 = lVar17 + 1;
            bVar19 = bVar18 + 1;
            if ((uVar13 & 1) == 0) {
              bVar19 = bVar18;
            }
            bVar18 = bVar19;
          } while (lVar17 < *(int *)(param_1 + 0x78));
        }
        uVar15 = 0;
LAB_019dabb0:
        if ((uVar9 & 1) != 0) {
          return uVar15;
        }
        if (*(long *)(lVar14 + 0x1bf1b8) == 0) {
          return uVar15;
        }
        puVar10 = *(undefined8 **)(*(long *)(lVar14 + 0x1bf1b8) + 8);
        if (puVar10 == (undefined8 *)0x0) {
          return uVar15;
        }
        (**(code **)*puVar10)();
        return uVar15;
      }
    }
  }
  return 0;
}

