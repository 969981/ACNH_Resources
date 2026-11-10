
void FUN_002c08cc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  undefined8 local_d8;
  undefined4 local_d0;
  int local_c8 [4];
  undefined4 local_b8;
  ErrorResultVariant aEStack_b4 [128];
  undefined4 local_34;
  
  piVar3 = (int *)(param_2 + 0xd8);
  if (*piVar3 == 1) {
LAB_002c0a20:
    local_c8[0] = 0;
    local_b8 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_b4,(Result *)local_c8);
    FUN_002296c4(param_1,&local_b8);
    return;
  }
  FUN_00220f24(piVar3);
  *(undefined4 *)(param_2 + 0xd0) = 0;
  if (*(char *)(param_2 + 0xb0) == '\0') goto LAB_002c0a20;
  lVar2 = FUN_002ba58c(DAT_04c61168);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + -0x18;
  }
  *(long *)(param_2 + 0xa0) = lVar1;
  if (lVar2 == 0) goto LAB_002c0a20;
  lVar2 = FUN_002ba574(DAT_04c61168);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + -0x18;
  }
  *(long *)(param_2 + 0xa8) = lVar1;
  if (lVar2 == 0) goto LAB_002c0a20;
  FUN_002b3fa8(&local_b8);
  FUN_002c0a90(local_c8,param_2,&local_b8);
  if (local_c8[0] == 0) {
    FUN_002c0ccc(param_2,&local_b8);
    local_d0 = 0;
    local_d8 = 0x40000;
    FUN_002b493c(param_2 + 400,&local_d8);
    local_d0 = 0;
    local_d8 = 0x40000;
    FUN_002b493c(&local_b8,&local_d8);
    FUN_00220f24(param_2 + 0x108);
    lVar1 = param_2 + 0x138;
    FUN_00220f24(lVar1);
    *(undefined4 *)(param_2 + 0xd0) = 5;
    FUN_00220f70(lVar1,PTR_LAB_04bce358,0);
    FUN_002ce144(&local_d8,*(undefined8 *)(param_2 + 0x168),lVar1);
    FUN_00229780(local_c8,&local_d8);
    if (local_c8[0] == 0) {
      FUN_00220f78(piVar3);
      FUN_002211bc(*(undefined8 *)(param_2 + 0x168),1);
      local_d8 = local_d8 & 0xffffffff00000000;
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_d8 + 4),(Result *)&local_34);
      piVar3 = (int *)&local_d8;
      goto LAB_002c09fc;
    }
  }
  piVar3 = local_c8;
LAB_002c09fc:
  FUN_002296c4(param_1,piVar3);
  FUN_002b4104(&local_b8);
  return;
}

