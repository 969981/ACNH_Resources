
undefined8 FUN_016dad90(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    return 1;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
      lVar1 = DAT_052413b8;
      goto joined_r0x016dadc4;
    }
    puVar3 = &DAT_05240280;
  }
  lVar1 = puVar3[0x227];
joined_r0x016dadc4:
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(puVar3 + 0x2d3) >> 1 & 1;
  }
  uVar4 = FUN_0170a6d0(puVar3,uVar5);
  return uVar4;
}

