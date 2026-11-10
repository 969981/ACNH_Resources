
void FUN_00218a48(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  long lVar1;
  long lVar2;
  undefined4 local_74 [4];
  undefined4 local_64;
  ErrorResultVariant local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
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
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  
  lVar1 = FUN_002aaa28();
  lVar2 = FUN_002aaa4c(param_2);
  if (lVar1 == lVar2) {
    lVar1 = *(long *)(param_2 + 0x60);
    if (lVar1 != -1) {
      local_53 = (undefined1)lVar1;
      local_60 = SUB81((ulong)param_4 >> 0x28,0);
      local_64 = CONCAT13((char)((ulong)param_4 >> 0x30),
                          CONCAT12((char)((ulong)param_4 >> 0x38),CONCAT11(param_5,1)));
      local_5f = (undefined1)((ulong)param_4 >> 0x20);
      local_5b = (undefined1)param_4;
      local_5e = (undefined1)((ulong)param_4 >> 0x18);
      local_50 = 0;
      local_5d = (undefined1)((ulong)param_4 >> 0x10);
      local_74[0] = 0;
      local_5c = (undefined1)((ulong)param_4 >> 8);
      local_5a = (undefined1)((ulong)lVar1 >> 0x38);
      local_59 = (undefined1)((ulong)lVar1 >> 0x30);
      local_58 = (undefined1)((ulong)lVar1 >> 0x28);
      local_57 = (undefined1)((ulong)lVar1 >> 0x20);
      local_56 = (undefined1)((ulong)lVar1 >> 0x18);
      local_55 = (undefined1)((ulong)lVar1 >> 0x10);
      local_54 = (undefined1)((ulong)lVar1 >> 8);
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)local_74);
      FUN_002296c4(local_74,&local_50);
      FUN_00218e78(param_1,param_2,param_3,&local_64,0x12);
      return;
    }
    local_64 = 0x10c08;
  }
  else {
    local_64 = 0;
  }
  local_50 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(&local_60,(Result *)&local_50);
  FUN_002296c4(param_1,&local_64);
  return;
}

