
void FUN_03126030(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  undefined **local_50;
  char *pcStack_48;
  long local_28;
  
  local_28 = 0;
  (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(*(long **)(param_1 + 0x58),&local_28);
  lVar1 = local_28 + 0xb8;
  pcStack_48 = (char *)FUN_00364d70(lVar1,"SldierButtonRoot");
  local_50 = &PTR_LAB_048f9770;
  if (*pcStack_48 == '\0') {
LAB_031260dc:
    FUN_0386fd70(&local_50);
    uVar3 = FUN_03c688b0(param_2,&local_50);
  }
  else {
    if (*pcStack_48 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar2 = lVar5 + 1, pcStack_48[lVar2] == '\0')) goto LAB_031260dc;
        lVar5 = lVar5 + 1;
      } while (pcStack_48[lVar2] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&local_50);
  }
  *(undefined8 *)(param_1 + 0x310) = uVar3;
  pcStack_48 = (char *)FUN_00364d70(lVar1,"SldierButtonSize");
  local_50 = &PTR_LAB_048f9770;
  if (*pcStack_48 == '\0') {
LAB_03126150:
    FUN_0386fd70(&local_50);
    uVar3 = FUN_03c688b0(param_2,&local_50);
  }
  else {
    if (*pcStack_48 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar2 = lVar5 + 1, pcStack_48[lVar2] == '\0')) goto LAB_03126150;
        lVar5 = lVar5 + 1;
      } while (pcStack_48[lVar2] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&local_50);
  }
  *(undefined8 *)(param_1 + 0x318) = uVar3;
  pcStack_48 = (char *)FUN_00364d70(lVar1,"SlideArea");
  local_50 = &PTR_LAB_048f9770;
  if (*pcStack_48 == '\0') {
LAB_031261cc:
    FUN_0386fd70(&local_50);
    uVar3 = FUN_03c688b0(param_2,&local_50);
  }
  else {
    if (*pcStack_48 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar2 = lVar5 + 1, pcStack_48[lVar2] == '\0')) goto LAB_031261cc;
        lVar5 = lVar5 + 1;
      } while (pcStack_48[lVar2] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&local_50);
  }
  *(undefined8 *)(param_1 + 800) = uVar3;
  pcStack_48 = (char *)FUN_00364e30(lVar1,"Select");
  local_50 = &PTR_LAB_048f9770;
  uVar3 = FUN_03c68d44(param_2,&local_50,PTR_PTR_04bb2238);
  *(undefined8 *)(param_1 + 0x328) = uVar3;
  pcVar4 = (char *)FUN_00364e30(lVar1,"SlideRate");
  if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
    local_50 = &PTR_LAB_048f9770;
    pcStack_48 = pcVar4;
    uVar3 = FUN_03c68d44(param_2,&local_50,PTR_PTR_04bb2238);
    *(undefined8 *)(param_1 + 0x330) = uVar3;
  }
  FUN_03d83a48(param_1,param_2,param_3);
  return;
}

