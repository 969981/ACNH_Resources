
bool FUN_02204f20(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  undefined *local_30;
  char *pcStack_28;
  byte local_4 [4];
  
  iVar5 = FUN_02204720();
  uVar2 = *param_1;
  if (uVar2 - 1 < 6) {
    return *param_1 < 7 && (int)*param_1 <= iVar5;
  }
  if (uVar2 == 0) {
LAB_02205084:
    bVar4 = true;
  }
  else {
    if (uVar2 == 7) {
      lVar7 = *(long *)PTR_DAT_04bb39b0;
      pbVar6 = PTR_DAT_04bb32e0;
      if (lVar7 == 0) {
LAB_02204fc8:
        if (*pbVar6 < 8) goto LAB_02205040;
LAB_02204fd4:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02205038:
          pbVar6 = PTR_DAT_04bb5038;
          goto LAB_02205040;
        }
        lVar7 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x471);
          }
        }
        local_4[0] = *pbVar6;
        if (7 < local_4[0]) goto LAB_02205038;
      }
      else {
        if (*(int *)(lVar7 + 0x15c) != 0) {
          pbVar6 = (byte *)(lVar7 + 0x158);
        }
        if (7 < *pbVar6) {
          if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_02204fc8;
          }
          goto LAB_02204fd4;
        }
LAB_02205040:
        local_4[0] = *pbVar6;
        if (7 < local_4[0]) goto LAB_0220508c;
      }
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "AlwJuneBrideRemakeOpenFlag";
      iVar5 = FUN_0274bce0(local_4,&local_30);
      if (iVar5 != 0) goto LAB_02205084;
    }
LAB_0220508c:
    bVar4 = false;
  }
  return bVar4;
}

