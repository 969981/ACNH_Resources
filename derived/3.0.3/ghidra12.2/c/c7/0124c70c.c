
undefined8 FUN_0124c70c(long param_1,uint *param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ushort *puVar7;
  byte bVar8;
  long lVar9;
  int local_5c;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  long local_48;
  undefined8 local_28;
  
  lVar9 = param_1 + 8;
  uVar6 = FUN_0277e158(lVar9);
  if ((uVar6 & 1) != 0) {
    *(undefined2 *)param_2 = *(undefined2 *)(param_1 + 8);
    *(undefined1 *)((long)param_2 + 2) = *(undefined1 *)(param_1 + 10);
    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_1 + 0xb);
    param_2[1] = *(uint *)(param_1 + 0xc);
    return 1;
  }
  uVar6 = FUN_0123d890(*(undefined8 *)(param_1 + 0x10),3);
  if (((uVar6 & 1) == 0) &&
     (iVar3 = FUN_0123db50(lVar9,*(undefined8 *)(param_1 + 0x10)), iVar3 != 0x2d)) {
    return 0;
  }
  *(undefined2 *)param_2 = *(undefined2 *)(param_1 + 8);
  *(undefined1 *)((long)param_2 + 2) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_1 + 0xb);
  param_2[1] = *(uint *)(param_1 + 0xc);
  iVar3 = FUN_0123db50(lVar9,*(undefined8 *)(param_1 + 0x10));
  if ((iVar3 == 0x21) ||
     (iVar3 = FUN_0123db50(lVar9,*(undefined8 *)(param_1 + 0x10)), iVar3 == 0x22)) {
    FUN_0124c030(&local_58,lVar9);
    iVar3 = FUN_0123db50(&local_50,local_48);
    if ((iVar3 == 0x21) || (iVar3 = FUN_0123db50(&local_50,local_48), iVar3 == 0x22)) {
      bVar8 = local_50._2_1_ & 0xe3;
      local_50 = local_50 & 0xffe3ffff;
    }
    else {
      bVar8 = local_50._2_1_;
    }
    *(byte *)((long)param_2 + 2) = bVar8;
    *(undefined1 *)((long)param_2 + 3) = local_50._3_1_;
    *(undefined2 *)param_2 = (undefined2)local_50;
    param_2[1] = local_4c;
  }
  iVar3 = FUN_0123db50(lVar9,*(undefined8 *)(param_1 + 0x10));
  if (iVar3 == 0x2d) {
    local_28 = 0xfffe;
    FUN_0277d4ac(&local_28);
    uVar6 = FUN_01242c70(&local_28,&local_5c,lVar9);
    puVar1 = PTR_DAT_04bb43c0;
    if ((uVar6 & 1) == 0) goto LAB_0124c97c;
    local_48 = 0;
    local_58 = PTR_DAT_04bc0510 + 0x10;
    local_50 = (uint)local_28;
    local_4c = local_28._4_4_;
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar1 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(&local_28);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (uVar4 < *(uint *)(lVar9 + 0x1d8)) {
          lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
          if (lVar9 != 0) {
            local_48 = lVar9;
          }
        }
      }
    }
    iVar3 = FUN_01ad7260(&local_58);
    if ((iVar3 != 0) &&
       (((local_5c == 0 || (iVar3 = FUN_01ad7260(&local_58), local_5c < iVar3)) &&
        (puVar7 = (ushort *)FUN_01afd600(&local_58), puVar7 != (ushort *)0x0)))) {
      *puVar7 = *puVar7 & 0xfff8 | (ushort)local_5c & 7;
    }
    uVar6 = FUN_01af0020(&local_58);
    if ((uVar6 & 1) == 0) goto LAB_0124c9b4;
LAB_0124c968:
    uVar5 = 1;
  }
  else {
LAB_0124c97c:
    iVar3 = FUN_0123db50(lVar9,*(undefined8 *)(param_1 + 0x10));
    if (iVar3 == 0x22) {
      local_58 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_58);
      uVar6 = FUN_01242fd0(&local_58,lVar9);
      if ((uVar6 & 1) != 0) {
        local_50 = (uint)local_58;
        local_4c = local_58._4_4_;
        goto LAB_0124c9b4;
      }
    }
    iVar3 = FUN_0123cc10(*(undefined8 *)(param_1 + 0x10));
    if (iVar3 == 0) {
      return 1;
    }
    if (iVar3 == 0xfffe) {
      return 1;
    }
    *(short *)param_2 = (short)iVar3;
    iVar3 = FUN_0123db50(lVar9,*(undefined8 *)(param_1 + 0x10));
    puVar1 = PTR_DAT_04bb43c0;
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(param_2);
    bVar2 = false;
    if (*(long *)puVar1 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (uVar4 < *(uint *)(lVar9 + 0x1d8)) {
        bVar2 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0;
      }
      else {
        bVar2 = false;
      }
    }
    if (5 < iVar3 - 0x12U) {
      if (!bVar2) {
        return 1;
      }
      FUN_01ad5d04(&local_58,param_2);
      uVar6 = FUN_01af0020(&local_58);
      if ((uVar6 & 1) == 0) {
        return 1;
      }
      goto LAB_0124c968;
    }
    if (!bVar2) {
      return 1;
    }
    FUN_01ad5d04(&local_58,param_2);
    uVar6 = FUN_01af0020(&local_58);
    if ((uVar6 & 1) == 0) {
      return 1;
    }
    uVar5 = FUN_0124ffb0(param_1);
  }
  FUN_01af2bc0(&local_58,uVar5);
LAB_0124c9b4:
  *param_2 = local_50;
  param_2[1] = local_4c;
  return 1;
}

