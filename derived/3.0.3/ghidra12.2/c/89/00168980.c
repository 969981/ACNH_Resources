
void * FUN_00168980(void *param_1,void *param_2,size_t param_3)

{
  if (param_3 != 0) {
    memcpy(param_1,param_2,param_3);
    param_1 = (void *)((long)param_1 + param_3);
  }
  return param_1;
}

