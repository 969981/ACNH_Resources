
undefined8 FUN_001576bc(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  lVar3 = *param_1;
  puVar4 = *(undefined8 **)(lVar3 + 0x12a8);
  auVar5 = FUN_00147178();
  uVar1 = FUN_001471a8(auVar5._0_8_,auVar5._8_8_,*puVar4,puVar4[1]);
  if ((int)uVar1 < 3) {
    uVar2 = 0;
  }
  else if (uVar1 < 0x33) {
    uVar2 = (uVar1 & 0xff) / 3;
  }
  else {
    uVar2 = 0x32;
    if (0xfa < uVar1) {
      uVar2 = 200;
    }
  }
  FUN_00147570(lVar3,uVar2,1);
  return 0;
}

