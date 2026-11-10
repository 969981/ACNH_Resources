
undefined8 FUN_0024ad74(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40 [4];
  int local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  local_30 = 0;
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)local_40);
  local_50 = 0;
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)local_40);
  FUN_002296c4(local_40,&local_50);
  FUN_00247b04(&local_50,*(undefined8 *)(param_1 + 0x70));
  FUN_00229780(&local_30,&local_50);
  if ((local_30 != 0) && (local_40[0] == 0)) {
    FUN_00229780(local_40,&local_30);
  }
  iVar2 = nn::ldn::GetState();
  if (iVar2 == 3) {
    local_14 = nn::ldn::DestroyNetwork();
    FUN_00247918(&local_50,*(undefined8 *)(param_1 + 0x70),&local_14);
    FUN_00229780(&local_30,&local_50);
    if ((local_30 != 0) && (local_40[0] == 0)) {
      FUN_00229780(local_40,&local_30);
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  FUN_0024a034(uVar3);
  FUN_002484e4(&local_50,uVar3);
  FUN_00229780(&local_30,&local_50);
  if ((local_30 != 0) && (local_40[0] == 0)) {
    FUN_00229780(local_40,&local_30);
  }
  FUN_00258178(*(undefined8 *)(param_1 + 0x70),0);
  puVar1 = PTR_FUN_04bcd598;
  lVar4 = *(long *)(param_1 + 0x58);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    if (local_40[0] == 0) {
      *(char **)(param_1 + 0x40) = "LdnBackgroundProcessJob::WaitDisconnected";
      *(undefined **)(param_1 + 0x30) = puVar1;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 0xf0004;
    }
    FUN_002296c4(auStack_60,local_40);
    FUN_00220ff8(lVar4,auStack_60);
  }
  else {
    FUN_00221064(lVar4);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

