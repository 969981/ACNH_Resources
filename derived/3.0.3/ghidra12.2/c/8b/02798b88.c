
undefined4 FUN_02798b88(byte *param_1,long *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  byte local_38 [4];
  undefined4 local_34;
  
  local_38[0] = *param_1;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  lVar2 = FUN_025830c0(DAT_055021a0,local_38,1);
  if (lVar2 != 0) {
    lVar6 = *(long *)PTR_DAT_04bb2208;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_34 = FUN_006bd550(param_2[1],0);
    lVar6 = FUN_01b1ee90(lVar6 + 0x1b80,&local_34);
    if (lVar6 != 0) {
      plVar7 = *(long **)(lVar2 + 0x18358);
      lVar5 = lVar6;
      if (plVar7 != (long *)0x0) {
        puVar3 = (undefined8 *)*plVar7;
        lVar5 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          uVar4 = (**(code **)*puVar3)();
          uVar1 = FUN_02798cb0(uVar4,lVar6,param_3);
          if ((uVar4 & 1) == 0) {
            return uVar1;
          }
          lVar2 = *(long *)(lVar2 + 0x18358);
          if (lVar2 == 0) {
            return uVar1;
          }
          puVar3 = *(undefined8 **)(lVar2 + 8);
          if (puVar3 == (undefined8 *)0x0) {
            return uVar1;
          }
          (**(code **)*puVar3)();
          return uVar1;
        }
      }
      uVar1 = FUN_02798cb0(lVar5,lVar6,param_3);
      return uVar1;
    }
  }
  return 0;
}

