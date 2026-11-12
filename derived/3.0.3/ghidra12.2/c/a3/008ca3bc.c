
void FUN_008ca3bc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "SchoolEventTeacherPosX";
  local_40 = puVar1;
  iVar2 = FUN_02758850(&local_40);
  pcStack_38 = "SchoolEventTeacherPosZ";
  local_40 = puVar1;
  iVar3 = FUN_02758850(&local_40);
  lVar4 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar4 == 0) {
    fVar5 = 40.0;
    fVar6 = 40.0;
  }
  else {
    fVar5 = *(float *)(lVar4 + 0xd74);
    fVar6 = *(float *)(lVar4 + 0xd7c);
  }
  fVar6 = ((float)iVar3 * 5.0 + 2.5) - fVar6;
  if (((float)iVar2 * 5.0 + 2.5) - fVar5 <= 0.0) {
    if (fVar6 <= 0.0) {
      iVar2 = 0x60000000;
    }
    else {
      iVar2 = -0x60000000;
    }
  }
  else if (fVar6 <= 0.0) {
    iVar2 = 0x20000000;
  }
  else {
    iVar2 = -0x20000000;
  }
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + iVar2;
  return;
}

