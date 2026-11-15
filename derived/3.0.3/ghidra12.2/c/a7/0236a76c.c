
void FUN_0236a76c(long param_1)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  lVar3 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x15c) != 0)) {
    bVar5 = *(byte *)(param_1 + 0x1ee8);
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar3 + 0x15c) != 0) {
      pbVar1 = (byte *)(lVar3 + 0x158);
    }
    bVar4 = *pbVar1;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if ((bVar4 != bVar5) && (lVar3 = FUN_0252d9bc(0), lVar3 != 0)) {
      (**(code **)(**(long **)(param_1 + 0x68) + 0x140))(*(long **)(param_1 + 0x68),lVar3,1);
    }
  }
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar6 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      plVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar6 = &DAT_05240280;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0236a834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x4e8))(plVar6,0);
  return;
}

