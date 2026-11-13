
void FUN_01458934(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  FUN_00705c50();
  param_1[0x50] = 0xffffffff;
  puVar5 = PTR_DAT_04bbcbe0;
  param_1[0x51] = 0xffffffff;
  param_1[0x52] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x53) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x4f] = (long)&PTR_LAB_04ba4ef0;
  *(undefined1 *)((long)param_1 + 0x2c4) = 0xff;
  param_1[0x59] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x59);
  param_1[0x60] = 0;
  param_1[0x5b] = 0x22;
  *(undefined4 *)((long)param_1 + 0x307) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  uVar2 = DAT_041e9408;
  uVar1 = DAT_041e9400;
  param_1[0x62] = (long)&DAT_04ba4b10;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  *(undefined8 *)((long)param_1 + 0x32c) = uVar2;
  uVar3 = DAT_041e9418;
  uVar2 = DAT_041e9410;
  *(undefined8 *)((long)param_1 + 0x324) = uVar1;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((long)param_1 + 0x334) = uVar2;
  uVar4 = DAT_041e9420;
  *(undefined8 *)((long)param_1 + 0x33c) = uVar3;
  *(undefined4 *)(param_1 + 0x6b) = 0x3dcccccd;
  *param_1 = (long)&PTR_LAB_049a1a28;
  *(undefined4 *)((long)param_1 + 0x344) = uVar4;
  FUN_016100c4(param_1 + 0x6c,0);
  param_1[0x73] = 0;
  return;
}

