
void FUN_0023c94c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  Result *pRVar6;
  int *piVar7;
  undefined1 auStack_84 [16];
  undefined4 local_74 [4];
  int local_64;
  ErrorResultVariant aEStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  
  puVar2 = PTR_DAT_04bc1510;
  if (*(long *)PTR_DAT_04bc1510 == 0) {
LAB_0023cae4:
    local_50 = 0;
    local_64 = 0x10c08;
    pRVar6 = (Result *)&local_50;
  }
  else {
    lVar4 = FUN_002ba58c();
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 + -0x18;
    }
    *(long *)(param_2 + 0xb8) = lVar1;
    if (lVar4 == 0) goto LAB_0023cae4;
    lVar4 = FUN_002ba574(*(undefined8 *)puVar2);
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 + -0x18;
    }
    *(long *)(param_2 + 0xc0) = lVar1;
    if ((lVar4 == 0) || (uVar5 = FUN_0021f6f8(param_2 + 0x50), (uVar5 & 1) == 0)) goto LAB_0023cae4;
    local_50 = 0;
    local_64 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_64);
    if (*(int *)(param_2 + 0x13a4) != 0) {
      FUN_0021f210(&local_64);
      local_64 = *(int *)(param_2 + 0x13a4);
      FUN_0028d4cc(local_74);
      uVar3 = FUN_0028d5ac(local_74);
      FUN_00228480(aEStack_60,uVar3);
      uVar3 = FUN_0028d5ac(local_74);
      FUN_00228480(auStack_5c,uVar3);
      uVar3 = FUN_0028d5ac(local_74);
      FUN_00228480(auStack_58,uVar3);
      uVar3 = FUN_0028d5ac(local_74);
      FUN_00228480(auStack_54,uVar3);
      FUN_002b9b10(auStack_84,*(undefined8 *)puVar2,&local_64);
    }
    *(undefined1 *)(param_2 + 0x13b8) = 0;
    *(undefined1 *)(param_2 + 0x13ba) = 0;
    FUN_0023cbf0(&local_64,param_2);
    FUN_00229780(&local_50,&local_64);
    if (local_50 != 0) {
LAB_0023cadc:
      piVar7 = &local_50;
      goto LAB_0023cb08;
    }
    FUN_0022be40(&local_64,*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(param_2 + 0xa0));
    FUN_00229780(&local_50,&local_64);
    if (local_50 != 0) goto LAB_0023cadc;
    FUN_0022be40(&local_64,*(undefined8 *)(param_2 + 0xc0),*(undefined8 *)(param_2 + 0xa0));
    FUN_00229780(&local_50,&local_64);
    if (local_50 != 0) goto LAB_0023cadc;
    if (*(char *)(param_2 + 0xb0) != '\0') {
      FUN_0022e7f8(&local_64,*(undefined8 *)(param_2 + 0xc0),*(undefined8 *)(param_2 + 0xa8));
      FUN_00229780(&local_50,&local_64);
      if (local_50 != 0) goto LAB_0023cadc;
    }
    FUN_0022bdf4(&local_64,*(undefined8 *)(param_2 + 0xb8));
    FUN_00229780(&local_50,&local_64);
    if (local_50 != 0) goto LAB_0023cadc;
    FUN_0022bdf4(&local_64,*(undefined8 *)(param_2 + 0xc0));
    FUN_00229780(&local_50,&local_64);
    if (local_50 != 0) goto LAB_0023cadc;
    *(undefined1 *)(param_2 + 0x13a0) = 0;
    FUN_0023e390(&local_64,*(undefined8 *)(param_2 + 200),2,param_2 + 0x96);
    FUN_00229780(&local_50,&local_64);
    if (local_50 != 0) goto LAB_0023cadc;
    FUN_002211bc(*(undefined8 *)(param_2 + 200),1);
    pRVar6 = (Result *)local_74;
    *(undefined1 *)(param_2 + 0x4d) = 1;
    local_64 = 0;
    local_74[0] = 0;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,pRVar6);
  piVar7 = &local_64;
LAB_0023cb08:
  FUN_002296c4(param_1,piVar7);
  return;
}

