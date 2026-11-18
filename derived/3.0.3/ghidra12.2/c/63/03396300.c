
bool FUN_03396300(byte *param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint *puVar5;
  long lVar6;
  undefined1 local_3c [12];
  
  lVar6 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(local_3c,1,1,1,0);
  pbVar3 = (byte *)(lVar6 + 0xc);
  if (*pbVar3 < 8) {
    bVar4 = *param_1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (*pbVar3 != bVar4) goto LAB_03396368;
LAB_033963e0:
    puVar5 = (uint *)(pbVar3 + 4);
  }
  else {
LAB_03396368:
    pbVar3 = (byte *)(lVar6 + 0x14);
    if (*pbVar3 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar3 == bVar4) goto LAB_033963e0;
    }
    pbVar3 = (byte *)(lVar6 + 0x1c);
    if (*pbVar3 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar3 == bVar4) goto LAB_033963e0;
    }
    pbVar3 = (byte *)(lVar6 + 0x24);
    if (*pbVar3 < 8) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (*pbVar3 == bVar4) goto LAB_033963e0;
    }
    puVar5 = (uint *)(lVar6 + 0x30);
  }
  if ((param_2 & 1) == 0) {
    bVar1 = (*puVar5 >> 3 & 1) == 0;
  }
  else {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_054f0960);
        puVar5 = (uint *)&DAT_054f0958;
        if (iVar2 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar5 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar5 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar5 = puVar5 + (ulong)*param_1 * 2;
      }
    }
    if ((*puVar5 >> 0x19 & 1) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  return bVar1;
}

