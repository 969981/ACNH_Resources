
void FUN_026ebb94(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  void *__s;
  undefined4 uVar3;
  
  plVar2 = (long *)*param_2;
  if ((plVar2 != (long *)0x0) && (param_2[1] != 0)) {
    uVar3 = 8;
    if (param_2[2] != 0) {
      uVar3 = (undefined4)param_2[2];
    }
    __s = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,param_2[1],uVar3);
    if (__s != (void *)0x0) {
      memset(__s,0,param_2[1]);
      param_1[1] = (long)__s;
      *param_1 = *param_2;
      param_1[2] = param_2[1];
      lVar1 = 8;
      if (param_2[2] != 0) {
        lVar1 = param_2[2];
      }
      param_1[3] = lVar1;
    }
  }
  return;
}

