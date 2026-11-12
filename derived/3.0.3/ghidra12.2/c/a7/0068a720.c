
undefined8 FUN_0068a720(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
    auVar5 = (**(code **)**(undefined8 **)(param_1 + 0x40))();
    lVar3 = auVar5._8_8_;
    uVar4 = auVar5._0_8_;
    if (lVar3 != 0) {
      uVar1 = FUN_00428370(lVar3);
      if ((uVar1 & 1) != 0) {
        FUN_0043dd30(uVar1 & 0xfffffffffffffffe);
      }
      uVar2 = FUN_00427110(lVar3,&DAT_04c3cf18);
      if ((uVar2 & 1) == 0) {
        uVar4 = 0;
      }
      else {
        uVar2 = FUN_004274f0(lVar3);
        if ((uVar2 & 8) != 0) {
          uVar4 = 0;
        }
      }
      if ((uVar1 & 1) == 0) {
        return uVar4;
      }
      FUN_0043dd50(uVar1 & 0xfffffffffffffffe);
      return uVar4;
    }
  }
  return 0;
}

