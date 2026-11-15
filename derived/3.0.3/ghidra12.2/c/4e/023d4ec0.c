
void FUN_023d4ec0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  byte local_38 [4];
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar2 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  *(undefined4 *)((long)puVar2 + 0x5e84) = 0;
  local_28 = 0x3dcccccd;
  local_38[0] = *(byte *)(param_1 + 0x1ee8);
  local_24 = 0;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  local_2c = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  local_34 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),local_38,*(undefined4 *)(param_1 + 0x230),1);
  return;
}

