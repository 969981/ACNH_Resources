
/* WARNING: Removing unreachable block (ram,0x02b11d40) */

undefined8 FUN_02b11ad4(long param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  ushort uVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  byte local_70;
  undefined **local_68;
  undefined4 local_60;
  uint uStack_5c;
  undefined8 local_58;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)(param_1 + 8);
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar11 = *(long *)puVar2;
  if (lVar11 == 0) {
    return 1;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar3) {
    return 1;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 1;
  }
  local_58 = 0;
  local_60 = *param_2;
  uVar3 = param_2[1];
  local_68 = &PTR_FUN_04a36b50;
  uStack_5c = uVar3;
  uVar4 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar2 == 0) {
    return 1;
  }
  lVar10 = *(long *)(lVar11 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
    return 1;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return 1;
  }
  lVar10 = *(long *)PTR_DAT_04bc0428;
  uVar4 = FUN_0277d6c4(param_2);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
    return 1;
  }
  puVar6 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8);
  if (puVar6 == (uint *)0x0) {
    return 1;
  }
  uVar7 = 0;
  uVar4 = *puVar6;
  if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
    puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
    uVar7 = 0;
    if (*puVar8 != 0) {
      uVar4 = puVar8[1];
      if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar10 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar10 != 0) {
          uVar1 = 0;
          if ((ulong)uVar4 != 0) {
            uVar1 = (uint)((ulong)((long)puVar6 - lVar10) / (ulong)uVar4);
          }
          if (*puVar8 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ec0) &&
             (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar7 < 0xbd))
          goto LAB_02b11c78;
        }
      }
      uVar7 = 0;
    }
  }
LAB_02b11c78:
  if (uVar7 != 0x76) {
    return 1;
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,0x76);
  uVar7 = 0;
  uVar4 = *puVar6;
  if ((uVar4 == 0) || (puVar6 == (uint *)(ulong)uVar4)) goto LAB_02b11d48;
  puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
  if ((*puVar8 != 0) && ((uVar4 = puVar8[1], uVar4 != 0 && ((ulong)(ushort)puVar8[2] != 0)))) {
    lVar10 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      lVar10 = 0x1c;
    }
    lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
    uVar7 = 0;
    if (lVar10 == 0) goto LAB_02b11d48;
    uVar1 = 0;
    if ((ulong)uVar4 != 0) {
      uVar1 = (uint)((ulong)((long)puVar6 - lVar10) / (ulong)uVar4);
    }
    if (*puVar8 <= uVar1) {
      uVar1 = 0xffffffff;
    }
    if ((uVar1 < DAT_05326ec0) &&
       (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar7 < 0xbd)) goto LAB_02b11d48;
  }
  uVar7 = 0;
LAB_02b11d48:
  uVar3 = uVar3 & 0xf;
  if (uVar7 != 0x76) {
    uVar3 = 0;
  }
  if (uVar3 == **(uint **)(param_1 + 0x10)) {
    uStack_74 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
    local_78 = 1;
    local_70 = FUN_017baf44();
    local_70 = local_70 & 1;
    local_80 = PTR_DAT_04bb5438 + 0x10;
    puVar5 = (undefined4 *)FUN_014fbd50(&local_80,0,param_3);
    *(undefined4 *)(lVar9 + 0x4c) = *puVar5;
    return 0;
  }
  return 1;
}

