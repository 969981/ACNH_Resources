
void FUN_004d7570(undefined8 *param_1,ulong param_2)

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
    if ((lVar3 != 0) && ((uVar1 & 0x1f) == 5)) {
      if ((param_1[1] == 0) || (uVar1 = FUN_00428440(), (uVar1 & 0x1f) != 5)) {
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
      (**(code **)(*plVar2 + 0x30))((double)(float)((int)param_2 << 0x10),plVar2,uVar5,uVar6);
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
    local_50[0] = param_2 & 0xffff;
    plVar2 = (long *)(uVar1 & 0xfffffffffffffffe);
    local_50[1] = 0;
    (**(code **)(*plVar2 + 0x30))(plVar2,uVar5,uVar6,local_50);
    if ((uVar1 & 1) != 0) {
      FUN_0043dd50(plVar2);
    }
  }
  return;
}

