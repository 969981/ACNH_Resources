
void FUN_03be69e0(long *param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = *(uint *)(param_1 + 1) | 0x34;
  *(uint *)(param_1 + 1) = uVar5;
  if (param_1[5] != 0) {
    plVar2 = (long *)(**(code **)(**(long **)(*(long *)(param_1[5] + 0x30) + 0x18) + 0x20))();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
    (**(code **)(*plVar2 + 0x10))();
    if ((long *)param_1[0xb] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xb] + 0x40))();
    }
    if ((long *)param_1[0x10] != param_1 + 0xf) {
      lVar8 = (long)*(int *)((long)param_1 + 0x8c);
      plVar7 = (long *)(param_1[0x10] - lVar8);
      do {
        (**(code **)(*plVar7 + 0x28))(plVar7);
        plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
      } while (plVar7 != (long *)((long)(param_1 + 0xf) - lVar8));
    }
    (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar5 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar5 & 0xffffffcb;
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 0x18))();
  }
  if ((long *)param_1[0x10] != param_1 + 0xf) {
    lVar6 = (long)*(int *)((long)param_1 + 0x8c);
    plVar2 = (long *)(param_1[0x10] - lVar6);
    lVar8 = (long)plVar2 + lVar6;
    do {
      plVar7 = (long *)((long)plVar2 + (long)*(int *)((long)param_1 + 0x8c));
      lVar8 = *(long *)(lVar8 + 8);
      if (*plVar7 != 0) {
        *(long *)(*plVar7 + 8) = plVar7[1];
      }
      if ((long *)plVar7[1] != (long *)0x0) {
        *(long *)plVar7[1] = *plVar7;
      }
      *plVar7 = 0;
      plVar7[1] = 0;
      *(int *)(param_1 + 0x11) = (int)param_1[0x11] + -1;
      lVar3 = (**(code **)(**(long **)(*(long *)(param_1[5] + 0x30) + 0x18) + 0x20))();
      (**(code **)(*plVar2 + 0x60))(plVar2);
      if ((*(uint *)(plVar2 + 6) & 0xfffffffe) != 4) {
        (**(code **)(*plVar2 + 0x40))(plVar2);
      }
      plVar2[5] = 0;
      plVar2[6] = 0;
      plVar2[4] = 0;
      plVar7 = *(long **)(lVar3 + 0xb8);
      (**(code **)*plVar2)(plVar2);
      (**(code **)(*plVar7 + 0x38))(plVar7,plVar2);
      plVar2 = (long *)(lVar8 - lVar6);
    } while (plVar2 != (long *)((long)(param_1 + 0xf) - lVar6));
  }
  param_1[6] = param_2;
  uVar1 = (**(code **)(*(long *)param_1[5] + 0x20))();
  *(undefined1 *)((long)param_1 + 0x94) = uVar1;
  plVar2 = (long *)FUN_03be5c64(param_1,param_2);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*param_1 + 0x20))(param_1);
    uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2);
    if ((uVar4 & 1) == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
      plVar2 = (long *)0x0;
    }
    param_1[0xb] = (long)plVar2;
  }
  return;
}

