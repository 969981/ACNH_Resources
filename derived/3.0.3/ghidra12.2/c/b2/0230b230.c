
void FUN_0230b230(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined **local_40 [4];
  
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_054f0960);
      puVar2 = &DAT_054f0958;
      if (iVar1 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar2 = &DAT_054f0958;
      }
    }
    else {
      puVar2 = &DAT_054f0958;
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*(byte *)(param_1 + 1) < 8) {
      puVar2 = puVar2 + *(byte *)(param_1 + 1);
    }
  }
  if ((*(uint *)((long)puVar2 + 4) >> 0x11 & 1) != 0) {
    local_40[0] = &PTR_FUN_04a73058;
    iVar1 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
    if (iVar1 != 0) {
      lVar3 = (long)iVar1 << 3;
      puVar2 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      do {
        (*(code *)*local_40[0])(local_40,*puVar2);
        lVar3 = lVar3 + -8;
        puVar2 = puVar2 + 1;
      } while (lVar3 != 0);
    }
  }
  return;
}

