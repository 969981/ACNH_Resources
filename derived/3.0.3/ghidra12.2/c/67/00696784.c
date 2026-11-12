
undefined8 thunk_FUN_006965e8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  ulong uStack_28;
  
  uVar3 = (uint)param_2;
  if (0x9f < param_2 + 0x20) {
    if (param_2 != (long)(char)param_2) {
      if (param_2 == (long)(short)param_2) {
        uStack_28 = CONCAT71(uStack_28._1_7_,0xd1);
        uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&uStack_28,1);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        uStack_28 = CONCAT62(uStack_28._2_6_,
                             (ushort)(param_2 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8));
        uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&uStack_28,2);
      }
      else {
        plVar2 = (long *)*param_1;
        if (param_2 == (long)(int)uVar3) {
          uStack_28 = CONCAT71(uStack_28._1_7_,0xd2);
          uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_28,1);
          if ((uVar1 & 1) == 0) {
            return 0;
          }
          uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
          uStack_28 = CONCAT44(uStack_28._4_4_,uVar3 >> 0x10 | uVar3 << 0x10);
          uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&uStack_28,4);
        }
        else {
          uStack_28 = CONCAT71(uStack_28._1_7_,0xd3);
          uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_28,1);
          if ((uVar1 & 1) == 0) {
            return 0;
          }
          uVar1 = (param_2 & 0xff00ff00ff00ff00) >> 8 | (param_2 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          uStack_28 = uVar1 >> 0x20 | uVar1 << 0x20;
          uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&uStack_28,8);
        }
      }
      goto joined_r0x006966c0;
    }
    uStack_28 = CONCAT71(uStack_28._1_7_,0xd0);
    uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&uStack_28,1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  uStack_28 = CONCAT71(uStack_28._1_7_,(char)param_2);
  uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&uStack_28,1);
joined_r0x006966c0:
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return 1;
}

