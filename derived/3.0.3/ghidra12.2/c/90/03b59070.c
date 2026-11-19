
undefined8 FUN_03b59070(long param_1,long *param_2,char param_3,undefined8 param_4,long *param_5)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 local_48;
  
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    uVar13 = 0;
    lVar14 = 8;
    do {
      if (*(long *)(*(long *)(param_1 + 0x18) + lVar14 + -8) == -1) {
        local_48 = *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar14);
        if (-1 < (int)uVar13) {
          (**(code **)(*param_5 + 0x18))(param_5);
          iVar9 = nn::fs::OpenFile((FileHandle *)&local_48,(char *)param_5[1],1);
          lVar10 = *(long *)(param_1 + 0x18) + lVar14;
          if (iVar9 == 0) {
            *(undefined8 *)(lVar10 + -8) = param_4;
            *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar14) = local_48;
            if (param_2 == (long *)0x0) {
              return 1;
            }
            iVar9 = (**(code **)(*param_2 + 0x18))(param_2);
            if (iVar9 == 0x11) {
              iVar9 = (**(code **)(*param_2 + 0x18))(param_2);
              plVar3 = param_2;
              if (iVar9 != 0x11) {
                plVar3 = (long *)0x0;
              }
              if ((((*(char *)(*(long *)PTR_DAT_04bd1e70 + 1) != '\0') &&
                   (lVar14 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x1a8), lVar14 != 0)) &&
                  (*(char *)(lVar14 + 0x40) != '\0')) &&
                 (lVar10 = *(long *)(lVar14 + 0x48), lVar10 != 0)) {
                uVar6 = *(ushort *)((long)plVar3 + 0x1c);
                if (((uVar6 != 0xffff) &&
                    (uVar12 = (uint)uVar6,
                    *(uint *)(lVar14 + 0x60) != uVar12 &&
                    (int)(uint)uVar6 <= (int)*(uint *)(lVar14 + 0x60))) &&
                   (*(ushort *)(lVar10 + (ulong)uVar12 * 0xe0 + 0xd8) == uVar12)) {
                  bVar5 = *(byte *)((long)plVar3 + 0x1e);
                  uVar11 = (uint)uVar6;
                  if ((uint)bVar5 < *(uint *)(lVar10 + (ulong)uVar12 * 0xe0 + 0x70)) {
                    uVar12 = bVar5 + 1;
                    uVar2 = uVar12 & 3;
                    lVar14 = lVar10 + (ulong)uVar11 * 0xe0 + 0x60;
                    if (2 < bVar5) {
                      uVar12 = uVar12 & 0x1fc;
                      do {
                        uVar12 = uVar12 - 4;
                        lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(lVar14 + 8) + 8) + 8) + 8);
                      } while (uVar12 != 0);
                    }
                    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                      lVar14 = *(long *)(lVar14 + 8);
                    }
                  }
                  else {
                    lVar14 = 0;
                  }
                  lVar4 = 0;
                  if (lVar14 != 0) {
                    lVar4 = lVar14 - *(int *)(lVar10 + (ulong)uVar11 * 0xe0 + 0x74);
                  }
                  *(undefined1 *)(lVar4 + 0x20) = 0;
                  if (param_3 != '\0') {
                    *(undefined1 *)(lVar4 + 0x21) = 1;
                    *(undefined1 *)(lVar10 + (ulong)uVar11 * 0xe0 + 0xad) = 1;
                  }
                  pcVar1 = (char *)(lVar10 + (ulong)uVar11 * 0xe0 + 0xb2);
                  if ('\0' < *pcVar1) {
                    do {
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                      if (bVar8) {
                        *pcVar1 = *pcVar1 + -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                  }
                }
              }
            }
          }
          else {
            *(undefined8 *)(lVar10 + -8) = 0xffffffffffffffff;
            *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar14) = 0;
            if (param_2 == (long *)0x0) {
              return 1;
            }
            iVar9 = (**(code **)(*param_2 + 0x18))(param_2);
            if (iVar9 == 0x11) {
              iVar9 = (**(code **)(*param_2 + 0x18))(param_2);
              plVar3 = param_2;
              if (iVar9 != 0x11) {
                plVar3 = (long *)0x0;
              }
              if (((*(char *)(*(long *)PTR_DAT_04bd1e70 + 1) != '\0') &&
                  (lVar14 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x1a8), lVar14 != 0)) &&
                 ((*(char *)(lVar14 + 0x40) != '\0' &&
                  (lVar10 = *(long *)(lVar14 + 0x48), lVar10 != 0)))) {
                uVar6 = *(ushort *)((long)plVar3 + 0x1c);
                if (((uVar6 != 0xffff) &&
                    (uVar12 = (uint)uVar6,
                    *(uint *)(lVar14 + 0x60) != uVar12 &&
                    (int)(uint)uVar6 <= (int)*(uint *)(lVar14 + 0x60))) &&
                   (*(ushort *)(lVar10 + (ulong)uVar12 * 0xe0 + 0xd8) == uVar12)) {
                  bVar5 = *(byte *)((long)plVar3 + 0x1e);
                  uVar11 = (uint)uVar6;
                  if ((uint)bVar5 < *(uint *)(lVar10 + (ulong)uVar12 * 0xe0 + 0x70)) {
                    uVar12 = bVar5 + 1;
                    uVar2 = uVar12 & 3;
                    lVar14 = lVar10 + (ulong)uVar11 * 0xe0 + 0x60;
                    if (2 < bVar5) {
                      uVar12 = uVar12 & 0x1fc;
                      do {
                        uVar12 = uVar12 - 4;
                        lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(lVar14 + 8) + 8) + 8) + 8);
                      } while (uVar12 != 0);
                    }
                    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                      lVar14 = *(long *)(lVar14 + 8);
                    }
                  }
                  else {
                    lVar14 = 0;
                  }
                  lVar4 = 0;
                  if (lVar14 != 0) {
                    lVar4 = lVar14 - *(int *)(lVar10 + (ulong)uVar11 * 0xe0 + 0x74);
                  }
                  *(undefined1 *)(lVar4 + 0x20) = 0;
                  if (param_3 != '\0') {
                    *(undefined1 *)(lVar4 + 0x21) = 1;
                    *(undefined1 *)(lVar10 + (ulong)uVar11 * 0xe0 + 0xad) = 1;
                  }
                  pcVar1 = (char *)(lVar10 + (ulong)uVar11 * 0xe0 + 0xb2);
                  if ('\0' < *pcVar1) {
                    do {
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                      if (bVar8) {
                        *pcVar1 = *pcVar1 + -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                  }
                }
              }
            }
          }
          goto LAB_03b59480;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x10;
    } while (*(uint *)(param_1 + 0x20) != uVar13);
  }
  if (param_2 != (long *)0x0) {
    iVar9 = (**(code **)(*param_2 + 0x18))(param_2);
    if (iVar9 == 0x11) {
      iVar9 = (**(code **)(*param_2 + 0x18))(param_2);
      plVar3 = param_2;
      if (iVar9 != 0x11) {
        plVar3 = (long *)0x0;
      }
      if (((*(char *)(*(long *)PTR_DAT_04bd1e70 + 1) != '\0') &&
          (lVar14 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x1a8), lVar14 != 0)) &&
         ((*(char *)(lVar14 + 0x40) != '\0' && (lVar10 = *(long *)(lVar14 + 0x48), lVar10 != 0)))) {
        uVar6 = *(ushort *)((long)plVar3 + 0x1c);
        if (((uVar6 != 0xffff) &&
            (uVar12 = (uint)uVar6,
            *(uint *)(lVar14 + 0x60) != uVar12 && (int)(uint)uVar6 <= (int)*(uint *)(lVar14 + 0x60))
            ) && (*(ushort *)(lVar10 + (ulong)uVar12 * 0xe0 + 0xd8) == uVar12)) {
          bVar5 = *(byte *)((long)plVar3 + 0x1e);
          uVar11 = (uint)uVar6;
          if ((uint)bVar5 < *(uint *)(lVar10 + (ulong)uVar12 * 0xe0 + 0x70)) {
            uVar12 = bVar5 + 1;
            uVar2 = uVar12 & 3;
            lVar14 = lVar10 + (ulong)uVar11 * 0xe0 + 0x60;
            if (2 < bVar5) {
              uVar12 = uVar12 & 0x1fc;
              do {
                uVar12 = uVar12 - 4;
                lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(lVar14 + 8) + 8) + 8) + 8);
              } while (uVar12 != 0);
            }
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              lVar14 = *(long *)(lVar14 + 8);
            }
          }
          else {
            lVar14 = 0;
          }
          lVar4 = 0;
          if (lVar14 != 0) {
            lVar4 = lVar14 - *(int *)(lVar10 + (ulong)uVar11 * 0xe0 + 0x74);
          }
          *(undefined1 *)(lVar4 + 0x20) = 0;
          if (param_3 != '\0') {
            *(undefined1 *)(lVar4 + 0x21) = 1;
            *(undefined1 *)(lVar10 + (ulong)uVar11 * 0xe0 + 0xad) = 1;
          }
          pcVar1 = (char *)(lVar10 + (ulong)uVar11 * 0xe0 + 0xb2);
          if ('\0' < *pcVar1) {
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar8) {
                *pcVar1 = *pcVar1 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
        }
      }
    }
LAB_03b59480:
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return 1;
}

