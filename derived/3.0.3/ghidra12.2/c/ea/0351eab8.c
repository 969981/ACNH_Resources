
/* WARNING: Removing unreachable block (ram,0x0351ec74) */
/* WARNING: Removing unreachable block (ram,0x0351ebdc) */
/* WARNING: Removing unreachable block (ram,0x0351edbc) */

void FUN_0351eab8(long param_1,short *param_2,byte param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  uint *local_a8;
  int local_a0;
  uint local_9c;
  undefined1 local_98;
  undefined1 local_5d;
  byte local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_4c;
  
  lVar9 = *(long *)(param_1 + 0x210);
  if (*(long *)(lVar9 + 0xa0) != 0) {
    *(byte *)(*(long *)(lVar9 + 0xa0) + 0xbc) =
         (*param_2 != 99 && *(int *)(param_1 + 0x1fc) == 0x45) & (param_3 ^ 1);
    lVar9 = *(long *)(param_1 + 0x210);
  }
  uVar11 = *(uint *)(param_1 + 0x1d078);
  *(undefined4 *)(param_1 + 0x1d078) = 0;
  if ((*(long *)(lVar9 + 0xa0) != 0) && (*(char *)(*(long *)(lVar9 + 0xa0) + 0xbc) != '\0')) {
    *(undefined4 *)(param_1 + 0x1d078) = 2;
  }
  iVar6 = FUN_0313ba90(*(undefined8 *)(param_1 + 0x1d058),*param_2);
  if ((iVar6 == 0) || ((*param_2 != 99 && (*param_2 == *(short *)(param_1 + 0x1c1a8))))) {
    *(uint *)(param_1 + 0x1d078) = *(uint *)(param_1 + 0x1d078) | 1;
  }
  uVar10 = *(uint *)(param_1 + 0x1d078);
  if ((param_4 & 1) != 0) {
    uVar11 = ~uVar10;
  }
  if ((param_3 & 1) == 0) {
    if (uVar10 == uVar11) {
      return;
    }
    if ((uVar10 & 1) == 0) goto LAB_0351eb94;
    bVar5 = (uVar11 & 1) == 0;
    uVar12 = (uint)bVar5;
    bVar4 = bVar5;
    if ((uVar10 >> 1 & 1) != 0) goto LAB_0351ec38;
LAB_0351eba0:
    bVar5 = bVar4;
    uVar11 = uVar11 >> 1 & 1;
    uVar10 = 0;
    if (uVar12 != 0) goto LAB_0351ebac;
LAB_0351ec48:
    if (uVar11 == 0) {
      return;
    }
  }
  else {
    uVar10 = 0;
    uVar11 = 3;
    *(undefined4 *)(param_1 + 0x1d078) = 0xfffffffc;
LAB_0351eb94:
    bVar5 = false;
    uVar12 = uVar11 & 1;
    bVar4 = false;
    if ((uVar10 >> 1 & 1) == 0) goto LAB_0351eba0;
LAB_0351ec38:
    uVar11 = (uint)((uVar11 & 2) == 0);
    uVar10 = uVar11;
    if (uVar12 == 0) goto LAB_0351ec48;
LAB_0351ebac:
    if ((uVar10 == 0 && !bVar5) && (uVar11 != 0)) {
      local_c0 = CONCAT44(local_c0._4_4_,3);
      puVar13 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
      if (((*PTR_DAT_04bc7280 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc7280);
      }
      if (puVar13 == (undefined8 *)0x0) {
        return;
      }
      uVar7 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc7278);
      if ((uVar7 & 1) == 0) {
        return;
      }
      bVar8 = 4;
      goto LAB_0351edf0;
    }
  }
  puVar2 = PTR_DAT_04bc7280;
  puVar1 = PTR_DAT_04bb2230;
  local_c0 = CONCAT44(local_c0._4_4_,3);
  puVar13 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar13 != (undefined8 *)0x0) &&
     (uVar7 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc7278), (uVar7 & 1) != 0)) {
    local_5d = 0;
    local_9c = local_9c & 0xffffff00;
    local_a8 = &local_9c;
    local_a0 = 0x40;
    local_c0 = 0xffffffffffffffff;
    uStack_b8 = 0xffffffffffffffff;
    local_b0 = PTR_DAT_04bb2bc0 + 0x10;
    local_4c = 0xffffffffffffffff;
    local_54 = 0;
    local_50 = 0;
    local_58 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_58) {
      local_58 = 0xff;
    }
    uVar11 = *(uint *)(param_1 + 0x1d078);
    if ((uVar11 & 1) != 0) {
      local_c0 = 0xffffffff00000004;
      local_9c = 0x31303536;
      local_98 = 0;
      FUN_02ee2b00(puVar13,&local_c0,1);
      uVar11 = *(uint *)(param_1 + 0x1d078);
    }
    puVar3 = local_a8;
    if ((((uVar11 >> 1 & 1) != 0) &&
        (lVar9 = *(long *)(*(long *)(param_1 + 0x210) + 0xa0), lVar9 != 0)) &&
       (*(char *)(lVar9 + 0xbc) != '\0')) {
      local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar9 + 0x14));
      if (local_a8 != (uint *)&DAT_0407e22d) {
        iVar6 = 4;
        if (local_a0 < 5) {
          iVar6 = local_a0 + -1;
        }
        memcpy(local_a8,&DAT_0407e22d,(long)iVar6);
        *(undefined1 *)((long)puVar3 + (long)iVar6) = 0;
      }
      FUN_02ee2b00(puVar13,&local_c0,1);
    }
  }
  local_c0 = CONCAT44(local_c0._4_4_,3);
  puVar13 = *(undefined8 **)(*(long *)puVar1 + 0x58);
  if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar6 != 0)) {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if (puVar13 == (undefined8 *)0x0) {
    return;
  }
  uVar7 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc7278);
  if ((uVar7 & 1) == 0) {
    return;
  }
  bVar8 = 1;
LAB_0351edf0:
  *(byte *)((long)puVar13 + 0x239) = *(byte *)((long)puVar13 + 0x239) | bVar8;
  return;
}

