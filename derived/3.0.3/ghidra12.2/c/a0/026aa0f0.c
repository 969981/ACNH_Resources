
byte FUN_026aa0f0(long param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  undefined **local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  long local_88;
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined **local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  uint *local_68;
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  
  plVar17 = (long *)(param_3 + 0xf8);
  pbVar9 = (byte *)(**(code **)(*plVar17 + 0xf0))(plVar17);
  local_78 = (undefined **)CONCAT44(local_78._4_4_,(uint)*pbVar9);
  if ((uint)*pbVar9 != *(uint *)(param_2 + 8)) {
    return 0;
  }
  plVar16 = (long *)(param_3 + 0x60);
  puVar10 = (undefined8 *)(**(code **)(*plVar16 + 0xf0))(plVar16);
  uVar18 = *puVar10;
  local_46 = 0;
  local_44 = 0;
  local_48 = (undefined2)uVar18;
  FUN_0277d4ac(&local_48);
  puVar5 = PTR_DAT_04bb43c0;
  local_6e = (undefined1)((ulong)uVar18 >> 0x10);
  local_6d = (undefined1)((ulong)uVar18 >> 0x18);
  local_46 = (undefined2)((ulong)uVar18 >> 0x10);
  local_6c = (undefined4)((ulong)uVar18 >> 0x20);
  local_78 = &PTR_FUN_04a36b50;
  local_70 = local_48;
  local_68 = (uint *)0x0;
  lVar19 = *(long *)PTR_DAT_04bb43c0;
  local_44 = local_6c;
  uVar7 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar5 != 0) {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar19 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar19 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(&local_48);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar19 + 0x1d8)) &&
         (puVar13 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar7 * 8),
         puVar13 != (uint *)0x0)) {
        local_68 = puVar13;
      }
    }
  }
  pbVar9 = (byte *)(**(code **)(*plVar17 + 0xf0))(plVar17);
  bVar2 = *pbVar9;
  if (3 < bVar2 - 2) {
    if (bVar2 == 6) {
      puVar10 = (undefined8 *)(**(code **)(*plVar16 + 0xf0))(plVar16);
      uVar18 = *puVar10;
      local_7e = 0;
      local_7c = 0;
      local_80 = (undefined2)uVar18;
      FUN_0277d4ac(&local_80);
      lVar19 = *(long *)puVar5;
      local_98 = &PTR_FUN_04a36b50;
      local_8e = (undefined1)((ulong)uVar18 >> 0x10);
      local_8d = (undefined1)((ulong)uVar18 >> 0x18);
      local_7e = (undefined2)((ulong)uVar18 >> 0x10);
      local_8c = (undefined4)((ulong)uVar18 >> 0x20);
      local_90 = local_80;
      local_88 = 0;
      local_7c = local_8c;
      uVar7 = FUN_0277d6c4(&local_90);
      if (*(long *)puVar5 != 0) {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar19 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar19 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_80);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar19 + 0x1d8)) &&
             (lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar7 * 8), lVar19 != 0)) {
            local_88 = lVar19;
          }
        }
      }
      iVar8 = FUN_01aee3b4(&local_98);
      if (iVar8 != *(int *)(param_2 + 0xc)) {
        return 0;
      }
    }
    else {
      if (bVar2 != 0) {
        return 0;
      }
      uVar11 = FUN_026aa560(param_2 + 0x14,param_2 + 0xc,param_2 + 0x10,&local_48);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
    }
    goto LAB_026aa4d0;
  }
  iVar8 = FUN_01aee3b4(&local_78);
  local_98 = (undefined **)CONCAT44(local_98._4_4_,iVar8);
  if (iVar8 != *(int *)(param_2 + 0xc)) {
    return 0;
  }
  if (local_68 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar1 = *local_68;
    uVar7 = 0;
    if ((uVar1 != 0) && (local_68 != (uint *)(ulong)uVar1)) {
      puVar13 = (uint *)((long)local_68 - (long)(ulong)uVar1);
      if ((*puVar13 != 0) && ((uVar7 = puVar13[1], uVar7 != 0 && ((ulong)(ushort)puVar13[2] != 0))))
      {
        lVar19 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar19 = 0x1c;
        }
        lVar19 = (long)puVar13 + lVar19 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar19 != 0) {
          uVar1 = 0;
          if ((ulong)uVar7 != 0) {
            uVar1 = (uint)((ulong)((long)local_68 - lVar19) / (ulong)uVar7);
          }
          if (*puVar13 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ec0) &&
             (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar7 = (uint)uVar4,
             uVar4 < 0xbd)) goto LAB_026aa448;
        }
      }
      uVar7 = 0;
    }
  }
LAB_026aa448:
  if (*(int *)(param_2 + 0x10) - 0x72U < 2) {
    iVar8 = FUN_0277d6c4(&local_48);
    if (((uVar7 & 0xfffe) == 0x72) || (iVar8 == 0x1690)) goto LAB_026aa4d0;
  }
  else if ((1 < *(int *)(param_2 + 0x10) - 9U) ||
          ((iVar8 = FUN_0277d6c4(&local_48), uVar7 - 9 < 2 || (iVar8 == 0x1692)))) {
LAB_026aa4d0:
    bVar15 = false;
    puVar14 = (undefined1 *)(param_1 + 0x1d);
    uVar11 = 0;
    do {
      uVar3 = *puVar14;
      local_98 = (undefined **)CONCAT71(local_98._1_7_,puVar14[-1]);
      uVar12 = (**(code **)(*(long *)(param_3 + 0x98) + 0x118))((long *)(param_3 + 0x98),&local_98);
      if ((uVar12 & 1) != 0) {
        local_80 = CONCAT11(local_80._1_1_,uVar3);
        uVar12 = (**(code **)(*(long *)(param_3 + 200) + 0x118))((long *)(param_3 + 200),&local_80);
        if ((uVar12 & 1) != 0) {
          bVar6 = param_4 == (int)uVar11;
          goto LAB_026aa558;
        }
      }
      uVar12 = uVar11 + 1;
      puVar14 = puVar14 + 0xc;
      bVar15 = 0x22 < uVar11;
      uVar11 = uVar12;
    } while (uVar12 != 0x24);
    bVar6 = false;
LAB_026aa558:
    return bVar15 | bVar6;
  }
  return 0;
}

