
void FUN_02fbc124(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x218) == param_2) {
    piVar3 = (int *)(param_1 + 0x21c);
    if (*(int *)(param_1 + 0x21c) == 2) {
      lVar2 = 0;
      goto LAB_02fbc390;
    }
    if (*piVar3 == 1) {
      *(undefined4 *)(param_1 + 0x228) = 1;
    }
  }
  if (*(int *)(param_1 + 0x238) == param_2) {
    piVar3 = (int *)(param_1 + 0x23c);
    if (*(int *)(param_1 + 0x23c) == 2) {
      lVar2 = 1;
      goto LAB_02fbc390;
    }
    if (*piVar3 == 1) {
      *(undefined4 *)(param_1 + 0x248) = 1;
    }
  }
  if (*(int *)(param_1 + 600) == param_2) {
    piVar3 = (int *)(param_1 + 0x25c);
    if (*(int *)(param_1 + 0x25c) == 2) {
      lVar2 = 2;
      goto LAB_02fbc390;
    }
    if (*piVar3 == 1) {
      *(undefined4 *)(param_1 + 0x268) = 1;
    }
  }
  if (*(int *)(param_1 + 0x278) == param_2) {
    piVar3 = (int *)(param_1 + 0x27c);
    if (*(int *)(param_1 + 0x27c) == 2) {
      lVar2 = 3;
      goto LAB_02fbc390;
    }
    if (*piVar3 == 1) {
      *(undefined4 *)(param_1 + 0x288) = 1;
    }
  }
  if (*(int *)(param_1 + 0x298) == param_2) {
    piVar3 = (int *)(param_1 + 0x29c);
    if (*(int *)(param_1 + 0x29c) == 2) {
      lVar2 = 4;
      goto LAB_02fbc390;
    }
    if (*piVar3 == 1) {
      *(undefined4 *)(param_1 + 0x2a8) = 1;
    }
  }
  if (*(int *)(param_1 + 0x2b8) == param_2) {
    piVar3 = (int *)(param_1 + 700);
    if (*(int *)(param_1 + 700) == 2) {
      lVar2 = 5;
      goto LAB_02fbc390;
    }
    if (*piVar3 == 1) {
      *(undefined4 *)(param_1 + 0x2c8) = 1;
    }
  }
  if (*(int *)(param_1 + 0x2d8) == param_2) {
    piVar3 = (int *)(param_1 + 0x2dc);
    if (*(int *)(param_1 + 0x2dc) == 2) {
      lVar2 = 6;
      goto LAB_02fbc390;
    }
    if (*piVar3 == 1) {
      *(undefined4 *)(param_1 + 0x2e8) = 1;
    }
  }
  if (*(int *)(param_1 + 0x2f8) == param_2) {
    piVar3 = (int *)(param_1 + 0x2fc);
    if (*(int *)(param_1 + 0x2fc) == 2) {
      lVar2 = 7;
      goto LAB_02fbc390;
    }
    if (*piVar3 == 1) {
      *(undefined4 *)(param_1 + 0x308) = 1;
    }
  }
  if (*(int *)(param_1 + 0x318) == param_2) {
    piVar3 = (int *)(param_1 + 0x31c);
    if (*(int *)(param_1 + 0x31c) == 2) {
      lVar2 = 8;
      goto LAB_02fbc390;
    }
    if (*piVar3 == 1) {
      *(undefined4 *)(param_1 + 0x328) = 1;
    }
  }
  if (*(int *)(param_1 + 0x338) == param_2) {
    piVar3 = (int *)(param_1 + 0x33c);
    if (*(int *)(param_1 + 0x33c) == 2) {
      lVar2 = 9;
      goto LAB_02fbc390;
    }
    if (*piVar3 == 1) {
      *(undefined4 *)(param_1 + 0x348) = 1;
    }
  }
  if (*(int *)(param_1 + 0x358) == param_2) {
    piVar3 = (int *)(param_1 + 0x35c);
    if (*(int *)(param_1 + 0x35c) == 2) {
      lVar2 = 10;
      goto LAB_02fbc390;
    }
    if (*piVar3 == 1) {
      *(undefined4 *)(param_1 + 0x368) = 1;
    }
  }
  if (*(int *)(param_1 + 0x378) != param_2) {
    return;
  }
  piVar3 = (int *)(param_1 + 0x37c);
  if (*(int *)(param_1 + 0x37c) != 2) {
    if (*piVar3 == 1) {
      *(undefined4 *)(param_1 + 0x388) = 1;
      return;
    }
    return;
  }
  lVar2 = 0xb;
LAB_02fbc390:
  plVar1 = *(long **)(*(long *)(param_1 + 0x210 + lVar2 * 0x20) + 0x1b0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,0);
  }
  *piVar3 = 3;
  return;
}

