
void FUN_024416cc(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      plVar5 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar5 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar5 + 0x4e8))(plVar5,1);
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  plVar5 = (long *)puVar6[9];
  if (((*PTR_DAT_04bb3760 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  if (((plVar5 != (long *)0x0) &&
      (uVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb3758), (uVar3 & 1) != 0)) &&
     (plVar5[0x5b] != 0)) {
    *(undefined4 *)(plVar5[0x5b] + 0x54) = 0;
  }
  uVar4 = *(uint *)(param_1 + 0x17d4);
  if ((uVar4 >> 5 & 1) != 0) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
    if (7 < *(byte *)(param_1 + 0x1ee8)) {
      lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
      *(undefined4 *)(lVar1 + 0x424) = 3;
      FUN_01393458(lVar1 + 0x4c8);
    }
    else {
      *(undefined4 *)(lVar1 + 0x424) = 4;
    }
    uVar4 = *(uint *)(param_1 + 0x17d4);
  }
  *(uint *)(param_1 + 0x17d4) = uVar4 & 0xffffff9f | 0x40;
  return;
}

