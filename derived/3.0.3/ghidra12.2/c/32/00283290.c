
void FUN_00283290(undefined8 param_1,long param_2,uint param_3,uint param_4,undefined1 *param_5)

{
  ushort uVar1;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  uVar1 = *(ushort *)(param_2 + 0x3c);
  if (((param_3 & 0xff) < (uint)uVar1 && (param_4 & 0xff) < (uint)uVar1) &&
     (param_5 != (undefined1 *)0x0)) {
    local_24 = 0;
    *param_5 = *(undefined1 *)
                (*(long *)(param_2 + 0x50) +
                (ulong)(param_4 & 0xff) + (ulong)(uint)uVar1 * (ulong)(param_3 & 0xff));
  }
  else {
    local_24 = 0x10c07;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

