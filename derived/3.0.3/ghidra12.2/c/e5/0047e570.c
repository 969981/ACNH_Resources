
undefined8 FUN_0047e570(long *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 extraout_x1;
  undefined8 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_3ed0 [16000];
  
  do {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1,auStack_3ed0,16000);
    if (iVar2 == 0) {
      return 1;
    }
    iVar5 = 0;
    uVar4 = extraout_x1;
    while (iVar2 - iVar5 != 0 && iVar5 <= iVar2) {
      iVar3 = (**(code **)(*param_2 + 0x28))(param_2,auStack_3ed0 + iVar5);
      iVar5 = iVar3 + iVar5;
      auVar6 = (**(code **)(*param_2 + 0x20))(param_2);
      uVar4 = auVar6._8_8_;
      if ((auVar6._0_8_ & 0xff) == 0) {
        return 0;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0x20))(param_1,uVar4,iVar2 - iVar5);
  } while (cVar1 != '\0');
  return 0;
}

