
void FUN_024ebaf0(long param_1)

{
  byte *pbVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  
  FUN_023164ec(param_1,6);
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar3 + 0x4e0))(0);
  lVar4 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x15c) != 0)) {
    bVar6 = *(byte *)(param_1 + 0x1ee8);
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar4 + 0x15c) != 0) {
      pbVar1 = (byte *)(lVar4 + 0x158);
    }
    bVar5 = *pbVar1;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    if (bVar5 != bVar6) {
      return;
    }
  }
  FUN_0232e4c4(param_1);
  return;
}

