
void FUN_023543d8(byte *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  
  iVar2 = *param_2;
  if (iVar2 - 2U < 2) {
    pbVar4 = (byte *)(param_2 + 1);
  }
  else if (iVar2 == 5) {
    bVar5 = *(byte *)(param_2 + 0x44);
    if (bVar5 < 8) goto LAB_02354504;
    pbVar4 = &DAT_0548e140;
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (iVar2 == 1) {
      pbVar4 = (byte *)(param_2 + 1);
    }
  }
  bVar5 = *pbVar4;
  if (bVar5 < 8) goto LAB_02354504;
  pbVar4 = PTR_DAT_04bb32e0;
  if (DAT_04cd19d8 == 0) {
LAB_0235447c:
    if (7 < *pbVar4) {
LAB_02354488:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar5 = *(byte *)(lVar6 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar4 = (byte *)(lVar6 + 0x471);
          }
        }
        bVar5 = *pbVar4;
        bVar3 = bVar5 < 8;
        if (!bVar3) {
          bVar5 = 0xff;
        }
        *param_1 = bVar5;
        if (bVar3) {
          return;
        }
      }
      pbVar4 = &DAT_0548e168;
    }
  }
  else {
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar4 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0235447c;
      }
      goto LAB_02354488;
    }
  }
  bVar5 = *pbVar4;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
LAB_02354504:
  *param_1 = bVar5;
  return;
}

