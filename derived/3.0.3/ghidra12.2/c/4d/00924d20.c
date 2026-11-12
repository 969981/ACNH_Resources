
void FUN_00924d20(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  short *psVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined8 local_c0;
  short local_b8 [68];
  
  uVar7 = 0;
  local_b8[0x3c] = 0;
  local_b8[0x3d] = 0;
  local_b8[0x3e] = 0;
  local_b8[0x3f] = 0;
  local_b8[0x40] = 0;
  local_b8[0x41] = 0;
  local_b8[0x42] = 0;
  local_b8[0x43] = 0;
  local_b8[0x34] = 0;
  local_b8[0x35] = 0;
  local_b8[0x36] = 0;
  local_b8[0x37] = 0;
  local_b8[0x38] = 0;
  local_b8[0x39] = 0;
  local_b8[0x3a] = 0;
  local_b8[0x3b] = 0;
  local_b8[0x2c] = 0;
  local_b8[0x2d] = 0;
  local_b8[0x2e] = 0;
  local_b8[0x2f] = 0;
  local_b8[0x30] = 0;
  local_b8[0x31] = 0;
  local_b8[0x32] = 0;
  local_b8[0x33] = 0;
  local_b8[0x24] = 0;
  local_b8[0x25] = 0;
  local_b8[0x26] = 0;
  local_b8[0x27] = 0;
  local_b8[0x28] = 0;
  local_b8[0x29] = 0;
  local_b8[0x2a] = 0;
  local_b8[0x2b] = 0;
  local_b8[0x1c] = 0;
  local_b8[0x1d] = 0;
  local_b8[0x1e] = 0;
  local_b8[0x1f] = 0;
  local_b8[0x20] = 0;
  local_b8[0x21] = 0;
  local_b8[0x22] = 0;
  local_b8[0x23] = 0;
  local_b8[0x14] = 0;
  local_b8[0x15] = 0;
  local_b8[0x16] = 0;
  local_b8[0x17] = 0;
  local_b8[0x18] = 0;
  local_b8[0x19] = 0;
  local_b8[0x1a] = 0;
  local_b8[0x1b] = 0;
  local_b8[0xc] = 0;
  local_b8[0xd] = 0;
  local_b8[0xe] = 0;
  local_b8[0xf] = 0;
  local_b8[0x10] = 0;
  local_b8[0x11] = 0;
  local_b8[0x12] = 0;
  local_b8[0x13] = 0;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[6] = 0;
  local_b8[7] = 0;
  local_b8[8] = 0;
  local_b8[9] = 0;
  local_b8[10] = 0;
  local_b8[0xb] = 0;
  local_c0 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  do {
    lVar8 = uVar7 << 0x20;
    uVar3 = uVar7 << 1;
    uVar4 = uVar7 >> 0x1f;
    uVar1 = (int)uVar7 + 2;
    uVar7 = (ulong)uVar1;
    *(undefined2 *)((long)local_b8 + ((-uVar4 & 0xfffffffe00000000 | uVar3) - 8)) = 0;
    *(undefined2 *)((long)local_b8 + (lVar8 + 0x100000000 >> 0x1f) + -8) = 0;
  } while (uVar1 != 0x48);
  FUN_0126c550(param_1,&local_c0,param_2,param_3);
  lVar8 = 0;
  psVar6 = local_b8;
  iVar9 = 0xa0;
  do {
    if (psVar6[-4] == 0x13e) {
      iVar9 = 0;
      goto LAB_00924e78;
    }
    if (psVar6[-3] == 0x13e) {
      iVar9 = 0x20;
      goto LAB_00924e78;
    }
    if (psVar6[-2] == 0x13e) {
      iVar9 = 0x40;
      goto LAB_00924e78;
    }
    if (psVar6[-1] == 0x13e) {
      iVar9 = 0x60;
      goto LAB_00924e78;
    }
    if (*psVar6 == 0x13e) {
      iVar9 = 0x80;
      goto LAB_00924e78;
    }
    if (psVar6[1] == 0x13e) goto LAB_00924e78;
    if (psVar6[2] == 0x13e) {
      iVar9 = 0xc0;
      goto LAB_00924e78;
    }
    if (psVar6[3] == 0x13e) {
      iVar9 = 0xe0;
      goto LAB_00924e78;
    }
    if (psVar6[4] == 0x13e) {
      iVar9 = 0x100;
      goto LAB_00924e78;
    }
    lVar8 = lVar8 + 0x20;
    psVar6 = psVar6 + 9;
  } while (lVar8 != 0x100);
  iVar9 = 0;
  lVar8 = 0;
LAB_00924e78:
  if (DAT_04cf1b28 != 0) {
    piVar5 = (int *)(**(code **)(*(long *)(DAT_04cf1b28 + 200) + 0xf0))();
    iVar2 = piVar5[1];
    *(int *)(param_1 + 8) = *piVar5 + iVar9;
    *(int *)(param_1 + 0xc) = iVar2 + (int)lVar8;
  }
  return;
}

