
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03827420(long param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  long *plVar5;
  int iVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  float fVar11;
  float __x;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  long *local_e0;
  long local_d8;
  long *local_d0;
  ulong local_c8;
  long *plStack_c0;
  ulong local_b8;
  long *plStack_b0;
  long *local_a8;
  ulong local_a0;
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  ulong uStack_80;
  long *local_78;
  float local_6c;
  float local_68;
  float local_64;
  undefined *local_60;
  int local_58;
  int iStack_54;
  
  if (*param_2 == '\0') {
    return;
  }
  lVar9 = *(long *)(param_2 + 8);
  local_60 = PTR_DAT_04bb2010 + 0x10;
  if (*(char *)(lVar9 + 8) == '\0') {
    local_58 = 0;
    iStack_54 = 0;
  }
  else {
    plVar5 = *(long **)(lVar9 + 0x58);
    if (*(int *)(lVar9 + 0x68) < 1) {
      iVar6 = *(int *)(lVar9 + 0x60);
    }
    else {
      iVar6 = *(int *)(lVar9 + 0x60);
      iVar1 = 0;
      if (iVar6 <= *(int *)(lVar9 + 100)) {
        iVar1 = iVar6;
      }
      plVar5 = plVar5 + (*(int *)(lVar9 + 100) - iVar1);
    }
    iVar1 = *(int *)(*plVar5 + 0x28);
    if (0 < iVar1) {
      iVar1 = iVar1 + -1;
    }
    if (0 < iVar6) {
      iVar6 = iVar6 + -1;
    }
    local_58 = *(int *)(lVar9 + 0xc) + (iVar1 >> 1);
    iStack_54 = *(int *)(lVar9 + 0x10) + (iVar6 >> 1);
  }
  if (*(int *)(param_1 + 8) == 0) {
    bVar4 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xbf800000;
    goto LAB_0382772c;
  }
  plVar5 = (long *)(lVar9 + 0x58);
  puVar7 = (ulong *)*plVar5;
  uStack_80 = (ulong)*(uint *)(lVar9 + 0x68);
  local_68 = 0.0;
  local_6c = (float)local_58 * 5.0 + 2.5;
  local_64 = (float)iStack_54 * 5.0 + 2.5;
  if (0 < (int)*(uint *)(lVar9 + 0x68)) {
    iVar6 = 0;
    if (*(int *)(lVar9 + 0x60) <= *(int *)(lVar9 + 100)) {
      iVar6 = *(int *)(lVar9 + 0x60);
    }
    puVar7 = puVar7 + (*(int *)(lVar9 + 100) - iVar6);
  }
  local_a0 = *puVar7;
  local_98 = (long *)(*(long *)(local_a0 + 8) + -8);
  uStack_90 = 0;
  local_a8 = plVar5;
  local_88 = plVar5;
  local_78 = plVar5;
  FUN_02a03e40(&local_a8);
  uVar2 = *(uint *)(lVar9 + 0x68);
  local_c8 = (ulong)uVar2;
  plVar8 = *(long **)(lVar9 + 0x58);
  if (0 < (int)uVar2) {
    iVar1 = uVar2 + *(int *)(lVar9 + 100) + -1;
    iVar6 = 0;
    if (*(int *)(lVar9 + 0x60) <= iVar1) {
      iVar6 = *(int *)(lVar9 + 0x60);
    }
    plVar8 = plVar8 + (iVar1 - iVar6);
  }
  local_d8 = *plVar8;
  local_d0 = (long *)(local_d8 + -8);
  local_e0 = plVar5;
  plStack_c0 = plVar5;
  local_b8 = local_c8;
  plStack_b0 = plVar5;
  FUN_02a03e40(&local_e0);
  puVar3 = PTR_DAT_04bb26a8;
  if (local_98 == local_d0) {
LAB_0382767c:
    fVar11 = -1.0;
  }
  else {
    __x = 3.4028235e+38;
    bVar10 = false;
    do {
      lVar9 = *local_98;
      if (*(char *)(lVar9 + 0x1c) == '\0') {
        local_e4 = 0.0;
        local_f4 = *(undefined4 *)(lVar9 + 0x18);
        local_ec = 0;
        bVar10 = true;
        local_f8 = (float)(int)*(short *)(lVar9 + 8) * 5.0 + 2.5;
        local_f0 = (float)(int)*(short *)(lVar9 + 10) * 5.0 + 2.5;
        FUN_02a1e144(*(undefined8 *)(*(long *)puVar3 + 0xb4510),&local_ec,&local_f8,&local_6c,1);
        fVar11 = (local_68 - local_ec._4_4_) * (local_68 - local_ec._4_4_) +
                 (local_6c - (float)local_ec) * (local_6c - (float)local_ec) +
                 (local_64 - local_e4) * (local_64 - local_e4);
        if (fVar11 <= __x) {
          __x = fVar11;
        }
      }
      local_98 = (long *)(local_98[2] + -8);
      FUN_02a03e40(&local_a8);
    } while (local_98 != local_d0);
    if (!bVar10) goto LAB_0382767c;
    fVar11 = SQRT(__x);
    if (NAN(fVar11)) {
      fVar11 = sqrtf(__x);
    }
    fVar11 = fVar11 / 10.0;
  }
  *(float *)(param_1 + 0x14) = fVar11;
  if (*(int *)(param_1 + 8) != 0) {
    local_a0 = local_a0 & 0xffffffff00000000;
    local_a8 = (long *)0x0;
    local_e0 = (long *)CONCAT44(local_e0._4_4_,4);
    local_a8 = (long *)0x10;
    if ((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0x90) != 0)) {
      bVar4 = FUN_0094b728(DAT_04cfae30 + 0x28,&local_60,&local_a8);
      goto LAB_0382772c;
    }
  }
  bVar4 = 0;
LAB_0382772c:
  *(byte *)(param_1 + 0x18) = bVar4 & 1;
  return;
}

