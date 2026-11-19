
void FUN_03955a50(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_490;
  undefined *puStack_488;
  undefined8 local_480;
  char *local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_460;
  undefined *local_458;
  char *pcStack_450;
  
  puVar3 = *(undefined **)(param_2 + 0x30);
  if (puVar3 != &DAT_040beb4c) {
    iVar1 = 4;
    if (*(int *)(param_2 + 0x38) < 5) {
      iVar1 = *(int *)(param_2 + 0x38) + -1;
    }
    memcpy(puVar3,&DAT_040beb4c,(long)iVar1);
    puVar3[iVar1] = 0;
  }
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  pcStack_450 = "header";
  local_478 = "";
  local_480 = puVar3;
  local_458 = puVar3;
  uVar2 = FUN_038f3be0(param_2,&local_458,&local_480,param_3);
  FUN_038f1db0(uVar2,3,param_3);
  pcStack_450 = "type";
  local_458 = puVar3;
  FUN_038f2500(uVar2,&local_458,param_1 + 0x48,param_3);
  local_478 = "version";
  local_480 = puVar3;
  FUN_006e9454(&local_458,&DAT_040c7be9,*(undefined4 *)(param_1 + 0xa0));
  FUN_038f2500(uVar2,&local_480,&local_458,param_3);
  local_460 = 0;
  FUN_038e9970(&local_460);
  local_470 = 0;
  local_468 = 0;
  local_480 = (undefined *)0x1000007b2;
  local_478 = (char *)0x400000001;
  FUN_038e96b0(&local_460,&local_480);
  FUN_0071b954(&local_458,"time stamp : %4d/%02d/%02d %02d:%02d:%02d",(ulong)local_480 & 0xffffffff,
               local_480._4_4_,(ulong)local_478 & 0xffffffff,local_470 & 0xffffffff,local_470._4_4_,
               local_468);
  puStack_488 = &DAT_0408f40d;
  local_490 = puVar3;
  FUN_038f2500(uVar2,&local_490,&local_458,param_3);
  return;
}

