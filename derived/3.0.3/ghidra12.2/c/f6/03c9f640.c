
ulong FUN_03c9f640(long *param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  
  if (param_1[4] == 0) {
    return 0;
  }
  uVar5 = (**(code **)(**(long **)(*param_1 + 0x40) + 0x30))();
  if (uVar5 == 0) {
    return 0;
  }
  if (param_3 < 0) {
    puVar11 = (undefined8 *)
              (**(code **)(**(long **)(*param_1 + 0x40) + 0x30))
                        (*(long **)(*param_1 + 0x40),0x20,0xfffffff8);
    if (puVar11 == (undefined8 *)0x0) {
      (**(code **)(**(long **)(*param_1 + 0x40) + 0x38))(*(long **)(*param_1 + 0x40),param_1[4]);
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)(*param_1 + 0x40) + 0x30))
                          (*(long **)(*param_1 + 0x40),0x20,0xfffffff8);
      if (puVar11 != (undefined8 *)0x0) {
        puVar11[2] = 0;
        puVar11[3] = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
      }
      goto LAB_03c9f688;
    }
    *puVar11 = 0;
    puVar11[1] = 0;
  }
  else {
    puVar11 = (undefined8 *)param_1[4];
LAB_03c9f688:
    puVar6 = (undefined8 *)
             (**(code **)(**(long **)(*param_1 + 0x40) + 0x30))(*(long **)(*param_1 + 0x40),0x20,8);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
    }
    param_1[4] = (long)puVar6;
  }
  puVar11[2] = uVar5;
  puVar11[3] = param_2;
  plVar2 = param_1 + 1;
  iVar4 = (int)param_1[3];
  if (iVar4 == 0) {
    plVar1 = (long *)((long)*(int *)((long)param_1 + 0x1c) + (long)puVar11);
    lVar8 = param_1[1];
    param_1[1] = (long)plVar1;
    *plVar1 = lVar8;
    plVar1[1] = (long)plVar2;
  }
  else {
    lVar8 = param_1[1];
    lVar10 = lVar8;
    if (iVar4 < 1) {
      lVar10 = 0;
    }
    lVar7 = (long)*(int *)((long)param_1 + 0x1c);
    lVar3 = 0;
    if (lVar10 != 0) {
      lVar3 = lVar10 - lVar7;
    }
    if (uVar5 <= *(ulong *)(lVar3 + 0x10)) {
      puVar9 = (undefined8 *)param_1[2];
      lVar8 = -lVar7;
      puVar6 = puVar9;
      if (iVar4 < 1) {
        puVar6 = (undefined8 *)0x0;
      }
      lVar10 = 0;
      if (puVar6 != (undefined8 *)0x0) {
        lVar10 = (long)puVar6 + lVar8;
      }
      if (uVar5 < *(ulong *)(lVar10 + 0x10)) {
        plVar1 = (long *)(lVar7 + (long)puVar11);
        param_1[2] = (long)plVar1;
        *plVar1 = (long)plVar2;
        plVar1[1] = (long)puVar9;
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = plVar1;
        }
      }
      else {
        lVar10 = (long)puVar9 + lVar8;
        do {
          lVar10 = *(long *)(lVar10 + lVar7 + 8) + lVar8;
          if (lVar10 == lVar8 + (long)plVar2) {
            return uVar5;
          }
        } while (*(ulong *)(lVar10 + 0x10) <= uVar5);
        plVar2 = (long *)(lVar10 + lVar7);
        plVar1 = (long *)(lVar7 + (long)puVar11);
        lVar8 = *plVar2;
        *plVar2 = (long)plVar1;
        *plVar1 = lVar8;
        plVar1[1] = (long)plVar2;
        if (lVar8 != 0) {
          *(long **)(lVar8 + 8) = plVar1;
        }
      }
      goto LAB_03c9f750;
    }
    plVar1 = (long *)(lVar7 + (long)puVar11);
    *plVar2 = (long)plVar1;
    *plVar1 = lVar8;
    plVar1[1] = (long)plVar2;
  }
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar1;
  }
LAB_03c9f750:
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  return puVar11[2];
}

