
byte FUN_01f0c420(long param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  
  bVar1 = 0;
  if ((*(ushort *)(param_1 + 0xaf84) & 1) == 0) {
    if ((((*(int *)(param_1 + 0x77f4) != 0x10) && (*(int *)(param_1 + 0x77b0) != 0x10)) &&
        (*(int *)(*(long *)(param_1 + 0x10) + 0x360) != 0x13)) &&
       (*(int *)(*(long *)(param_1 + 0x10) + 0x378) != 0x13)) {
      plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x60);
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
      uVar4 = (**(code **)(*plVar3 + 0x100))();
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
    bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x60) + 0x11a0) >> 2 & 1;
  }
  return bVar1;
}

