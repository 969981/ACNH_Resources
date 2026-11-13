
void FUN_011b86f0(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **local_50;
  char *pcStack_48;
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar5 = FUN_011bc490(param_2);
  if (((uVar5 & 1) != 0) && (uVar5 = FUN_011bc490(param_2), (uVar5 & 1) != 0)) {
    pcStack_48 = (char *)FUN_011bb4f0(param_2);
    local_50 = &PTR_LAB_048f9770;
    if (*pcStack_48 == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0273f0a0(&local_50);
      uVar1 = uVar1 ^ 1;
    }
    pcStack_48 = (char *)FUN_011bb6c0(param_2);
    local_50 = &PTR_LAB_048f9770;
    if (*pcStack_48 != '\0') {
      uVar2 = FUN_0273f0a0(&local_50);
      uVar1 = uVar1 | uVar2;
    }
    if ((uVar1 & 1) == 0) {
      pcStack_48 = (char *)FUN_011bb890(param_2);
      local_50 = &PTR_LAB_048f9770;
      if ((*pcStack_48 == '\0') || (iVar3 = FUN_02743000(&local_50), iVar3 == 0)) {
        uVar4 = FUN_011b9fc0(param_2);
        local_50 = (undefined **)CONCAT44(local_50._4_4_,uVar4);
        FUN_011b7fe8(uVar6,&local_50);
      }
    }
  }
  return;
}

