
void FUN_034c58a4(void)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  undefined *local_90 [4];
  undefined *local_70 [4];
  undefined *local_50 [4];
  
  local_90[0] = PTR_DAT_04bc9988 + 0x10;
  local_50[0] = PTR_DAT_04bc9998 + 0x10;
  local_70[0] = PTR_DAT_04bc9990 + 0x10;
  lVar4 = *(long *)PTR_DAT_04bb39b0;
  pbVar3 = PTR_DAT_04bb32e0;
  if (lVar4 == 0) {
LAB_034c5960:
    if (7 < *pbVar3) {
LAB_034c596c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar4 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar4 + 0x473);
        pbVar3 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar4 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar3 = (byte *)(lVar4 + 0x471);
          }
        }
        bVar2 = *pbVar3;
        if (bVar2 < 8) goto LAB_034c59dc;
      }
      pbVar3 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar4 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar4 + 0x158);
    }
    if (7 < *pbVar3) {
      if ((*(int *)(lVar4 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar3 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_034c5960;
      }
      goto LAB_034c596c;
    }
  }
  bVar2 = *pbVar3;
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
LAB_034c59dc:
  lVar4 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x10);
  if (*(int *)(lVar4 + 0x90) == 0) {
    *(undefined4 *)(lVar4 + 0xd8) = 0xffffffff;
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    *(undefined4 *)(lVar4 + 0xd0) = 0x69;
    *(byte *)(lVar4 + 0xd4) = bVar2;
    *(undefined2 *)(lVar4 + 0xdc) = 0x101;
    *(undefined1 *)(lVar4 + 0xde) = 1;
    FUN_033b600c(local_90,lVar4 + 0xe0);
    (**(code **)(local_70[0] + 0x10))(local_70,lVar4 + 0x100);
    (**(code **)(local_50[0] + 0x10))(local_50,lVar4 + 0x120);
    FUN_03ebb160(lVar4 + 0x88,1);
  }
  return;
}

