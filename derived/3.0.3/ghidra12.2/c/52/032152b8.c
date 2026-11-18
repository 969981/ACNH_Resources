
bool FUN_032152b8(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  undefined *local_40;
  char *pcStack_38;
  undefined8 local_18;
  
  if (-1 < (int)param_2 && (int)param_2 < *(int *)(param_1 + 0x1c368)) {
    if (*(uint *)(param_1 + 0x1c36c) == param_2) {
      lVar8 = 0;
    }
    else if (*(uint *)(param_1 + 0x1c378) == param_2) {
      lVar8 = 1;
    }
    else if (*(uint *)(param_1 + 0x1c384) == param_2) {
      lVar8 = 2;
    }
    else if (*(uint *)(param_1 + 0x1c390) == param_2) {
      lVar8 = 3;
    }
    else if (*(uint *)(param_1 + 0x1c39c) == param_2) {
      lVar8 = 4;
    }
    else if (*(uint *)(param_1 + 0x1c3a8) == param_2) {
      lVar8 = 5;
    }
    else if (*(uint *)(param_1 + 0x1c3b4) == param_2) {
      lVar8 = 6;
    }
    else if (*(uint *)(param_1 + 0x1c3c0) == param_2) {
      lVar8 = 7;
    }
    else if (*(uint *)(param_1 + 0x1c3cc) == param_2) {
      lVar8 = 8;
    }
    else {
      if (*(uint *)(param_1 + 0x1c3d8) != param_2) goto LAB_032153c4;
      lVar8 = 9;
    }
    if ((char)((uint *)(param_1 + 0x1c36c))[lVar8 * 3 + 2] != '\0') {
      return false;
    }
  }
LAB_032153c4:
  if (*(int *)(param_1 + 0x1c4cc) == 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x1c4cc) ==
      (uint)*(byte *)(param_1 + 0x1c380) + (uint)*(byte *)(param_1 + 0x1c374) +
      (uint)*(byte *)(param_1 + 0x1c38c) + (uint)*(byte *)(param_1 + 0x1c398) +
      (uint)*(byte *)(param_1 + 0x1c3a4) + (uint)*(byte *)(param_1 + 0x1c3b0) +
      (uint)*(byte *)(param_1 + 0x1c3bc) +
      (uint)*(byte *)(param_1 + 0x1c3c8) + (uint)*(byte *)(param_1 + 0x1c3d4) +
      (uint)*(byte *)(param_1 + 0x1c3e0) ||
      (-1 >= (int)param_2 || *(int *)(param_1 + 0x1c368) <= (int)param_2)) {
    return false;
  }
  if (((((((*(uint *)(param_1 + 0x1c36c) != param_2) && (*(uint *)(param_1 + 0x1c378) != param_2))
         && (*(uint *)(param_1 + 0x1c384) != param_2)) &&
        ((*(uint *)(param_1 + 0x1c390) != param_2 && (*(uint *)(param_1 + 0x1c39c) != param_2)))) &&
       ((*(uint *)(param_1 + 0x1c3a8) != param_2 &&
        ((*(uint *)(param_1 + 0x1c3b4) != param_2 && (*(uint *)(param_1 + 0x1c3c0) != param_2))))))
      && (*(uint *)(param_1 + 0x1c3cc) != param_2)) && (*(uint *)(param_1 + 0x1c3d8) != param_2)) {
    return false;
  }
  local_18 = 0xfffe;
  FUN_0277d4ac(&local_18);
  puVar5 = PTR_DAT_04bb43c0;
  local_18 = *(undefined8 *)PTR_DAT_04bb37e0;
  if ((int)param_2 < *(int *)(param_1 + 0x1c368)) {
    if (*(uint *)(param_1 + 0x1c358) <= param_2) {
      param_2 = 0;
    }
    uVar4 = *(ushort *)(*(long *)(param_1 + 0x1c360) + (ulong)param_2 * 2);
    if (-1 < (short)uVar4) {
      local_18 = **(undefined8 **)(*(long *)(param_1 + 0x1c340) + (ulong)uVar4 * 8);
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_18);
  lVar8 = *(long *)puVar5;
  if (lVar8 == 0) {
    return false;
  }
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar6) {
    return false;
  }
  if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return false;
  }
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = (undefined4)local_18;
  uStack_4c = local_18._4_4_;
  uVar6 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar5 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(&local_18);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8), lVar8 != 0)) {
        local_48 = lVar8;
      }
    }
  }
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    uVar6 = FUN_01aed730(&local_58);
  }
  else {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,3);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar2 = *puVar1;
    uVar6 = FUN_01aed730(&local_58);
    if ((uVar2 >> 3 & 1) != 0) goto LAB_032156a4;
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "RegulationType4";
  uVar7 = FUN_0273f0a0(&local_40);
  if ((uVar7 & 1) != 0) {
    uVar6 = (int)(uVar6 * 0xc) / 10;
  }
LAB_032156a4:
  if ((int)uVar6 < 1) {
    return false;
  }
  return (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) < 0xbb9;
}

