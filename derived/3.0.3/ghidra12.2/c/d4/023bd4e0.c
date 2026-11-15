
void FUN_023bd4e0(long param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined **local_50 [4];
  
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  uVar4 = (uint)*(byte *)(param_1 + 0x1900);
  if (0x1b < uVar4) {
    uVar4 = 0;
  }
  local_50[0] = (undefined **)CONCAT44(local_50[0]._4_4_,uVar4);
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
  if (((puVar6[0x227] != 0) && (lVar5 = *(long *)(puVar6[0x227] + 0x78), lVar5 != 0)) &&
     (plVar3 = *(long **)(lVar5 + 0x48), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x28))(plVar3,&DAT_054a9d50,(ulong)local_50[0] & 0xffffffff);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x1915);
  if (1 < bVar1) {
    bVar1 = 0;
  }
  FUN_017128c0(puVar6,bVar1);
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
  FUN_039a9c80(puVar6[0x22a],7);
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
  *(undefined4 *)((long)puVar6 + 0x5e84) = 1;
  local_50[0] = &PTR_FUN_04a73008;
  iVar2 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  if (iVar2 != 0) {
    lVar5 = (long)iVar2 << 3;
    puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_50[0])(local_50,*puVar6);
      lVar5 = lVar5 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  return;
}

