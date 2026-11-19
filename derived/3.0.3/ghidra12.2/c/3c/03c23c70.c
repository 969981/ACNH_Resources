
void FUN_03c23c70(undefined8 param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  if (param_2 != 0) {
    lVar1 = param_2 + 0x1c8;
    param_2 = param_2 + 0x168;
    if ((param_3 >> 0x1d & 1) != 0) {
      lVar9 = 0xe8;
      if (*(uint *)(*(long *)PTR_DAT_04bbdb78 + 0x20) < 0x1e) {
        lVar9 = 0;
      }
      plVar13 = *(long **)(*(long *)(*(long *)PTR_DAT_04bbdb78 + 0x28) + lVar9);
      if (((*PTR_DAT_04bbdb10 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbdb10), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bbdb08 = PTR_DAT_04bbdb18 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdb10);
      }
      if ((plVar13 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar13 + 0x10))(plVar13,PTR_DAT_04bbdb08),
         puVar4 = PTR_DAT_04bbdc88, (uVar6 & 1) != 0)) {
        if (((*PTR_DAT_04bbdc88 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbdc88), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bbdc80 = PTR_DAT_04bbdc90 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbdc88);
        }
        puVar3 = PTR_DAT_04bbdc80;
        uVar6 = (**(code **)(*plVar13 + 0x10))(plVar13,PTR_DAT_04bbdc80);
        if ((uVar6 & 1) == 0) {
          if (((*PTR_DAT_04bbdb68 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbdb68), iVar5 != 0)) {
            *(undefined **)PTR_DAT_04bbdb60 = PTR_DAT_04bbdb70 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbdb68);
          }
          uVar6 = (**(code **)(*plVar13 + 0x10))(plVar13,PTR_DAT_04bbdb60);
          if (((uVar6 & 1) != 0) && (uVar2 = *(uint *)(plVar13 + 0x16), uVar2 != 0)) {
            uVar10 = 0;
            do {
              lVar9 = (long)(int)uVar10;
              if (*(uint *)(plVar13 + 0x16) <= uVar10) {
                lVar9 = 0;
              }
              lVar7 = plVar13[0x17] + lVar9 * 0x820;
              piVar8 = (int *)(lVar7 + 8);
              iVar5 = *piVar8;
              plVar11 = *(long **)(lVar7 + 0x10);
              if (iVar5 != 0) {
                lVar7 = (long)iVar5 << 3;
                plVar12 = plVar11;
                do {
                  if (*plVar12 == lVar1) goto LAB_03c23e00;
                  plVar12 = plVar12 + 1;
                  lVar7 = lVar7 + -8;
                } while (lVar7 != 0);
              }
              if (iVar5 < *(int *)(plVar13[0x17] + lVar9 * 0x820 + 0xc)) {
                plVar11[iVar5] = lVar1;
                *piVar8 = *piVar8 + 1;
              }
LAB_03c23e00:
              uVar10 = uVar10 + 1;
            } while (uVar2 != uVar10);
          }
        }
        else {
          if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbdc88), iVar5 != 0)) {
            *(undefined **)puVar3 = PTR_DAT_04bbdc90 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbdc88);
          }
          uVar6 = (**(code **)(*plVar13 + 0x10))(plVar13,PTR_DAT_04bbdc80);
          if ((uVar6 & 1) == 0) {
            plVar13 = (long *)0x0;
          }
          lVar9 = 3;
          if (*(uint *)(plVar13 + 0x16) < 4) {
            lVar9 = 0;
          }
          lVar7 = plVar13[0x17] + lVar9 * 0x820;
          piVar8 = (int *)(lVar7 + 8);
          iVar5 = *piVar8;
          plVar11 = *(long **)(lVar7 + 0x10);
          if (iVar5 != 0) {
            lVar7 = (long)iVar5 << 3;
            plVar12 = plVar11;
            do {
              if (*plVar12 == param_2) goto LAB_03c23e7c;
              plVar12 = plVar12 + 1;
              lVar7 = lVar7 + -8;
            } while (lVar7 != 0);
          }
          if (iVar5 < *(int *)(plVar13[0x17] + lVar9 * 0x820 + 0xc)) {
            plVar11[iVar5] = param_2;
            *piVar8 = *piVar8 + 1;
          }
        }
      }
    }
