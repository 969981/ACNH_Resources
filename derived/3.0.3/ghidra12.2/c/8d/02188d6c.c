
void FUN_02188d6c(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  long lVar8;
  byte bVar9;
  int iVar10;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  
  puVar3 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "BeyDaily_QuestCount";
  local_70 = puVar1;
  iVar4 = FUN_0274bce0(param_2,&local_70);
  pcStack_58 = "BeyRequireFishSize";
  local_60 = puVar1;
  iVar5 = FUN_0273ea30(&local_60);
  iVar10 = 5;
  if (iVar5 != 3) {
    iVar10 = 3;
  }
  if (iVar4 < iVar10) {
    pcStack_58 = "BeyDaily_QuestCount";
    local_60 = puVar1;
    FUN_0274ca70(param_2,&local_60,1);
  }
  pcStack_68 = "BeyDaily_QuestCount";
  local_70 = puVar1;
  iVar4 = FUN_0274bce0(param_2,&local_70);
  pcStack_58 = "BeyRequireFishSize";
  local_60 = puVar1;
  iVar5 = FUN_0273ea30(&local_60);
  iVar10 = 5;
  if (iVar5 != 3) {
    iVar10 = 3;
  }
  if (iVar4 < iVar10) {
    return;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_02188e84:
    if (7 < *pbVar7) {
LAB_02188e90:
      if (DAT_0537d558 != (long *)0x0) {
        lVar8 = *DAT_0537d558;
        bVar6 = *(byte *)(lVar8 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar6 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
          if (7 < bVar6) {
            puVar2 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar7 = (byte *)(lVar8 + 0x471);
          }
        }
        bVar6 = *pbVar7;
        if (bVar6 < 8) goto LAB_02188f00;
      }
      pbVar7 = &DAT_0548e168;
    }
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar7 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02188e84;
      }
      goto LAB_02188e90;
    }
  }
  bVar6 = *pbVar7;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
LAB_02188f00:
  bVar9 = *param_2;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  if (bVar9 != bVar6) {
    local_60 = puVar3 + 0x10;
    pcStack_58 = "BeyDaily_GetDemo_Clear";
    FUN_0274bfe8(param_2,&local_60,1);
  }
  return;
}

