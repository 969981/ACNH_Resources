
void FUN_03ea7220(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if (*(long *)(param_2 + 8) != param_2) {
    lVar7 = (long)*(int *)(param_2 + 0x14);
    plVar6 = (long *)(*(long *)(param_2 + 8) - lVar7);
    do {
      uVar3 = *(uint *)(plVar6 + 3);
      uVar4 = (**(code **)(*plVar6 + 0x30))(plVar6);
      lVar8 = *(long *)(param_1 + 0x30);
      lVar5 = (**(code **)(**(long **)(*(long *)(lVar8 + 0x30) + 0x18) + 0x20))();
      if (*(char *)(lVar5 + 0x78) != '\0') {
        if (*(char *)(lVar5 + 0x79) == '\0') {
          plVar2 = (long *)(lVar8 + 0x88) + *(uint *)(lVar8 + 0x80);
          if (1 < *(uint *)(lVar8 + 0x80)) {
            plVar2 = (long *)(lVar8 + 0x88);
          }
          lVar5 = *plVar2;
          if ((lVar5 != 0) && (*(long *)(lVar5 + 0x38) != 0)) {
            uVar1 = uVar3;
            if (*(uint *)(lVar5 + 0x30) <= uVar3) {
              uVar1 = 0;
            }
            if (*(long *)(*(long *)(lVar5 + 0x38) + (long)(int)uVar1 * 8) != 0) goto LAB_03ea72b4;
          }
        }
        else {
LAB_03ea72b4:
          if ((-1 < (int)uVar3) && ((int)uVar3 < (int)*(short *)(*(long *)(lVar8 + 0x30) + 0x46))) {
            plVar2 = (long *)(lVar8 + 0x88) + *(uint *)(lVar8 + 0x80);
            if (1 < *(uint *)(lVar8 + 0x80)) {
              plVar2 = (long *)(lVar8 + 0x88);
            }
            lVar5 = *plVar2;
            if ((lVar5 != 0) && (*(long *)(lVar5 + 0x38) != 0)) {
              uVar1 = uVar3;
              if (*(uint *)(lVar5 + 0x30) <= uVar3) {
                uVar1 = 0;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + (ulong)uVar1 * 8);
              if (lVar5 != 0) {
                *(undefined4 *)(lVar5 + 0x24) = uVar4;
              }
            }
          }
        }
      }
      lVar8 = *(long *)(param_1 + 0x38);
      lVar5 = (**(code **)(**(long **)(*(long *)(lVar8 + 0x30) + 0x18) + 0x20))();
      if (*(char *)(lVar5 + 0x78) != '\0') {
        if (*(char *)(lVar5 + 0x79) == '\0') {
          plVar2 = (long *)(lVar8 + 0x88) + *(uint *)(lVar8 + 0x80);
          if (1 < *(uint *)(lVar8 + 0x80)) {
            plVar2 = (long *)(lVar8 + 0x88);
          }
          lVar5 = *plVar2;
          if ((lVar5 != 0) && (*(long *)(lVar5 + 0x38) != 0)) {
            uVar1 = uVar3;
            if (*(uint *)(lVar5 + 0x30) <= uVar3) {
              uVar1 = 0;
            }
            if (*(long *)(*(long *)(lVar5 + 0x38) + (long)(int)uVar1 * 8) != 0) goto LAB_03ea7378;
          }
        }
        else {
LAB_03ea7378:
          if ((-1 < (int)uVar3) && ((int)uVar3 < (int)*(short *)(*(long *)(lVar8 + 0x30) + 0x46))) {
            plVar2 = (long *)(lVar8 + 0x88) + *(uint *)(lVar8 + 0x80);
            if (1 < *(uint *)(lVar8 + 0x80)) {
              plVar2 = (long *)(lVar8 + 0x88);
            }
            lVar5 = *plVar2;
            if ((lVar5 != 0) && (*(long *)(lVar5 + 0x38) != 0)) {
              if (*(uint *)(lVar5 + 0x30) <= uVar3) {
                uVar3 = 0;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + (ulong)uVar3 * 8);
              if (lVar5 != 0) {
                *(undefined4 *)(lVar5 + 0x24) = uVar4;
              }
            }
          }
        }
      }
      plVar6 = (long *)(*(long *)((long)plVar6 + lVar7 + 8) - lVar7);
    } while (plVar6 != (long *)(param_2 - lVar7));
  }
  return;
}

