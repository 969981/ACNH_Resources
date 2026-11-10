
void FUN_0035a200(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  uVar1 = (ulong)param_3;
  *(undefined8 *)(param_1 + 0x14) = 0;
  local_28 = param_2;
  do {
    local_38 = 0;
    uStack_30 = 0;
    FUN_003590a0(param_1,&local_38,&local_28,uVar1);
    uVar1 = (ulong)((param_2 + (long)(int)param_3 * 2) - local_28) >> 1;
  } while (0 < (int)uVar1);
  return;
}

