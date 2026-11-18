
uint FUN_034672b0(long *param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  char *pcVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined *local_80;
  char *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  char *local_68;
  int local_50;
  undefined4 uStack_4c;
  char *local_48;
  
  uVar6 = (**(code **)(*param_1 + 0x38))();
  uVar7 = (**(code **)(*param_2 + 0x38))(param_2);
  if (((uVar6 & 1) != 0) && ((uVar7 & 1) != 0)) {
    uVar9 = (**(code **)(*param_1 + 0x38))(param_1);
    if (((uVar9 & 1) == 0) || (uVar9 = (**(code **)(*param_2 + 0x38))(param_2), (uVar9 & 1) == 0)) {
      return 0;
    }
    local_50 = (**(code **)(*param_1 + 0x98))(param_1);
    iVar8 = (**(code **)(*param_2 + 0x98))(param_2);
    if (local_50 < iVar8) {
      return 0xffffffff;
    }
    return (uint)(local_50 != iVar8);
  }
  uVar11 = 0xffffffff;
  if ((uVar6 & 1) != 0) {
    uVar11 = 1;
  }
  if (((uVar6 | uVar7) & 1) != 0) {
    return uVar11;
  }
  uVar1 = **(undefined4 **)PTR_DAT_04bb3448;
  (**(code **)(*param_1 + 0x48))(&local_50,param_1);
  (**(code **)(*param_2 + 0x48))(&local_70,param_2);
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = "dga";
  (**(code **)(CONCAT44(uStack_4c,local_50) + 0x18))(&local_50);
  (**(code **)(CONCAT44(uStack_4c,local_50) + 0x18))(&local_50);
  pcVar3 = local_48;
  (**(code **)(local_80 + 0x18))(&local_80);
  if (pcVar3 == local_78) {
LAB_0346746c:
    (**(code **)(CONCAT44(uStack_6c,local_70) + 0x18))(&local_70);
    (**(code **)(CONCAT44(uStack_6c,local_70) + 0x18))(&local_70);
    if (local_68 == "dgb") {
      return 0xffffffff;
    }
    if (*local_68 == 'd') {
      uVar9 = 0;
      do {
        uVar10 = uVar9;
        if ((uVar10 == 0x80000) || (local_68[uVar10 + 1] != (&DAT_040eb89e)[uVar10]))
        goto LAB_034674f0;
        uVar9 = uVar10 + 1;
      } while (local_68[uVar10 + 1] != '\0');
      if (uVar10 < 0x80000) {
        return 0xffffffff;
      }
    }
  }
  else if (*local_48 == *local_78) {
    if (*local_48 != '\0') {
      lVar12 = 0;
      do {
        if ((lVar12 == 0x80000) || (local_48[lVar12 + 1] != local_78[lVar12 + 1]))
        goto LAB_034674f0;
        if (local_48[lVar12 + 1] == '\0') break;
        lVar2 = lVar12 + 2;
        if (local_48[lVar2] != local_78[lVar12 + 2]) goto LAB_034674f0;
        lVar12 = lVar12 + 2;
      } while (local_48[lVar2] != '\0');
    }
    goto LAB_0346746c;
  }
LAB_034674f0:
  (**(code **)(CONCAT44(uStack_4c,local_50) + 0x18))(&local_50);
  (**(code **)(CONCAT44(uStack_4c,local_50) + 0x18))(&local_50);
  if (local_48 != "dgb") {
    if (*local_48 != 'd') goto LAB_034675cc;
    lVar12 = 0;
    do {
      if ((lVar12 == 0x80000) || (lVar2 = lVar12 + 1, local_48[lVar2] != (&DAT_040eb89e)[lVar12]))
      goto LAB_034675cc;
      lVar12 = lVar12 + 1;
    } while (local_48[lVar2] != '\0');
  }
  (**(code **)(CONCAT44(uStack_6c,local_70) + 0x18))(&local_70);
  (**(code **)(CONCAT44(uStack_6c,local_70) + 0x18))(&local_70);
  if (local_68 == "dga") {
    return 1;
  }
  if (*local_68 == 'd') {
    uVar9 = 0;
    do {
      uVar10 = uVar9;
      if ((uVar10 == 0x80000) || (local_68[uVar10 + 1] != (&DAT_0406407c)[uVar10]))
      goto LAB_034675cc;
      uVar9 = uVar10 + 1;
    } while (local_68[uVar10 + 1] != '\0');
    if (uVar10 < 0x80000) {
      return 1;
    }
  }
LAB_034675cc:
  uVar4 = FUN_037107a0(&local_50,uVar1);
  uVar5 = FUN_037107a0(&local_70,uVar1);
  uVar6 = 1;
  if (uVar4 < uVar5) {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

