
void FUN_03855960(long param_1,ulong param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  
  if ((*(long *)(param_1 + 0x160) != 0) &&
     (((param_2 & 1) == 0 || (*(char *)(param_1 + 0x171) != '\0')))) {
    uVar4 = *(uint *)(*(long *)(param_1 + 0x160) + 0x30);
    if (0 < (int)uVar4) {
      uVar10 = 0;
      if ((param_2 & 1) == 0) {
        do {
          plVar8 = (long *)**(undefined8 **)
                             (*(long *)(*(long *)(param_1 + 0x160) + 0x38) + uVar10 * 8);
          if (plVar8 != (long *)0x0) {
            uVar6 = uVar10;
            if (*(uint *)(param_1 + 8) <= uVar10) {
              uVar6 = 0;
            }
            piVar2 = (int *)(*(long *)(param_1 + 0x10) + uVar6 * 0x10);
            iVar5 = *piVar2;
            if (iVar5 != 0) {
              lVar13 = *(long *)(piVar2 + 2);
              iVar11 = 0;
              iVar12 = 0;
              do {
                lVar7 = lVar13 + (long)iVar12 * 0x60;
                (**(code **)(*plVar8 + 0x60))(plVar8,lVar7 + 0x20,lVar7 + 0x50,iVar11);
                iVar12 = iVar12 + 1;
                iVar11 = iVar11 + 1;
              } while (iVar5 != iVar12);
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar4);
      }
      else {
        do {
          plVar8 = (long *)**(undefined8 **)
                             (*(long *)(*(long *)(param_1 + 0x160) + 0x38) + uVar10 * 8);
          if (plVar8 != (long *)0x0) {
            uVar6 = uVar10;
            if (*(uint *)(param_1 + 8) <= uVar10) {
              uVar6 = 0;
            }
            piVar2 = (int *)(*(long *)(param_1 + 0x10) + uVar6 * 0x10);
            iVar5 = *piVar2;
            if (iVar5 != 0) {
              lVar13 = *(long *)(piVar2 + 2);
              uVar9 = 0;
              iVar11 = 0;
              do {
                uVar6 = uVar10;
                if (*(uint *)(param_1 + 8) <= uVar10) {
                  uVar6 = 0;
                }
                puVar1 = (uint *)(*(long *)(param_1 + 0x10) + uVar6 * 0x10);
                uVar3 = uVar9;
                if (*puVar1 <= uVar9) {
                  uVar3 = 0;
                }
                uVar6 = (**(code **)(*(long *)(*(long *)(puVar1 + 2) + (ulong)uVar3 * 0x60) + 0x10))
                                  ();
                if ((uVar6 & 1) != 0) {
                  lVar7 = lVar13 + (long)iVar11 * 0x60;
                  (**(code **)(*plVar8 + 0x60))(plVar8,lVar7 + 0x20,lVar7 + 0x50,uVar9);
                }
                iVar11 = iVar11 + 1;
                uVar9 = uVar9 + 1;
              } while (iVar5 != iVar11);
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar4);
      }
    }
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  return;
}

