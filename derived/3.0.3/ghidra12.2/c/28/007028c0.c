
void FUN_007028c0(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x60);
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x1138) != 0) {
      *(undefined1 *)(*(long *)(lVar7 + 0x1138) + 0x2c1) = 1;
    }
    lVar9 = *(long *)(lVar7 + 0x1150);
    if (lVar9 != 0) {
      lVar3 = *(long *)(lVar7 + 0x1148);
      if (*(long *)(lVar7 + 0x1138) != 0) {
        lVar3 = *(long *)(lVar7 + 0x1138) + 0xc0;
      }
      if ((lVar3 != 0) && (*(int *)(lVar9 + 0x30) != 0)) {
        lVar11 = *(long *)(lVar9 + 0x38);
        lVar7 = 0;
        iVar10 = 0;
        lVar8 = 0;
        lVar12 = (long)*(int *)(lVar9 + 0x30) << 3;
        do {
          plVar5 = (long *)**(undefined8 **)(lVar11 + lVar7 * 8);
          iVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,param_2);
          if (iVar4 != -1) {
            if ((((((uint)lVar7 ^ 0xffffffff) & 0xffff) != 0) && (iVar4 * 0x10000 != -0x10000)) &&
               ((uint)(iVar10 >> 0x10) < *(uint *)(lVar3 + 8))) {
              uVar2 = iVar4 * 0x10000 >> 0x10;
              if (uVar2 < *(uint *)(*(long *)(lVar3 + 0x10) + (lVar8 >> 0x2c))) {
                puVar1 = (uint *)(*(long *)(lVar3 + 0x10) + (long)(iVar10 >> 0x10) * 0x10);
                if (*puVar1 <= uVar2) {
                  uVar2 = 0;
                }
                plVar5 = (long *)(*(long *)(puVar1 + 2) + (long)(int)uVar2 * 0x60);
                uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
                if ((uVar6 & 1) == 0) {
                  plVar5[2] = (long)&LAB_00702c38;
                  plVar5[3] = 0;
                  *plVar5 = (long)&PTR_LAB_048fdeb8;
                  plVar5[1] = param_1;
                  *(undefined1 *)(lVar3 + 0x171) = 1;
                }
              }
            }
            break;
          }
          lVar8 = lVar8 + 0x1000000000000;
          iVar10 = iVar10 + 0x10000;
          lVar7 = lVar7 + 1;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
        if (*(int *)(lVar9 + 0x30) != 0) {
          lVar11 = *(long *)(lVar9 + 0x38);
          lVar7 = 0;
          iVar10 = 0;
          lVar8 = 0;
          lVar12 = (long)*(int *)(lVar9 + 0x30) << 3;
          do {
            plVar5 = (long *)**(undefined8 **)(lVar11 + lVar7 * 8);
            iVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,param_2 + 0x28);
            if (iVar4 != -1) {
              if ((((((uint)lVar7 ^ 0xffffffff) & 0xffff) != 0) && (iVar4 * 0x10000 != -0x10000)) &&
                 ((uint)(iVar10 >> 0x10) < *(uint *)(lVar3 + 8))) {
                uVar2 = iVar4 * 0x10000 >> 0x10;
                if (uVar2 < *(uint *)(*(long *)(lVar3 + 0x10) + (lVar8 >> 0x2c))) {
                  puVar1 = (uint *)(*(long *)(lVar3 + 0x10) + (long)(iVar10 >> 0x10) * 0x10);
                  if (*puVar1 <= uVar2) {
                    uVar2 = 0;
                  }
                  plVar5 = (long *)(*(long *)(puVar1 + 2) + (long)(int)uVar2 * 0x60);
                  uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
                  if ((uVar6 & 1) == 0) {
                    plVar5[2] = (long)&LAB_00702d5c;
                    plVar5[3] = 0;
                    *plVar5 = (long)&PTR_LAB_048fdeb8;
                    plVar5[1] = param_1;
                    *(undefined1 *)(lVar3 + 0x171) = 1;
                  }
                }
              }
              break;
            }
            lVar8 = lVar8 + 0x1000000000000;
            iVar10 = iVar10 + 0x10000;
            lVar7 = lVar7 + 1;
            lVar12 = lVar12 + -8;
          } while (lVar12 != 0);
        }
        if (*(int *)(lVar9 + 0x30) != 0) {
          lVar12 = *(long *)(lVar9 + 0x38);
          lVar7 = 0;
          iVar10 = 0;
          lVar8 = 0;
          lVar9 = (long)*(int *)(lVar9 + 0x30) << 3;
          do {
            plVar5 = (long *)**(undefined8 **)(lVar12 + lVar7 * 8);
            iVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,param_2 + 0x50);
            if (iVar4 != -1) {
              if ((((uint)lVar7 ^ 0xffffffff) & 0xffff) == 0) {
                return;
              }
              if (iVar4 * 0x10000 == -0x10000) {
                return;
              }
              if (*(uint *)(lVar3 + 8) <= (uint)(iVar10 >> 0x10)) {
                return;
              }
              uVar2 = iVar4 * 0x10000 >> 0x10;
              if (*(uint *)(*(long *)(lVar3 + 0x10) + (lVar8 >> 0x2c)) <= uVar2) {
                return;
              }
              puVar1 = (uint *)(*(long *)(lVar3 + 0x10) + (long)(iVar10 >> 0x10) * 0x10);
              if (*puVar1 <= uVar2) {
                uVar2 = 0;
              }
              plVar5 = (long *)(*(long *)(puVar1 + 2) + (long)(int)uVar2 * 0x60);
              uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
              if ((uVar6 & 1) == 0) {
                plVar5[2] = (long)&LAB_00702e64;
                plVar5[3] = 0;
                *plVar5 = (long)&PTR_LAB_048fdeb8;
                plVar5[1] = param_1;
                *(undefined1 *)(lVar3 + 0x171) = 1;
                return;
              }
              return;
            }
            lVar8 = lVar8 + 0x1000000000000;
            iVar10 = iVar10 + 0x10000;
            lVar7 = lVar7 + 1;
            lVar9 = lVar9 + -8;
          } while (lVar9 != 0);
        }
      }
    }
  }
  return;
}

