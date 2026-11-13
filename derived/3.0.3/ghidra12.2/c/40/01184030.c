
void FUN_01184030(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 4);
  *param_1 = 0;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    if (param_1[6] != 0) {
      plVar3 = (long *)(lVar2 + 0x18);
      lVar4 = (long)(int)param_1[6] * 0x48;
      do {
        lVar1 = *plVar3;
        *plVar3 = 0;
        plVar3[1] = 0;
        if (lVar1 != 0) {
          (**(code **)(*(long *)plVar3[2] + 0x18))();
        }
        lVar1 = plVar3[-3];
        plVar3[2] = 0;
        *(undefined4 *)(plVar3 + 1) = 0;
        plVar3[-3] = 0;
        plVar3[-2] = 0;
        if (lVar1 != 0) {
          (**(code **)(*(long *)plVar3[-1] + 0x18))();
        }
        plVar3[-1] = 0;
        lVar4 = lVar4 + -0x48;
        *(undefined4 *)(plVar3 + -2) = 0;
        plVar3 = plVar3 + 9;
      } while (lVar4 != 0);
    }
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[6] = 0;
    (**(code **)(**(long **)(param_1 + 2) + 0x18))(*(long **)(param_1 + 2),lVar2);
    lVar2 = *(long *)(param_1 + 4);
  }
  *(undefined8 *)(param_1 + 2) = 0;
  if (param_1[6] != 0) {
    plVar3 = (long *)(lVar2 + 0x18);
    lVar2 = (long)(int)param_1[6] * 0x48;
    do {
      lVar4 = *plVar3;
      *plVar3 = 0;
      plVar3[1] = 0;
      if (lVar4 != 0) {
        (**(code **)(*(long *)plVar3[2] + 0x18))();
      }
      lVar4 = plVar3[-3];
      plVar3[2] = 0;
      *(undefined4 *)(plVar3 + 1) = 0;
      plVar3[-3] = 0;
      plVar3[-2] = 0;
      if (lVar4 != 0) {
        (**(code **)(*(long *)plVar3[-1] + 0x18))();
      }
      plVar3[-1] = 0;
      lVar2 = lVar2 + -0x48;
      *(undefined4 *)(plVar3 + -2) = 0;
      plVar3 = plVar3 + 9;
    } while (lVar2 != 0);
  }
  return;
}

