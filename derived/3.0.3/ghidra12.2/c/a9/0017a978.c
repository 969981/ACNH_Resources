
undefined8 FUN_0017a978(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xf40);
  *(int *)(lVar2 + 0x648) = *(int *)(lVar2 + 0x648) + -1;
  FUN_0014d430(lVar2,"a DOH request is completed, %u to go\n");
  if (param_2 != 0) {
    uVar1 = FUN_0014df00(param_2);
    FUN_0014d430(lVar2,"DOH request %s\n",uVar1);
  }
  if (*(int *)(lVar2 + 0x648) == 0) {
    FUN_0014e11c(*(undefined8 *)(lVar2 + 0x1f0));
    *(undefined8 *)(lVar2 + 0x1f0) = 0;
    FUN_00147570(lVar2,0,6);
  }
  return 0;
}

