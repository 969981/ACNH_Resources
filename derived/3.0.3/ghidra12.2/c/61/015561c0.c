
void FUN_015561c0(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *local_40;
  char *pcStack_38;
  undefined4 local_14;
  
  if (DAT_05574040 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return;
    }
    lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar3 == 0) {
      return;
    }
  }
  if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar5 == (undefined8 *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)*puVar5)();
    uVar4 = uVar4 & 0xffffffff;
  }
  puVar1 = PTR_DAT_04bb2020;
  local_14 = 0;
  lVar6 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8);
  if (*(long *)(lVar6 + 0x1e33b0) == 0 && *(long *)(lVar6 + 0x1e33b8) == 0) {
LAB_015562a4:
    local_14 = 1;
    if (*(long *)(lVar6 + 0x1e33f8) != 0 || *(long *)(lVar6 + 0x1e3400) != 0) {
      local_40 = puVar1 + 0x10;
      pcStack_38 = "NnpcFinishHintTalk";
      iVar2 = FUN_0274ce10(&local_14,&local_40);
      if (iVar2 != 0) goto LAB_01556478;
      lVar6 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8);
    }
    local_14 = 2;
    if (*(long *)(lVar6 + 0x1e3440) != 0 || *(long *)(lVar6 + 0x1e3448) != 0) {
      local_40 = puVar1 + 0x10;
      pcStack_38 = "NnpcFinishHintTalk";
      iVar2 = FUN_0274ce10(&local_14,&local_40);
      if (iVar2 != 0) goto LAB_01556478;
      lVar6 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8);
    }
    local_14 = 3;
    if (*(long *)(lVar6 + 0x1e3488) != 0 || *(long *)(lVar6 + 0x1e3490) != 0) {
      local_40 = puVar1 + 0x10;
      pcStack_38 = "NnpcFinishHintTalk";
      iVar2 = FUN_0274ce10(&local_14,&local_40);
      if (iVar2 != 0) goto LAB_01556478;
      lVar6 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8);
    }
    local_14 = 4;
    if (*(long *)(lVar6 + 0x1e34d0) != 0 || *(long *)(lVar6 + 0x1e34d8) != 0) {
      local_40 = puVar1 + 0x10;
      pcStack_38 = "NnpcFinishHintTalk";
      iVar2 = FUN_0274ce10(&local_14,&local_40);
      if (iVar2 != 0) goto LAB_01556478;
      lVar6 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8);
    }
    local_14 = 5;
    if (*(long *)(lVar6 + 0x1e3518) != 0 || *(long *)(lVar6 + 0x1e3520) != 0) {
      local_40 = puVar1 + 0x10;
      pcStack_38 = "NnpcFinishHintTalk";
      iVar2 = FUN_0274ce10(&local_14,&local_40);
      if (iVar2 != 0) goto LAB_01556478;
      lVar6 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8);
    }
    local_14 = 6;
    if (*(long *)(lVar6 + 0x1e3560) != 0 || *(long *)(lVar6 + 0x1e3568) != 0) {
      local_40 = puVar1 + 0x10;
      pcStack_38 = "NnpcFinishHintTalk";
      iVar2 = FUN_0274ce10(&local_14,&local_40);
      if (iVar2 != 0) goto LAB_01556478;
      lVar6 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8);
    }
    local_14 = 7;
    if (*(long *)(lVar6 + 0x1e35a8) == 0 && *(long *)(lVar6 + 0x1e35b0) == 0)
    goto joined_r0x015564c8;
    local_40 = puVar1 + 0x10;
    pcStack_38 = "NnpcFinishHintTalk";
    iVar2 = FUN_0274ce10(&local_14,&local_40);
    if (iVar2 == 0) goto joined_r0x015564c8;
  }
  else {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "NnpcFinishHintTalk";
    iVar2 = FUN_0274ce10(&local_14,&local_40);
    if (iVar2 == 0) {
      lVar6 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8);
      goto LAB_015562a4;
    }
  }
LAB_01556478:
  local_40 = puVar1 + 0x10;
  pcStack_38 = "AllowNpcInterestActivity";
  FUN_0273f3c4(&local_40,1);
joined_r0x015564c8:
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

