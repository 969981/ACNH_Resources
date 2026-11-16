
undefined8 FUN_0277faf0(uint *param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  uint local_88;
  uint uStack_84;
  undefined **local_80;
  uint local_78;
  uint uStack_74;
  undefined8 local_70;
  undefined **local_68;
  uint local_60;
  uint uStack_5c;
  uint *local_58;
  undefined1 local_34 [4];
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  if (lVar10 == 0) {
    return 0;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar1 = *(ushort *)(lVar10 + 0x1f8);
  uVar6 = *(uint *)(lVar10 + 0x1d8);
  uVar4 = (uVar4 & 0xffff) - (uint)uVar1;
  if (uVar6 <= uVar4) {
    return 0;
  }
  lVar10 = *(long *)(lVar10 + 0x1e0);
  if (*(long *)(lVar10 + (long)(int)uVar4 * 8) == 0) {
    return 0;
  }
  local_58 = (uint *)0x0;
  local_60 = *param_1;
  uVar4 = param_1[1];
  local_68 = &PTR_FUN_04a36b50;
  uStack_5c = uVar4;
  uVar5 = FUN_0277d6c4(&local_60);
  uVar5 = (uVar5 & 0xffff) - (uint)uVar1;
  if ((uVar5 < uVar6) && (*(long *)(lVar10 + (long)(int)uVar5 * 8) != 0)) {
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(param_1);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
       ((puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8),
        puVar8 != (uint *)0x0 &&
        (uVar6 = *puVar8, local_58 = puVar8, uVar6 != 0 && puVar8 != (uint *)(ulong)uVar6)))) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
      if ((*puVar9 != 0) && ((uVar6 = puVar9[1], uVar6 != 0 && ((ulong)(ushort)puVar9[2] != 0)))) {
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar10 != 0) {
          uVar5 = 0;
          if ((ulong)uVar6 != 0) {
            uVar5 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar6);
          }
          if (*puVar9 <= uVar5) {
            uVar5 = 0xffffffff;
          }
          if ((uVar5 < DAT_05326ec0) && (*(short *)(DAT_05326ec8 + (long)(int)uVar5 * 2) == 0xb1)) {
            local_80 = (undefined **)CONCAT44(local_80._4_4_,0xb1);
            if (((uVar4 & 0xf800) == 0) &&
               ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + ((ulong)(uVar4 >> 3) & 0x1fff) + 0xe9ae0) >>
                 (ulong)(uVar4 & 7) & 1) != 0)) {
              return 1;
            }
          }
        }
      }
    }
  }
  uVar7 = FUN_01b032d0(&local_68);
  if ((((uVar7 & 1) != 0) && (uVar7 = FUN_01b032d0(&local_68), (uVar7 & 1) != 0)) &&
     ((local_60 & 0x3000000) != 0)) {
    FUN_01b079ec(&local_88,&local_68);
    lVar10 = *(long *)puVar3;
    local_80 = &PTR_FUN_04a36b50;
    local_70 = 0;
    local_78 = local_88;
    uStack_74 = uStack_84;
    uVar4 = FUN_0277d6c4(&local_78);
    if (lVar10 == 0) {
      return 0;
    }
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
      return 0;
    }
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(&local_88);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
      return 0;
    }
    puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8);
    if (puVar8 == (uint *)0x0) {
      return 0;
    }
    uVar4 = *puVar8;
    if (uVar4 == 0) {
      return 0;
    }
    if (puVar8 == (uint *)(ulong)uVar4) {
      return 0;
    }
    puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
    if (*puVar9 == 0) {
      return 0;
    }
    uVar4 = puVar9[1];
    if (uVar4 == 0) {
      return 0;
    }
    if ((ulong)(ushort)puVar9[2] == 0) {
      return 0;
    }
    lVar10 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      lVar10 = 0x1c;
    }
    lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
    if (lVar10 == 0) {
      return 0;
    }
    uVar6 = 0;
    if ((ulong)uVar4 != 0) {
      uVar6 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar4);
    }
    if (*puVar9 <= uVar6) {
      uVar6 = 0xffffffff;
    }
    if (DAT_05326ec0 <= uVar6) {
      return 0;
    }
    if (*(short *)(DAT_05326ec8 + (long)(int)uVar6 * 2) != 0xb1) {
      return 0;
    }
    if ((uStack_84 & 0xf800) != 0) {
      return 0;
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_04bb46f0 + ((ulong)(uStack_84 >> 3) & 0x1fff) + 0xe9ae0) >>
            (ulong)(uStack_84 & 7);
    goto joined_r0x0277ff2c;
  }
  local_80 = (undefined **)CONCAT44(local_80._4_4_,0x7f);
  if (local_58 == (uint *)0x0) {
    local_88 = 0xbc;
  }
  else {
    uVar4 = *local_58;
    local_88 = 0;
    if ((uVar4 != 0) && (local_58 != (uint *)(ulong)uVar4)) {
      puVar8 = (uint *)((long)local_58 - (long)(ulong)uVar4);
      local_88 = 0;
      if (*puVar8 != 0) {
        uVar4 = puVar8[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar10 != 0) {
            uVar6 = 0;
            if ((ulong)uVar4 != 0) {
              uVar6 = (uint)((ulong)((long)local_58 - lVar10) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05326ec0) &&
               (local_88 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar6 * 2), local_88 < 0xbd))
            goto LAB_0277fec4;
          }
        }
        local_88 = 0;
      }
    }
  }
LAB_0277fec4:
  if (local_88 != 0x7f) {
    return 0;
  }
  local_80 = (undefined **)CONCAT53(local_80._3_5_,0x80023);
  FUN_01afc678(&local_68,&local_80,&local_88,local_34);
  if (0x7ff < (local_88 & 0xffff)) {
    return 0;
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)((ushort)local_88 >> 3) + 0xe9ae0) >>
          (ulong)(local_88 & 7);
joined_r0x0277ff2c:
  if ((bVar2 & 1) == 0) {
    return 0;
  }
  return 1;
}

