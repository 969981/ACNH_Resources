
void FUN_031fe8dc(long *param_1,byte param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  *(byte *)((long)param_1 + 0x255) = param_2;
  uVar1 = *(uint *)(param_1 + 0x36);
  if ((((int)param_1[0x3e] == -1 && *(int *)((long)param_1 + 500) == -1) && uVar1 < 2) ||
     (uVar1 == 4)) {
    (**(code **)(*param_1 + 0xa8))(param_1);
    nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x48));
  }
  else {
    param_2 = param_2 & 1;
    if ((param_1[0x43] == 0) || (lVar4 = *(long *)(param_1[0x43] + 0x570), lVar4 == 0)) {
      if (uVar1 != 3) goto LAB_031fe92c;
    }
    else {
      plVar2 = *(long **)(lVar4 + 0x1b0);
      if (plVar2 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar2 + 0x48))();
        if ((uVar3 & 1) == 0) goto LAB_031fe92c;
        param_2 = *(byte *)((long)param_1 + 0x255);
      }
    }
    if (param_2 != 0) {
      *(int *)(param_1 + 0x4a) = (int)param_1[0x42];
    }
  }
LAB_031fe92c:
  *(undefined1 *)((long)param_1 + 0x254) = 0;
  return;
}