LAB_03c23e7c:
    if ((param_3 >> 0x1e & 1) != 0) {
      lVar9 = 0xf0;
      if (*(uint *)(*(long *)PTR_DAT_04bbdb78 + 0x20) < 0x1f) {
        lVar9 = 0;
      }
      plVar13 = *(long **)(*(long *)(*(long *)PTR_DAT_04bbdb78 + 0x28) + lVar9);
      if (((*PTR_DAT_04bbdb10 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbdb10), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bbdb08 = PTR_DAT_04bbdb18 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdb10);
      }
      if ((plVar13 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar13 + 0x10))(plVar13,PTR_DAT_04bbdb08),
         puVar4 = PTR_DAT_04bbdc88, (uVar6 & 1) != 0)) {
        if (((*PTR_DAT_04bbdc88 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbdc88), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bbdc80 = PTR_DAT_04bbdc90 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbdc88);
        }
        puVar3 = PTR_DAT_04bbdc80;
        uVar6 = (**(code **)(*plVar13 + 0x10))(plVar13,PTR_DAT_04bbdc80);
        if ((uVar6 & 1) == 0) {
          if (((*PTR_DAT_04bbdb68 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbdb68), iVar5 != 0)) {
            *(undefined **)PTR_DAT_04bbdb60 = PTR_DAT_04bbdb70 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbdb68);
          }
          uVar6 = (**(code **)(*plVar13 + 0x10))(plVar13,PTR_DAT_04bbdb60);
          if (((uVar6 & 1) != 0) && (uVar2 = *(uint *)(plVar13 + 0x16), uVar2 != 0)) {
            uVar10 = 0;
            do {
              lVar9 = (long)(int)uVar10;
              if (*(uint *)(plVar13 + 0x16) <= uVar10) {
                lVar9 = 0;
              }
              lVar7 = plVar13[0x17] + lVar9 * 0x820;
              piVar8 = (int *)(lVar7 + 8);
              iVar5 = *piVar8;
              plVar11 = *(long **)(lVar7 + 0x10);
              if (iVar5 != 0) {
                lVar7 = (long)iVar5 << 3;
                plVar12 = plVar11;
                do {
                  if (*plVar12 == lVar1) goto LAB_03c23fe4;
                  plVar12 = plVar12 + 1;
                  lVar7 = lVar7 + -8;
                } while (lVar7 != 0);
              }
              if (iVar5 < *(int *)(plVar13[0x17] + lVar9 * 0x820 + 0xc)) {
                plVar11[iVar5] = lVar1;
                *piVar8 = *piVar8 + 1;
              }
LAB_03c23fe4:
              uVar10 = uVar10 + 1;
            } while (uVar2 != uVar10);
          }
        }
        else {
          if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbdc88), iVar5 != 0)) {
            *(undefined **)puVar3 = PTR_DAT_04bbdc90 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbdc88);
          }
          uVar6 = (**(code **)(*plVar13 + 0x10))(plVar13,PTR_DAT_04bbdc80);
          if ((uVar6 & 1) == 0) {
            plVar13 = (long *)0x0;
          }
          lVar1 = 3;
          if (*(uint *)(plVar13 + 0x16) < 4) {
            lVar1 = 0;
          }
          lVar9 = plVar13[0x17] + lVar1 * 0x820;
          piVar8 = (int *)(lVar9 + 8);
          iVar5 = *piVar8;
          plVar11 = *(long **)(lVar9 + 0x10);
          if (iVar5 != 0) {
            lVar9 = (long)iVar5 << 3;
            plVar12 = plVar11;
            do {
              if (*plVar12 == param_2) {
                return;
              }
              plVar12 = plVar12 + 1;
              lVar9 = lVar9 + -8;
            } while (lVar9 != 0);
          }
          if (iVar5 < *(int *)(plVar13[0x17] + lVar1 * 0x820 + 0xc)) {
            plVar11[iVar5] = param_2;
            *piVar8 = *piVar8 + 1;
          }
        }
      }
    }
  }
  return;
}

