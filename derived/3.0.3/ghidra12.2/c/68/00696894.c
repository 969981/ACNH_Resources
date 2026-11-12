
undefined8 FUN_00696894(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  ushort local_34 [2];
  undefined1 local_18 [4];
  uint local_14;
  
  uVar3 = (uint)param_3;
  if (param_3 < 0x100) {
    local_40[0] = 0xc4;
    uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,local_40,1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    local_3c[0] = (undefined1)param_3;
    uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,local_3c,1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (param_3 == 0) {
      return 1;
    }
  }
  else {
    plVar2 = (long *)*param_1;
    if (param_3 >> 0x10 == 0) {
      local_38[0] = 0xc5;
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,local_38,1);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      local_34[0] = (ushort)(param_3 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
      uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,local_34,2);
    }
    else {
      local_18[0] = 0xc6;
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,local_18,1);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      local_14 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&local_14,4);
    }
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return 1;
}

