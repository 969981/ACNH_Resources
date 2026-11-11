
void FUN_0043aa30(void *param_1,void *param_2,size_t param_3)

{
  if (param_1 >= param_2 && param_1 != param_2) {
    FUN_0043a820();
    return;
  }
  if (param_1 < param_2) {
    memmove(param_1,param_2,param_3);
    return;
  }
  return;
}

