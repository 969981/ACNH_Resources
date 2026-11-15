
bool FUN_0231fc94(long param_1)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR_DAT_04bb4718;
  bVar2 = *(byte *)(lVar7 + 9);
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  if (7 < bVar2) {
    pbVar4 = PTR_DAT_04bb32e0;
    if (lVar8 == 0) {
LAB_0231fcfc:
      if (7 < *pbVar4) {
LAB_0231fd08:
        if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
          lVar9 = **(long **)PTR_DAT_04bb27d0;
          bVar2 = *(byte *)(lVar9 + 0x473);
          pbVar4 = PTR_DAT_04bb5038;
          if ((long)(char)bVar2 != 0xffffffffffffffff) {
            puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
            if (7 < bVar2) {
              puVar1 = (uint *)(lVar9 + 0x48);
            }
            if ((*puVar1 & 8) != 0) {
              pbVar4 = (byte *)(lVar9 + 0x471);
            }
          }
          bVar2 = *pbVar4;
          if (bVar2 < 8) goto LAB_0231fd78;
        }
        pbVar4 = PTR_DAT_04bb5038;
      }
    }
    else {
      if (*(int *)(lVar8 + 0x15c) != 0) {
        pbVar4 = (byte *)(lVar8 + 0x158);
      }
      if (7 < *pbVar4) {
        if (*(int *)(lVar8 + 0x15c) != 0) {
          pbVar4 = (byte *)(lVar7 + 0x11a5);
          goto LAB_0231fcfc;
        }
        goto LAB_0231fd08;
      }
    }
    bVar2 = *pbVar4;
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
  }
LAB_0231fd78:
  pbVar4 = PTR_DAT_04bb32e0;
  if (lVar8 == 0) {
LAB_0231fdc4:
    if (7 < *pbVar4) {
LAB_0231fdd0:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar7 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar7 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar4 = (byte *)(lVar7 + 0x471);
          }
        }
        bVar5 = *pbVar4;
        if (bVar5 < 8) goto LAB_0231fe40;
      }
      pbVar4 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar4) {
      if (*(int *)(lVar8 + 0x15c) != 0) {
        pbVar4 = (byte *)(lVar7 + 0x11a5);
        goto LAB_0231fdc4;
      }
      goto LAB_0231fdd0;
    }
  }
  bVar5 = *pbVar4;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
LAB_0231fe40:
  bVar6 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar2) {
    bVar2 = 0xff;
    bVar3 = bVar6;
    if (7 < bVar6) {
      bVar3 = 0xff;
    }
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (bVar3 == bVar5) {
      return true;
    }
  }
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  return bVar2 == bVar6;
}

