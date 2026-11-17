
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02cdf164(long param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if (((DAT_0566cb80 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0566cb80), iVar4 != 0)) {
    _DAT_0566cb58 = 0x500000004;
    DAT_0566cb60 = 3;
    DAT_0566cb68 = 0x200000001;
    DAT_0566cb70 = 0x700000006;
    DAT_0566cb78 = 0x900000008;
    __cxa_guard_release(&DAT_0566cb80);
  }
  puVar2 = PTR_DAT_04bb43c0;
  lVar5 = param_1 + 8;
  puVar1 = (undefined4 *)(param_1 + 0x58);
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  lVar7 = lVar5 + (_DAT_0566cb58 & 0xffffffff) * 8;
  if (9 < DAT_0566cb58) {
    lVar7 = lVar5;
  }
  uVar3 = FUN_0277d6c4(lVar7);
  lVar7 = *(long *)puVar2;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uVar6 = 1;
      *puVar1 = DAT_0566cb58;
      goto LAB_02cdf204;
    }
  }
  uVar6 = 0;
LAB_02cdf204:
  lVar8 = lVar5 + (ulong)_DAT_0566cb5c * 8;
  if (9 < _DAT_0566cb5c) {
    lVar8 = lVar5;
  }
  uVar3 = FUN_0277d6c4(lVar8);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      puVar1[uVar6] = _DAT_0566cb5c;
      uVar6 = (ulong)((int)uVar6 + 1);
    }
  }
  lVar7 = lVar5 + (DAT_0566cb60 & 0xffffffff) * 8;
  if (9 < (uint)DAT_0566cb60) {
    lVar7 = lVar5;
  }
  uVar3 = FUN_0277d6c4(lVar7);
  lVar7 = *(long *)puVar2;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      puVar1[uVar6] = (uint)DAT_0566cb60;
      uVar6 = (ulong)((int)uVar6 + 1);
    }
  }
  lVar8 = lVar5 + (ulong)DAT_0566cb60._4_4_ * 8;
  if (9 < DAT_0566cb60._4_4_) {
    lVar8 = lVar5;
  }
  uVar3 = FUN_0277d6c4(lVar8);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      puVar1[uVar6] = DAT_0566cb60._4_4_;
      uVar6 = (ulong)((int)uVar6 + 1);
    }
  }
  lVar7 = lVar5 + (DAT_0566cb68 & 0xffffffff) * 8;
  if (9 < (uint)DAT_0566cb68) {
    lVar7 = lVar5;
  }
  uVar3 = FUN_0277d6c4(lVar7);
  lVar7 = *(long *)puVar2;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      puVar1[uVar6] = (uint)DAT_0566cb68;
      uVar6 = (ulong)((int)uVar6 + 1);
    }
  }
  lVar8 = lVar5 + (ulong)DAT_0566cb68._4_4_ * 8;
  if (9 < DAT_0566cb68._4_4_) {
    lVar8 = lVar5;
  }
  uVar3 = FUN_0277d6c4(lVar8);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      puVar1[uVar6] = DAT_0566cb68._4_4_;
      uVar6 = (ulong)((int)uVar6 + 1);
    }
  }
  lVar7 = lVar5 + (DAT_0566cb70 & 0xffffffff) * 8;
  if (9 < (uint)DAT_0566cb70) {
    lVar7 = lVar5;
  }
  uVar3 = FUN_0277d6c4(lVar7);
  lVar7 = *(long *)puVar2;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      puVar1[uVar6] = (uint)DAT_0566cb70;
      uVar6 = (ulong)((int)uVar6 + 1);
    }
  }
  lVar8 = lVar5 + (ulong)DAT_0566cb70._4_4_ * 8;
  if (9 < DAT_0566cb70._4_4_) {
    lVar8 = lVar5;
  }
  uVar3 = FUN_0277d6c4(lVar8);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      puVar1[uVar6] = DAT_0566cb70._4_4_;
      uVar6 = (ulong)((int)uVar6 + 1);
    }
  }
  lVar7 = lVar5 + (DAT_0566cb78 & 0xffffffff) * 8;
  if (9 < (uint)DAT_0566cb78) {
    lVar7 = lVar5;
  }
  uVar3 = FUN_0277d6c4(lVar7);
  lVar7 = *(long *)puVar2;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      puVar1[uVar6] = (uint)DAT_0566cb78;
      uVar6 = (ulong)((int)uVar6 + 1);
    }
  }
  lVar8 = lVar5 + (ulong)DAT_0566cb78._4_4_ * 8;
  if (9 < DAT_0566cb78._4_4_) {
    lVar8 = lVar5;
  }
  uVar3 = FUN_0277d6c4(lVar8);
  if (*(long *)puVar2 != 0) {
    lVar5 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      puVar1[uVar6] = DAT_0566cb78._4_4_;
    }
  }
  return;
}

