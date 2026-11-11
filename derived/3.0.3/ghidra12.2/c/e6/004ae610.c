
undefined8 FUN_004ae610(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *local_40;
  undefined8 *puStack_38;
  
  while( true ) {
    uVar1 = FUN_00428440();
    if ((param_1 != 0) && ((uVar1 & 0x1f) == 7)) {
      if (param_1 == param_2) {
        return 0;
      }
      FUN_00427c30(&local_40,param_1,0);
      do {
        if (local_40 + 1 < puStack_38) {
          local_40 = local_40 + 1;
          uVar1 = FUN_004290b0();
        }
        else {
          uVar1 = FUN_00427c40(&local_40);
          if ((uVar1 & 1) == 0) {
            return 0;
          }
          uVar1 = FUN_004290b0(local_40);
        }
      } while (((uVar1 & 0x30) == 0) || (uVar1 = FUN_004ae610(*local_40,param_1), (uVar1 & 1) == 0))
      ;
      return 1;
    }
    uVar1 = FUN_00428440(param_1);
    if (param_1 == 0) {
      return 0;
    }
    if ((uVar1 & 0x1f) != 8) break;
    lVar2 = FUN_00426d90(param_1);
    if (lVar2 == 0) {
      return 1;
    }
    param_1 = FUN_00426d90(param_1);
  }
  return 0;
}

