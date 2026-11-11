
/* WARNING: Type propagation algorithm not settling */

void FUN_0043f0f0(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  ulong local_48;
  
  if ((param_2[1] != 0) && (uVar3 = FUN_00428440(), (uVar3 & 0x1f) == 8)) {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    uVar3 = param_2[2];
    if ((uVar3 & 1) != 0) {
      FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
      uVar3 = param_2[2];
    }
    if (lVar1 != 0) {
      local_50 = 0;
      local_48 = 0;
      plVar4 = (long *)(uVar3 & 0xfffffffffffffffe);
      local_60 = 0;
      lStack_58 = 0;
      (**(code **)(*plVar4 + 0x50))(plVar4,lVar1,lVar2,&local_60);
      if ((param_3 < 0) || ((int)local_50 <= param_3)) {
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
      }
      else {
        *param_1 = local_60 + (long)local_50._4_4_ * (long)param_3;
        param_1[1] = lStack_58;
        param_1[2] = local_48;
        if ((local_48 & 1) != 0) {
          FUN_0043dd30(local_48 & 0xfffffffffffffffe);
        }
      }
      if ((local_48 & 1) != 0) {
        FUN_0043dd50(local_48 & 0xfffffffffffffffe);
      }
      if ((uVar3 & 1) == 0) {
        return;
      }
      FUN_0043dd50(plVar4);
      return;
    }
    if ((uVar3 & 1) != 0) {
      FUN_0043dd50(uVar3 & 0xfffffffffffffffe);
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

