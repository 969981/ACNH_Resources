
void FUN_03855e60(long param_1)

{
  int *piVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  
  if (*(char *)(param_1 + 0x171) != '\0' || *(char *)(param_1 + 0x172) != '\0') {
    if (*(char *)(param_1 + 0x170) == '\0') {
      if (*(long *)(param_1 + 0x160) != 0) {
        uVar3 = *(uint *)(*(long *)(param_1 + 0x160) + 0x30);
        if (0 < (int)uVar3) {
          uVar8 = 0;
          do {
            plVar6 = (long *)**(undefined8 **)
                               (*(long *)(*(long *)(param_1 + 0x160) + 0x38) + uVar8 * 8);
            if (plVar6 != (long *)0x0) {
              uVar2 = uVar8;
              if (*(uint *)(param_1 + 8) <= uVar8) {
                uVar2 = 0;
              }
              piVar1 = (int *)(*(long *)(param_1 + 0x10) + uVar2 * 0x10);
              iVar4 = *piVar1;
              if (iVar4 != 0) {
                lVar10 = *(long *)(piVar1 + 2);
                iVar7 = 0;
                iVar9 = 0;
                do {
                  lVar5 = lVar10 + (long)iVar9 * 0x60;
                  (**(code **)(*plVar6 + 0x60))(plVar6,lVar5 + 0x20,lVar5 + 0x50,iVar7);
                  iVar9 = iVar9 + 1;
                  iVar7 = iVar7 + 1;
                } while (iVar4 != iVar9);
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar3);
        }
        *(undefined1 *)(param_1 + 0x170) = 1;
      }
    }
    else if (*(char *)(param_1 + 0x171) != '\0') {
      FUN_03855b20(param_1,1);
    }
  }
  FUN_03855cf0(param_1);
  return;
}

