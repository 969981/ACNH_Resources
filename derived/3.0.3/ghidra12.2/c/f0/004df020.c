
undefined4 FUN_004df020(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long local_68 [2];
  ulong local_58;
  
  if (*(ulong *)(param_1 + 0x60) == (param_2[2] & 0xfffffffffffffffe)) {
    plVar5 = (long *)(param_1 + 0x210);
  }
  else {
    plVar5 = *(long **)(param_1 + 0x208);
    lVar3 = FUN_004272d0(param_2[1]);
    if (lVar3 == param_1) {
      uVar1 = param_2[1];
      uVar4 = param_2[2];
      uVar6 = *(ulong *)((uVar4 & 0xfffffffffffffffe) + 0x10);
      if ((uVar6 & 1) == 0) {
        param_2[1] = uVar1;
      }
      else {
        uVar7 = *param_2;
        FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
        *param_2 = uVar7;
        param_2[1] = uVar1;
        FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
        uVar4 = param_2[2];
      }
      if ((uVar4 & 1) != 0) {
        FUN_0043dd50(uVar4 & 0xfffffffffffffffe);
      }
      param_2[2] = uVar6;
      if ((uVar6 & 1) != 0) {
        FUN_0043dd50(uVar6 & 0xfffffffffffffffe);
      }
    }
  }
  (**(code **)(*plVar5 + 0x20))(local_68,plVar5,param_2);
  if (local_68[0] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004df140(param_1);
  }
  if ((local_58 & 1) != 0) {
    FUN_0043dd50(local_58 & 0xfffffffffffffffe);
  }
  return uVar2;
}

