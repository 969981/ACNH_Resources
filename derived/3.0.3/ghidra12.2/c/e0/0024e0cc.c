
void FUN_0024e0cc(int *param_1,long param_2,undefined4 *param_3,undefined4 *param_4,uint param_5)

{
  ulong uVar1;
  ushort *puVar2;
  uint local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  if (((param_3 == (undefined4 *)0x0) || (param_4 == (undefined4 *)0x0)) || (param_5 < 8)) {
    local_50 = 0x10c07;
  }
  else {
    uVar1 = FUN_0021f6f8(param_2 + 8);
    if ((uVar1 & 1) == 0) {
      *param_3 = 0;
      *(ushort *)(param_3 + 1) = *(ushort *)(param_2 + 0x20) >> 8 | *(ushort *)(param_2 + 0x20) << 8
      ;
      puVar2 = (ushort *)((long)param_3 + 6);
    }
    else {
      FUN_0021fa08(param_1,param_2 + 8,param_3,&local_50,param_5 - 2);
      if (*param_1 != 0) {
        return;
      }
      puVar2 = (ushort *)((long)param_3 + (ulong)local_50);
    }
    local_50 = 0;
    *puVar2 = *(ushort *)(param_2 + 0x28) >> 8 | *(ushort *)(param_2 + 0x28) << 8;
    *param_4 = 8;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

