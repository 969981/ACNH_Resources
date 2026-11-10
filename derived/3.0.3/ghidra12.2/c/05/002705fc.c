
void FUN_002705fc(undefined8 param_1,long *param_2,undefined4 param_3)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  int local_68;
  ErrorResultVariant aEStack_64 [12];
  undefined4 local_58;
  undefined1 local_54;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  uVar1 = *(ushort *)(DAT_04c603c8 + 0x98);
  plVar2 = (long *)FUN_002aaa54();
  if (plVar2 != (long *)0x0) {
    local_58 = 0;
    local_54 = 0;
    local_50 = (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = (**(code **)(*plVar2 + 0x68))
                      (plVar2,&local_50,param_3,(uint)uVar1 * 0x44 + 0xc,&local_58);
    if (lVar3 != 0) {
      FUN_002a9f34(&local_50,plVar2,param_2[0x16]);
      if (local_50 == 0) {
        local_68 = 0;
      }
      else {
        local_68 = 0x4c0d;
      }
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_34);
      piVar4 = &local_68;
      goto LAB_002706fc;
    }
  }
  local_50 = 0x4c0d;
  local_68 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_68);
  piVar4 = &local_50;
LAB_002706fc:
  FUN_002296c4(param_1,piVar4);
  return;
}

