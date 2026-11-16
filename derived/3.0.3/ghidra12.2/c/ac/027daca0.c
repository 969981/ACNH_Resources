
void FUN_027daca0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  undefined *local_70;
  char *pcStack_68;
  
  puVar4 = PTR_DAT_04bc2a20;
  puVar3 = PTR_DAT_04bc27f0;
  iVar9 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    pbVar8 = (byte *)(param_1 + (long)iVar9 * 0x13230);
    uVar7 = (ulong)*pbVar8;
    if (((uVar7 < 0x23) && (pbVar8[1] <= (byte)puVar3[uVar7])) &&
       ((*(uint *)(puVar4 + uVar7 * 4) >> (ulong)(pbVar8[1] & 0x1f) & 1) != 0)) {
      lVar2 = param_1 + (long)iVar9 * 0x13230 + 0x1267c;
      pcStack_68 = "MoveInCompletion";
      local_70 = puVar1;
      iVar6 = FUN_02749340(lVar2,&local_70);
      if (iVar6 != 0) {
        if (*(char *)(param_1 + (long)iVar9 * 0x13230 + 0x1315b) == '\0') {
          local_70 = PTR_DAT_04bb2020 + 0x10;
          pcStack_68 = "EquipChristmasWear";
          iVar6 = FUN_02749340(lVar2,&local_70);
          bVar5 = iVar6 != 0;
        }
        else {
          bVar5 = false;
        }
        FUN_026b90a0(pbVar8,bVar5 ^ 1);
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 10);
  return;
}

