
void FUN_002c129c(undefined8 param_1,long param_2,uint param_3,long param_4)

{
  int *piVar1;
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  piVar1 = (int *)(param_2 + 0xd8);
  if (*piVar1 == 1) {
LAB_002c1340:
    local_44 = 0x10c08;
LAB_002c1358:
    local_54 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_54);
  }
  else {
    FUN_00220f24(piVar1);
    *(undefined4 *)(param_2 + 0xd0) = 0;
    if (*(long *)(param_2 + 0x50) == 0) goto LAB_002c1340;
    if ((param_4 == 0) || ((param_3 & 0xff) == 0)) {
      local_44 = 0x10c07;
      goto LAB_002c1358;
    }
    FUN_003064a0(&local_44,*(undefined8 *)(param_2 + 200),piVar1,param_3,param_4);
    if (local_44 == 0) {
      *(undefined4 *)(param_2 + 0xd0) = 2;
      FUN_002211bc(*(undefined8 *)(param_2 + 200),0);
      local_54 = 0;
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_34);
      piVar1 = &local_54;
      goto LAB_002c1374;
    }
  }
  piVar1 = &local_44;
LAB_002c1374:
  FUN_002296c4(param_1,piVar1);
  return;
}

