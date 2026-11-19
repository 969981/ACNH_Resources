
void FUN_03b5ba10(long param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  if (((*(char *)(DAT_05aebb88 + 1) != '\0') &&
      (lVar10 = *(long *)(DAT_05aebb88 + 0x1a8), lVar10 != 0)) && (*(char *)(lVar10 + 0x40) != '\0')
     ) {
    lVar9 = *(long *)(lVar10 + 0x48);
    uVar7 = (uint)*(ushort *)(param_1 + 0x1c);
    if (((lVar9 != 0 && uVar7 != 0xffff) && (int)uVar7 < *(int *)(lVar10 + 0x60)) &&
       (*(ushort *)(lVar9 + (ulong)uVar7 * 0xe0 + 0xd8) == uVar7)) {
      bVar4 = *(byte *)(param_1 + 0x1e);
      uVar8 = (uint)*(ushort *)(param_1 + 0x1c);
      if ((uint)bVar4 < *(uint *)(lVar9 + (ulong)uVar7 * 0xe0 + 0x70)) {
        uVar7 = bVar4 + 1;
        uVar2 = uVar7 & 3;
        lVar10 = lVar9 + (ulong)uVar8 * 0xe0 + 0x60;
        if (2 < bVar4) {
          uVar7 = uVar7 & 0x1fc;
          do {
            uVar7 = uVar7 - 4;
            lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(lVar10 + 8) + 8) + 8) + 8);
          } while (uVar7 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          lVar10 = *(long *)(lVar10 + 8);
        }
      }
      else {
        lVar10 = 0;
      }
      lVar3 = 0;
      if (lVar10 != 0) {
        lVar3 = lVar10 - *(int *)(lVar9 + (ulong)uVar8 * 0xe0 + 0x74);
      }
      *(undefined1 *)(lVar3 + 0x20) = 0;
      if ((param_2 & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x21) = 1;
        *(undefined1 *)(lVar9 + (ulong)uVar8 * 0xe0 + 0xad) = 1;
      }
      pcVar1 = (char *)(lVar9 + (ulong)uVar8 * 0xe0 + 0xb2);
      if ('\0' < *pcVar1) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar6) {
            *pcVar1 = *pcVar1 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  return;
}

