
void FUN_02dc5720(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar2 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar3 = *(byte *)(param_3 + 0xe);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar3;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04ac96c0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  FUN_0263e440(param_1 + 0x45);
  param_1[0xdc47] = 0;
  param_1[0xdc48] = 0;
  plVar4 = param_1 + 0xdc7f;
  param_1[0xdc49] = (long)(param_1 + 0xdc4b);
  for (lVar5 = 0x7fe; plVar4[-0x34] = (long)(plVar4 + -0x1a), lVar5 != 0; lVar5 = lVar5 + -2) {
    plVar4[-0x1a] = (long)plVar4;
    plVar4 = plVar4 + 0x34;
  }
  param_1[0x1ac31] = 0;
  param_1[0xdc4a] = (long)(param_1 + 0xdc4b);
  if (param_1 + 0x1ac4b != (long *)0x0) {
    param_1[0xdc47] = 0x80000000000;
    param_1[0xdc48] = (long)(param_1 + 0x1ac4b);
  }
  return;
}

