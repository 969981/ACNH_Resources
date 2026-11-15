
undefined8 FUN_01e3ccf8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x6d8);
  *(undefined1 *)(param_1 + 0x6a5) = 1;
  uVar2 = (**(code **)(*(long *)(param_1 + 0x6d8) + 8))(puVar4);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01e3cd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)*puVar4)(puVar4);
    return uVar3;
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
  FUN_01730d30(puVar4 + 600);
  return 1;
}

