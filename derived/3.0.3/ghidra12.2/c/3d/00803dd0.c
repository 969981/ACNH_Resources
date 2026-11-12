
bool FUN_00803dd0(ushort *param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_1712 [2];
  undefined4 local_1710 [1448];
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  uint local_54;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    return false;
  }
  lVar6 = *(long *)(lVar6 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
  if (*(uint *)(lVar6 + 0x1d8) <= uVar3) {
    return false;
  }
  if (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return false;
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  local_60 = 0;
  local_70 = PTR_DAT_04bc0510 + 0x10;
  uVar3 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (puVar4 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar4 != (uint *)0x0)) {
        local_54 = 0;
        uVar3 = *puVar4;
        if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
          puVar5 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
          local_54 = 0;
          if (*puVar5 != 0) {
            uVar3 = puVar5[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
              lVar6 = 0xc;
              if (*(char *)((long)puVar5 + 10) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
              if (lVar6 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar4 - lVar6) / (ulong)uVar3);
                }
                if (*puVar5 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (local_54 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   local_54 < 0xbd)) goto LAB_00803f88;
              }
            }
            local_54 = 0;
          }
        }
        goto LAB_00803f88;
      }
    }
  }
  local_54 = 0xbc;
LAB_00803f88:
  local_1710[0] = 0xac;
  if (local_54 == 0xac) {
    FUN_007ef010(auStack_1712,param_3);
    FUN_007e4920(local_1710,auStack_1712);
    FUN_007e8e30(&local_54,local_1710);
    return (local_54 & 0xffff) == (uint)*param_1;
  }
  return false;
}

