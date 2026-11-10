
void FUN_00271314(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  
  if ((int)param_2[1] == 2) {
    uVar1 = *(undefined1 *)(*param_2 + 1);
    plVar2 = (long *)FUN_002ba790(DAT_04c61168);
    lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar1);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x40) == param_2[2])) {
      lVar3 = *(long *)(DAT_04c603c8 + 0x38);
      if (*(char *)(lVar3 + 0xb2) != '\0') {
        FUN_00279da0(lVar3,uVar1);
        return;
      }
      if ((*(char *)(lVar3 + 0x84) == '\0') &&
         (plVar2 = *(long **)(DAT_04c603c8 + 0x110), plVar2 != (long *)0x0)) {
        local_30 = 0x15;
        local_28 = 0;
        local_2c = uVar1;
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_30);
      }
    }
  }
  return;
}

