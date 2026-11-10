
undefined8 FUN_0014b2c8(void *param_1,size_t param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_3,param_2);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}

