
void FUN_023c18e0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  byte local_38 [4];
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      plVar5 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar5 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar5 + 0x4e0))(0x3f800000,plVar5);
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      plVar5 = &DAT_05240280;
      if (iVar1 != 0) {
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
  bVar4 = *PTR_DAT_04bb32e0;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  *(byte *)(*(long *)PTR_DAT_04bb4718 + 8) = bVar4;
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  *(undefined4 *)((long)puVar6 + 0x5e84) = 0;
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar1 != 0) {
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
  if (((*PTR_DAT_04bb3760 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  if (((plVar5 != (long *)0x0) &&
      (uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb3758), (uVar2 & 1) != 0)) &&
     (lVar3 = plVar5[0x5b], lVar3 != 0)) {
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 *)(lVar3 + 0x68) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined4 *)(plVar5[0x5b] + 0x54) = 0;
  }
  puVar6 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar7 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar6 + 0x27c) = uVar7;
  local_38[0] = *(byte *)(param_1 + 0x1ee8);
  local_28 = 0x3dcccccd;
  local_24 = 0;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  local_2c = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  local_34 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),local_38,*(undefined4 *)(param_1 + 0x230),1);
  if (*(int *)(param_1 + 0x178) == 0) {
    FUN_02544b38((byte *)(param_1 + 0x1ee8),&DAT_0417a88c);
  }
  return;
}

