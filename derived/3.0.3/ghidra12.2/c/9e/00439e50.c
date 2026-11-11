
void FUN_00439e50(undefined8 param_1,ulong *param_2,uint param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  void *__ptr;
  ulong uVar2;
  ulong uVar3;
  char acStack_168 [256];
  undefined8 local_68;
  int local_54;
  
  if (0 < (int)param_3) {
    uVar3 = (ulong)param_3;
    do {
      uVar2 = 0;
      if (*param_2 == 0) {
LAB_00439f24:
        FUN_0043a120(acStack_168,0x100,"%.8p (missing symbol)\n",uVar2);
      }
      else {
        lVar1 = nn::diag::GetSymbolName(acStack_168,0x100,*param_2);
        uVar2 = *param_2;
        if (lVar1 == 0) goto LAB_00439f24;
        local_54 = 0;
        local_68 = 0;
        __ptr = (void *)__cxa_demangle(acStack_168,0,&local_68,&local_54);
        if (local_54 == 0) {
          FUN_0043a120(acStack_168,0x100,"%.8p %s\n",uVar2,__ptr);
          free(__ptr);
        }
        else {
          FUN_0043a120(acStack_168,0x100,"%.8p %s\n",uVar2,acStack_168);
        }
      }
      (*param_4)(acStack_168,param_5);
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

