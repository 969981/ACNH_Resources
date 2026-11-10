
void FUN_0027147c(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  
  if ((int)param_2[1] == 2) {
    uVar1 = *(undefined1 *)(*param_2 + 1);
    plVar2 = (long *)FUN_002ba790(DAT_04c61168);
    lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar1);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x40) == param_2[2])) {
      if (*(char *)(*(long *)(DAT_04c603c8 + 0x38) + 0xb1) != '\0') {
        FUN_00279d88(*(long *)(DAT_04c603c8 + 0x38),uVar1);
        return;
      }
    }
  }
  return;
}

