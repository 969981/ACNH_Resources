
uint FUN_01e3dcdc(long param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(uint *)(param_1 + 0x6a0);
  if (4 < uVar1) {
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    if (puVar4 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar4 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar4 = &DAT_05240280;
      }
    }
    puVar3 = (uint *)(**(code **)(puVar4[0xb49] + 0xf0))(puVar4 + 0xb49);
    uVar1 = *puVar3;
  }
  return uVar1;
}

