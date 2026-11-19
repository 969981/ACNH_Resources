
undefined8 FUN_03c9f890(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  iVar3 = (int)param_1[3];
  if (iVar3 == 0) {
    return 0;
  }
  plVar7 = (long *)param_1[2];
  lVar5 = (long)*(int *)((long)param_1 + 0x1c);
  plVar1 = plVar7;
  if (iVar3 < 1) {
    plVar1 = (long *)0x0;
  }
  lVar8 = 0;
  if (plVar1 != (long *)0x0) {
    lVar8 = (long)plVar1 - lVar5;
  }
  if (*(ulong *)(lVar8 + 0x10) <= param_2) {
    plVar1 = param_1 + 1;
    lVar8 = *plVar1;
    lVar6 = -lVar5;
    if (iVar3 < 1) {
      lVar8 = 0;
    }
    lVar2 = 0;
    if (lVar8 != 0) {
      lVar2 = lVar8 + lVar6;
    }
    if ((param_2 <= *(ulong *)(lVar2 + 0x10)) && (plVar7 != plVar1)) {
      lVar8 = lVar6 + (long)plVar7;
      do {
        if (*(ulong *)(lVar8 + 0x10) == param_2) {
          plVar1 = (long *)(lVar8 + lVar5);
          plVar7 = *(long **)(*param_1 + 0x40);
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(param_1 + 3) = (int)param_1[3] + -1;
          (**(code **)(*plVar7 + 0x38))(plVar7,*(undefined8 *)(lVar8 + 0x10));
          (**(code **)(*plVar7 + 0x38))(plVar7,lVar8);
          if (param_1[4] == 0) {
            puVar4 = (undefined8 *)
                     (**(code **)(**(long **)(*param_1 + 0x40) + 0x30))
                               (*(long **)(*param_1 + 0x40),0x20,8);
            if (puVar4 != (undefined8 *)0x0) {
              puVar4[2] = 0;
              puVar4[3] = 0;
              *puVar4 = 0;
              puVar4[1] = 0;
            }
            param_1[4] = (long)puVar4;
          }
          return 1;
        }
        lVar8 = *(long *)(lVar8 + lVar5 + 8) + lVar6;
      } while (lVar8 != lVar6 + (long)plVar1);
    }
  }
  return 0;
}

