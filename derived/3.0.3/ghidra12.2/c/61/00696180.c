
undefined8 FUN_00696180(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  byte local_34 [4];
  undefined1 local_30 [4];
  ushort local_2c [2];
  undefined1 local_28 [4];
  uint local_24;
  
  uVar3 = (uint)param_2;
  if (param_2 < 0x10) {
    local_34[0] = (byte)param_2 | 0x80;
    uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,local_34,1);
  }
  else {
    plVar2 = (long *)*param_1;
    if (param_2 >> 0x10 == 0) {
      local_30[0] = 0xde;
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,local_30,1);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      local_2c[0] = (ushort)(param_2 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
      uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,local_2c,2);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    local_28[0] = 0xdf;
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,local_28,1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_24 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&local_24,4);
  }
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return 1;
}

