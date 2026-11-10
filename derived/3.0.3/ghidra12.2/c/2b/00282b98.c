
void FUN_00282b98(undefined8 param_1,long param_2,uint param_3,byte param_4,undefined1 param_5)

{
  ushort uVar1;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  uVar1 = *(ushort *)(param_2 + 0x3c);
  if (((param_3 & 0xff) < (uint)uVar1) && ((uint)param_4 < (uint)uVar1)) {
    *(undefined1 *)
     (*(long *)(param_2 + 8) + (ulong)(uint)uVar1 * (ulong)(param_3 & 0xff) + (ulong)param_4) =
         param_5;
    local_24 = 0;
  }
  else {
    local_24 = 0x10c07;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

