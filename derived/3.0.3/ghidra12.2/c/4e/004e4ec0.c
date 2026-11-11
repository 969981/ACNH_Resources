
uint FUN_004e4ec0(long *param_1)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong local_50;
  char local_48;
  
  if ((param_1[1] == 0) || (uVar3 = FUN_00428440(), (uVar3 & 0x1f) != 4)) {
    uVar3 = 0;
  }
  else {
    lVar7 = *param_1;
    lVar6 = param_1[1];
    uVar3 = param_1[2];
    if ((uVar3 & 1) != 0) {
      FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
      uVar3 = param_1[2];
    }
    if (lVar7 != 0) {
      local_50 = 0;
      local_48 = '\0';
      (**(code **)(*(long *)(uVar3 & 0xfffffffffffffffe) + 0x38))
                ((long *)(uVar3 & 0xfffffffffffffffe),lVar7,lVar6,&local_50);
      uVar1 = -(uint)local_50;
      if (local_48 == '\0') {
        uVar1 = (uint)local_50;
      }
      goto joined_r0x004e4fec;
    }
  }
  lVar7 = param_1[1];
  uVar4 = FUN_00428440(lVar7);
  uVar1 = 0;
  if ((lVar7 != 0) && ((uVar4 & 0x1f) == 2)) {
    if ((param_1[1] == 0) || (uVar4 = FUN_00428440(), (uVar4 & 0x1f) != 2)) {
      uVar4 = 0;
      lVar6 = 0;
      lVar7 = 0;
    }
    else {
      lVar7 = *param_1;
      lVar6 = param_1[1];
      uVar4 = param_1[2];
      if ((uVar4 & 1) != 0) {
        FUN_0043dd30(uVar4 & 0xfffffffffffffffe);
        uVar4 = param_1[2];
      }
    }
    local_50 = local_50 & 0xffffffffffffff00;
    plVar5 = (long *)(uVar4 & 0xfffffffffffffffe);
    (**(code **)(*plVar5 + 0x38))(plVar5,lVar7,lVar6,&local_50);
    bVar2 = (char)local_50 != '\0';
    uVar1 = (uint)bVar2;
    if ((uVar4 & 1) != 0) {
      FUN_0043dd50(plVar5);
    }
  }
joined_r0x004e4fec:
  if ((uVar3 & 1) != 0) {
    FUN_0043dd50(uVar3 & 0xfffffffffffffffe);
  }
  return uVar1;
}

