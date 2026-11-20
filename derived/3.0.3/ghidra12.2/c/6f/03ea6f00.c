
void FUN_03ea6f00(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  if (*(long *)(param_2 + 8) != param_2) {
    lVar9 = (long)*(int *)(param_2 + 0x14);
    plVar8 = (long *)(*(long *)(param_2 + 8) - lVar9);
    do {
      uVar3 = *(uint *)(plVar8 + 3);
      uVar4 = (**(code **)(*plVar8 + 0x30))(plVar8);
      uVar5 = (**(code **)(*plVar8 + 0x28))(plVar8);
      uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,uVar5);
      lVar10 = *(long *)(param_1 + 0x30);
      lVar7 = (**(code **)(**(long **)(*(long *)(lVar10 + 0x30) + 0x18) + 0x20))();
      if (*(char *)(lVar7 + 0x78) != '\0') {
        if (*(char *)(lVar7 + 0x79) == '\0') {
          plVar2 = (long *)(lVar10 + 0x88) + *(uint *)(lVar10 + 0x80);
          if (1 < *(uint *)(lVar10 + 0x80)) {
            plVar2 = (long *)(lVar10 + 0x88);
          }
          lVar7 = *plVar2;
          if ((lVar7 != 0) && (*(long *)(lVar7 + 0x38) != 0)) {
            uVar1 = uVar3;
            if (*(uint *)(lVar7 + 0x30) <= uVar3) {
              uVar1 = 0;
            }
            if (*(long *)(*(long *)(lVar7 + 0x38) + (long)(int)uVar1 * 8) != 0) goto LAB_03ea6fd0;
          }
        }
        else {
LAB_03ea6fd0:
          FUN_03bf2214(lVar10 + 0x80,uVar6,uVar4,uVar3);
        }
      }
      lVar10 = *(long *)(param_1 + 0x38);
      lVar7 = (**(code **)(**(long **)(*(long *)(lVar10 + 0x30) + 0x18) + 0x20))();
      if (*(char *)(lVar7 + 0x78) != '\0') {
        if (*(char *)(lVar7 + 0x79) == '\0') {
          plVar2 = (long *)(lVar10 + 0x88) + *(uint *)(lVar10 + 0x80);
          if (1 < *(uint *)(lVar10 + 0x80)) {
            plVar2 = (long *)(lVar10 + 0x88);
          }
          lVar7 = *plVar2;
          if ((lVar7 != 0) && (*(long *)(lVar7 + 0x38) != 0)) {
            uVar1 = uVar3;
            if (*(uint *)(lVar7 + 0x30) <= uVar3) {
              uVar1 = 0;
            }
            if (*(long *)(*(long *)(lVar7 + 0x38) + (long)(int)uVar1 * 8) != 0) goto LAB_03ea6f40;
          }
        }
        else {
LAB_03ea6f40:
          FUN_03bf2214(lVar10 + 0x80,uVar6,uVar4,uVar3);
        }
      }
      plVar8 = (long *)(*(long *)((long)plVar8 + lVar9 + 8) - lVar9);
    } while (plVar8 != (long *)(param_2 - lVar9));
  }
  return;
}

