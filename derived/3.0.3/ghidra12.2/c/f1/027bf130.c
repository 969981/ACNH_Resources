
bool FUN_027bf130(long param_1,uint *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint local_60;
  uint uStack_5c;
  undefined **local_58;
  uint local_50;
  uint uStack_4c;
  uint *local_48;
  uint local_28;
  uint uStack_24;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_28);
  lVar8 = *(long *)puVar3;
  if (lVar8 == 0) {
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
  local_48 = (uint *)0x0;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  local_58 = &PTR_FUN_04a36b50;
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar6 != (uint *)0x0)) {
        uVar4 = *puVar6;
        local_60 = 0;
        local_48 = puVar6;
        if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
          local_60 = 0;
          if (*puVar7 != 0) {
            uVar4 = puVar7[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar8 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar4);
                }
                if (*puVar7 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (local_60 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2),
                   local_60 < 0xbd)) goto LAB_027bf2d4;
              }
            }
            local_60 = 0;
          }
        }
        goto LAB_027bf2d4;
      }
    }
  }
  local_60 = 0xbc;
LAB_027bf2d4:
  if ((local_60 & 0xfffffffe) == 0xa6) {
    FUN_01af15c0(&local_60,&local_58);
    local_28 = local_60;
    uStack_24 = uStack_5c;
  }
  lVar8 = 0;
  uVar4 = 0;
  do {
    uVar5 = FUN_0277d7b4(param_1 + 0x1004 + ((long)((ulong)uVar4 << 0x20) >> 0x1d),&local_28);
    if ((uVar5 & 1) != 0) {
      pcVar1 = (char *)(param_1 + 0x3004) + lVar8;
      if (0x3ff < (uint)lVar8) {
        pcVar1 = (char *)(param_1 + 0x3004);
      }
      return *pcVar1 != -1;
    }
    uVar4 = uVar4 + 1;
    lVar8 = lVar8 + 1;
  } while (uVar4 != 0x400);
  return false;
}

