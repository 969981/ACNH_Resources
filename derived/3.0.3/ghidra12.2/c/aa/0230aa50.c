
void FUN_0230aa50(byte *param_1)

{
  byte *pbVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined **local_70;
  undefined4 local_68;
  uint local_64;
  uint *local_60;
  undefined *local_58;
  char *local_50;
  undefined8 uStack_48;
  byte local_24 [4];
  
  if (param_1[1] == 0) {
    return;
  }
  local_58 = PTR_DAT_04bb2020 + 0x10;
  local_50 = "PV_ChangeEquip_ByStick";
  FUN_01b5c520(&local_58,1,param_1);
  puVar3 = PTR_DAT_04bb43c0;
  if (param_1[1] == 0) {
    return;
  }
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_1 + 4);
  lVar11 = *(long *)puVar3;
  if (lVar11 == 0) {
    return;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar4) {
    return;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return;
  }
  local_60 = (uint *)0x0;
  local_68 = *(undefined4 *)(param_1 + 4);
  local_64 = *(uint *)(param_1 + 8);
  local_70 = &PTR_FUN_04a36b50;
  uVar4 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar3 == 0) {
LAB_0230ac10:
    uVar5 = FUN_01ae8b58(&local_70);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0230ac10;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_1 + 4);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (((puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar9 == (uint *)0x0 || (uVar4 = *puVar9, local_60 = puVar9, uVar4 == 0)) ||
        (puVar9 == (uint *)(ulong)uVar4)))) goto LAB_0230ac10;
    puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
    if (((*puVar10 == 0) || (uVar4 = puVar10[1], uVar4 == 0)) || ((ulong)(ushort)puVar10[2] == 0))
    goto LAB_0230ac10;
    lVar11 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      lVar11 = 0x1c;
    }
    lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
    if (lVar11 == 0) goto LAB_0230ac10;
    uVar8 = 0;
    if ((ulong)uVar4 != 0) {
      uVar8 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar4);
    }
    if (*puVar10 <= uVar8) {
      uVar8 = 0xffffffff;
    }
    if ((DAT_05326ec0 <= uVar8) || (*(short *)(DAT_05326ec8 + (long)(int)uVar8 * 2) != 0xaf))
    goto LAB_0230ac10;
  }
  uVar5 = FUN_01377be0(&local_70);
  if (((uVar5 & 1) == 0) || (uVar5 = FUN_01377be0(&local_70), (uVar5 & 1) == 0)) {
LAB_0230ac40:
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = local_64 & 0xffff;
    if (0xdb < (ushort)local_64) goto LAB_0230ac40;
  }
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar11 = FUN_02583354(DAT_055021a0,local_24,1);
  if (lVar11 == 0) {
    return;
  }
  lVar12 = lVar11 + 0x194b0;
  if (*(long *)(lVar11 + 0x194b8) == 0) {
    lVar12 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar11 = *(long *)(lVar12 + 0x2d010);
  if (lVar11 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      lVar11 = *(long *)(lVar12 + 0x2d010);
      uVar5 = uVar5 & 0xffffffff;
      if (lVar11 == 0) goto LAB_0230ad00;
    }
    plVar6 = *(long **)(lVar11 + 0x20);
    if (plVar6 != (long *)0x0) {
      local_58 = *(undefined **)(lVar12 + 0x2cff0);
      local_50 = *(char **)(lVar12 + 0x2cff8);
      uStack_48 = 0x1000;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
    }
  }
LAB_0230ad00:
  uVar8 = 0;
  lVar11 = *(long *)(lVar12 + 0x2cff8) + *(long *)(lVar12 + 0x2cff0);
  do {
    pbVar1 = (byte *)(lVar11 + ((long)((ulong)uVar8 << 0x20) >> 0x1e));
    sVar2 = *(short *)(pbVar1 + 2);
    if (sVar2 == 0) {
      *pbVar1 = (byte)uVar4;
      *(undefined1 *)(lVar11 + (long)(int)uVar8 * 4 + 1) = 0;
LAB_0230ad68:
      *(short *)(pbVar1 + 2) = sVar2 + 1;
      break;
    }
    if ((uVar4 == *pbVar1) && (*(char *)(lVar11 + (long)(int)uVar8 * 4 + 1) == '\0')) {
      if (sVar2 != -1) goto LAB_0230ad68;
      break;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x400);
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar12 + 0x2d010) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar12 + 0x2d010) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

