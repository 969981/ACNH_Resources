
undefined8 FUN_003d69c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_FUN_04bd0490;
  if (*(int *)(param_1 + 0x468) < 1) {
    return 1;
  }
  lVar6 = 0;
  lVar5 = param_1 + 0x480;
  do {
    uVar2 = FUN_003cb1d8();
    lVar3 = FUN_003cb460(uVar2,1,0xff,puVar1,lVar5);
    if (lVar3 == 0) {
      if (lVar6 != 0) {
        plVar4 = (long *)(param_1 + 0x488);
        do {
          if (*plVar4 != 0) {
            FUN_003c0ba0();
            *plVar4 = 0;
          }
          plVar4 = plVar4 + 0x210;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      return 0;
    }
    *(long *)(lVar5 + 8) = lVar3;
    lVar6 = lVar6 + 1;
    lVar5 = lVar5 + 0x1080;
  } while (lVar6 < *(int *)(param_1 + 0x468));
  return 1;
}

