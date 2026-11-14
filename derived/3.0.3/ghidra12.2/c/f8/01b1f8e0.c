
bool FUN_01b1f8e0(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined *local_30;
  char *pcStack_28;
  
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  if (*(char *)(param_1 + 0x32) == '\x06') {
    iVar5 = (int)*(char *)(param_1 + 0x33);
    bVar4 = SBORROW4(iVar5,0x1d);
    bVar2 = iVar5 + -0x1d < 0;
    bVar3 = iVar5 == 0x1d;
  }
  if (!bVar3 && bVar2 == bVar4) {
    return false;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "SpnFirstTalkedAtCommuneIsland";
  local_30 = puVar1;
  iVar5 = FUN_0274bbb0(*(undefined8 *)(param_1 + 0x10),&local_30);
  if (iVar5 < 1) {
    bVar2 = false;
  }
  else {
    pcStack_28 = "AlwJuneBrideDayCount";
    local_30 = puVar1;
    iVar5 = FUN_0274bbb0(*(undefined8 *)(param_1 + 0x10),&local_30);
    bVar2 = iVar5 < 4;
  }
  return bVar2;
}

