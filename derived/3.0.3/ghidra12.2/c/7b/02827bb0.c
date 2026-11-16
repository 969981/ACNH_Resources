
void FUN_02827bb0(long param_1,undefined4 param_2)

{
  long *plVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 local_4c;
  undefined *local_48;
  char *local_40;
  undefined8 uStack_38;
  
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  local_4c = param_2;
  lVar7 = FUN_026eec4c();
  if (lVar7 == 0) {
    return;
  }
  plVar1 = (long *)(lVar7 + 0x18300);
  if ((*(long *)(lVar7 + 0x18320) == 0) ||
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x18320) + 0x10), puVar8 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)*puVar8)();
    uVar6 = uVar6 ^ 1;
  }
  lVar10 = 0;
  bVar4 = false;
  do {
    uVar3 = *(uint *)(param_1 + 0x46f70 + lVar10 * 4);
    pcVar2 = (char *)(param_1 + 0x110) + (ulong)uVar3 * 0x3c8;
    if (299 < uVar3) {
      pcVar2 = (char *)(param_1 + 0x110);
    }
    if (*pcVar2 == '\0') {
      if (!bVar4) goto LAB_02827d40;
      goto LAB_02827c70;
    }
    lVar10 = lVar10 + 1;
    bVar4 = (bool)(*pcVar2 == '\x03' | bVar4);
  } while (lVar10 != 300);
  if (bVar4) {
    lVar10 = 300;
LAB_02827c70:
    if ((*(long *)(lVar7 + 0x18320) != 0) &&
       (plVar9 = *(long **)(*(long *)(lVar7 + 0x18320) + 0x20), plVar9 != (long *)0x0)) {
      local_48 = (undefined *)*plVar1;
      local_40 = *(char **)(lVar7 + 0x18308);
      uStack_38 = 0x1000;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_48);
    }
    puVar5 = PTR_DAT_04bb2020;
    local_48 = PTR_DAT_04bb2020 + 0x10;
    local_40 = "PostHasNewMessage";
    FUN_0274d230(*(long *)(lVar7 + 0x18308) + *plVar1,&local_48,1,&local_4c);
    if (99 < (uint)lVar10) {
      if ((*(long *)(lVar7 + 0x18320) != 0) &&
         (plVar9 = *(long **)(*(long *)(lVar7 + 0x18320) + 0x20), plVar9 != (long *)0x0)) {
        local_48 = (undefined *)*plVar1;
        local_40 = *(char **)(lVar7 + 0x18308);
        uStack_38 = 0x1000;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_48);
      }
      local_48 = puVar5 + 0x10;
      local_40 = "LettersNumForTips";
      FUN_0274d230(*(long *)(lVar7 + 0x18308) + *plVar1,&local_48,1,&local_4c);
      goto joined_r0x02827e08;
    }
  }
  else {
LAB_02827d40:
    if ((*(long *)(lVar7 + 0x18320) != 0) &&
       (plVar9 = *(long **)(*(long *)(lVar7 + 0x18320) + 0x20), plVar9 != (long *)0x0)) {
      local_48 = (undefined *)*plVar1;
      local_40 = *(char **)(lVar7 + 0x18308);
      uStack_38 = 0x1000;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_48);
    }
    local_48 = PTR_DAT_04bb2020 + 0x10;
    local_40 = "PostHasNewMessage";
    FUN_0274d230(*(long *)(lVar7 + 0x18308) + *plVar1,&local_48,0,&local_4c);
  }
  if ((*(long *)(lVar7 + 0x18320) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar7 + 0x18320) + 0x20), plVar9 != (long *)0x0)) {
    local_48 = (undefined *)*plVar1;
    local_40 = *(char **)(lVar7 + 0x18308);
    uStack_38 = 0x1000;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_48);
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  local_40 = "LettersNumForTips";
  FUN_0274d230(*(long *)(lVar7 + 0x18308) + *plVar1,&local_48,0,&local_4c);
joined_r0x02827e08:
  if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x18320) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x18320) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

