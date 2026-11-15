
undefined4 FUN_020dcf1c(undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_1702 [2];
  uint local_1700 [2];
  long local_16f8;
  long local_16f0;
  short local_5c [2];
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
    return 0;
  }
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar3) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0;
  }
  local_50 = *param_1;
  uStack_4c = param_1[1];
  local_48 = (uint *)0x0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  uVar3 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 == 0) {
LAB_020dd0b8:
    local_1700[0] = 0xbc;
  }
  else {
    lVar9 = *(long *)(lVar10 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_020dd0b8;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_1);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8), puVar7 == (uint *)0x0)
       ) goto LAB_020dd0b8;
    uVar3 = *puVar7;
    local_1700[0] = 0;
    local_48 = puVar7;
    if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
      local_1700[0] = 0;
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
               (local_1700[0] = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
               local_1700[0] < 0xbd)) goto LAB_020dd0bc;
          }
        }
        local_1700[0] = 0;
      }
    }
  }
LAB_020dd0bc:
  if ((local_1700[0] != 0xac) || (FUN_01b086f4(local_5c,&local_58), local_5c[0] == DAT_04cb6038)) {
    return 0;
  }
  FUN_007ef010(auStack_1702,local_5c);
  FUN_007e4920(local_1700,auStack_1702);
  uVar5 = FUN_007e85b0(local_1700);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  uVar5 = FUN_007ef180(local_5c);
  if ((uVar5 & 1) == 0) {
    if (local_16f8 == 0) {
      return 0;
    }
    lVar9 = local_16f8;
    if (*(long **)(local_16f8 + 0x28) != (long *)0x0) {
      puVar6 = (undefined8 *)**(long **)(local_16f8 + 0x28);
      goto joined_r0x020dd174;
    }
  }
  else {
    if (local_16f0 == 0) {
      return 0;
    }
    lVar9 = local_16f0;
    if (*(long **)(local_16f0 + 0x28) != (long *)0x0) {
      puVar6 = (undefined8 *)**(long **)(local_16f0 + 0x28);
joined_r0x020dd174:
      if (puVar6 != (undefined8 *)0x0) {
        uVar3 = (**(code **)*puVar6)();
        uVar3 = uVar3 ^ 1;
        goto LAB_020dd190;
      }
    }
  }
  uVar3 = 1;
LAB_020dd190:
  uVar4 = FUN_020deee8(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 8,param_2);
  if ((uVar3 & 1) != 0) {
    return uVar4;
  }
  if (*(long *)(lVar9 + 0x28) == 0) {
    return uVar4;
  }
  puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8);
  if (puVar6 == (undefined8 *)0x0) {
    return uVar4;
  }
  (**(code **)*puVar6)();
  return uVar4;
}

