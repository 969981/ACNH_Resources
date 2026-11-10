
void FUN_0021fdbc(undefined8 param_1,long param_2,uint *param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  uint local_48 [2];
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if ((param_3 == (uint *)0x0) || (param_4 < 6)) {
    local_48[1] = 0x10c07;
  }
  else {
    memset((void *)(param_2 + 8),0,0x10);
    uVar1 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
    local_48[0] = uVar1 >> 0x10 | uVar1 << 0x10;
    memcpy((void *)(param_2 + 8),local_48,4);
    *(ushort *)(param_2 + 0x18) = (ushort)param_3[1] >> 8 | (ushort)param_3[1] << 8;
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 6;
    }
    local_48[1] = 0;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,local_48 + 1);
  return;
}

