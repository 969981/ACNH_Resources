
ulong FUN_01e3cc1c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x6b8);
  uVar2 = (**(code **)(*(long *)(param_1 + 0x6b8) + 8))(puVar3);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01e3cc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)*puVar3)(puVar3);
    return uVar2;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar3 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  return (ulong)(*(int *)((long)puVar3 + 0x12d4) != 0 && *(char *)((long)puVar3 + 0x142c) != '\0');
}

