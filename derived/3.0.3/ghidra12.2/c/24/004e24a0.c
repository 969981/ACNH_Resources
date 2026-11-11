
undefined8 FUN_004e24a0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *local_48;
  undefined8 *puStack_40;
  ulong local_38;
  
  FUN_004292f0(&local_38);
  if (local_38 < 2) {
    uVar3 = FUN_004c96c0(param_1 + 0x68,param_2);
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_00428440(param_2);
      if ((param_2 == 0) || ((uVar3 & 0x1f) != 7)) {
        uVar3 = FUN_00428440(param_2);
        if ((param_2 != 0) && ((uVar3 & 0x1f) == 6)) {
          uVar1 = FUN_00426d90(param_2);
          lVar2 = FUN_004e24a0(param_1,uVar1);
          if (lVar2 != 0) {
            uVar1 = FUN_00427270(param_2);
            uVar5 = (**(code **)(*(long *)(param_1 + 0x340) + 0x10))(param_1 + 0x340,0x70,0);
            FUN_00453c80(uVar5,lVar2,uVar1,0);
            return uVar5;
          }
        }
      }
      else {
        local_48 = &DAT_0407ebb1;
        puStack_40 = &DAT_0407ebb1;
        puVar4 = (undefined8 *)FUN_004c51d0(param_1 + 0x68,&local_48,0,param_2);
        if (puVar4 != (undefined8 *)0x0) {
          return *puVar4;
        }
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00427480();
    lVar2 = FUN_004e24a0(param_1,uVar1);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = FUN_00427b40(&local_38);
      uVar1 = FUN_00427860(lVar2,uVar1,0);
    }
  }
  return uVar1;
}

