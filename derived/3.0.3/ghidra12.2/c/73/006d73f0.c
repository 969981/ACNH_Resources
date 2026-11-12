
/* WARNING: Removing unreachable block (ram,0x006d7464) */

void FUN_006d73f0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 3) = 0x96;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[4] = 0;
  param_1[5] = &PTR_LAB_04ba4ef0;
  param_1[8] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0xe] = &PTR_LAB_048fac28;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_1 + 0x1a;
  puVar2 = param_1;
  for (lVar1 = 0x7e; puVar2[0x1a] = puVar2 + 0x3bf, lVar1 != 0; lVar1 = lVar1 + -2) {
    puVar2[0x3bf] = puVar2 + 0x764;
    puVar2 = puVar2 + 0x74a;
  }
  param_1[0x1cef5] = 0;
  param_1[0x19] = param_1 + 0x1a;
  if (param_1 + 0x1d29a != (undefined8 *)0x0) {
    param_1[0x16] = 0x8000000000;
    param_1[0x17] = param_1 + 0x1d29a;
  }
  *(undefined4 *)(param_1 + 0x1d31b) = 0;
  *(undefined1 *)((long)param_1 + 0xe9904) = 0;
  param_1[0x1d31c] = 0;
  *(undefined1 *)(param_1 + 0x1d31d) = 0;
  *(undefined4 *)(param_1 + 0x1d320) = 0x31;
  *(undefined1 *)((long)param_1 + 0xe9934) = 0;
  param_1[0x1d31e] = &PTR_LAB_048fac78;
  param_1[0x1d31f] = (undefined1 *)((long)param_1 + 0xe9904);
  memset(param_1 + 0x1d328,0,0x1cb8);
  *(undefined4 *)(param_1 + 0x1d31a) = 0;
  *(undefined4 *)(param_1 + 0x1d327) = 0;
  return;
}

