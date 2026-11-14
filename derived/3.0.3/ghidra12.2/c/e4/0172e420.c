
void FUN_0172e420(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined *local_40;
  char *pcStack_38;
  
  lVar8 = *param_1;
  local_40 = (undefined *)CONCAT44(local_40._4_4_,5);
  puVar2 = local_40;
  local_40._0_4_ = 5;
  lVar3 = *(long *)(lVar8 + 0x1138);
  if (lVar3 == 0) {
    puVar6 = &DAT_04c931a0;
  }
  else {
    uVar7 = 0;
    if (*(long *)(lVar3 + 0x78) != 0) {
      uVar7 = *(uint *)(*(long *)(lVar3 + 0x78) + 0x18);
    }
    if (uVar7 < 6) {
      local_40._0_4_ = 0;
    }
    if (*(uint *)(lVar3 + 0x80) <= (uint)local_40) {
      local_40._0_4_ = 0;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar3 + 0x88) + (long)(int)(uint)local_40 * 0xe8 + 0x60);
  }
  if (*(char *)puVar6[1] == '\0') {
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  if ((param_2 & 1) == 0) {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,5);
    puVar2 = local_40;
    local_40._0_4_ = 5;
    if (lVar3 != 0) {
      uVar7 = 0;
      if (*(long *)(lVar3 + 0x78) != 0) {
        uVar7 = *(uint *)(*(long *)(lVar3 + 0x78) + 0x18);
      }
      if (uVar7 < 6) {
        local_40._0_4_ = 0;
      }
      if (*(uint *)(lVar3 + 0x80) <= (uint)local_40) {
        local_40._0_4_ = 0;
      }
      lVar3 = *(long *)(lVar3 + 0x88) + (long)(int)(uint)local_40 * 0xe8;
      plVar9 = (long *)(lVar3 + 0x60);
      local_40 = puVar2;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      (**(code **)(*plVar9 + 0x18))(plVar9);
      pcVar5 = *(char **)(lVar3 + 0x68);
      if (pcVar5 == "EyeWink") {
        return;
      }
      puVar2 = local_40;
      if (*pcVar5 == 'E') {
        uVar1 = 0;
        do {
          uVar4 = uVar1;
          if ((uVar4 == 0x80000) || (pcVar5[uVar4 + 1] != "EyeWink"[uVar4 + 1])) goto LAB_0172e550;
          uVar1 = uVar4 + 1;
        } while (pcVar5[uVar4 + 1] != '\0');
        if (uVar4 < 0x80000) {
          return;
        }
      }
    }
  }
LAB_0172e550:
  local_40 = puVar2;
  FUN_01707f58(lVar8,0,5,0);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "EyeWink";
  FUN_01707310(lVar8,&local_40,0,5,0);
  FUN_01707750(lVar8,&local_40);
  return;
}

