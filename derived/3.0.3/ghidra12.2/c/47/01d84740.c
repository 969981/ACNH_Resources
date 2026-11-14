
long FUN_01d84740(long param_1,byte *param_2)

{
  long *plVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  
  if (*(long *)(param_1 + 0x38) != param_1 + 0x30) {
    lVar4 = (long)*(int *)(param_1 + 0x44);
    bVar8 = *param_2;
    lVar10 = *(long *)(param_1 + 0x38) - lVar4;
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    do {
      bVar9 = *(byte *)(lVar10 + 0xf8);
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      if (bVar9 == bVar8) {
        if ((*(ushort *)(lVar10 + 0x100) & 0xc) == 4) {
          return 0;
        }
        nn::os::LockMutex((MutexType *)(param_1 + 0xe8));
        plVar1 = (long *)(lVar10 + *(int *)(param_1 + 0x44));
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1 = (long *)(lVar10 + *(int *)(param_1 + 0x5c));
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        puVar5 = *(undefined8 **)(param_1 + 0x50);
        *(long **)(param_1 + 0x50) = plVar1;
        *plVar1 = param_1 + 0x48;
        plVar1[1] = (long)puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = plVar1;
        }
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        uVar3 = nn::os::GetSystemTick();
        *(undefined8 *)(lVar10 + 0xf0) = uVar3;
        if (DAT_04cd19d8 == 0) {
          pbVar6 = &DAT_0548e140;
LAB_01d848bc:
          if (7 < *pbVar6) {
LAB_01d848c8:
            if (DAT_0537d558 != (long *)0x0) {
              lVar4 = *DAT_0537d558;
              bVar8 = *(byte *)(lVar4 + 0x473);
              pbVar6 = PTR_DAT_04bb5038;
              if ((long)(char)bVar8 != 0xffffffffffffffff) {
                puVar2 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
                if (7 < bVar8) {
                  puVar2 = (uint *)(lVar4 + 0x48);
                }
                if ((*puVar2 & 8) != 0) {
                  pbVar6 = (byte *)(lVar4 + 0x471);
                }
              }
              bVar8 = *pbVar6;
              if (bVar8 < 8) goto LAB_01d84938;
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
              goto LAB_01d848bc;
            }
            goto LAB_01d848c8;
          }
        }
        bVar8 = *pbVar6;
        if (7 < bVar8) {
          bVar8 = 0xff;
        }
LAB_01d84938:
        bVar9 = *param_2;
        if (7 < bVar9) {
          bVar9 = 0xff;
        }
        if (7 < bVar8) {
          bVar8 = 0xff;
        }
        if (bVar9 != bVar8) {
          *(ushort *)(lVar10 + 0x100) = *(ushort *)(lVar10 + 0x100) | 0x20;
        }
        *(undefined4 *)(lVar10 + 0x104) = *(undefined4 *)(param_1 + 0x10c);
        iVar7 = 1;
        if (1 < *(int *)(param_1 + 0x10c) + 1) {
          iVar7 = *(int *)(param_1 + 0x10c) + 1;
        }
        *(undefined1 *)(param_1 + 0x110) = 1;
        *(int *)(param_1 + 0x10c) = iVar7;
        nn::os::UnlockMutex((MutexType *)(param_1 + 0xe8));
        return lVar10;
      }
      lVar10 = *(long *)(lVar10 + lVar4 + 8) - lVar4;
    } while (lVar10 != (param_1 + 0x30) - lVar4);
  }
  return 0;
}

