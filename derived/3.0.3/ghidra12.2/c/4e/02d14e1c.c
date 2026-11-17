
void FUN_02d14e1c(long *param_1)

{
  long *__s;
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  puVar2 = PTR_DAT_04bd4738;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = (long)&PTR_LAB_04a3d068;
  param_1[0xf] = 0;
  param_1[0x1a] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x12] = (long)&PTR_FUN_04ba93e0;
  param_1[0x13] = 0;
  *(undefined2 *)((long)param_1 + 0xbc) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0xc4) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0xcc) = 0xfffe;
  FUN_0277d4ac((undefined8 *)((long)param_1 + 0xcc));
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0x31;
  __s = param_1 + 0x43;
  param_1[0x1e] = (long)(param_1 + 0x1f);
  param_1[0x2e] = (long)param_1 + 0x17c;
  param_1[0x1c] = 0;
  uVar1 = (long)param_1 + 0x27a;
  *(undefined4 *)((long)param_1 + 0xec) = 8;
  param_1[0x28] = (long)__s;
  *(undefined4 *)(param_1 + 0x2f) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1bb) = 0;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  param_1[0x39] = (long)param_1 + 0x1d4;
  *(undefined4 *)(param_1 + 0x3a) = 0x40;
  *(undefined1 *)((long)param_1 + 0x213) = 0;
  param_1[0x2d] = (long)puVar2;
  param_1[0x38] = (long)puVar2;
  puVar2 = PTR_DAT_04bb8dc0 + 0x10;
  param_1[0x4d] = 0;
  uVar3 = uVar1;
  if (uVar1 <= (long)param_1 + 0x21aU) {
    uVar3 = (long)param_1 + 0x21aU;
  }
  param_1[0x27] = (long)puVar2;
  param_1[0x44] = 0;
  *__s = 0;
  *(undefined2 *)(param_1 + 0x4f) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4e] = 0;
  memset(__s,0,((uVar3 - (long)(param_1 + 0x27)) - 0xe1 & 0xfffffffffffffffe) + 2);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (uVar1 <= ((ulong)__s | 2)) {
    uVar1 = (ulong)__s | 2;
  }
  memset(__s,0,(uVar1 + ~(ulong)__s & 0xfffffffffffffffe) + 2);
  *(undefined1 *)((long)param_1 + 0x14c) = 0;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = -0x100000000;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x17c) = 0;
  *(undefined1 *)((long)param_1 + 0x1d4) = 0;
  return;
}

