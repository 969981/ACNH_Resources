
undefined8 FUN_02473484(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if ((*(int *)(param_1 + 0x178) == 0) && (uVar2 = FUN_0247fbe4(), (uVar2 & 1) == 0)) {
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
    if ((((puVar3[0x227] != 0) && (uVar2 = FUN_03850a90(puVar3[0x227],0x11,0,0), (uVar2 & 1) != 0))
        && (*(char *)(param_1 + 0x17ac) == '\0')) && ((*(uint *)(param_1 + 0xed0) & 1) != 0)) {
      FUN_02373ee0(param_1,6,1,1);
      FUN_025699b8(param_1 + 0xec0);
      return 1;
    }
  }
  return 0;
}

