
undefined8 FUN_003ce2f0(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(int *)(param_2 + 0x7c) + (uint)*(byte *)(param_2 + 0xf8);
  uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  if (0x7e < (int)uVar5) {
    uVar5 = 0x7f;
  }
  if ((int)param_1[8] == 0) {
    return 0;
  }
  do {
    plVar1 = (long *)param_1[1];
    if (plVar1 == param_1) {
      if (0 < (int)param_1[8]) goto LAB_003ce3c8;
    }
    else {
      iVar2 = 0;
      do {
        plVar1 = (long *)plVar1[1];
        iVar2 = iVar2 + 1;
      } while (plVar1 != param_1);
      if (iVar2 < (int)param_1[8]) {
LAB_003ce3c8:
        lVar3 = *(long *)(param_2 + 0x1e0);
        *(long *)(param_2 + 0x1e0) = *param_1;
        *(long **)(lVar3 + 8) = param_1;
        *(long *)(*param_1 + 8) = param_2 + 0x1e0;
        *param_1 = lVar3;
        plVar1 = param_1 + 2;
        plVar4 = (long *)param_1[3];
        if (plVar4 == plVar1) goto LAB_003ce488;
        uVar5 = *(int *)(param_2 + 0x7c) + (uint)*(byte *)(param_2 + 0xf8);
        uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
        if (0x7e < (int)uVar5) {
          uVar5 = 0x7f;
        }
        if ((char)param_1[0x10] != '\0') goto LAB_003ce420;
        break;
      }
    }
    lVar3 = param_1[3];
    uVar6 = *(int *)(lVar3 + -0x174) + (uint)*(byte *)(lVar3 + -0xf8);
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    if (0x7e < (int)uVar6) {
      uVar6 = 0x7f;
    }
    if ((char)param_1[0x10] == '\0') {
      if (uVar5 < uVar6) {
        return 0;
      }
    }
    else if (uVar5 <= uVar6) {
      return 0;
    }
    (**(code **)(*(long *)(lVar3 + -0x1f0) + 0x20))();
  } while( true );
  while (plVar4 = (long *)plVar4[1], plVar4 != plVar1) {
    uVar6 = *(int *)((long)plVar4 + -0x174) + (uint)*(byte *)(plVar4 + -0x1f);
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    if (0x7e < (int)uVar6) {
      uVar6 = 0x7f;
    }
    if (uVar5 < uVar6) goto LAB_003ce484;
  }
  goto LAB_003ce488;
LAB_003ce484:
  plVar1 = plVar4;
  goto LAB_003ce488;
  while (plVar4 = (long *)plVar4[1], plVar4 != plVar1) {
LAB_003ce420:
    uVar6 = *(int *)((long)plVar4 + -0x174) + (uint)*(byte *)(plVar4 + -0x1f);
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    if (0x7e < (int)uVar6) {
      uVar6 = 0x7f;
    }
    if (uVar5 <= uVar6) goto LAB_003ce484;
  }
LAB_003ce488:
  lVar3 = *(long *)(param_2 + 0x1f0);
  *(long *)(param_2 + 0x1f0) = *plVar1;
  *(long **)(lVar3 + 8) = plVar1;
  *(long *)(*plVar1 + 8) = param_2 + 0x1f0;
  *plVar1 = lVar3;
  FUN_003cfacc(param_2,param_1);
  return 1;
}

