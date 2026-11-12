
bool FUN_00804000(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

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
  undefined1 auStack_2daa [2];
  undefined4 local_2da8 [1448];
  undefined **local_1708;
  undefined4 local_1700;
  undefined4 local_16fc;
  undefined8 local_16f8;
  undefined1 auStack_16ea [2];
  undefined1 auStack_16e8 [5796];
  uint local_44;
  
  FUN_007ef010(auStack_16ea,param_1);
  FUN_007e4920(auStack_16e8,auStack_16ea);
  uVar6 = FUN_007e4bb0(auStack_16e8);
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
  local_16f8 = 0;
  local_1700 = *param_2;
  local_16fc = param_2[1];
  local_1708 = &PTR_FUN_04a36b50;
  uVar3 = FUN_0277d6c4(&local_1700);
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
        local_44 = 0;
        uVar3 = *puVar7;
        if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
          local_44 = 0;
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
                   (local_44 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   local_44 < 0xbd)) goto LAB_008041e8;
              }
            }
            local_44 = 0;
          }
        }
        goto LAB_008041e8;
      }
    }
  }
  local_44 = 0xbc;
LAB_008041e8:
  local_2da8[0] = 0xac;
  if (local_44 == 0xac) {
    FUN_007ef010(auStack_2daa,param_3);
    FUN_007e4920(local_2da8,auStack_2daa);
    iVar4 = FUN_007e68d0(local_2da8);
    local_44 = iVar4;
    iVar5 = FUN_007e68d0(auStack_16e8);
    return iVar4 != iVar5;
  }
  return false;
}

