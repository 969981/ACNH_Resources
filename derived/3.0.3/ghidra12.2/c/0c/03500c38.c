
void FUN_03500c38(long param_1,ulong param_2)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *local_50;
  undefined4 local_48;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x220) + 0x5c0);
  if (lVar5 == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(lVar5 + 0x230);
  plVar8 = (long *)*puVar6;
  plVar9 = (long *)puVar6[1 < *(uint *)(lVar5 + 0x228)];
  plVar10 = (long *)puVar6[(ulong)(2 < *(uint *)(lVar5 + 0x228)) * 2];
  if ((plVar9 == (long *)0x0 || plVar10 == (long *)0x0) || plVar8 == (long *)0x0) {
    return;
  }
  pcVar1 = (char *)(param_1 + 0x1ce18);
  if (1 < *(int *)(param_1 + 0x1ce20) - 3U) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,*(int *)(param_1 + 0x1ce20));
  }
  uVar4 = FUN_01d77c78(param_1 + 0x1ce30);
  if (((uVar4 & 1) == 0) ||
     ((iVar3 = FUN_01d78420(param_1 + 0x1ce30,pcVar1), iVar3 != 0 && (iVar3 != 3)))) {
    *pcVar1 = '\0';
LAB_03500d74:
    puVar2 = PTR_DAT_04bc4e68 + 0x10;
    local_48 = 6;
    local_50 = puVar2;
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_50);
    (**(code **)(plVar9[3] + 0x1b8))(plVar9[1]);
    if ((param_2 & 1) == 0) {
      local_48 = 1;
      local_50 = puVar2;
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_50);
      lVar7 = plVar10[3];
      lVar5 = plVar10[1];
LAB_03500e3c:
      (**(code **)(lVar7 + 400))(0x3f800000,lVar5);
      goto LAB_03500e48;
    }
    local_48 = 7;
    local_50 = puVar2;
    (**(code **)(*plVar10 + 0x18))(plVar10,&local_50);
    lVar7 = plVar10[3];
    lVar5 = plVar10[1];
  }
  else {
    if (*pcVar1 == '\0') goto LAB_03500d74;
    puVar2 = PTR_DAT_04bc4e68 + 0x10;
    local_48 = 6;
    local_50 = puVar2;
    (**(code **)(*plVar10 + 0x18))(plVar10,&local_50);
    (**(code **)(plVar10[3] + 0x1b8))(plVar10[1]);
    if ((param_2 & 1) == 0) {
      local_48 = 1;
      local_50 = puVar2;
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_50);
      lVar7 = plVar9[3];
      lVar5 = plVar9[1];
      goto LAB_03500e3c;
    }
    local_48 = 7;
    local_50 = puVar2;
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_50);
    lVar7 = plVar9[3];
    lVar5 = plVar9[1];
  }
  (**(code **)(lVar7 + 0x1c0))(lVar5);
LAB_03500e48:
  if (*(int *)(param_1 + 0x1ce20) == 4) {
    local_50 = PTR_DAT_04bc4f00 + 0x10;
    local_48 = 0x14;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
    uVar11 = 0x3f800000;
  }
  else {
    local_50 = PTR_DAT_04bc4f00 + 0x10;
    local_48 = 0x14;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
    uVar11 = 0;
  }
  (**(code **)(plVar8[3] + 0x158))(uVar11,plVar8[1]);
  return;
}

