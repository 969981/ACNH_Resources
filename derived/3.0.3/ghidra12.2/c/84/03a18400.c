
bool FUN_03a18400(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  char cVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  void *__dest;
  void *__src;
  long *plVar19;
  uint uVar20;
  
  if (param_1 + 0x26 != param_2) {
    __dest = (void *)param_1[0x27];
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (void *)param_2[1];
    if (__dest != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar15 = 0;
      do {
        if (*(char *)(param_2[1] + lVar15) == '\0') goto LAB_03a184b0;
        lVar16 = param_2[1] + lVar15;
        if (*(char *)(lVar16 + 1) == '\0') {
          lVar15 = lVar15 + 1;
          goto LAB_03a184b0;
        }
        if (*(char *)(lVar16 + 2) == '\0') {
          lVar15 = lVar15 + 2;
          goto LAB_03a184b0;
        }
        lVar15 = lVar15 + 3;
      } while (lVar15 != 0x80001);
      lVar15 = 0;
LAB_03a184b0:
      iVar10 = (int)lVar15;
      if ((int)param_1[0x28] <= (int)lVar15) {
        iVar10 = (int)param_1[0x28] + -1;
      }
      memcpy(__dest,__src,(long)iVar10);
      *(undefined1 *)((long)__dest + (long)iVar10) = 0;
    }
  }
  lVar15 = param_1[0x197];
  iVar10 = (**(code **)(*param_1 + 0xb0))(param_1);
  if ((int)*(uint *)(lVar15 + 0x308) < 1) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar17 = 0;
    uVar13 = 0xffffffff;
    piVar18 = (int *)(lVar15 + 0x314);
    do {
      piVar4 = piVar18;
      if (0x7f < uVar17) {
        piVar4 = (int *)(lVar15 + 0x314);
      }
      if (*piVar4 == iVar10) {
        uVar13 = uVar17 & 0xffffffff;
        break;
      }
      uVar17 = uVar17 + 1;
      piVar18 = piVar18 + 1;
    } while (*(uint *)(lVar15 + 0x308) != uVar17);
  }
  plVar11 = (long *)FUN_03a25760(lVar15,uVar13,param_2);
  param_1[0x24] = (long)plVar11;
  if (plVar11 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  }
  else {
    lVar15 = param_1[0x197];
    iVar10 = (**(code **)(*param_1 + 0xb0))(param_1);
    puVar8 = PTR_DAT_04bd14f0;
    if ((int)*(uint *)(lVar15 + 0x308) < 1) {
      uVar14 = 0xffffffff;
    }
    else {
      uVar13 = 0;
      uVar14 = 0xffffffff;
      piVar18 = (int *)(lVar15 + 0x314);
      do {
        piVar4 = piVar18;
        if (0x7f < uVar13) {
          piVar4 = (int *)(lVar15 + 0x314);
        }
        if (*piVar4 == iVar10) {
          uVar14 = (uint)uVar13;
          break;
        }
        uVar13 = uVar13 + 1;
        piVar18 = piVar18 + 1;
      } while (*(uint *)(lVar15 + 0x308) != uVar13);
    }
    puVar5 = (uint *)(lVar15 + 0x914) + uVar14;
    if (0x7f < uVar14) {
      puVar5 = (uint *)(lVar15 + 0x914);
    }
    uVar6 = *puVar5;
    if (0 < (int)uVar6) {
      uVar20 = 0;
      puVar5 = (uint *)(lVar15 + 0x514) + uVar14;
      if (0x7f < uVar14) {
        puVar5 = (uint *)(lVar15 + 0x514);
      }
      puVar1 = PTR_DAT_04bb2000 + 0x10;
      do {
        lVar16 = *(long *)(lVar15 + 0x300);
        uVar14 = *puVar5;
        if (*(uint *)(lVar16 + 0x18) <= uVar14) {
          uVar14 = 0;
        }
        if (uVar20 < *(ushort *)(*(long *)(lVar16 + 0x20) + (long)(int)uVar14 * 4 + 2)) {
          plVar19 = *(long **)(*(long *)(lVar16 + 0x30) +
                              ((ulong)*(ushort *)(*(long *)(lVar16 + 0x20) + (long)(int)uVar14 * 4)
                              + (ulong)uVar20) * 8);
        }
        else {
          plVar19 = (long *)0x0;
        }
        if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
          *(undefined **)PTR_DAT_04bd14e8 = puVar1;
          __cxa_guard_release(puVar8);
        }
        if ((plVar19 != (long *)0x0) &&
           (uVar13 = (**(code **)(*plVar19 + 0x48))(plVar19,PTR_DAT_04bd14e8), (uVar13 & 1) != 0)) {
          lVar16 = *(long *)(lVar15 + 0x300);
          uVar14 = *puVar5;
          if (*(uint *)(lVar16 + 0x18) <= uVar14) {
            uVar14 = 0;
          }
          if (uVar20 < *(ushort *)(*(long *)(lVar16 + 0x20) + (long)(int)uVar14 * 4 + 2)) {
            plVar19 = *(long **)(*(long *)(lVar16 + 0x30) +
                                ((ulong)*(ushort *)
                                         (*(long *)(lVar16 + 0x20) + (long)(int)uVar14 * 4) +
                                (ulong)uVar20) * 8);
          }
          else {
            plVar19 = (long *)0x0;
          }
          if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
            *(undefined **)PTR_DAT_04bd14e8 = PTR_DAT_04bb2000 + 0x10;
            __cxa_guard_release(puVar8);
          }
          uVar13 = (**(code **)(*plVar19 + 0x48))(plVar19,PTR_DAT_04bd14e8);
          if ((uVar13 & 1) == 0) {
            plVar19 = (long *)0x0;
          }
          plVar19 = (long *)(**(code **)(*plVar19 + 0x80))();
          plVar12 = (long *)(**(code **)(*plVar11 + 0x80))(plVar11);
          (**(code **)(*plVar19 + 0x18))(plVar19);
          (**(code **)(*plVar19 + 0x18))(plVar19);
          lVar16 = plVar19[1];
          (**(code **)(*plVar12 + 0x18))(plVar12);
          if (lVar16 == plVar12[1]) goto LAB_03a18868;
          uVar13 = 0;
          lVar16 = plVar12[1] + 1;
          bVar9 = true;
          do {
            lVar2 = plVar19[1] + 1 + uVar13;
            lVar3 = lVar16 + uVar13;
            cVar7 = *(char *)(lVar2 + -1);
            if (cVar7 != *(char *)(lVar3 + -1)) break;
            if (cVar7 == '\0') {
              if (bVar9) goto LAB_03a18868;
              break;
            }
            cVar7 = *(char *)(plVar19[1] + 1 + uVar13);
            if (cVar7 != *(char *)(lVar16 + uVar13)) break;
            if (cVar7 == '\0') goto LAB_03a18868;
            cVar7 = *(char *)(lVar2 + 1);
            if (cVar7 != *(char *)(lVar3 + 1)) break;
            if (cVar7 == '\0') goto LAB_03a18868;
            bVar9 = uVar13 < 0x7fffe;
            uVar13 = uVar13 + 3;
          } while (uVar13 != 0x80001);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar6);
    }
    uVar20 = 0xffffffff;
LAB_03a18868:
    *(uint *)(param_1 + 0x2d) = uVar20;
    FUN_03a174e0(param_1[0x25],param_1[0x24]);
  }
  return plVar11 != (long *)0x0;
}

