
void FUN_002848f0(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  Result *pRVar4;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  if (param_3 == 0) {
    local_50 = 0x10c07;
  }
  else {
    plVar1 = (long *)FUN_002aaa54();
    if (plVar1 != (long *)0x0) {
      lVar2 = FUN_00284178(param_2 + 10);
      if (lVar2 != -1) {
        uVar3 = FUN_00284178(param_2 + 10);
        local_51 = (undefined1)uVar3;
        local_59 = (undefined1)param_4;
        local_50 = 0;
        local_70 = 0;
        local_60 = CONCAT13((char)((ulong)param_4 >> 0x20),
                            CONCAT12((char)((ulong)param_4 >> 0x28),
                                     CONCAT11((char)((ulong)param_4 >> 0x30),
                                              (char)((ulong)param_4 >> 0x38))));
        local_5c = (undefined1)((ulong)param_4 >> 0x18);
        local_5b = (undefined1)((ulong)param_4 >> 0x10);
        local_5a = (undefined1)((ulong)param_4 >> 8);
        local_58 = (undefined1)((ulong)uVar3 >> 0x38);
        local_57 = (undefined1)((ulong)uVar3 >> 0x30);
        local_56 = (undefined1)((ulong)uVar3 >> 0x28);
        local_55 = (undefined1)((ulong)uVar3 >> 0x20);
        local_54 = (undefined1)((ulong)uVar3 >> 0x18);
        local_53 = (undefined1)((ulong)uVar3 >> 0x10);
        local_52 = (undefined1)((ulong)uVar3 >> 8);
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_70);
        FUN_002296c4(&local_70,&local_50);
        local_70 = 0;
        local_6c = 0;
        local_50 = (**(code **)(*param_2 + 0x18))(param_2);
        lVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,&local_50,param_3,0x10,&local_70);
        if (lVar2 != 0) {
          FUN_002a9f34(param_1,plVar1,&local_60);
          return;
        }
        pRVar4 = (Result *)&local_34;
        local_50 = 0;
        local_34 = 0;
        goto LAB_00284a74;
      }
    }
    local_50 = 0x10c08;
  }
  pRVar4 = (Result *)&local_60;
  local_60 = 0;
LAB_00284a74:
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,pRVar4);
  FUN_002296c4(param_1,&local_50);
  return;
}

