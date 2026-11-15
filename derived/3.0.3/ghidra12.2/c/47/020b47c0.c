
void FUN_020b47c0(long param_1,int *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  uint *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  
  plVar10 = *(long **)(param_1 + 0x2f50);
  if (plVar10 != (long *)(param_1 + 0x2f48)) {
    plVar14 = plVar10 + -0x1c;
    do {
      iVar8 = (int)plVar14[2];
      lVar15 = plVar14[1];
      lVar11 = lVar15;
      if (iVar8 < 1) {
        lVar11 = 0;
      }
      if ((lVar11 != 0 && (int *)(lVar11 + -0x10) != (int *)0x0) &&
         (*(int *)(lVar11 + -0x10) == *param_2)) {
        if (iVar8 < 2) {
          if (*plVar10 != 0) {
            *(long *)(*plVar10 + 8) = plVar10[1];
          }
          if ((long *)plVar10[1] != (long *)0x0) {
            *(long *)plVar10[1] = *plVar10;
          }
          *plVar10 = 0;
          plVar10[1] = 0;
          *(int *)(param_1 + 0x2f58) = *(int *)(param_1 + 0x2f58) + -1;
          plVar13 = plVar14;
          do {
            plVar13 = (long *)plVar13[1];
          } while (plVar13 != plVar14);
          *plVar14 = *(long *)(param_1 + 0x2f60);
          *(long **)(param_1 + 0x2f60) = plVar14;
          iVar8 = (int)plVar14[2];
          lVar15 = plVar14[1];
        }
        *(undefined1 *)((long)plVar14 + 0xdc) = 0;
        lVar11 = lVar15;
        if (iVar8 < 1) {
          lVar11 = 0;
        }
        lVar3 = 0;
        if (lVar11 != 0) {
          lVar3 = lVar11 + -0x10;
        }
        plVar14[0x1a] = lVar3;
        puVar7 = PTR_DAT_04bb37d8;
        puVar6 = PTR_DAT_04bb37d0;
        puVar5 = PTR_DAT_04bb3350;
        puVar4 = PTR_DAT_04bb27c0;
        puVar12 = (uint *)(lVar15 + -0x10);
        if (puVar12 == (uint *)(plVar10 + -0x1e)) goto LAB_020b4a60;
        puVar1 = PTR_DAT_04bb3750 + 0x10;
        do {
          lVar11 = *(long *)puVar4;
          if (lVar11 != 0) {
            uVar16 = *puVar12;
            if ((((uVar16 == 0) ||
                 (plVar14 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                                      ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0))
                || ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) ||
               (*(uint *)(plVar14 + 0x46) != uVar16)) {
              plVar14 = (long *)0x0;
            }
            if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
              plVar13 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
              lVar11 = *(long *)puVar4;
              iVar8 = (**(code **)(*plVar13 + 0x60))();
              if (iVar8 < 0x11) {
                uVar16 = 1;
              }
              else {
                uVar16 = *(uint *)(lVar11 + 0x5e8);
                if (4 < uVar16) goto LAB_020b49c0;
                uVar16 = 0x1aU >> (ulong)(uVar16 & 0x1f) & 1;
              }
            }
            else {
LAB_020b49c0:
              uVar16 = 0;
            }
            if (plVar14 != (long *)0x0) {
              lVar11 = plVar14[0x2a];
              if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
                *(undefined **)puVar6 = puVar1;
                __cxa_guard_release(puVar7);
              }
              uVar9 = (**(code **)(*plVar14 + 0x20))(plVar14,puVar6);
              uVar2 = 0;
              if ((int)lVar11 == 1) {
                uVar2 = uVar16;
              }
              if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
                *(undefined4 *)(plVar14[0x77] + 0xae3c) = 5;
              }
            }
          }
          lVar15 = *(long *)(lVar15 + 8);
          puVar12 = (uint *)(lVar15 + -0x10);
          if (puVar12 == (uint *)(plVar10 + -0x1e)) {
LAB_020b4a60:
            FUN_020b3190(param_1);
            return;
          }
        } while( true );
      }
      plVar10 = (long *)plVar10[1];
      plVar14 = plVar10 + -0x1c;
    } while (plVar14 != (long *)(param_1 + 0x2e68));
  }
  return;
}

