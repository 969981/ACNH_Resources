
void FUN_01d3b68c(long *param_1,undefined2 *param_2,undefined8 param_3)

{
  if (*(char *)param_1[1] == '\0') {
    FUN_0069ae60(param_3,*param_2);
    return;
  }
  (**(code **)(*param_1 + 0x18))();
  FUN_0069b854(param_3,param_1[1],*param_2);
  return;
}

