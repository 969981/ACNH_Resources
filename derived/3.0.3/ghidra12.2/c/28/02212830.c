
void FUN_02212830(long param_1)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  undefined *local_198;
  char *pcStack_190;
  uint local_188 [36];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  uint local_6c;
  
  uVar5 = FUN_0221119c();
  if (((uVar5 & 1) == 0) || (*(int *)(param_1 + 0x30) == 0)) {
    iVar13 = 0;
  }
  else {
    puVar11 = *(undefined8 **)(param_1 + 0x38);
    uVar5 = 0;
    lVar12 = (long)*(int *)(param_1 + 0x30) << 3;
    do {
      uVar10 = *puVar11;
      FUN_0376baa0(uVar10);
      uVar6 = FUN_0376f950();
      if ((uVar6 & 1) == 0) {
        lVar1 = param_1 + 0x1b + uVar5 * 3;
        if (5 < (uint)uVar5) {
          lVar1 = param_1 + 0x1b;
        }
        FUN_020fd3a0(lVar1,uVar10);
        uVar5 = (ulong)((uint)uVar5 + 1);
      }
      iVar13 = (int)uVar5;
      puVar11 = puVar11 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  local_70 = 0;
  local_f8 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) & 0xfb;
  local_188[0x22] = 0;
  local_188[0] = 0;
  local_188[1] = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_188[0x1e] = 0;
  local_188[0x1f] = 0;
  local_188[0x20] = 0;
  local_188[0x21] = 0;
  local_188[0x1a] = 0;
  local_188[0x1b] = 0;
  local_188[0x1c] = 0;
  local_188[0x1d] = 0;
  local_188[0x16] = 0;
  local_188[0x17] = 0;
  local_188[0x18] = 0;
  local_188[0x19] = 0;
  local_188[0x12] = 0;
  local_188[0x13] = 0;
  local_188[0x14] = 0;
  local_188[0x15] = 0;
  local_188[0xe] = 0;
  local_188[0xf] = 0;
  local_188[0x10] = 0;
  local_188[0x11] = 0;
  local_188[10] = 0;
  local_188[0xb] = 0;
  local_188[0xc] = 0;
  local_188[0xd] = 0;
  local_188[6] = 0;
  local_188[7] = 0;
  local_188[8] = 0;
  local_188[9] = 0;
  local_188[2] = 0;
  local_188[3] = 0;
  local_188[4] = 0;
  local_188[5] = 0;
  FUN_0376c3f0(&local_f8,local_188,0,0);
  uVar8 = 0;
  uVar5 = 0;
  local_198 = (undefined *)0x0;
  do {
    uVar4 = *(uint *)((long)local_188 + (-(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2));
    uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    if ((uVar4 + (uVar4 >> 0x10) & 0x3f) != 0) {
      local_188[(ulong)(uVar8 >> 5) - 4] =
           local_188[(ulong)(uVar8 >> 5) - 4] | 1 << (ulong)(uVar8 & 0x1f);
    }
    uVar8 = uVar8 + 1;
    uVar5 = (ulong)((int)uVar5 + 1);
  } while (uVar8 != 0x23);
  FUN_02215aa8(param_1,&local_198);
  local_6c = FUN_03773140(*(byte *)(param_1 + 0x1e4) & 1);
  if (local_6c < 9) {
    uVar7 = *(undefined4 *)(&DAT_04179eac + (long)(int)local_6c * 4);
  }
  else {
    uVar7 = 6;
  }
  iVar3 = FUN_02215ff0(param_1,&local_198,local_188,0,uVar7);
  uVar8 = iVar3 + iVar13;
  uVar4 = FUN_03773140(*(byte *)(param_1 + 0x1e4) & 1);
  local_198 = (undefined *)CONCAT44(local_198._4_4_,uVar4);
  if (uVar4 < 9) {
    uVar4 = *(uint *)(&DAT_04179eac + (long)(int)uVar4 * 4);
    if ((int)uVar4 <= (int)uVar8) goto LAB_02212bc0;
  }
  else {
    uVar4 = 6;
    if (5 < (int)uVar8) goto LAB_02212bc0;
  }
  FUN_02211318(param_1,local_188);
  uVar14 = 0;
  uVar5 = 0;
  local_198 = (undefined *)0x0;
  do {
    uVar9 = *(uint *)((long)local_188 + (-(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2));
    uVar9 = uVar9 - (uVar9 >> 1 & 0x55555555);
    uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
    uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
    uVar9 = uVar9 + (uVar9 >> 8);
    if ((uVar9 + (uVar9 >> 0x10) & 0x3f) != 0) {
      local_188[(ulong)(uVar14 >> 5) - 4] =
           local_188[(ulong)(uVar14 >> 5) - 4] | 1 << (ulong)(uVar14 & 0x1f);
    }
    uVar14 = uVar14 + 1;
    uVar5 = (ulong)((int)uVar5 + 1);
  } while (uVar14 != 0x23);
  uVar14 = uVar8;
  do {
    pbVar2 = (byte *)(param_1 + 0x1b) + (ulong)uVar14 + (ulong)uVar14 * 2;
    if (5 < uVar14) {
      pbVar2 = (byte *)(param_1 + 0x1b);
    }
    uVar5 = FUN_02216480(pbVar2,&local_198,local_188);
    if ((uVar5 & 1) == 0) break;
    local_6c = (uint)*pbVar2;
    uVar5 = (ulong)local_6c;
    if (0x22 < local_6c) {
      uVar5 = 0;
    }
    uVar9 = local_188[uVar5];
    if (pbVar2[1] < 0x20) {
      uVar9 = uVar9 & (1 << (ulong)(pbVar2[1] & 0x1f) ^ 0xffffffffU);
      local_188[uVar5] = uVar9;
    }
    uVar9 = uVar9 - (uVar9 >> 1 & 0x55555555);
    uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
    uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
    uVar9 = uVar9 + (uVar9 >> 8);
    if (((uVar9 + (uVar9 >> 0x10) & 0x3f) == 0) && (local_6c < 0x23)) {
      uVar5 = (ulong)(local_6c >> 3) & 0x1ffffffc;
      *(uint *)((long)local_188 + (uVar5 - 0x10)) =
           *(uint *)((long)local_188 + (uVar5 - 0x10)) &
           (1 << (ulong)(local_6c & 0x1f) ^ 0xffffffffU);
    }
    uVar14 = uVar14 + 1;
  } while (uVar4 != uVar14);
LAB_02212bc0:
  local_198 = PTR_DAT_04bb2020 + 0x10;
  pcStack_190 = "IsBuiltAllNpcHouse";
  FUN_02758bb8(&local_198,uVar8 == 0);
  FUN_02211824(param_1);
  return;
}

