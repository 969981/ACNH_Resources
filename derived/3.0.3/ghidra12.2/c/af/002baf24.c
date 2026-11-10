
void FUN_002baf24(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  int *piVar4;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bc1510;
  piVar4 = &local_50;
  if (*(char *)(param_2 + 8) == '\0') {
LAB_002baff4:
    local_50 = 0;
    local_40 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
  }
  else {
    lVar3 = FUN_002ba7a0(*(undefined8 *)PTR_DAT_04bc1510);
    if (lVar3 == 0) goto LAB_002baff4;
    local_40 = 0;
    local_50 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
    FUN_002bb040(&local_50,param_2);
    FUN_00229780(&local_40,&local_50);
    if (local_40 == 0) {
      FUN_002bb480(&local_50,param_2);
      FUN_00229780(&local_40,&local_50);
      if (local_40 == 0) {
        lVar3 = *(long *)puVar1;
        *(undefined4 *)(param_2 + 0x3914) = *(undefined4 *)(lVar3 + 0xbc);
        *(undefined4 *)(lVar3 + 0xbc) = 0;
        uVar2 = FUN_002ba5e8();
        *(undefined4 *)(param_2 + 0x3918) = uVar2;
        uVar2 = FUN_002ba614(*(undefined8 *)puVar1);
        *(undefined4 *)(param_2 + 0x391c) = uVar2;
        local_50 = 0;
        local_24 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
        goto LAB_002bb018;
      }
    }
  }
  piVar4 = &local_40;
LAB_002bb018:
  FUN_002296c4(param_1,piVar4);
  return;
}

