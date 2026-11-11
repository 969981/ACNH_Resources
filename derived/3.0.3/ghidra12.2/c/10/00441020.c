
ulong FUN_00441020(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  
  if (*param_1 == 0) {
    uVar1 = (uint)(*param_2 != 0);
  }
  else {
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar4 = param_2[1];
      uVar1 = FUN_00428440(param_1[1]);
      uVar2 = FUN_00428440(lVar4);
      uVar1 = (uVar1 & 0x1f) - (uVar2 & 0x1f);
      uVar3 = (ulong)uVar1;
      if (uVar1 == 0) {
        if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_00441a30(auStack_38,param_1,param_2);
        }
      }
      return uVar3;
    }
  }
  return (ulong)(uVar1 - (*param_1 != 0));
}

