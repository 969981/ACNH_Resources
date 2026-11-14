
undefined8
FUN_01bde2d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x88) == 0) || (*(long *)(param_1 + 0x90) == 0)) {
    uVar2 = FUN_006f50a0(param_2,param_3,param_4,param_5 & 1);
    return uVar2;
  }
  iVar1 = FUN_01be5d00(*(undefined8 *)PTR_DAT_04bb28f8,param_3);
  if (iVar1 == 9) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
  }
  else {
    if (iVar1 != 5) {
      return 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x90);
  }
  uVar2 = FUN_01ba7cc0(uVar2,param_2,param_3,param_4);
  return uVar2;
}

