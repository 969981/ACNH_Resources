
void FUN_001a4cd0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_38;
  
  if (param_2 == (undefined8 *)0x0) {
    FUN_00187810(&local_38);
    uVar1 = (int)local_38 - *(int *)(param_1 + 0x28);
  }
  else {
    local_38 = *param_2;
    uVar1 = (int)local_38 - *(int *)(param_1 + 0x28);
  }
  if (999 < uVar1) {
    *(undefined8 *)(param_1 + 0x28) = local_38;
    plVar7 = *(long **)(param_1 + 8);
    while (plVar7 != (long *)(param_1 + 0x10)) {
      iVar2 = *(uint *)(plVar7 + 0x28) - uVar1;
      if (*(uint *)(plVar7 + 0x28) < uVar1 || iVar2 == 0) {
        plVar4 = (long *)plVar7[1];
        plVar5 = plVar7;
        plVar6 = plVar4;
        if (plVar4 == (long *)0x0) {
          do {
            plVar8 = (long *)plVar5[2];
            bVar3 = (long *)*plVar8 != plVar5;
            plVar5 = plVar8;
          } while (bVar3);
        }
        else {
          do {
            plVar8 = plVar6;
            plVar6 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
        plVar5 = plVar7;
        if (plVar4 == (long *)0x0) {
          do {
            plVar6 = (long *)plVar5[2];
            bVar3 = (long *)*plVar6 != plVar5;
            plVar5 = plVar6;
          } while (bVar3);
        }
        else {
          do {
            plVar6 = plVar4;
            plVar4 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        if (*(long **)(param_1 + 8) == plVar7) {
          *(long **)(param_1 + 8) = plVar6;
        }
        *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
        FUN_00192390(*(undefined8 *)(param_1 + 0x10),plVar7);
        FUN_001e1868(plVar7 + 0x16);
        FUN_001e1868(plVar7 + 4);
        FUN_00187e4c(plVar7);
        plVar7 = plVar8;
      }
      else {
        *(int *)(plVar7 + 0x28) = iVar2;
        plVar4 = (long *)plVar7[1];
        plVar5 = plVar7;
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar5[2];
            bVar3 = (long *)*plVar7 != plVar5;
            plVar5 = plVar7;
          } while (bVar3);
        }
        else {
          do {
            plVar7 = plVar4;
            plVar4 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      }
    }
  }
  return;
}

