
void FUN_002c20ec(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  undefined1 auStack_30 [16];
  
  lVar1 = *(long *)(param_1 + 0x90);
  if (lVar1 != 0) {
    FUN_002296c4(auStack_30,param_3);
    FUN_002ce7e0(lVar1,param_2,auStack_30,param_4 & 1);
  }
  return;
}

