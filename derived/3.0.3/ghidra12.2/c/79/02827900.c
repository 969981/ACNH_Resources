
void FUN_02827900(long param_1,byte *param_2)

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
  undefined8 uVar10;
  long lVar11;
  undefined *local_58;
  char *local_50;
  undefined8 uStack_48;
  byte local_24 [4];
  
  local_24[0] = *param_2;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar7 = FUN_02583354(DAT_055021a0,local_24,1);
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
  lVar11 = 0;
  bVar4 = false;
  do {
    uVar3 = *(uint *)(param_1 + 0x46f70 + lVar11 * 4);
    pcVar2 = (char *)(param_1 + 0x110) + (ulong)uVar3 * 0x3c8;
    if (299 < uVar3) {
      pcVar2 = (char *)(param_1 + 0x110);
    }
    if (*pcVar2 == '\0') {
      if (!bVar4) goto LAB_02827aa4;
      goto LAB_028279e0;
    }
    lVar11 = lVar11 + 1;
    bVar4 = (bool)(*pcVar2 == '\x03' | bVar4);
  } while (lVar11 != 300);
  if (bVar4) {
    lVar11 = 300;
LAB_028279e0:
    if ((*(long *)(lVar7 + 0x18320) != 0) &&
       (plVar9 = *(long **)(*(long *)(lVar7 + 0x18320) + 0x20), plVar9 != (long *)0x0)) {
      local_58 = (undefined *)*plVar1;
      local_50 = *(char **)(lVar7 + 0x18308);
      uStack_48 = 0x1000;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
    }
    puVar5 = PTR_DAT_04bb2020;
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "PostHasNewMessage";
    FUN_0274c120(*(long *)(lVar7 + 0x18308) + *plVar1,&local_58,1,param_2);
    if (99 < (uint)lVar11) {
      if ((*(long *)(lVar7 + 0x18320) != 0) &&
         (plVar9 = *(long **)(*(long *)(lVar7 + 0x18320) + 0x20), plVar9 != (long *)0x0)) {
        local_58 = (undefined *)*plVar1;
        local_50 = *(char **)(lVar7 + 0x18308);
        uStack_48 = 0x1000;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
      }
      uVar10 = 1;
      lVar11 = *(long *)(lVar7 + 0x18308) + *plVar1;
      goto LAB_02827b64;
    }
  }
  else {
LAB_02827aa4:
    if ((*(long *)(lVar7 + 0x18320) != 0) &&
       (plVar9 = *(long **)(*(long *)(lVar7 + 0x18320) + 0x20), plVar9 != (long *)0x0)) {
      local_58 = (undefined *)*plVar1;
      local_50 = *(char **)(lVar7 + 0x18308);
      uStack_48 = 0x1000;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
    }
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "PostHasNewMessage";
    FUN_0274c120(*(long *)(lVar7 + 0x18308) + *plVar1,&local_58,0,param_2);
  }
  if ((*(long *)(lVar7 + 0x18320) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar7 + 0x18320) + 0x20), plVar9 != (long *)0x0)) {
    local_58 = (undefined *)*plVar1;
    local_50 = *(char **)(lVar7 + 0x18308);
    uStack_48 = 0x1000;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
  }
  uVar10 = 0;
  lVar11 = *(long *)(lVar7 + 0x18308) + *plVar1;
  puVar5 = PTR_DAT_04bb2020;
LAB_02827b64:
  local_58 = puVar5 + 0x10;
  local_50 = "LettersNumForTips";
  FUN_0274c120(lVar11,&local_58,uVar10,param_2);
  if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x18320) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x18320) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

