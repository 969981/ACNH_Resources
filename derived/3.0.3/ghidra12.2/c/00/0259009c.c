
void FUN_0259009c(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  byte local_74 [8];
  int local_6c;
  undefined *local_68;
  char *local_60;
  long local_58;
  undefined8 local_4c;
  undefined4 local_44;
  undefined *local_40;
  char *pcStack_38;
  
  local_4c = 0x3a00000039;
  local_44 = 0x3b;
  FUN_02602950(param_1,*(undefined4 *)((long)&local_4c + (long)*(int *)(param_1 + 0x28) * 4));
  iVar8 = *(int *)(param_1 + 0x28);
  if (iVar8 == 0) {
    local_68 = PTR_DAT_04bb2020 + 0x10;
    local_60 = "GetCakeNum";
    if (*(long *)(param_1 + 8) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_026054d0(*(long *)(param_1 + 8),&local_68,(long)*param_2);
      iVar8 = *(int *)(param_1 + 0x28);
    }
  }
  if (1 < iVar8 - 1U) {
    return;
  }
  FUN_02603510(param_1,param_2[1]);
  FUN_026035e0(param_1,param_2[1]);
  puVar2 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x28) != 2) {
    return;
  }
  local_58 = 0;
  local_68 = PTR_DAT_04bc0510 + 0x10;
  puVar6 = (ulong *)(param_2 + 2);
  local_60 = (char *)*puVar6;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(puVar6);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (uVar3 < *(uint *)(lVar9 + 0x1d8)) {
        lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8);
        if (lVar9 != 0) {
          local_58 = lVar9;
        }
      }
    }
  }
  uVar5 = FUN_01b032d0(&local_68);
  puVar2 = PTR_DAT_04bb2020;
  if ((((uVar5 & 1) == 0) || (uVar5 = FUN_01b032d0(&local_68), (uVar5 & 1) == 0)) ||
     (((ulong)local_60 & 0x3000000) == 0)) {
    local_40 = puVar2 + 0x10;
    pcStack_38 = "IsWrapping";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,0);
    }
  }
  else {
    puVar1 = puVar2 + 0x10;
    pcStack_38 = "IsWrapping";
    local_40 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,1);
    }
    local_6c = FUN_01b036fc(&local_68);
    pcStack_38 = "WrappingPaperColor";
    local_40 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)local_6c);
    }
    FUN_01b079ec(local_74,&local_68);
    puVar6 = (ulong *)local_74;
  }
  pcStack_38 = "PresentItem";
  local_40 = puVar2 + 0x10;
  uVar4 = FUN_0277d6c4(puVar6);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar4);
  }
  if ((*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 1) &&
     (*(byte *)(*(long *)PTR_DAT_04bb39b0 + 0x160) - 1 < 0xfe)) {
    uVar7 = 1;
    goto LAB_02590380;
  }
  if ((1 < *(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10)) &&
     (lVar9 = **(long **)PTR_DAT_04bb27d0, 1 < *(byte *)(lVar9 + 0x476))) {
    if ((*(int *)(lVar9 + 0x508) != 0) && (*(char *)(lVar9 + 0x55d) != '\0')) {
      uVar7 = 2;
      goto LAB_02590380;
    }
    if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0) {
      uVar7 = 3;
      if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0) {
        uVar7 = 0;
      }
      goto LAB_02590380;
    }
  }
  uVar7 = 0;
LAB_02590380:
  local_40 = puVar2 + 0x10;
  pcStack_38 = "MultiPlayStatus";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar7);
  }
  FUN_02603730(param_1);
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_74[0] = *(byte *)(param_1 + 0x18);
    uVar5 = FUN_02669430(local_74);
    uVar5 = uVar5 & 1;
  }
  else {
    uVar5 = 0;
  }
  local_40 = puVar2 + 0x10;
  pcStack_38 = "IsInMyVillage";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_40,uVar5);
  }
  return;
}

