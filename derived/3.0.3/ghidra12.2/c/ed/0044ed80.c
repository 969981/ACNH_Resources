
void FUN_0044ed80(long *param_1,byte *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (((((*param_2 >> 5 & 1) != 0) &&
       (puVar1 = (undefined8 *)FUN_00426db0(param_2,0x20), puVar1 != (undefined8 *)0x0)) &&
      (plVar3 = (long *)*puVar1, plVar3 != (long *)0x0)) && (*plVar3 != 0)) {
    lVar5 = *plVar3 << 4;
    do {
      plVar4 = plVar3 + 2;
      uVar2 = FUN_00427110(*plVar4,param_3);
      if ((uVar2 & 1) != 0) {
        lVar5 = *plVar4;
        *param_1 = plVar3[1];
        param_1[1] = lVar5;
        uVar2 = 0;
        if (lVar5 != 0) {
          uVar2 = FUN_00428370();
        }
        param_1[2] = uVar2;
        if ((uVar2 & 1) == 0) {
          return;
        }
        FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
        return;
      }
      lVar5 = lVar5 + -0x10;
      plVar3 = plVar4;
    } while (lVar5 != 0);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

