
void * FUN_00287a94(long *param_1,undefined8 param_2,void *param_3,size_t param_4,undefined8 param_5
                   ,undefined4 param_6)

{
  void *__dest;
  
  __dest = (void *)(**(code **)(*param_1 + 0x30))(param_1,param_5,param_6);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_3,param_4);
    (**(code **)(*param_1 + 0x38))(param_1,param_2);
  }
  return __dest;
}

