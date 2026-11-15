
void FUN_0236d3a8(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  byte local_24 [4];
  
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  FUN_0170b428(puVar3);
  uVar1 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar1 & 0xfffffffe;
  if ((uVar1 & 1) != 0) {
    local_24[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    FUN_0236ce2c(local_24,param_1 + 0x18e0);
  }
  return;
}

