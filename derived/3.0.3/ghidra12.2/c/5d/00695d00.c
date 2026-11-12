
undefined8 FUN_00695d00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 8;
  uVar2 = FUN_0069422c(lVar1);
  if ((uVar2 & 1) != 0) {
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 9;
    lStack_48 = param_3;
    if ((*(code **)(param_1 + 0x220) == (code *)0x0) ||
       (uVar2 = (**(code **)(param_1 + 0x220))(lVar1,&local_50,*(undefined8 *)(param_1 + 0x228)),
       (uVar2 & 1) != 0)) {
      for (; param_3 != 0; param_3 = param_3 + -1) {
        uVar2 = FUN_00694b3c(param_1,param_2);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
      }
      FUN_00694514(lVar1);
      local_50 = CONCAT44(local_50._4_4_,10);
      if ((*(code **)(param_1 + 0x220) == (code *)0x0) ||
         (uVar2 = (**(code **)(param_1 + 0x220))(lVar1,&local_50,*(undefined8 *)(param_1 + 0x228)),
         (uVar2 & 1) != 0)) {
        FUN_00694588(lVar1);
        return 1;
      }
    }
  }
  return 0;
}

