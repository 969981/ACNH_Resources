
void FUN_002252b4(undefined1 *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  undefined1 auStack_30 [16];
  undefined8 local_18;
  
  memset(param_1,0xff,0x10);
  param_1[1] = param_2;
  *param_1 = 0x18;
  sVar2 = FUN_002255a8();
  sVar3 = FUN_00225188();
  *(short *)(param_1 + 4) = sVar3 + sVar2;
  FUN_0028d4cc(auStack_30);
  local_18 = FUN_0028d5d8(auStack_30);
  memcpy(param_1 + 6,&local_18,8);
  uVar1 = FUN_0028d5ac(auStack_30);
  param_1[0xe] = uVar1;
  FUN_00223ba0(param_1 + 0x10);
  return;
}

