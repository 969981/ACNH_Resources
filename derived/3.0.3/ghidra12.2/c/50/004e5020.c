
uint FUN_004e5020(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong local_50;
  undefined1 local_48;
  
  if ((param_1[1] == 0) || (uVar1 = FUN_00428440(), (uVar1 & 0x1f) != 4)) {
    uVar1 = 0;
  }
  else {
    lVar6 = *param_1;
    lVar5 = param_1[1];
    uVar1 = param_1[2];
    if ((uVar1 & 1) != 0) {
      FUN_0043dd30(uVar1 & 0xfffffffffffffffe);
      uVar1 = param_1[2];
    }
    if (lVar6 != 0) {
      local_50 = 0;
      local_48 = 0;
      (**(code **)(*(long *)(uVar1 & 0xfffffffffffffffe) + 0x38))
                ((long *)(uVar1 & 0xfffffffffffffffe),lVar6,lVar5,&local_50);
      uVar4 = (uint)local_50;
      goto joined_r0x004e5140;
    }
  }
  lVar6 = param_1[1];
  uVar2 = FUN_00428440(lVar6);
  uVar4 = 0;
  if ((lVar6 != 0) && ((uVar2 & 0x1f) == 2)) {
    if ((param_1[1] == 0) || (uVar2 = FUN_00428440(), (uVar2 & 0x1f) != 2)) {
      uVar2 = 0;
      lVar5 = 0;
      lVar6 = 0;
    }
    else {
      lVar6 = *param_1;
      lVar5 = param_1[1];
      uVar2 = param_1[2];
      if ((uVar2 & 1) != 0) {
        FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
        uVar2 = param_1[2];
      }
    }
    local_50 = local_50 & 0xffffffffffffff00;
    plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
    (**(code **)(*plVar3 + 0x38))(plVar3,lVar6,lVar5,&local_50);
    uVar4 = (uint)((char)local_50 != '\0');
    if ((uVar2 & 1) != 0) {
      FUN_0043dd50(plVar3);
    }
  }
joined_r0x004e5140:
  if ((uVar1 & 1) != 0) {
    FUN_0043dd50(uVar1 & 0xfffffffffffffffe);
  }
  return uVar4;
}

