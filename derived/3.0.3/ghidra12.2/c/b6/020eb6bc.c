
/* WARNING: Removing unreachable block (ram,0x020eb828) */
/* WARNING: Removing unreachable block (ram,0x020eb7c4) */
/* WARNING: Removing unreachable block (ram,0x020eb770) */
/* WARNING: Removing unreachable block (ram,0x020eb728) */
/* WARNING: Removing unreachable block (ram,0x020eb6ec) */
/* WARNING: Removing unreachable block (ram,0x020eb744) */
/* WARNING: Removing unreachable block (ram,0x020eb7a8) */
/* WARNING: Removing unreachable block (ram,0x020eb7f0) */
/* WARNING: Removing unreachable block (ram,0x020eb844) */

void FUN_020eb6bc(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = FUN_020fd7d8(param_2);
  param_1[2] = uVar1;
  *(uint *)(param_1 + 4) = (uint)(byte)param_2[0x20];
  if ((byte)param_2[0xb7] < 10) {
    param_1[0x18] = param_2[0xb7];
  }
  param_1[8] = param_2[0x3c];
  param_1[9] = param_2[0x3d];
  uVar1 = FUN_020fd7d8(param_2 + 0x3c);
  param_1[10] = uVar1;
  *(uint *)(param_1 + 0xc) = (uint)(byte)param_2[0x5c];
  if ((byte)param_2[0xb8] < 10) {
    param_1[0x19] = param_2[0xb8];
  }
  param_1[0x10] = param_2[0x78];
  param_1[0x11] = param_2[0x79];
  uVar1 = FUN_020fd7d8(param_2 + 0x78);
  param_1[0x12] = uVar1;
  *(uint *)(param_1 + 0x14) = (uint)(byte)param_2[0x98];
  if ((byte)param_2[0xb9] < 10) {
    param_1[0x1a] = param_2[0xb9];
  }
  return;
}

