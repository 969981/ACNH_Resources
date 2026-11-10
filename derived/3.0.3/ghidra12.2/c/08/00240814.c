
void FUN_00240814(long *param_1)

{
  undefined *puVar1;
  undefined1 auStack_e0 [128];
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_04bcd4a0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x1e) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0xa8);
  *(undefined4 *)(param_1 + 7) = 8;
  FUN_002b3fa8(param_1 + 0x3c);
  FUN_002436cc(param_1 + 0x4c);
  FUN_002436cc(param_1 + 0x59);
  FUN_002436cc(param_1 + 0x66);
  FUN_002436cc(param_1 + 0x73);
  FUN_002436cc(param_1 + 0x80);
  FUN_002436cc(param_1 + 0x8d);
  FUN_002436cc(param_1 + 0x9a);
  FUN_002436cc(param_1 + 0xa7);
  FUN_002436cc(param_1 + 0xb4);
  FUN_002436cc();
  FUN_002436cc();
  FUN_002436cc();
  FUN_002436cc();
  FUN_002436cc();
  FUN_002436cc();
  FUN_002436cc();
  memset((void *)((long)param_1 + 0x5c),0,0x180);
  *(undefined4 *)((long)param_1 + 0x1dc) = 0;
  memset(param_1 + 4,0,0x18);
  memset((void *)((long)param_1 + 0x3c),0,0x20);
  FUN_002b3fa8(auStack_e0);
  FUN_002b415c(param_1 + 0x3c,auStack_e0);
  (**(code **)param_1[0x4c])(param_1 + 0x4c);
  (**(code **)param_1[0x59])(param_1 + 0x59);
  (**(code **)param_1[0x66])(param_1 + 0x66);
  (**(code **)param_1[0x73])(param_1 + 0x73);
  (**(code **)param_1[0x80])(param_1 + 0x80);
  (**(code **)param_1[0x8d])(param_1 + 0x8d);
  (**(code **)param_1[0x9a])(param_1 + 0x9a);
  (**(code **)param_1[0xa7])(param_1 + 0xa7);
  (**(code **)param_1[0xb4])(param_1 + 0xb4);
  (**(code **)param_1[0xc1])(param_1 + 0xc1);
  (**(code **)param_1[0xce])(param_1 + 0xce);
  (**(code **)param_1[0xdb])(param_1 + 0xdb);
  (**(code **)param_1[0xe8])(param_1 + 0xe8);
  (**(code **)param_1[0xf5])(param_1 + 0xf5);
  (**(code **)param_1[0x102])(param_1 + 0x102);
  (**(code **)param_1[0x10f])(param_1 + 0x10f);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  FUN_002b4104(auStack_e0);
  return;
}

