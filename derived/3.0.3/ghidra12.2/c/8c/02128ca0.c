
void FUN_02128ca0(ushort *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ushort uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_2db4 [2];
  undefined1 auStack_2db2 [2];
  uint local_2db0;
  ushort local_2dac;
  undefined1 auStack_2daa [2];
  undefined4 local_2da8 [1449];
  undefined1 auStack_1704 [2];
  undefined1 auStack_1702 [2];
  undefined4 local_1700 [1448];
  uint local_60;
  ushort local_5c [2];
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar11 = *(long *)puVar2;
  if (lVar11 == 0) {
    return;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar3) {
    return;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return;
  }
  local_50 = *param_2;
  uStack_4c = param_2[1];
  local_48 = (uint *)0x0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  uVar3 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 == 0) {
    return;
  }
  lVar10 = *(long *)(lVar11 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar3) {
    return;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bc0428;
  uVar3 = FUN_0277d6c4(param_2);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar3) {
    return;
  }
  local_48 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8);
  if (local_48 == (uint *)0x0) {
    return;
  }
  uVar8 = 0;
  uVar3 = *local_48;
  if ((uVar3 != 0) && (local_48 != (uint *)(ulong)uVar3)) {
    puVar9 = (uint *)((long)local_48 - (long)(ulong)uVar3);
    uVar8 = 0;
    if (*puVar9 != 0) {
      uVar3 = puVar9[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar10 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)local_48 - lVar10) / (ulong)uVar3);
          }
          if (*puVar9 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ec0) &&
             (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar8 < 0xbd))
          goto LAB_02128e44;
        }
      }
      uVar8 = 0;
    }
  }
LAB_02128e44:
  if (uVar8 != 0xac) {
    return;
  }
  uVar3 = *local_48;
  local_2da8[0] = 0xac;
  if ((uVar3 != 0) && (local_48 != (uint *)(ulong)uVar3)) {
    puVar9 = (uint *)((long)local_48 - (long)(ulong)uVar3);
    if ((*puVar9 != 0) && ((uVar3 = puVar9[1], uVar3 != 0 && ((ulong)(ushort)puVar9[2] != 0)))) {
      lVar10 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar10 != 0) {
        uVar1 = 0;
        if ((ulong)uVar3 != 0) {
          uVar1 = (uint)((ulong)((long)local_48 - lVar10) / (ulong)uVar3);
        }
        if (*puVar9 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < DAT_05326ec0) && (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) == 0xaf)) {
          return;
        }
      }
    }
  }
  local_1700[0] = 0xac;
  FUN_01b086f4(local_5c,&local_58);
  if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar7 = 0;
    do {
      if (*(uint *)(DAT_04c8c0f8 + uVar7 * 4) == (uint)(local_5c[0] >> 0xb)) goto LAB_02128f5c;
      uVar7 = uVar7 + 1;
    } while (DAT_04c8c0f0 != uVar7);
  }
  uVar7 = 0;
LAB_02128f5c:
  local_60 = (uint)uVar7;
  FUN_007ef010(auStack_1702,param_1);
  FUN_007e4920(local_1700,auStack_1702);
  if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar3 = local_60;
  if (DAT_04c8c0f0 <= local_60) {
    uVar3 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar3 * 4) != 0) {
    if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar3 = local_60;
    if (DAT_04c8c0f0 <= local_60) {
      uVar3 = 0;
    }
    if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar3 * 4) != 1) {
      FUN_01b086f4(auStack_2daa,&local_58);
      FUN_007e4920(local_2da8,auStack_2daa);
      FUN_007e8e30(&local_2dac,local_2da8);
      if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      if (0 < (int)DAT_04c8c0f0) {
        uVar7 = 0;
        do {
          if (*(uint *)(DAT_04c8c0f8 + uVar7 * 4) == (uint)(local_2dac >> 0xb)) goto LAB_0212905c;
          uVar7 = uVar7 + 1;
        } while (DAT_04c8c0f0 != uVar7);
      }
      uVar7 = 0;
LAB_0212905c:
      local_2db0 = (uint)uVar7;
      if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      uVar3 = local_2db0;
      if (DAT_04c8c0f0 <= local_2db0) {
        uVar3 = 0;
      }
      if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar3 * 4) == 0) {
LAB_021290ac:
        puVar6 = auStack_2db2;
        puVar5 = auStack_2db2;
        param_1 = &local_2dac;
      }
      else {
        if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
        }
        uVar3 = local_2db0;
        if (DAT_04c8c0f0 <= local_2db0) {
          uVar3 = 0;
        }
        if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar3 * 4) == 1) goto LAB_021290ac;
        puVar6 = auStack_2db4;
        puVar5 = auStack_2db4;
      }
      FUN_007ef010(puVar5,param_1);
      goto LAB_021290d8;
    }
  }
  FUN_007ef010(auStack_1704,local_5c);
  puVar6 = auStack_1704;
LAB_021290d8:
  FUN_007e90a0(local_1700,puVar6);
  return;
}

