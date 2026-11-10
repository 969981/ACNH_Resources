
void FUN_00156e0c(long *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  
  if ((ulong)param_1[9] < 0x41 && param_3 != 0) {
    do {
      lVar1 = param_1[9];
      uVar2 = param_3 - 0x40;
      if ((param_3 < 0x40) || (lVar1 != 0)) {
        __n = param_3;
        if (0x40U - lVar1 <= param_3) {
          __n = 0x40U - lVar1;
        }
        memcpy((void *)((long)(param_1 + 10) + lVar1),param_2,__n);
        lVar1 = param_1[9];
        param_2 = (void *)((long)param_2 + __n);
        uVar2 = param_3 - __n;
        param_1[9] = lVar1 + __n;
        if (lVar1 + __n == 0x40) {
          FUN_001570a8(param_1,param_1 + 10);
          lVar1 = *param_1;
          param_1[9] = 0;
          goto LAB_00156ebc;
        }
      }
      else {
        FUN_001570a8(param_1,param_2);
        lVar1 = *param_1;
        param_2 = (void *)((long)param_2 + 0x40);
LAB_00156ebc:
        *param_1 = lVar1 + 0x200;
      }
      param_3 = uVar2;
    } while (uVar2 != 0);
  }
  return;
}

