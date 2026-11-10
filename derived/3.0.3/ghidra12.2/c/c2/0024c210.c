
void FUN_0024c210(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_48;
  ErrorResultVariant aEStack_44 [12];
  long local_38 [2];
  undefined4 local_24;
  
  local_38[0] = 0;
  FUN_002282f0(local_38);
  plVar3 = (long *)FUN_00228380();
  *(long *)(param_2 + 0x68) = local_38[0] + *plVar3 * 0x1194;
  FUN_0024e644(local_38,param_2,param_3,3);
  puVar1 = PTR_FUN_04bcd4f0;
  if ((int)local_38[0] == 0) {
    plVar3 = *(long **)(param_2 + 0x2a0);
    *(char **)(param_2 + 0x40) = "LdnBackgroundProcessJob::ConnectNetworkPrivate";
    *(undefined **)(param_2 + 0x30) = puVar1;
    *(undefined8 *)(param_2 + 0x38) = 0;
    puVar1 = PTR_DAT_04bccf00;
    lVar4 = plVar3[1];
    if (*(char *)((long)plVar3 + 0x53) != '\x02') {
      lVar4 = 0;
    }
    *(long *)(PTR_DAT_04bccf00 + 0x38) = lVar4;
    uVar2 = (**(code **)(*plVar3 + 8))();
    local_48 = 0;
    puVar1[0x40] = uVar2;
  }
  else {
    local_48 = 0x10c08;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_44,(Result *)&local_24);
  FUN_002296c4(param_1,&local_48);
  return;
}

