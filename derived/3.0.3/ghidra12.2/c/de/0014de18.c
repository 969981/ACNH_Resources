
undefined8 FUN_0014de18(long param_1,int param_2,void *param_3,size_t param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x1188);
  if (*(uint *)(param_1 + 0x1188) == 0) {
    uVar5 = 0;
  }
  else {
    plVar6 = (long *)(param_1 + 0x1190);
    uVar3 = uVar5;
    do {
      if ((int)plVar6[2] == param_2) {
        lVar1 = plVar6[1];
        lVar4 = FUN_00143310(*plVar6,lVar1 + param_4);
        if (lVar4 == 0) goto LAB_0014dee8;
        memcpy((void *)(lVar4 + plVar6[1]),param_3,param_4);
        *plVar6 = lVar4;
        plVar6[1] = lVar1 + param_4;
        goto LAB_0014ded4;
      }
      plVar6 = plVar6 + 3;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lVar1 = FUN_00144e40(param_3,param_4);
  if (lVar1 == 0) {
LAB_0014dee8:
    uVar2 = 0x1b;
  }
  else {
    lVar4 = param_1 + uVar5 * 0x18;
    *(long *)(lVar4 + 0x1190) = lVar1;
    *(size_t *)(lVar4 + 0x1198) = param_4;
    *(int *)(lVar4 + 0x11a0) = param_2;
    *(int *)(param_1 + 0x1188) = *(int *)(param_1 + 0x1188) + 1;
LAB_0014ded4:
    uVar2 = 0;
    *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 0x10;
  }
  return uVar2;
}

