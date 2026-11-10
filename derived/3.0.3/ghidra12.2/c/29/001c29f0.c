
void FUN_001c29f0(long *param_1)

{
  ulong uVar1;
  undefined1 auStack_b0 [144];
  undefined8 local_18;
  
  if (*(char *)(param_1[0x28] + 8) != '\0') {
    while( true ) {
      FUN_001e1500(auStack_b0);
      uVar1 = FUN_001d7b60(param_1 + 0x1c,&local_18,auStack_b0);
      if ((uVar1 & 1) == 0) break;
      (**(code **)(*param_1 + 0x38))(param_1,local_18,auStack_b0);
      FUN_001d8400(param_1 + 0x1c);
      FUN_001e1868(auStack_b0);
    }
    FUN_001e1868(auStack_b0);
  }
  return;
}

