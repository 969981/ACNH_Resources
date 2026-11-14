
undefined8 FUN_0154c450(undefined4 *param_1,long param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  ushort local_64 [2];
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint *local_50;
  uint local_48;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
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
  local_50 = (uint *)0x0;
  local_58 = *param_1;
  uStack_54 = param_1[1];
  local_60 = &PTR_FUN_04a36b50;
  uVar4 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar3 == 0) {
LAB_0154c55c:
    puVar8 = (uint *)0x0;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0154c55c;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_1);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (*(uint *)(lVar9 + 0x1d8) <= uVar4) goto LAB_0154c55c;
    puVar8 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
    if (puVar8 != (uint *)0x0) {
      local_50 = puVar8;
    }
  }
  uVar5 = FUN_01ae89e0(&local_60);
  if ((uVar5 & 1) == 0) {
    local_44 = 0xac;
    if (puVar8 == (uint *)0x0) {
      local_48 = 0xbc;
    }
    else {
      uVar4 = *puVar8;
      local_48 = 0;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        local_48 = 0;
        if (*puVar7 != 0) {
          uVar4 = puVar7[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar4);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (local_48 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_48 < 0xbd
                 )) goto LAB_0154c60c;
            }
          }
          local_48 = 0;
        }
      }
    }
LAB_0154c60c:
    if (local_48 != 0xac) {
      return 0;
    }
  }
  local_64[0] = *(ushort *)PTR_DAT_04bb3170;
  uVar5 = FUN_01ae89e0(&local_60);
  if ((uVar5 & 1) != 0) {
    FUN_01b08c14(local_64,&local_60);
  }
  local_44 = 0xac;
  if (puVar8 == (uint *)0x0) {
    local_48 = 0xbc;
  }
  else {
    uVar4 = *puVar8;
    local_48 = 0;
    if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
      puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      local_48 = 0;
      if (*puVar7 != 0) {
        uVar4 = puVar7[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar4);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (local_48 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_48 < 0xbd))
            goto LAB_0154c6e4;
          }
        }
        local_48 = 0;
      }
    }
  }
LAB_0154c6e4:
  if (local_48 == 0xac) {
    FUN_01b086f4(&local_44,&local_60);
    local_64[0] = (ushort)local_44;
  }
  uVar5 = FUN_007ef180(local_64);
  uVar6 = (ulong)local_64[0] & 0x7f;
  uVar4 = (uint)uVar6;
  if ((uVar5 & 1) == 0) {
    if (99 < uVar4) {
      return 0;
    }
    bVar2 = *(byte *)(param_2 + (uVar6 >> 3));
  }
  else {
    if (99 < uVar4) {
      return 0;
    }
    bVar2 = *(byte *)(param_3 + (uVar6 >> 3));
  }
  if ((bVar2 >> (ulong)(uVar4 & 7) & 1) == 0) {
    return 0;
  }
  return 1;
}

