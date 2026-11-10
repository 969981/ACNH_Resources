
void FUN_001b74e0(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  *param_1 = (long)(PTR_DAT_04bcc540 + 0x10);
  FUN_00186460(param_1 + 1,0x20000000,1);
  FUN_00186460(param_1 + 10,0x20000000,1);
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  puVar2 = PTR_DAT_04bcc548;
  *(undefined4 *)(param_1 + 0x13) = 0x554;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0xffffffff;
  param_1[0x1d] = 0;
  param_1[0x14] = (long)(puVar2 + 0x10);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = (long)&PTR_LAB_0483bfc8;
  FUN_001bae00(param_1 + 0x1e);
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  param_1[0x28] = 0;
  param_1[0x26] = (long)(param_1 + 0x26);
  param_1[0x27] = (long)(param_1 + 0x26);
  FUN_001abedc(param_1 + 0x29);
  FUN_001bb814(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x3a) = 1;
  plVar1 = param_1 + 0x3c;
  *(undefined1 *)((long)param_1 + 0x1d4) = 0;
  *(undefined1 *)((long)param_1 + 0x1d5) = 0;
  param_1[0x3e] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_001e1500(param_1 + 0x3f);
  puVar2 = PTR_DAT_04bc0ec8;
  param_1[0x54] = (long)(param_1 + 0x52);
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x23] = (long)param_1;
  param_1[0x55] = 0x10;
  param_1[0x51] = (long)(puVar2 + 0x10);
  uVar5 = param_1[0x3d] - param_1[0x3c];
  if (uVar5 < 0x20) {
    FUN_001dd7a0(plVar1,4 - (uVar5 >> 3));
  }
  else if (uVar5 != 0x20) {
    param_1[0x3d] = param_1[0x3c] + 0x20;
  }
  lVar3 = FUN_00185a6c(0x128);
  if (lVar3 != 0) {
    FUN_0018c3a4(lVar3);
  }
  *(long *)*plVar1 = lVar3;
  lVar3 = FUN_00185a6c(0x128);
  if (lVar3 != 0) {
    FUN_0018c3a4(lVar3);
  }
  *(long *)(*plVar1 + 8) = lVar3;
  lVar3 = FUN_00185a6c(0x128);
  if (lVar3 != 0) {
    FUN_0018c3a4(lVar3);
  }
  *(long *)(*plVar1 + 0x10) = lVar3;
  lVar3 = FUN_00185a6c(0x128);
  if (lVar3 != 0) {
    FUN_0018c3a4(lVar3);
  }
  *(long *)(*plVar1 + 0x18) = lVar3;
  puVar4 = (undefined8 *)FUN_00185a6c(0x20);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[3] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar4[1] = puVar4 + 2;
  }
  param_1[0x3b] = (long)puVar4;
  return;
}

