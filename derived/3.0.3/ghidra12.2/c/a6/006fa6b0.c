
void FUN_006fa6b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
    lVar13 = (long)*(int *)(param_1 + 0xbc);
    plVar1 = (long *)(param_1 + 200);
    plVar2 = (long *)(param_1 + 0xe8);
    plVar3 = (long *)(param_1 + 0x108);
    plVar4 = (long *)(param_1 + 0x128);
    plVar12 = (long *)(*(long *)(param_1 + 0xb0) - lVar13);
    do {
      if ((*(byte *)(plVar12 + 0x4c) & 1) == 0) {
LAB_006fa740:
        bVar7 = *(byte *)(plVar12 + 0x4c);
      }
      else {
        iVar8 = *(int *)((long)plVar12 + 0x174);
        if (iVar8 == -1) {
          iVar8 = (**(code **)(*plVar12 + 0x30))(plVar12);
          uVar6 = *(uint *)(param_1 + 0x248);
        }
        else {
          uVar6 = *(uint *)(param_1 + 0x248);
        }
        if ((uVar6 >> 4 & 1) != 0) goto LAB_006fa740;
        plVar10 = *(long **)(param_1 + 0xd0);
        lVar9 = (long)*(int *)(param_1 + 0xdc);
        *(int *)(plVar12 + 0x36) = iVar8;
        if (plVar10 != plVar1) {
          lVar11 = (long)plVar10 - lVar9;
          do {
            if (iVar8 <= *(int *)(lVar11 + 0x30)) {
              lVar9 = (long)*(int *)(param_1 + 0xdc);
              plVar10 = (long *)(lVar11 + lVar9);
              goto LAB_006fa838;
            }
            lVar11 = *(long *)(lVar11 + lVar9 + 8) - lVar9;
          } while (lVar11 != (long)plVar1 - lVar9);
        }
        lVar9 = (long)*(int *)(param_1 + 0xdc);
        plVar10 = plVar1;
LAB_006fa838:
        plVar5 = (long *)((long)plVar12 + lVar9 + 0x180);
        lVar9 = *plVar10;
        *plVar10 = (long)plVar5;
        *plVar5 = lVar9;
        plVar5[1] = (long)plVar10;
        if (lVar9 != 0) {
          *(long **)(lVar9 + 8) = plVar5;
        }
        *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
        bVar7 = *(byte *)(plVar12 + 0x4c);
      }
      if ((bVar7 >> 1 & 1) != 0) {
        iVar8 = *(int *)((long)plVar12 + 0x174);
        if (iVar8 == -1) {
          iVar8 = (**(code **)(*plVar12 + 0x30))(plVar12);
          uVar6 = *(uint *)(param_1 + 0x248);
        }
        else {
          uVar6 = *(uint *)(param_1 + 0x248);
        }
        if ((uVar6 >> 4 & 1) == 0) {
          plVar10 = *(long **)(param_1 + 0xf0);
          lVar9 = (long)*(int *)(param_1 + 0xfc);
          *(int *)(plVar12 + 0x3d) = iVar8;
          if (plVar10 != plVar2) {
            lVar11 = (long)plVar10 - lVar9;
            do {
              if (iVar8 <= *(int *)(lVar11 + 0x30)) {
                lVar9 = (long)*(int *)(param_1 + 0xfc);
                plVar10 = (long *)(lVar11 + lVar9);
                goto LAB_006fa874;
              }
              lVar11 = *(long *)(lVar11 + lVar9 + 8) - lVar9;
            } while (lVar11 != (long)plVar2 - lVar9);
          }
          lVar9 = (long)*(int *)(param_1 + 0xfc);
          plVar10 = plVar2;
LAB_006fa874:
          plVar5 = (long *)((long)plVar12 + lVar9 + 0x1b8);
          lVar9 = *plVar10;
          *plVar10 = (long)plVar5;
          *plVar5 = lVar9;
          plVar5[1] = (long)plVar10;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 8) = plVar5;
          }
          *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
        }
      }
      if ((*(byte *)(plVar12 + 0x4c) >> 2 & 1) == 0) {
LAB_006fa8b8:
        bVar7 = *(byte *)(plVar12 + 0x4c);
      }
      else {
        iVar8 = *(int *)((long)plVar12 + 0x174);
        if (iVar8 == -1) {
          iVar8 = (**(code **)(*plVar12 + 0x30))(plVar12);
          uVar6 = *(uint *)(param_1 + 0x248);
        }
        else {
          uVar6 = *(uint *)(param_1 + 0x248);
        }
        if ((uVar6 >> 4 & 1) != 0) goto LAB_006fa8b8;
        plVar10 = *(long **)(param_1 + 0x110);
        lVar9 = (long)*(int *)(param_1 + 0x11c);
        *(int *)(plVar12 + 0x44) = iVar8;
        if (plVar10 != plVar3) {
          lVar11 = (long)plVar10 - lVar9;
          do {
            if (iVar8 <= *(int *)(lVar11 + 0x30)) {
              lVar9 = (long)*(int *)(param_1 + 0x11c);
              plVar10 = (long *)(lVar11 + lVar9);
              goto LAB_006fa9a8;
            }
            lVar11 = *(long *)(lVar11 + lVar9 + 8) - lVar9;
          } while (lVar11 != (long)plVar3 - lVar9);
        }
        lVar9 = (long)*(int *)(param_1 + 0x11c);
        plVar10 = plVar3;
LAB_006fa9a8:
        plVar5 = (long *)((long)plVar12 + lVar9 + 0x1f0);
        lVar9 = *plVar10;
        *plVar10 = (long)plVar5;
        *plVar5 = lVar9;
        plVar5[1] = (long)plVar10;
        if (lVar9 != 0) {
          *(long **)(lVar9 + 8) = plVar5;
        }
        *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
        bVar7 = *(byte *)(plVar12 + 0x4c);
      }
      if ((bVar7 >> 3 & 1) != 0) {
        iVar8 = *(int *)((long)plVar12 + 0x174);
        if (iVar8 == -1) {
          iVar8 = (**(code **)(*plVar12 + 0x30))(plVar12);
          uVar6 = *(uint *)(param_1 + 0x248);
        }
        else {
          uVar6 = *(uint *)(param_1 + 0x248);
        }
        if ((uVar6 >> 4 & 1) == 0) {
          plVar10 = *(long **)(param_1 + 0x130);
          lVar9 = (long)*(int *)(param_1 + 0x13c);
          *(int *)(plVar12 + 0x4b) = iVar8;
          if (plVar10 != plVar4) {
            lVar11 = (long)plVar10 - lVar9;
            do {
              if (iVar8 <= *(int *)(lVar11 + 0x30)) {
                lVar9 = (long)*(int *)(param_1 + 0x13c);
                plVar10 = (long *)(lVar11 + lVar9);
                goto LAB_006fa9e4;
              }
              lVar11 = *(long *)(lVar11 + lVar9 + 8) - lVar9;
            } while (lVar11 != (long)plVar4 - lVar9);
          }
          lVar9 = (long)*(int *)(param_1 + 0x13c);
          plVar10 = plVar4;
LAB_006fa9e4:
          plVar5 = (long *)((long)plVar12 + lVar9 + 0x228);
          lVar9 = *plVar10;
          *plVar10 = (long)plVar5;
          *plVar5 = lVar9;
          plVar5[1] = (long)plVar10;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 8) = plVar5;
          }
          *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
        }
      }
      plVar12 = (long *)(*(long *)((long)plVar12 + lVar13 + 8) - lVar13);
    } while (plVar12 != (long *)((param_1 + 0xa8) - lVar13));
  }
  return;
}

