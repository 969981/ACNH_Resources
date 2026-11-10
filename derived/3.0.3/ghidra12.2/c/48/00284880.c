
void FUN_00284880(undefined8 param_1,long param_2,ulong *param_3,uint param_4)

{
  ulong uVar1;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if ((param_3 == (ulong *)0x0) || (param_4 < 0x10)) {
    local_24 = 0x10c07;
  }
  else {
    local_24 = 0;
    uVar1 = (*param_3 & 0xff00ff00ff00ff00) >> 8 | (*param_3 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_2 + 8) = uVar1 >> 0x20 | uVar1 << 0x20;
    uVar1 = (param_3[1] & 0xff00ff00ff00ff00) >> 8 | (param_3[1] & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_2 + 0x10) = uVar1 >> 0x20 | uVar1 << 0x20;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

