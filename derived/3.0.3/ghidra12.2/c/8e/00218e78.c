
void FUN_00218e78(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  Result *pRVar4;
  undefined4 local_78;
  undefined1 local_74;
  int local_70;
  ErrorResultVariant aEStack_6c [12];
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  undefined4 local_44;
  
  plVar1 = (long *)FUN_002aaa54();
  if (plVar1 == (long *)0x0) {
    local_60 = 0x10c08;
LAB_00218f74:
    local_70 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_70);
  }
  else {
    if ((int)plVar1[1] - 0x30U < param_5) {
      local_60 = 0x10c07;
      goto LAB_00218f74;
    }
    lVar2 = FUN_002aaa28(param_2);
    if (lVar2 == 0) {
      local_60 = 0x2c27;
      goto LAB_00218f74;
    }
    (**(code **)(*plVar1 + 0x88))(&local_60,plVar1,param_3);
    if (local_60 == 0) {
      FUN_002296c4(&local_70,*(long *)PTR_DAT_04bc1510 + 0xd4);
      FUN_00229780(&local_60,&local_70);
      local_78 = 0;
      local_70 = 0x4c11;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_78);
      if (local_60 == local_70) {
        pRVar4 = (Result *)&local_78;
        local_70 = 0x4c11;
        local_78 = 0;
      }
      else {
        local_78 = 0;
        local_74 = 0;
        local_70 = (**(code **)(*param_2 + 0x18))(param_2);
        lVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,&local_70,param_3,param_5,&local_78);
        if (lVar2 != 0) {
          FUN_002a9f34(param_1,plVar1,param_4);
          return;
        }
        local_70 = 0;
        pRVar4 = (Result *)&local_44;
        local_44 = 0;
      }
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,pRVar4);
      piVar3 = &local_70;
      goto LAB_00218f90;
    }
  }
  piVar3 = &local_60;
LAB_00218f90:
  FUN_002296c4(param_1,piVar3);
  return;
}

