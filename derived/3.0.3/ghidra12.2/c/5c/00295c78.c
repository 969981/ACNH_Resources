
void FUN_00295c78(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                 long param_5,uint param_6,long param_7,uint param_8,long param_9)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  piVar2 = &local_60;
  if ((((int)param_2[0x12] == 0) || ((int)param_2[0x12] != (int)param_3)) ||
     (param_2[0x14] != param_9)) {
    local_60 = 0;
    local_50 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
  }
  else {
    (**(code **)(*param_2 + 0x80))
              (&local_50,param_2,param_3,param_4,param_6 & 1,param_7,param_8,param_9);
    if (local_50 == 0) {
      if (((param_5 != 0) && (param_7 != 0)) && ((param_8 & 0xff) != 0)) {
        plVar3 = *(long **)(DAT_04c60f48 + (ulong)(*(char *)(DAT_04c60f48 + 0x162) == '\0') * 8 +
                           0x168);
        lVar1 = (**(code **)(*plVar3 + 0xf0))(plVar3);
        if (lVar1 == 0) {
          (**(code **)(*plVar3 + 0xf8))(plVar3,param_5);
        }
      }
      *(undefined4 *)(param_2 + 0x1e) = param_4;
      local_60 = 0;
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
      goto LAB_00295d8c;
    }
  }
  piVar2 = &local_50;
LAB_00295d8c:
  FUN_002296c4(param_1,piVar2);
  return;
}

