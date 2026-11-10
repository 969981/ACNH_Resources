
void FUN_0024e580(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 local_48;
  ErrorResultVariant aEStack_44 [12];
  long local_38 [2];
  undefined4 local_24;
  
  local_38[0] = 0;
  FUN_002282f0(local_38);
  plVar1 = (long *)FUN_00228380();
  *(long *)(param_2 + 0x68) = local_38[0] + *plVar1 * 45000;
  FUN_0024e644(local_38,param_2,param_3,1);
  if ((int)local_38[0] == 0) {
    *(undefined1 *)(param_2 + 100) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0x58;
    *(undefined8 *)(param_2 + 0x38) = 1;
    *(char **)(param_2 + 0x40) = "LocalBackgroundProcessJob::DestroyNetwork";
    local_48 = 0;
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_44,(Result *)&local_24);
    FUN_002296c4(param_1,&local_48);
    return;
  }
  FUN_002296c4(param_1,local_38);
  return;
}

