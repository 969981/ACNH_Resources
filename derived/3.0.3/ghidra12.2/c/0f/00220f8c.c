
void FUN_00220f8c(undefined4 *param_1)

{
  code *pcVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_002296c4(auStack_40);
  FUN_00229780(param_1 + 1,auStack_40);
  *param_1 = 2;
  FUN_002296c4(auStack_50,param_1 + 1);
  pcVar1 = *(code **)(param_1 + 6);
  if (pcVar1 != (code *)0x0) {
    FUN_002296c4(auStack_30,auStack_50);
    (*pcVar1)(auStack_30,*(undefined8 *)(param_1 + 8));
  }
  return;
}

