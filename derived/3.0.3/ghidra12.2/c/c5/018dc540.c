
void FUN_018dc540(long param_1)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined4 *puVar10;
  byte bStack_5;
  short local_4;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != 0) {
    lVar9 = *(long *)(param_1 + 0x10);
    iVar7 = 0;
    do {
      puVar10 = (undefined4 *)(lVar9 + (long)iVar7 * 10);
      *puVar10 = 0;
      *(undefined2 *)(puVar10 + 1) = 0xfff8;
      *(undefined1 *)((long)puVar10 + 6) = 3;
      *(byte *)((long)puVar10 + 7) = *(byte *)((long)puVar10 + 7) & 0xe0;
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar4 != 0) {
    lVar9 = *(long *)(param_1 + 0x20);
    uVar8 = 0;
    do {
      lVar1 = lVar9 + ((long)((ulong)uVar8 << 0x20) >> 0x1b);
      bStack_5 = bStack_5 & 0xe0;
      if (*(long *)(lVar1 + 8) != CONCAT17(bStack_5,0x3fff800000000) ||
          *(short *)(lVar1 + 0x10) != local_4) {
        *(long *)(lVar1 + 8) = CONCAT17(bStack_5,0x3fff800000000);
        *(short *)(lVar1 + 0x10) = local_4;
        *(undefined1 *)(lVar9 + (long)(int)uVar8 * 0x20 + 0x12) = 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar4 != uVar8);
  }
  *(undefined2 *)(param_1 + 0x68) = 0;
  if (DAT_04cd19d8 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_018dc680:
    if (7 < *pbVar6) {
LAB_018dc68c:
      if (DAT_0537d558 != (long *)0x0) {
        lVar9 = *DAT_0537d558;
        bVar5 = *(byte *)(lVar9 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar2 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar6 = (byte *)(lVar9 + 0x471);
          }
        }
        bVar5 = *pbVar6;
        if (bVar5 < 8) goto LAB_018dc6fc;
      }
      pbVar6 = &DAT_0548e168;
    }
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_018dc680;
      }
      goto LAB_018dc68c;
    }
  }
  bVar5 = *pbVar6;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
LAB_018dc6fc:
  *(undefined1 *)(param_1 + 0x6b) = 0;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  *(byte *)(param_1 + 0x6a) = bVar5;
  return;
}

