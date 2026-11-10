
void FUN_00218bb8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 local_64 [4];
  int local_54;
  ErrorResultVariant local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined4 local_4a;
  undefined2 local_46;
  undefined1 local_44;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  
  lVar1 = FUN_002aaa28();
  lVar2 = FUN_002aaa4c(param_2);
  if (lVar1 == lVar2) {
    local_54 = 0;
    *(undefined4 *)(param_2 + 0x50) = 3;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x60);
    if (lVar1 != -1) {
      local_4b = (undefined1)lVar1;
      local_4a = 0;
      local_50 = SUB81((ulong)lVar1 >> 0x28,0);
      local_46 = 0;
      local_44 = 0;
      local_40 = 0;
      local_64[0] = 0;
      local_54 = (uint)CONCAT21(CONCAT11((char)((ulong)lVar1 >> 0x30),(char)((ulong)lVar1 >> 0x38)),
                                *(undefined1 *)(param_2 + 0x55)) << 8;
      local_4f = (undefined1)((ulong)lVar1 >> 0x20);
      local_4e = (undefined1)((ulong)lVar1 >> 0x18);
      local_4d = (undefined1)((ulong)lVar1 >> 0x10);
      local_4c = (undefined1)((ulong)lVar1 >> 8);
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)local_64);
      FUN_002296c4(local_64,&local_40);
      FUN_00218e78(param_1,param_2,param_3,&local_54,0x12);
      return;
    }
    local_54 = 0x10c08;
  }
  local_40 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(&local_50,(Result *)&local_40);
  FUN_002296c4(param_1,&local_54);
  return;
}

