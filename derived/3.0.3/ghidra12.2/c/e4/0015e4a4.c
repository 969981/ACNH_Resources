
undefined8 FUN_0015e4a4(undefined8 *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  uVar3 = plVar4[2];
  lVar1 = *plVar4;
  if (CARRY8(param_3,uVar3)) {
    FUN_00143300();
    *plVar4 = 0;
LAB_0015e568:
    FUN_00143300(plVar4);
    *param_1 = 0;
    uVar2 = 0x1b;
  }
  else {
    if ((lVar1 == 0) || (plVar4[1] - 1U < uVar3 + param_3)) {
      if (((long)(uVar3 | param_3) < 0) || (CARRY8(param_3 << 1,uVar3 << 1))) {
        lVar5 = -1;
        if (lVar1 == 0) goto LAB_0015e55c;
LAB_0015e518:
        lVar1 = FUN_00144e8c(lVar1,lVar5);
      }
      else {
        lVar5 = (uVar3 + param_3) * 2;
        if (lVar1 != 0) goto LAB_0015e518;
LAB_0015e55c:
        lVar1 = FUN_001432f0(lVar5);
      }
      if (lVar1 == 0) goto LAB_0015e568;
      uVar3 = plVar4[2];
      *plVar4 = lVar1;
      plVar4[1] = lVar5;
    }
    memcpy((void *)(lVar1 + uVar3),param_2,param_3);
    uVar2 = 0;
    plVar4[2] = plVar4[2] + param_3;
  }
  return uVar2;
}

