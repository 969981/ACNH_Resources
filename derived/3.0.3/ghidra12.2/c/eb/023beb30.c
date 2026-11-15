
void FUN_023beb30(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint *puVar5;
  long *plVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar4 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  *(undefined4 *)((long)puVar4 + 0x5e84) = 0;
  if (*(int *)(param_1 + 0x178) == 0) {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_054f0960);
        puVar5 = (uint *)&DAT_054f0958;
        if (iVar1 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar5 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar5 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar5 = puVar5 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
      }
    }
    *puVar5 = *puVar5 | 0x4000;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar4 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  plVar6 = (long *)puVar4[9];
  if (((*PTR_DAT_04bb3760 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  if (((plVar6 != (long *)0x0) &&
      (uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb3758), (uVar2 & 1) != 0)) &&
     (lVar3 = plVar6[0x5b], lVar3 != 0)) {
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 *)(lVar3 + 0x68) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined4 *)(plVar6[0x5b] + 0x54) = 0;
  }
  return;
}

