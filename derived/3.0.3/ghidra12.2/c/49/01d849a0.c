
long FUN_01d849a0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != param_1 + 0x30) {
    lVar3 = (long)*(int *)(param_1 + 0x44);
    lVar6 = *(long *)(param_1 + 0x38) - lVar3;
    do {
      if ((7 < *(byte *)(lVar6 + 0xf8)) && (*(long *)(lVar6 + 0xe0) != *(long *)(lVar6 + 0xe8))) {
        if ((*(ushort *)(lVar6 + 0x100) >> 4 & 1) != 0) {
          return 0;
        }
        nn::os::LockMutex((MutexType *)(param_1 + 0xe8));
        plVar1 = (long *)(lVar6 + *(int *)(param_1 + 0x44));
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1 = (long *)(lVar6 + *(int *)(param_1 + 0x5c));
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        puVar4 = *(undefined8 **)(param_1 + 0x50);
        *(long **)(param_1 + 0x50) = plVar1;
        *plVar1 = param_1 + 0x48;
        plVar1[1] = (long)puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = plVar1;
        }
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        uVar2 = nn::os::GetSystemTick();
        *(undefined8 *)(lVar6 + 0xf0) = uVar2;
        *(ushort *)(lVar6 + 0x100) = *(ushort *)(lVar6 + 0x100) | 0x20;
        *(undefined4 *)(lVar6 + 0x104) = *(undefined4 *)(param_1 + 0x10c);
        iVar5 = 1;
        if (1 < *(int *)(param_1 + 0x10c) + 1) {
          iVar5 = *(int *)(param_1 + 0x10c) + 1;
        }
        *(undefined1 *)(param_1 + 0x110) = 1;
        *(int *)(param_1 + 0x10c) = iVar5;
        nn::os::UnlockMutex((MutexType *)(param_1 + 0xe8));
        return lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar3 + 8) - lVar3;
    } while (lVar6 != (param_1 + 0x30) - lVar3);
  }
  return 0;
}

