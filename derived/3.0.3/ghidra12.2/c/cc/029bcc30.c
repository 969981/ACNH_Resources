
void FUN_029bcc30(undefined4 param_1,long param_2,undefined1 *param_3,ulong param_4,ulong param_5,
                 undefined4 param_6,undefined4 param_7,ulong param_8,ulong param_9)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined2 uStack_1ba;
  uint uStack_1b4;
  int local_1a8;
  ulong local_1a0;
  undefined *local_190;
  undefined1 *local_188;
  int local_180;
  undefined1 local_17c [127];
  undefined1 local_fd;
  uint local_f8;
  undefined4 uStack_f4;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  undefined2 uStack_ec;
  undefined1 local_ea;
  undefined1 uStack_e9;
  undefined4 local_e8;
  undefined *local_e0;
  undefined *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  undefined4 local_c0;
  ulong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong uStack_80;
  
  piVar1 = (int *)(param_2 + 0x5d00);
  nn::os::LockMutex((MutexType *)(param_2 + 0x5bd48));
  puVar13 = local_17c;
  local_1a8 = 0;
  local_180 = 0x80;
  local_fd = 0;
  local_1a0 = 0;
  local_190 = PTR_DAT_04bb2d88 + 0x10;
  local_17c[0] = 0;
  local_f8 = local_f8 & 0xffffff00;
  local_ea = 0;
  uStack_f4 = 0;
  uStack_f0 = 0x100;
  uStack_ee = 0;
  uStack_ec = 0xff00;
  local_e0 = PTR_DAT_04bb2020 + 0x10;
  local_e8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_d8 = PTR_DAT_04bb2120;
  local_b0 = 0x3f800000;
  local_98 = 0xffffffffffffffff;
  local_90 = 0;
  bVar5 = param_3[8];
  if (0 < *(int *)(param_3 + 0x38)) {
    if (*(ulong *)(param_3 + 0x40) != 0) {
      local_1a8 = *(int *)(param_3 + 0x38);
      local_1a0 = *(ulong *)(param_3 + 0x40);
    }
  }
  plVar11 = (long *)(param_3 + 0x18);
  iVar4 = *(int *)(param_3 + 0x10);
  local_188 = puVar13;
  (**(code **)(*plVar11 + 0x18))(plVar11);
  puVar9 = *(undefined1 **)(param_3 + 0x20);
  if (puVar13 != puVar9) {
    (**(code **)(*(long *)(param_3 + 0x18) + 0x18))(plVar11);
    puVar12 = *(undefined1 **)(param_3 + 0x20);
    lVar7 = 0;
    do {
      if (puVar12[lVar7] == '\0') goto LAB_029bce04;
      if (puVar12[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_029bce04;
      }
      if (puVar12[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_029bce04;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_029bce04:
    iVar3 = (int)lVar7;
    if (local_180 <= (int)lVar7) {
      iVar3 = local_180 + -1;
    }
    memcpy(puVar13,puVar9,(long)iVar3);
    puVar13[iVar3] = 0;
    puVar13 = puVar12;
  }
  local_f8 = CONCAT31(local_f8._1_3_,*param_3);
  uStack_f4 = *(undefined4 *)(param_3 + 4);
  uStack_f0 = *(undefined2 *)(param_3 + 8);
  uStack_ee = (undefined2)*(undefined4 *)(param_3 + 10);
  uStack_ec = (undefined2)((uint)*(undefined4 *)(param_3 + 10) >> 0x10);
  local_ea = param_3[0xe];
  local_e8 = *(undefined4 *)(param_3 + 0x10);
  local_d0 = *(ulong *)(param_3 + 0x28);
  local_98 = CONCAT44(param_7,param_6);
  local_d8 = puVar13;
  local_b0 = param_1;
  local_a8 = param_4;
  local_a0 = param_5;
  local_90 = param_8;
  local_88 = param_9;
  if (*piVar1 < *(int *)(param_2 + 0x5d18)) {
    puVar10 = *(ulong **)(param_2 + 0x5d08);
    puVar2 = (ulong *)(param_2 + 0x5cf0);
    if (puVar10 != (ulong *)0x0) {
      *(ulong *)(param_2 + 0x5d08) = *puVar10;
    }
    puVar13 = (undefined1 *)((long)puVar10 + 0x44);
    puVar10[7] = (ulong)puVar13;
    puVar10[1] = (ulong)uStack_1b4 << 0x20;
    puVar10[2] = 0;
    *puVar10 = CONCAT26(uStack_1ba,(uint6)CONCAT12(1,CONCAT11(iVar4 - 0x10cU < 0x69,bVar5 >> 1))) &
               0xffffffffffffff01;
    *(undefined4 *)(puVar10 + 8) = 0x80;
    *(int *)(puVar10 + 3) = local_1a8;
    puVar10[4] = local_1a0;
    puVar6 = PTR_DAT_04bb2e90;
    *(undefined1 *)((long)puVar10 + 0xc3) = 0;
    puVar10[5] = 0;
    puVar10[6] = (ulong)(puVar6 + 0x10);
    (**(code **)(local_190 + 0x18))(&local_190);
    puVar9 = local_188;
    if (puVar13 != local_188) {
      (**(code **)(local_190 + 0x18))(&local_190);
      lVar7 = 0;
      do {
        if (local_188[lVar7] == '\0') goto LAB_029bcf90;
        if (local_188[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_029bcf90;
        }
        if (local_188[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_029bcf90;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_029bcf90:
      iVar4 = (int)lVar7;
      if ((int)puVar10[8] <= (int)lVar7) {
        iVar4 = (int)puVar10[8] + -1;
      }
      memcpy(puVar13,puVar9,(long)iVar4);
      puVar13[iVar4] = 0;
    }
    puVar10[6] = (ulong)(PTR_DAT_04bb2d88 + 0x10);
    *(undefined4 *)(puVar10 + 0x1b) = local_e8;
    puVar10[0x19] = CONCAT44(uStack_f4,local_f8);
    puVar10[0x1a] =
         CONCAT17(uStack_e9,CONCAT16(local_ea,CONCAT24(uStack_ec,CONCAT22(uStack_ee,uStack_f0))));
    puVar6 = PTR_DAT_04bb2020;
    puVar10[0x29] = 0;
    puVar10[0x2a] = 0;
    puVar10[0x1c] = (ulong)(puVar6 + 0x10);
    puVar10[0x1d] = (ulong)local_d8;
    puVar10[0x1e] = local_d0;
    puVar10[0x1f] = uStack_c8;
    *(undefined4 *)(puVar10 + 0x20) = local_c0;
    puVar10[0x21] = local_b8;
    puVar10[0x23] = local_a8;
    puVar10[0x24] = local_a0;
    puVar10[0x22] = CONCAT44(uStack_ac,local_b0);
    puVar10[0x27] = local_88;
    puVar10[0x28] = uStack_80;
    puVar10[0x25] = local_98;
    puVar10[0x26] = local_90;
    uVar8 = *puVar2;
    *puVar2 = (ulong)(puVar10 + 0x29);
    puVar10[0x29] = uVar8;
    puVar10[0x2a] = (ulong)puVar2;
    if (uVar8 != 0) {
      *(ulong **)(uVar8 + 8) = puVar10 + 0x29;
    }
    *piVar1 = *piVar1 + 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x5bd48));
  return;
}

