
/* WARNING: Removing unreachable block (ram,0x0231fa98) */

uint FUN_0231fa2c(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar3 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  if (puVar3[0x227] == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_03850a90(puVar3[0x227],0x16,0,*(uint *)(puVar3 + 0x2d3) >> 1 & 1);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}

