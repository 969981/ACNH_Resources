
void FUN_0121bc60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_50;
  char *pcStack_48;
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bb46b0;
  puVar1 = PTR_DAT_04bb2020;
  local_24 = 0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
LAB_0121bd24:
    local_24 = 2;
    if (*(long *)puVar2 == 0) goto LAB_0121bdd4;
    lVar3 = FUN_026eec4c(*(long *)puVar2,2);
    if (lVar3 != 0) {
      pcStack_48 = "PrayStarToday";
      local_50 = puVar1 + 0x10;
      FUN_0274d104(&local_24,&local_50,0);
      pcStack_48 = "StarPieceGrowCount";
      local_50 = puVar1 + 0x10;
      FUN_0274d104(&local_24,&local_50,0);
    }
    local_24 = 3;
    if (*(long *)puVar2 != 0) {
      lVar3 = FUN_026eec4c(*(long *)puVar2,3);
      if (lVar3 != 0) {
        pcStack_48 = "PrayStarToday";
        local_50 = puVar1 + 0x10;
        FUN_0274d104(&local_24,&local_50,0);
        pcStack_48 = "StarPieceGrowCount";
        local_50 = puVar1 + 0x10;
        FUN_0274d104(&local_24,&local_50,0);
      }
      goto LAB_0121bdd4;
    }
  }
  else {
    lVar3 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,0);
    if (lVar3 != 0) {
      pcStack_48 = "PrayStarToday";
      local_50 = puVar1 + 0x10;
      FUN_0274d104(&local_24,&local_50,0);
      pcStack_48 = "StarPieceGrowCount";
      local_50 = puVar1 + 0x10;
      FUN_0274d104(&local_24,&local_50,0);
    }
    local_24 = 1;
    if (*(long *)puVar2 != 0) {
      lVar3 = FUN_026eec4c(*(long *)puVar2,1);
      if (lVar3 != 0) {
        pcStack_48 = "PrayStarToday";
        local_50 = puVar1 + 0x10;
        FUN_0274d104(&local_24,&local_50,0);
        pcStack_48 = "StarPieceGrowCount";
        local_50 = puVar1 + 0x10;
        FUN_0274d104(&local_24,&local_50,0);
      }
      goto LAB_0121bd24;
    }
LAB_0121bdd4:
    local_24 = 4;
    if (*(long *)puVar2 != 0) {
      lVar3 = FUN_026eec4c(*(long *)puVar2,4);
      if (lVar3 != 0) {
        pcStack_48 = "PrayStarToday";
        local_50 = puVar1 + 0x10;
        FUN_0274d104(&local_24,&local_50,0);
        pcStack_48 = "StarPieceGrowCount";
        local_50 = puVar1 + 0x10;
        FUN_0274d104(&local_24,&local_50,0);
      }
      local_24 = 5;
      if (*(long *)puVar2 == 0) goto LAB_0121bf34;
      lVar3 = FUN_026eec4c(*(long *)puVar2,5);
      if (lVar3 != 0) {
        pcStack_48 = "PrayStarToday";
        local_50 = puVar1 + 0x10;
        FUN_0274d104(&local_24,&local_50,0);
        pcStack_48 = "StarPieceGrowCount";
        local_50 = puVar1 + 0x10;
        FUN_0274d104(&local_24,&local_50,0);
      }
    }
  }
  local_24 = 6;
  if (*(long *)puVar2 != 0) {
    lVar3 = FUN_026eec4c(*(long *)puVar2,6);
    if (lVar3 != 0) {
      pcStack_48 = "PrayStarToday";
      local_50 = puVar1 + 0x10;
      FUN_0274d104(&local_24,&local_50,0);
      pcStack_48 = "StarPieceGrowCount";
      local_50 = puVar1 + 0x10;
      FUN_0274d104(&local_24,&local_50,0);
    }
    local_24 = 7;
    if ((*(long *)puVar2 != 0) && (lVar3 = FUN_026eec4c(*(long *)puVar2,7), lVar3 != 0)) {
      pcStack_48 = "PrayStarToday";
      local_50 = puVar1 + 0x10;
      FUN_0274d104(&local_24,&local_50,0);
      pcStack_48 = "StarPieceGrowCount";
      local_50 = puVar1 + 0x10;
      FUN_0274d104(&local_24,&local_50,0);
    }
  }
LAB_0121bf34:
  local_50 = puVar1 + 0x10;
  pcStack_48 = "VisitorPrayStarToday";
  FUN_0273f3c4(&local_50,0);
  return;
}

