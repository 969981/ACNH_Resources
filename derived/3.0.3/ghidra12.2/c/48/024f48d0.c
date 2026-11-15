
bool FUN_024f48d0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined **local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    return false;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
    return false;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return false;
  }
  local_138 = 0;
  local_140 = *param_2;
  local_148 = &PTR_FUN_04a36b50;
  uVar4 = FUN_0277d6c4(&local_140);
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar7 != (uint *)0x0)) {
        local_48 = 0;
        uVar4 = *puVar7;
        if ((uVar4 != 0) && (puVar7 != (uint *)(ulong)uVar4)) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
          local_48 = 0;
          if (*puVar8 != 0) {
            uVar4 = puVar8[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
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
                   (local_48 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   local_48 < 0xbd)) goto LAB_024f4a78;
              }
            }
            local_48 = 0;
          }
        }
        goto LAB_024f4a78;
      }
    }
  }
  local_48 = 0xbc;
LAB_024f4a78:
  local_44 = 0x96;
  if (local_48 != 0x96) {
    return false;
  }
  local_44 = FUN_024f4f30(param_2);
  puVar3 = PTR_DAT_04bb46f0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = (undefined **)0x0;
  local_140 = 0;
  FUN_0262a720(*(long *)PTR_DAT_04bb46f0,&local_148,&local_44,*(long *)PTR_DAT_04bb46f0 + 0xe98e0);
  FUN_0262b0a0(*(long *)puVar3,&local_148,param_1,*(long *)puVar3 + 0xe98e0);
  iVar6 = 0;
  uVar5 = 0;
  do {
    uVar1 = (uint)uVar5 & 6;
    uVar4 = (uint)uVar5 + 2;
    bVar2 = *(byte *)((long)&local_148 + (uVar5 >> 3));
    iVar6 = (bVar2 >> (ulong)(uVar1 | 1) & 1) + (bVar2 >> (ulong)uVar1 & 1) + iVar6;
    uVar5 = (ulong)uVar4;
  } while (uVar4 != 0x800);
  return iVar6 != 0;
}

