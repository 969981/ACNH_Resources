
void FUN_023f79e8(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar4 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar4 = &DAT_05240280;
    }
    else {
      plVar4 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar4 + 0x4b8))(0);
  uVar5 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar5 & 0xfffffffe;
  if (((uVar5 & 1) != 0) &&
     (*(char *)(param_1 + 0x1922) == '\0' && *(char *)(param_1 + 0x1924) == '\0')) {
    uVar5 = (uint)*(byte *)(param_1 + 0x1ee8);
    bVar2 = 7 < uVar5;
    if (bVar2) {
      uVar5 = 0xff;
    }
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar5 * 0x740;
    if (bVar2) {
      lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
      *(undefined4 *)(lVar1 + 0x424) = 3;
      FUN_01393458(lVar1 + 0x4c8);
    }
    else {
      *(undefined4 *)(lVar1 + 0x424) = 4;
    }
  }
  FUN_016f8230(param_1,0,0,0);
  return;
}

