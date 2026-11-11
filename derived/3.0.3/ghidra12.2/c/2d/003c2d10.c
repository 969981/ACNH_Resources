
void FUN_003c2d10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if (0 < param_3) {
    lVar1 = 0;
    do {
      FUN_003de050(lVar1,param_1,param_2,param_4,0xe,&local_60);
      lVar1 = lVar1 + 0xe;
    } while (lVar1 < param_3);
  }
  return;
}

