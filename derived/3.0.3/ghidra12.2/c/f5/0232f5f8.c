
undefined8 FUN_0232f5f8(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if ((DAT_04cd19d8 == 0) || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f0960);
        puVar5 = &DAT_054f0958;
        if (iVar3 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar5 = &DAT_054f0958;
      }
    }
    else {
      uVar7 = (ulong)*(byte *)(param_1 + 0x1ee8);
      puVar5 = (undefined8 *)(DAT_054f5738 + 0x204);
      if (uVar7 < 8) {
        puVar5 = (undefined8 *)(DAT_054f5738 + 0x204) + uVar7;
      }
    }
    if ((*(uint *)((long)puVar5 + 4) >> 8 & 1) == 0) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f0960);
          puVar5 = &DAT_054f0958;
          if (iVar3 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar5 = &DAT_054f0958;
        }
      }
      else {
        uVar7 = (ulong)*(byte *)(param_1 + 0x1ee8);
        puVar5 = (undefined8 *)(DAT_054f5738 + 0x204);
        if (uVar7 < 8) {
          puVar5 = puVar5 + uVar7;
        }
      }
      *(uint *)((long)puVar5 + 4) = *(uint *)((long)puVar5 + 4) | 0x100;
      (**(code **)(DAT_05491750 + 0x18))(&DAT_05491750);
      uVar2 = FUN_006bd550(DAT_05491758,0);
      lVar4 = *(long *)PTR_DAT_04bb26a8;
      plVar1 = (long *)(lVar4 + 0xb3b78);
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb3b58));
      if (*(int *)(lVar4 + 0xb3b88) < *(int *)(lVar4 + 0xb3ba0)) {
        puVar5 = *(undefined8 **)(lVar4 + 0xb3b90);
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar4 + 0xb3b90) = *puVar5;
        }
        *(undefined2 *)puVar5 = 0;
        plVar6 = puVar5 + 2;
        *plVar6 = 0;
        *(undefined1 *)((long)puVar5 + 2) = 0;
        *(undefined4 *)((long)puVar5 + 4) = uVar2;
        *(undefined4 *)(puVar5 + 1) = 0x3f800000;
        puVar5[3] = 0;
        lVar8 = *plVar1;
        *plVar1 = (long)plVar6;
        puVar5[3] = plVar1;
        *plVar6 = lVar8;
        if (lVar8 != 0) {
          *(long **)(lVar8 + 8) = plVar6;
        }
        *(int *)(lVar4 + 0xb3b88) = *(int *)(lVar4 + 0xb3b88) + 1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0xb3b58));
      return 1;
    }
  }
  return 0;
}

