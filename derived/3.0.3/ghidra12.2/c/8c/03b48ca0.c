
void FUN_03b48ca0(long *param_1)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  
  if ((long *)*param_1 != (long *)0x0) {
    lVar7 = param_1[1];
    iVar8 = (**(code **)(*(long *)*param_1 + 0x18))();
    if (iVar8 == 0x11) {
      plVar13 = (long *)*param_1;
      iVar8 = (**(code **)(*plVar13 + 0x18))(plVar13);
      if (iVar8 != 0x11) {
        plVar13 = (long *)0x0;
      }
      if (((*(char *)(*(long *)PTR_DAT_04bd1e70 + 1) != '\0') &&
          (lVar12 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x1a8), lVar12 != 0)) &&
         (*(char *)(lVar12 + 0x40) != '\0')) {
        lVar11 = *(long *)(lVar12 + 0x48);
        uVar9 = (uint)*(ushort *)((long)plVar13 + 0x1c);
        if (((lVar11 != 0 && uVar9 != 0xffff) && (int)uVar9 < *(int *)(lVar12 + 0x60)) &&
           (*(ushort *)(lVar11 + (ulong)uVar9 * 0xe0 + 0xd8) == uVar9)) {
          bVar4 = *(byte *)((long)plVar13 + 0x1e);
          uVar10 = (uint)*(ushort *)((long)plVar13 + 0x1c);
          if ((uint)bVar4 < *(uint *)(lVar11 + (ulong)uVar9 * 0xe0 + 0x70)) {
            uVar9 = bVar4 + 1;
            uVar2 = uVar9 & 3;
            lVar12 = lVar11 + (ulong)uVar10 * 0xe0 + 0x60;
            if (2 < bVar4) {
              uVar9 = uVar9 & 0x1fc;
              do {
                uVar9 = uVar9 - 4;
                lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 8) + 8) + 8) + 8);
              } while (uVar9 != 0);
            }
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              lVar12 = *(long *)(lVar12 + 8);
            }
          }
          else {
            lVar12 = 0;
          }
          lVar3 = 0;
          if (lVar12 != 0) {
            lVar3 = lVar12 - *(int *)(lVar11 + (ulong)uVar10 * 0xe0 + 0x74);
          }
          *(undefined1 *)(lVar3 + 0x20) = 0;
          if ((char)lVar7 != '\0') {
            *(undefined1 *)(lVar3 + 0x21) = 1;
            *(undefined1 *)(lVar11 + (ulong)uVar10 * 0xe0 + 0xad) = 1;
          }
          pcVar1 = (char *)(lVar11 + (ulong)uVar10 * 0xe0 + 0xb2);
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
    }
    (**(code **)(*(long *)*param_1 + 0x10))();
    *param_1 = 0;
  }
  return;
}

