
void FUN_01b9735c(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  switch(*param_1) {
  case 1:
    FUN_01b977e0(&uStack_11,param_1 + 1);
    break;
  case 2:
    FUN_01b97a90(&uStack_11,param_1 + 3);
    break;
  case 3:
    FUN_01b97d40(&uStack_11,param_1 + 4);
    break;
  case 5:
    FUN_01b97ff0(&uStack_11,(long)param_1 + 0x13);
    break;
  case 6:
    FUN_01b982a0(&uStack_11,(long)param_1 + 0x15);
    break;
  case 7:
    FUN_01b98550(&uStack_11,param_1 + 6,param_2,param_3);
  }
  return;
}

