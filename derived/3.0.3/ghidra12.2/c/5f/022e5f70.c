
/* WARNING: Removing unreachable block (ram,0x022e6094) */
/* WARNING: Removing unreachable block (ram,0x022e60a8) */
/* WARNING: Removing unreachable block (ram,0x022e60bc) */
/* WARNING: Removing unreachable block (ram,0x022e60d0) */
/* WARNING: Removing unreachable block (ram,0x022e60e4) */
/* WARNING: Removing unreachable block (ram,0x022e60f8) */

void FUN_022e5f70(undefined8 *param_1)

{
  undefined8 *__s;
  uint uVar1;
  undefined8 *puVar2;
  
  *(undefined1 *)(param_1 + 1) = 0;
  __s = param_1 + 2;
  *param_1 = &PTR_FUN_04a7ed50;
  memset(__s,0,0x770);
  uVar1 = 0;
  do {
    puVar2 = __s + (ulong)uVar1 * 0xe;
    if (0x10 < uVar1) {
      puVar2 = __s;
    }
    if (uVar1 == 0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      puVar2 = __s;
    }
    else {
      *puVar2 = &LAB_022e61e0;
      puVar2[1] = 0;
      puVar2 = __s + (ulong)uVar1 * 0xe;
      if (0x10 < uVar1) {
        puVar2 = __s;
      }
      puVar2[2] = &LAB_022e6490;
      puVar2[3] = 0;
      puVar2 = __s + (ulong)uVar1 * 0xe;
      if (0x10 < uVar1) {
        puVar2 = __s;
      }
      puVar2[4] = &LAB_022e6a84;
      puVar2[5] = 0;
      puVar2 = __s + (ulong)uVar1 * 0xe;
      if (0x10 < uVar1) {
        puVar2 = __s;
      }
      puVar2[6] = &LAB_022e6490;
      puVar2[7] = 0;
      puVar2 = __s + (ulong)uVar1 * 0xe;
      if (0x10 < uVar1) {
        puVar2 = __s;
      }
      puVar2[8] = &LAB_022e6490;
      puVar2[9] = 0;
      puVar2 = __s + (ulong)uVar1 * 0xe;
      if (0x10 < uVar1) {
        puVar2 = __s;
      }
      puVar2[10] = &LAB_022e6b88;
      puVar2[0xb] = 0;
      puVar2 = __s + (ulong)uVar1 * 0xe;
      if (0x10 < uVar1) {
        puVar2 = __s;
      }
      puVar2[0xc] = &LAB_022e6c80;
    }
    uVar1 = uVar1 + 1;
    puVar2[0xd] = 0;
  } while (uVar1 != 0x11);
  param_1[0xfd] = 0;
  param_1[0xfe] = &LAB_022e6f30;
  param_1[0x100] = &LAB_022e7120;
  param_1[0x104] = &LAB_022e7120;
  param_1[0x106] = &LAB_022e7120;
  param_1[0x10a] = &LAB_022e7470;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xf0] = 0;
  param_1[0xff] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x105] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10d] = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x10e] = &LAB_022e7660;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  param_1[0x10f] = 0;
  param_1[0x112] = &LAB_022e7660;
  param_1[0x113] = 0;
  param_1[0x114] = &LAB_022e7660;
  param_1[0x119] = 0;
  param_1[0x118] = 0;
  param_1[0x117] = 0;
  param_1[0x116] = 0;
  param_1[0x115] = 0;
  return;
}

