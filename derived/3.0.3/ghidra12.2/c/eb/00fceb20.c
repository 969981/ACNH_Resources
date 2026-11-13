
void FUN_00fceb20(long param_1,uint *param_2)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  
  if (**(char **)(param_1 + 8) == '\0') {
    lVar13 = *(long *)PTR_DAT_04bb27c0;
    if (lVar13 == 0) {
      plVar14 = (long *)0x0;
    }
    else {
      uVar7 = *param_2;
      if ((((uVar7 == 0) ||
           (plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                                ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
          ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar7)) {
        plVar14 = (long *)0x0;
      }
      if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        (**(code **)(*plVar9 + 0x60))();
      }
      if (plVar14 != (long *)0x0) {
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb37d0);
      }
    }
    puVar5 = PTR_DAT_04bb37a0;
    puVar4 = PTR_DAT_04bb3798;
    if ((int)plVar14[0xa0] == 2) {
      if ((long *)plVar14[0x16] != plVar14 + 0x15) {
        lVar13 = (long)*(int *)((long)plVar14 + 0xbc);
        plVar9 = (long *)(plVar14[0x16] - lVar13);
        puVar1 = PTR_DAT_04bb37a8 + 0x10;
        do {
          if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
            *(undefined **)puVar4 = puVar1;
            __cxa_guard_release(puVar5);
          }
          if ((plVar9 != (long *)0x0) &&
             (uVar10 = (**(code **)(*plVar9 + 0x10))(plVar9,puVar4), (uVar10 & 1) != 0)) {
            lVar13 = 0;
            if (*(long *)PTR_DAT_04bb46b0 != 0) {
              lVar13 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,**(undefined4 **)(param_1 + 0x10));
            }
            if ((*(long **)(lVar13 + 0x17bb0) == (long *)0x0) ||
               (puVar11 = (undefined8 *)**(long **)(lVar13 + 0x17bb0), puVar11 == (undefined8 *)0x0)
               ) {
              uVar7 = 1;
            }
            else {
              uVar7 = (**(code **)*puVar11)();
              uVar7 = uVar7 ^ 1;
            }
            lVar12 = FUN_02350984(plVar9 + 0xbe8);
            if ((*(long **)(lVar12 + 0x17bb0) == (long *)0x0) ||
               (puVar11 = (undefined8 *)**(long **)(lVar12 + 0x17bb0), puVar11 == (undefined8 *)0x0)
               ) {
              uVar8 = 1;
            }
            else {
              uVar8 = (**(code **)*puVar11)();
              uVar8 = uVar8 ^ 1;
            }
            piVar2 = (int *)(*(long *)(lVar13 + 0x17b98) + *(long *)(lVar13 + 0x17b90));
            piVar3 = (int *)(*(long *)(lVar12 + 0x17b98) + *(long *)(lVar12 + 0x17b90));
            if ((piVar2[7] == piVar3[7]) &&
               ((*(long *)(piVar3 + 8) == *(long *)(piVar2 + 8) &&
                *(long *)(piVar3 + 10) == *(long *)(piVar2 + 10)) && piVar3[0xc] == piVar2[0xc])) {
              if (((short)piVar2[1] == 0) || ((short)piVar3[1] == 0)) {
                if (*piVar2 != *piVar3) goto LAB_00fced64;
              }
              else if ((*piVar2 != *piVar3) ||
                      ((*(long *)(piVar3 + 1) != *(long *)(piVar2 + 1) ||
                       *(long *)(piVar3 + 3) != *(long *)(piVar2 + 3)) || piVar3[5] != piVar2[5]))
              goto LAB_00fced64;
              **(undefined1 **)(param_1 + 8) = 1;
            }
LAB_00fced64:
            if ((((uVar8 & 1) == 0) && (*(long *)(lVar12 + 0x17bb0) != 0)) &&
               (puVar11 = *(undefined8 **)(*(long *)(lVar12 + 0x17bb0) + 8),
               puVar11 != (undefined8 *)0x0)) {
              (**(code **)*puVar11)();
            }
            if ((uVar7 & 1) != 0) {
              return;
            }
            if (*(long *)(lVar13 + 0x17bb0) == 0) {
              return;
            }
            puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x17bb0) + 8);
            if (puVar11 == (undefined8 *)0x0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x00fcedb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)*puVar11)();
            return;
          }
          plVar9 = (long *)(*(long *)((long)plVar9 + lVar13 + 8) - lVar13);
        } while (plVar9 != (long *)((long)(plVar14 + 0x15) - lVar13));
      }
    }
  }
  return;
}

