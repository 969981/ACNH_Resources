
void FUN_003b8108(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_88 [36];
  undefined4 local_64 [2];
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 auStack_40 [16];
  
  FUN_003d2534(auStack_40,param_1);
  local_4c = 0;
  local_50 = 0;
  FUN_003d2694(auStack_40,&local_58,param_2,0);
  lVar1 = FUN_003d21f4(param_4,local_58);
  if (lVar1 != 0) {
    local_64[0] = 0xffffffff;
    local_5c = 0;
    FUN_003b8858(param_3,local_58,local_64);
    FUN_003c8dd4(auStack_88,lVar1,local_5c);
    FUN_003c8fec(auStack_88,local_54);
  }
  return;
}

