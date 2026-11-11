
undefined8 FUN_004a8280(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = 0x80040200;
  if (*(int *)(param_2 + 200) != 2) goto LAB_004a82c4;
  do {
    auVar4 = FUN_0049dac0(param_2);
    uVar2 = FUN_0043a700(auVar4._0_8_,auVar4._8_8_ - auVar4._0_8_,param_3);
    if ((uVar2 & 1) != 0) {
      return 0x80040200;
    }
LAB_004a82c4:
    while( true ) {
      uVar1 = FUN_0049d960(param_2);
      if ((uVar1 | 1) == 7) {
        return 0x80040200;
      }
      if (uVar1 == 3) break;
      if (uVar1 == 1) {
        return 0;
      }
      if (uVar1 == 2) {
        auVar4 = FUN_0049dac0(param_2);
        uVar2 = FUN_0043a700(auVar4._0_8_,auVar4._8_8_ - auVar4._0_8_,param_3);
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
        }
        return uVar3;
      }
    }
  } while( true );
}

