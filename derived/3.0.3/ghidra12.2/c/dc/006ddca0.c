
/* WARNING: Removing unreachable block (ram,0x006ddd14) */

void FUN_006ddca0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0x400;
  param_1[2] = 0x1000;
  param_1[3] = 0x2800000078;
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
  param_1[0xe] = &PTR_LAB_048fb330;
  puVar1 = PTR_DAT_04bb29b8;
  puVar2 = param_1 + 0x107;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = puVar1 + 0x10;
  param_1[0x19] = puVar1 + 0x10;
  param_1[0x1f] = param_1 + 0x21;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  for (lVar3 = 0x7e; puVar2[-0xe6] = puVar2, lVar3 != 0; lVar3 = lVar3 + -2) {
    *puVar2 = puVar2 + 0xe6;
    puVar2 = puVar2 + 0x1cc;
  }
  param_1[0x723b] = 0;
  param_1[0x20] = param_1 + 0x21;
  if (param_1 + 0x7321 != (undefined8 *)0x0) {
    param_1[0x1d] = 0x8000000000;
    param_1[0x1e] = param_1 + 0x7321;
  }
  *(undefined4 *)(param_1 + 0x73a7) = 0x31;
  puVar1 = PTR_DAT_04bb2a58;
  param_1[0x73a3] = 0;
  param_1[0x73a4] = 0;
  *(undefined1 *)((long)param_1 + 0x39d3c) = 0;
  *(undefined4 *)(param_1 + 0x73a2) = 0;
  *(undefined1 *)((long)param_1 + 0x39d6c) = 0;
  *(undefined2 *)(param_1 + 0x73ae) = 0;
  *(undefined1 *)((long)param_1 + 0x39d72) = 0;
  *(undefined4 *)(param_1 + 0x73a1) = 0;
  *(undefined4 *)(param_1 + 0x73af) = 0;
  param_1[0x7487] = 0;
  param_1[0x73a5] = puVar1 + 0x10;
  param_1[0x73a6] = (undefined1 *)((long)param_1 + 0x39d3c);
  return;
}

