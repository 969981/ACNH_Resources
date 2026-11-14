
long * FUN_01c697e0(long *param_1)

{
  undefined *puVar1;
  undefined1 uStack_11;
  
  if (*(uint *)(param_1 + 0x26) != 0xffffffff) {
    (*(code *)(&PTR_LAB_04a42808)[*(uint *)(param_1 + 0x26)])(&uStack_11,param_1);
  }
  puVar1 = PTR_DAT_04bc0f20;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = (long)&PTR_LAB_04a426b8;
  param_1[5] = (long)(param_1 + 3);
  param_1[6] = 0x10;
  FUN_0019d7fc(param_1 + 8,0,0);
  *(undefined2 *)(param_1 + 0x10) = 0x300;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xf] = (long)&PTR_LAB_04a42918;
  FUN_01c68940(param_1 + 0x11,0,0,0);
  *(undefined2 *)(param_1 + 0x15) = 0x300;
  param_1[0x16] = 0;
  param_1[0x14] = (long)&PTR_LAB_04a42918;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_01c68940(param_1 + 0x16,0,0,0);
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = (long)(PTR_DAT_04bc0f70 + 0x10);
  *(undefined2 *)((long)param_1 + 0x112) = 0xffff;
  *(undefined1 *)((long)param_1 + 0x114) = 1;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  puVar1 = PTR_DAT_04bc0f48 + 0x10;
  param_1[0x25] = 0;
  *param_1 = (long)puVar1;
  FUN_01c690b0(param_1);
  *(undefined4 *)(param_1 + 0x26) = 0;
  return param_1;
}

