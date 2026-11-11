
void FUN_004d71e0(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong local_50 [2];
  
  lVar4 = param_1[1];
  uVar1 = FUN_00428440(lVar4);
  lVar3 = param_1[1];
  if ((lVar4 == 0) || ((uVar1 & 0x1f) != 4)) {
    uVar1 = FUN_00428440(lVar3);
    if ((lVar3 != 0) && ((uVar1 & 0x1f) == 2)) {
      if ((param_1[1] == 0) || (uVar1 = FUN_00428440(), (uVar1 & 0x1f) != 2)) {
        uVar1 = 0;
        uVar6 = 0;
        uVar5 = 0;
      }
      else {
        uVar5 = *param_1;
        uVar6 = param_1[1];
        uVar1 = param_1[2];
        if ((uVar1 & 1) != 0) {
          FUN_0043dd30(uVar1 & 0xfffffffffffffffe);
          uVar1 = param_1[2];
        }
      }
      plVar2 = (long *)(uVar1 & 0xfffffffffffffffe);
      (**(code **)(*plVar2 + 0x30))(plVar2,uVar5,uVar6,param_2 != 0);
      if ((uVar1 & 1) != 0) {
        FUN_0043dd50(plVar2);
        return;
      }
    }
  }
  else {
    if ((lVar3 == 0) || (uVar1 = FUN_00428440(lVar3), (uVar1 & 0x1f) != 4)) {
      uVar5 = 0;
      uVar6 = 0;
      uVar1 = 0;
    }
    else {
      uVar5 = *param_1;
      uVar6 = param_1[1];
      uVar1 = param_1[2];
      if ((uVar1 & 1) != 0) {
        FUN_0043dd30(uVar1 & 0xfffffffffffffffe);
        uVar1 = param_1[2];
      }
    }
    plVar2 = (long *)(uVar1 & 0xfffffffffffffffe);
    local_50[1] = 0;
    local_50[0] = (ulong)param_2;
    (**(code **)(*plVar2 + 0x30))(plVar2,uVar5,uVar6,local_50);
    if ((uVar1 & 1) != 0) {
      FUN_0043dd50(plVar2);
    }
  }
  return;
}

