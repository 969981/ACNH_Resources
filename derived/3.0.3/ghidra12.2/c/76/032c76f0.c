
void FUN_032c76f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  if (0 < (int)uVar2) {
    uVar9 = 0;
    do {
      uVar1 = uVar9;
      if (*(uint *)(param_1 + 0x30) <= uVar9) {
        uVar1 = 0;
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 8);
      if (lVar10 != 0) {
        lVar4 = lVar10;
        do {
          lVar7 = lVar4;
          lVar6 = *(long *)(lVar7 + 0x28);
          lVar4 = *(long *)(lVar7 + 0x18);
        } while (*(long *)(lVar7 + 0x18) != 0 && lVar6 == 0);
        if (lVar6 == 0) {
          if (*(int *)(lVar7 + 0x6c) != 3) goto LAB_032c77dc;
        }
        else if ((*(char *)(lVar6 + 0x24) != '\0' && *(int *)(lVar7 + 0x6c) != 3) &&
                (*(float *)(lVar6 + 0x3c) == 0.0)) {
LAB_032c77dc:
          *(undefined4 *)(lVar7 + 0x6c) = 3;
          if (*(long **)(lVar7 + 0x38) != (long *)0x0) {
            (**(code **)(**(long **)(lVar7 + 0x38) + 0x20))();
          }
        }
        lVar4 = lVar10;
        do {
          plVar3 = (long *)(lVar4 + 0x28);
          lVar4 = *(long *)(lVar4 + 0x18);
        } while (lVar4 != 0 && *plVar3 == 0);
        do {
          lVar4 = lVar10;
          lVar10 = *(long *)(lVar4 + 0x18);
        } while (*(long *)(lVar4 + 0x18) != 0 && *(long *)(lVar4 + 0x28) == 0);
        if (*(int *)(lVar4 + 0x6c) == 3) {
          uVar5 = *(uint *)(param_1 + 0x40);
          lVar10 = *(long *)(param_1 + 0x48);
          uVar1 = uVar9;
          if (uVar5 <= uVar9) {
            uVar1 = 0;
          }
          uVar8 = (ulong)uVar1;
          if ((*(byte *)(lVar10 + uVar8) & 1) != 0) {
            *(byte *)(lVar10 + uVar8) = *(byte *)(lVar10 + uVar8) & 0xfe;
            uVar5 = *(uint *)(param_1 + 0x40);
            lVar10 = *(long *)(param_1 + 0x48);
          }
          uVar1 = uVar9;
          if (uVar5 <= uVar9) {
            uVar1 = 0;
          }
          if (((*(byte *)(lVar10 + (ulong)uVar1) >> 1 & 1) != 0) &&
             ((*(byte *)(lVar10 + (ulong)uVar1) & 1) == 0)) {
            uVar1 = uVar9;
            if (*(uint *)(param_1 + 0x30) <= uVar9) {
              uVar1 = 0;
            }
            lVar4 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 8);
            if (lVar4 != 0) {
              do {
                lVar10 = lVar4;
                plVar3 = *(long **)(lVar10 + 0x28);
                lVar4 = *(long *)(lVar10 + 0x18);
              } while (*(long *)(lVar10 + 0x18) != 0 && plVar3 == (long *)0x0);
              *(undefined4 *)(lVar10 + 0x6c) = 0;
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x20))(plVar3,0);
              }
              uVar1 = uVar9;
              if (*(uint *)(param_1 + 0x30) <= uVar9) {
                uVar1 = 0;
              }
              *(undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 8) = 0;
              uVar5 = *(uint *)(param_1 + 0x40);
              lVar10 = *(long *)(param_1 + 0x48);
            }
            uVar1 = uVar9;
            if (uVar5 <= uVar9) {
              uVar1 = 0;
            }
            *(byte *)(lVar10 + (ulong)uVar1) = *(byte *)(lVar10 + (ulong)uVar1) & 0xfd;
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar2);
  }
  return;
}

