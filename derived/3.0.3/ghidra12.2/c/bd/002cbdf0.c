
void FUN_002cbdf0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_00294a54();
  *param_1 = (long)(PTR_DAT_04bce3a8 + 0x10);
  FUN_00309f4c(param_1 + 1);
  param_1[0x4f] = (long)(PTR_DAT_04bcd5d8 + 0x10);
  param_1[0x50] = (long)param_1 + 0x294;
  *(undefined4 *)(param_1 + 0x51) = 0x80;
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 3;
    *(undefined2 *)((long)param_1 + lVar3 + 0x294) = 0;
    *(undefined1 *)((long)param_1 + lVar3 + 0x296) = 0;
    lVar3 = lVar1;
  } while (lVar1 != 0x81);
  *(undefined8 *)((long)param_1 + 0x28c) = 0;
  puVar2 = PTR_DAT_04bce3b0;
  *(undefined8 *)((long)param_1 + 0x33c) = 0;
  *(undefined8 *)((long)param_1 + 0x344) = 0;
  *(undefined8 *)((long)param_1 + 0x34c) = 0;
  *(undefined8 *)((long)param_1 + 0x354) = 0;
  *(undefined8 *)((long)param_1 + 0x35c) = 0;
  *(undefined8 *)((long)param_1 + 0x364) = 0;
  *(undefined8 *)((long)param_1 + 0x36c) = 0;
  *(undefined8 *)((long)param_1 + 0x32c) = 0;
  *(undefined8 *)((long)param_1 + 0x334) = 0;
  param_1[100] = (long)param_1 + 0x334;
  *(undefined4 *)(param_1 + 0x65) = 0x40;
  *(undefined2 *)(param_1 + 0x70) = 0x100;
  param_1[99] = (long)(puVar2 + 0x10);
  *(undefined1 *)((long)param_1 + 0x374) = 0;
  *(undefined2 *)(param_1 + 0x6f) = 0;
  *(undefined4 *)((long)param_1 + 0x37c) = 0;
  *(undefined1 *)((long)param_1 + 0x382) = 1;
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 3;
    *(undefined2 *)((long)param_1 + lVar3 + 0x294) = 0;
    *(undefined1 *)((long)param_1 + lVar3 + 0x296) = 0;
    lVar3 = lVar1;
  } while (lVar1 != 0x81);
  *(undefined1 *)((long)param_1 + 0x374) = 0;
  *(undefined8 *)((long)param_1 + 0x28c) = 0;
  *(undefined8 *)((long)param_1 + 0x334) = 0;
  *(undefined8 *)((long)param_1 + 0x33c) = 0;
  *(undefined8 *)((long)param_1 + 0x344) = 0;
  *(undefined8 *)((long)param_1 + 0x34c) = 0;
  *(undefined8 *)((long)param_1 + 0x354) = 0;
  *(undefined8 *)((long)param_1 + 0x35c) = 0;
  *(undefined8 *)((long)param_1 + 0x364) = 0;
  *(undefined8 *)((long)param_1 + 0x36c) = 0;
  *(undefined8 *)((long)param_1 + 0x32c) = 0;
  return;
}

