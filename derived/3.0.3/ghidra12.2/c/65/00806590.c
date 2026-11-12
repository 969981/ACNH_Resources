
bool FUN_00806590(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined4 local_2d98 [1448];
  undefined **local_16f8;
  undefined4 local_16f0;
  undefined4 local_16ec;
  uint *local_16e8;
  undefined1 auStack_16e0 [5792];
  undefined1 auStack_28 [2];
  undefined1 auStack_26 [2];
  uint local_24;
  
  FUN_007ef010(auStack_26,param_1);
  FUN_007e4920(auStack_16e0,auStack_26);
  uVar6 = FUN_007e4bb0(auStack_16e0);
  puVar2 = PTR_DAT_04bb43c0;
  if ((uVar6 & 1) == 0) {
    return false;
  }
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    return false;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar3) {
    return false;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return false;
  }
  local_16e8 = (uint *)0x0;
  local_16f0 = *param_2;
  local_16ec = param_2[1];
  local_16f8 = &PTR_FUN_04a36b50;
  uVar3 = FUN_0277d6c4(&local_16f0);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar7 != (uint *)0x0)) {
        local_24 = 0;
        uVar3 = *puVar7;
        local_16e8 = puVar7;
        if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
          local_24 = 0;
          if (*puVar8 != 0) {
            uVar3 = puVar8[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
                }
                if (*puVar8 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (local_24 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   local_24 < 0xbd)) goto LAB_00806770;
              }
            }
            local_24 = 0;
          }
        }
        goto LAB_00806770;
      }
    }
  }
  local_24 = 0xbc;
LAB_00806770:
  local_2d98[0] = 0xac;
  if (local_24 == 0xac) {
    FUN_01b086f4(auStack_28,&local_16f8);
    FUN_007e4920(local_2d98,auStack_28);
    iVar4 = FUN_007e68d0(local_2d98);
    local_24 = iVar4;
    iVar5 = FUN_007e68d0(auStack_16e0);
    return iVar4 != iVar5;
  }
  return false;
}

