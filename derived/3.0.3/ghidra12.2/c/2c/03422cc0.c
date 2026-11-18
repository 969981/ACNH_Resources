
bool FUN_03422cc0(undefined4 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
    return false;
  }
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar4) {
    return false;
  }
  if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return false;
  }
  uVar4 = FUN_0277d6c4(param_1);
  puVar3 = PTR_DAT_04bc0510;
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) goto LAB_03422eb8;
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if ((*(uint *)(lVar10 + 0x1d8) <= uVar4) ||
     (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_03422eb8;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_48 = 0;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 == 0) {
LAB_03422e94:
    uVar6 = 0xbc;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_03422e94;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_1);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
       (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8), puVar7 == (uint *)0x0)
       ) goto LAB_03422e94;
    uVar6 = 0;
    uVar4 = *puVar7;
    if ((uVar4 != 0) && (puVar7 != (uint *)(ulong)uVar4)) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
      uVar6 = 0;
      if (*puVar8 != 0) {
        uVar4 = puVar8[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_03422ea0;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_03422ea0:
  if (uVar6 == 0x61) {
    return false;
  }
  lVar9 = *(long *)puVar2;
LAB_03422eb8:
  local_58 = puVar3 + 0x10;
  local_48 = 0;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8), lVar9 != 0)) {
        local_48 = lVar9;
      }
    }
  }
  iVar5 = FUN_0277d6c4(&local_50);
  if ((iVar5 - 0x305U < 7) && ((0x7dU >> (ulong)(iVar5 - 0x305U & 0x1f) & 1) != 0)) {
    return false;
  }
  iVar5 = FUN_01ad7260(&local_58);
  if (iVar5 == 0) {
    iVar5 = FUN_01afcfa0(&local_58);
    return iVar5 != 0;
  }
  return true;
}

