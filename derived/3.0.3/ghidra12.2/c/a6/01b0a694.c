
undefined8 FUN_01b0a694(undefined4 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  undefined2 uVar9;
  long lVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  uint *puVar13;
  undefined8 local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  uint *local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  uint local_58;
  undefined4 local_54;
  
  uVar6 = FUN_0277e294();
  puVar2 = PTR_DAT_04bb43c0;
  if ((uVar6 & 1) == 0) {
switchD_01b0a7cc_default:
    return 0;
  }
  local_68 = *param_1;
  uStack_64 = param_1[1];
  local_70 = &PTR_FUN_04a36b50;
  local_60 = 0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_68);
  lVar7 = DAT_0532a768;
  if (*(long *)puVar2 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uVar3 = FUN_0277d6c4(param_1);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
        local_60 = lVar7;
      }
    }
  }
  iVar4 = FUN_01afb8e8(&local_70);
  local_90 = (undefined **)CONCAT44(local_90._4_4_,iVar4);
  if (iVar4 != 0) {
    return 0;
  }
  local_78 = 0x3206;
  FUN_0277d4ac(&local_78);
  uVar5 = FUN_01aee3b4(&local_70);
  switch(uVar5) {
  case 0:
  case 6:
    local_90 = (undefined **)0x3206;
    break;
  case 1:
  case 7:
    local_90 = (undefined **)0x3207;
    break;
  case 2:
  case 9:
    local_90 = (undefined **)0x3208;
    break;
  case 3:
  case 8:
    local_90 = (undefined **)0x20e;
    break;
  case 4:
    local_90 = (undefined **)0x20d;
    break;
  case 5:
    local_90 = (undefined **)0x3209;
    break;
  default:
    goto switchD_01b0a7cc_default;
  }
  FUN_0277d4ac(&local_90);
  local_78 = local_90;
  uVar9 = (undefined2)local_90;
  local_80 = (uint *)0x0;
  uVar11 = local_90._2_1_;
  uVar12 = local_90._3_1_;
  uVar5 = local_90._4_4_;
  lVar10 = *(long *)puVar2;
  local_90 = &PTR_FUN_04a36b50;
  local_88 = uVar9;
  local_86 = uVar11;
  local_85 = uVar12;
  local_84 = uVar5;
  uVar3 = FUN_0277d6c4(&local_88);
  lVar7 = DAT_0532a768;
  if (*(long *)puVar2 == 0) {
LAB_01b0a8c4:
    puVar13 = (uint *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_01b0a8c4;
    uVar3 = FUN_0277d6c4(&local_78);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if (*(uint *)(lVar7 + 0x1d8) <= uVar3) goto LAB_01b0a8c4;
    puVar13 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8);
    if (puVar13 != (uint *)0x0) {
      local_80 = puVar13;
    }
  }
  uVar6 = FUN_0277e294(param_1);
  if ((uVar6 & 1) == 0) goto LAB_01b0a9a4;
  local_54 = 0xb0;
  if (puVar13 == (uint *)0x0) {
    local_58 = 0xbc;
  }
  else {
    uVar3 = *puVar13;
    local_58 = 0;
    if ((uVar3 != 0) && (puVar13 != (uint *)(ulong)uVar3)) {
      puVar8 = (uint *)((long)puVar13 - (long)(ulong)uVar3);
      local_58 = 0;
      if (*puVar8 != 0) {
        uVar3 = puVar8[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar8 + lVar7 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar13 - lVar7) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (local_58 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_58 < 0xbd))
            goto LAB_01b0a974;
          }
        }
        local_58 = 0;
      }
    }
  }
LAB_01b0a974:
  if (local_58 == 0xb0) {
    FUN_01b01728(&local_84,param_1);
    uVar9 = local_88;
    uVar11 = local_86;
    uVar12 = local_85;
    uVar5 = local_84;
  }
LAB_01b0a9a4:
  *(undefined2 *)param_1 = uVar9;
  *(undefined1 *)((long)param_1 + 2) = uVar11;
  *(undefined1 *)((long)param_1 + 3) = uVar12;
  param_1[1] = uVar5;
  return 1;
}

