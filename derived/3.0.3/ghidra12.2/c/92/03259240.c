
void FUN_03259240(long *param_1,undefined8 param_2,long param_3)

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
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  plVar4 = param_1 + 0xbf;
  *param_1 = (long)&PTR_FUN_04b153b8;
  lVar5 = 0x7fc;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = (long)(param_1 + 0xbb);
  while( true ) {
    plVar4[-3] = (long)(plVar4 + -2);
    plVar4[-4] = (long)(plVar4 + -3);
    plVar4[-2] = (long)(plVar4 + -1);
    if (lVar5 == 0) break;
    plVar4[-1] = (long)plVar4;
    plVar4 = plVar4 + 4;
    lVar5 = lVar5 + -4;
  }
  param_1[0x8ba] = 0;
  param_1[0xba] = (long)(param_1 + 0xbb);
  if (param_1 + 0x8bb != (long *)0x0) {
    param_1[0xb8] = (long)(param_1 + 0x8bb);
    param_1[0xb7] = 0x80000000000;
  }
  param_1[0x110b] = 0;
  *(undefined8 *)((long)param_1 + 0x85f4) = 0;
  param_1[0x10bb] = 0;
  param_1[0x10bc] = 0;
  param_1[0x10bd] = (long)param_1 + 0x85fc;
  *(undefined4 *)(param_1 + 0x10be) = 0x32;
  param_1[0x110c] = -0x3bf9000000000000;
  param_1[0x110d] = 0;
  param_1[0x110e] = 0;
  *(undefined4 *)((long)param_1 + 0x8877) = 0;
  DAT_05725868 = param_1;
  memset(param_1 + 0x43,0,0x3a0);
  return;
}

