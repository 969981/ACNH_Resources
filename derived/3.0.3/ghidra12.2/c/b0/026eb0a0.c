
void FUN_026eb0a0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  ushort uVar7;
  uint *puVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined4 local_50;
  uint uStack_4c;
  uint *local_48;
  
  puVar6 = (undefined4 *)FUN_026e85f0();
  puVar3 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar11 = *(long *)puVar3;
  if (lVar11 == 0) {
    return;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar4) {
    return;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return;
  }
  local_48 = (uint *)0x0;
  local_50 = *puVar6;
  uStack_4c = puVar6[1];
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 == 0) {
LAB_026eb240:
    uVar7 = 0xbc;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_026eb240;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(puVar6);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (puVar8 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8), puVar8 == (uint *)0x0
       )) goto LAB_026eb240;
    uVar7 = 0;
    uVar4 = *puVar8;
    local_48 = puVar8;
    if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      uVar7 = 0;
      if (*puVar10 != 0) {
        uVar4 = puVar10[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar4);
            }
            if (*puVar10 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar7 < 0xbd))
            goto LAB_026eb248;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_026eb248:
  if (uVar7 != 0xac) {
    return;
  }
  if (((DAT_04c8c100 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar9 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar9 * 4) == 0x18) goto LAB_026eb2ac;
      uVar9 = uVar9 + 1;
    } while (DAT_04c8c0f0 != uVar9);
  }
  uVar9 = 0;
LAB_026eb2ac:
  uVar4 = (uint)uVar9;
  if (((DAT_04c8c100 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (DAT_04c8c0f0 <= uVar4) {
    uVar4 = 0;
  }
  if (local_48 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar1 = *local_48;
    uVar7 = 0;
    if ((uVar1 != 0) && (local_48 != (uint *)(ulong)uVar1)) {
      puVar8 = (uint *)((long)local_48 - (long)(ulong)uVar1);
      uVar7 = 0;
      if (*puVar8 != 0) {
        uVar1 = puVar8[1];
        if ((uVar1 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar8 + lVar11 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar1 != 0) {
              uVar2 = (uint)((ulong)((long)local_48 - lVar11) / (ulong)uVar1);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
            goto LAB_026eb36c;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_026eb36c:
  uVar4 = uStack_4c & 0xffff0000 | (*(uint *)(DAT_04c8c0f8 + (long)(int)uVar4 * 4) & 0x1f) << 0xb;
  if (uVar7 != 0xac) {
    uVar4 = uStack_4c;
  }
  *param_1 = local_50;
  param_1[1] = uVar4;
  FUN_027c1b80(param_1 + 2);
  return;
}

