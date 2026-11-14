
undefined8 FUN_014ecf14(long param_1,undefined8 param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  lVar9 = DAT_05150358;
  local_48 = *(undefined4 *)(param_1 + 0x60);
  uStack_44 = *(undefined4 *)(param_1 + 100);
  if ((((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
        (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
       ((*(long *)(DAT_05150358 + 0x488) != 0 &&
        (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
      (*(long *)(DAT_05150358 + 0x2b0) != 0)) &&
     (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)) {
    uVar4 = FUN_0277d6c4(&local_48);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      FUN_0124c030(&local_60,&local_48);
      iVar5 = FUN_0123db50(&local_58,local_50);
      if (iVar5 == 0x22) {
        local_68 = local_48;
        uStack_64 = uStack_44;
        FUN_0124c1e8(&local_60,&local_68,1);
        local_48 = (undefined4)local_60;
        uStack_44 = local_60._4_4_;
      }
    }
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_48);
  lVar10 = *(long *)puVar3;
  if (lVar10 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (*(uint *)(lVar9 + 0x1d8) <= uVar4) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
      return 0;
    }
    local_50 = 0;
    local_58 = local_48;
    uStack_54 = uStack_44;
    local_60 = &PTR_FUN_04a36b50;
    uVar4 = FUN_0277d6c4(&local_58);
    if (*(long *)puVar3 != 0) {
      lVar9 = *(long *)(lVar10 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(&local_48);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
           (((puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
             puVar7 != (uint *)0x0 && (uVar4 = *puVar7, uVar4 != 0)) &&
            (puVar7 != (uint *)(ulong)uVar4)))) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
          if (((*puVar8 != 0) && (uVar4 = puVar8[1], uVar4 != 0)) && ((ulong)(ushort)puVar8[2] != 0)
             ) {
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
                 (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) == 0xa8)) {
                return 0;
              }
            }
          }
        }
      }
    }
    lVar9 = *(long *)puVar3;
    local_70 = 0;
    local_78 = local_48;
    uStack_74 = uStack_44;
    uVar4 = FUN_0277d6c4(&local_78);
    if (*(long *)puVar3 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(&local_48);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
           (((puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
             puVar7 != (uint *)0x0 && (uVar4 = *puVar7, uVar4 != 0)) &&
            (puVar7 != (uint *)(ulong)uVar4)))) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
          if (((*puVar8 != 0) && (uVar4 = puVar8[1], uVar4 != 0)) && ((ulong)(ushort)puVar8[2] != 0)
             ) {
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
              if (((uVar1 < DAT_05326ec0) &&
                  (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar2 < 0xbd)) &&
                 (uVar2 == 0x61)) {
                return 0;
              }
            }
          }
        }
      }
    }
    if (1 < *(int *)(param_1 + 0x18) - 1U) {
      lVar9 = *(long *)puVar3;
      local_60 = &PTR_FUN_04a36b50;
      local_50 = 0;
      local_58 = local_48;
      uStack_54 = uStack_44;
      uVar4 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar3 == 0) {
        return 0;
      }
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (*(uint *)(lVar9 + 0x1d8) <= uVar4) {
        return 0;
      }
      if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
        return 0;
      }
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_48);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (*(uint *)(lVar9 + 0x1d8) <= uVar4) {
        return 0;
      }
      puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
      if (puVar7 == (uint *)0x0) {
        return 0;
      }
      uVar4 = *puVar7;
      if (uVar4 == 0) {
        return 0;
      }
      if (puVar7 == (uint *)(ulong)uVar4) {
        return 0;
      }
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
      if (*puVar8 == 0) {
        return 0;
      }
      uVar4 = puVar8[1];
      if (uVar4 == 0) {
        return 0;
      }
      if ((ulong)(ushort)puVar8[2] == 0) {
        return 0;
      }
      lVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar9 == 0) {
        return 0;
      }
      uVar1 = 0;
      if ((ulong)uVar4 != 0) {
        uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar4);
      }
      if (*puVar8 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if (DAT_05326ec0 <= uVar1) {
        return 0;
      }
      uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2);
      if (0xbc < uVar2) {
        return 0;
      }
      if (uVar2 != 0x9d) {
        return 0;
      }
    }
    if ((DAT_051f0338 == 0) || (*(int *)(DAT_051f0338 + 0xc) != 2)) {
      uVar6 = FUN_03422cc0(&local_48);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      uVar6 = FUN_03422a60(&local_48,PTR_DAT_04bb32e0);
    }
    else {
      uVar6 = FUN_034232e0(&local_48,param_2);
    }
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

