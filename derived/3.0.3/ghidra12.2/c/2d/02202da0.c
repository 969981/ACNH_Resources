
void FUN_02202da0(undefined4 *param_1,char *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  char cVar9;
  long lVar10;
  uint uVar11;
  undefined *local_48;
  char *pcStack_40;
  byte local_34 [4];
  
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar10 == 0) {
LAB_02202e1c:
    if (*pbVar8 < 8) goto LAB_02202e94;
LAB_02202e28:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02202e8c:
      pbVar8 = PTR_DAT_04bb5038;
      goto LAB_02202e94;
    }
    lVar10 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar10 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar2 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar8 = (byte *)(lVar10 + 0x471);
      }
    }
    local_34[0] = *pbVar8;
    if (7 < local_34[0]) goto LAB_02202e8c;
  }
  else {
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar10 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02202e1c;
      }
      goto LAB_02202e28;
    }
LAB_02202e94:
    local_34[0] = *pbVar8;
    if (7 < local_34[0]) {
      return;
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "AlwJuneBrideDayCount";
  local_48 = puVar1;
  iVar5 = FUN_0274bce0(local_34,&local_48);
  pcStack_40 = "AlwJuneBrideQuestClearFlag";
  local_48 = puVar1;
  iVar6 = FUN_0274bce0(local_34,&local_48);
  if (*(long *)PTR_DAT_04bb5ce0 != 0) {
    uVar7 = 0;
    if (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5c) == '\0') {
      cVar9 = '\0';
      goto joined_r0x02202f50;
    }
    uVar4 = iVar5 - (uint)(iVar6 != 0);
    if (-1 < (int)uVar4) {
      uVar11 = uVar4 >> 1;
      uVar7 = 1;
      if ((uVar4 & 1) != 0) {
        uVar7 = 2;
      }
      if (1 < uVar11) {
        uVar11 = 2;
      }
      cVar9 = (char)uVar11 + '\x01';
      goto joined_r0x02202f50;
    }
  }
  uVar7 = 0;
  cVar9 = '\0';
joined_r0x02202f50:
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uVar7;
  }
  if (param_2 != (char *)0x0) {
    *param_2 = cVar9;
  }
  return;
}

