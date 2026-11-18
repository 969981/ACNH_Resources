
undefined8 FUN_03691bb4(undefined4 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_1702 [2];
  undefined4 local_1700 [1448];
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint *local_50;
  uint local_44;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
    return 0;
  }
  lVar7 = *(long *)(lVar7 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar3) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0;
  }
  local_58 = *param_1;
  uStack_54 = param_1[1];
  local_50 = (uint *)0x0;
  local_60 = PTR_DAT_04bc0510 + 0x10;
  uVar3 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_1);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (puVar5 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar5 != (uint *)0x0)) {
        local_44 = 0;
        uVar3 = *puVar5;
        local_50 = puVar5;
        if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
          puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
          local_44 = 0;
          if (*puVar6 != 0) {
            uVar3 = puVar6[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
              lVar7 = 0xc;
              if (*(char *)((long)puVar6 + 10) != '\0') {
                lVar7 = 0x1c;
              }
              lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
              if (lVar7 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar3);
                }
                if (*puVar6 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (local_44 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   local_44 < 0xbd)) goto LAB_03691d60;
              }
            }
            local_44 = 0;
          }
        }
        goto LAB_03691d60;
      }
    }
  }
  local_44 = 0xbc;
LAB_03691d60:
  local_1700[0] = 0xac;
  if (local_44 == 0xac) {
    FUN_01b086f4(auStack_1702,&local_60);
    FUN_007e4920(local_1700,auStack_1702);
    uVar4 = FUN_007e4bb0(local_1700);
    if (((uVar4 & 1) != 0) && (uVar4 = FUN_007e85b0(local_1700), (uVar4 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}

