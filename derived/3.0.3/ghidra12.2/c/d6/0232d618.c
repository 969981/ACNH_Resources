
undefined8 FUN_0232d618(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f0960);
      puVar6 = &DAT_054f0958;
      if (iVar3 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar6 = &DAT_054f0958;
    }
  }
  else {
    uVar8 = (ulong)*(byte *)(param_1 + 0x1ee8);
    puVar6 = (undefined8 *)(DAT_054f5738 + 0x204);
    if (uVar8 < 8) {
      puVar6 = (undefined8 *)(DAT_054f5738 + 0x204) + uVar8;
    }
  }
  if ((*(uint *)((long)puVar6 + 4) >> 4 & 1) == 0) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f0960);
        puVar6 = &DAT_054f0958;
        if (iVar3 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar6 = &DAT_054f0958;
      }
    }
    else {
      uVar8 = (ulong)*(byte *)(param_1 + 0x1ee8);
      puVar6 = (undefined8 *)(DAT_054f5738 + 0x204);
      if (uVar8 < 8) {
        puVar6 = puVar6 + uVar8;
      }
    }
    *(uint *)((long)puVar6 + 4) = *(uint *)((long)puVar6 + 4) | 0x10;
    (**(code **)(DAT_05491770 + 0x18))(&DAT_05491770);
    uVar2 = FUN_006bd550(DAT_05491778,0);
    lVar5 = *(long *)PTR_DAT_04bb26a8;
    plVar1 = (long *)(lVar5 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar5 + 0xb3b58));
    if (*(int *)(lVar5 + 0xb3b88) < *(int *)(lVar5 + 0xb3ba0)) {
      puVar6 = *(undefined8 **)(lVar5 + 0xb3b90);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar5 + 0xb3b90) = *puVar6;
      }
      *(undefined2 *)puVar6 = 0;
      plVar7 = puVar6 + 2;
      *plVar7 = 0;
      *(undefined1 *)((long)puVar6 + 2) = 0;
      *(undefined4 *)((long)puVar6 + 4) = uVar2;
      *(undefined4 *)(puVar6 + 1) = 0x3f800000;
      puVar6[3] = 0;
      lVar9 = *plVar1;
      *plVar1 = (long)plVar7;
      puVar6[3] = plVar1;
      *plVar7 = lVar9;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar7;
      }
      *(int *)(lVar5 + 0xb3b88) = *(int *)(lVar5 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0xb3b58));
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

