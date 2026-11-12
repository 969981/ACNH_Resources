
bool FUN_00805f80(ushort *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_1702 [2];
  undefined4 local_1700 [1448];
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint *local_50;
  uint local_44;
  
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
  local_58 = *param_2;
  uStack_54 = param_2[1];
  local_50 = (uint *)0x0;
  local_60 = PTR_DAT_04bc0510 + 0x10;
  uVar3 = FUN_0277d6c4(&local_58);
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
        local_44 = 0;
        uVar3 = *puVar4;
        local_50 = puVar4;
        if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
          puVar5 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
          local_44 = 0;
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
                   (local_44 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   local_44 < 0xbd)) goto LAB_00806134;
              }
            }
            local_44 = 0;
          }
        }
        goto LAB_00806134;
      }
    }
  }
  local_44 = 0xbc;
LAB_00806134:
  local_1700[0] = 0xac;
  if (local_44 == 0xac) {
    FUN_01b086f4(auStack_1702,&local_60);
    FUN_007e4920(local_1700,auStack_1702);
    FUN_007e8e30(&local_44,local_1700);
    return (local_44 & 0xffff) == (uint)*param_1;
  }
  return false;
}

