
uint FUN_0244d1b8(undefined4 param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  puVar4 = *(undefined8 **)(param_2 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar4 = &DAT_05240280;
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  uVar2 = FUN_01706aa0(param_1,puVar4);
  if (*(int *)(param_2 + 0x178) == 0) {
    pbVar1 = (byte *)(param_2 + 0x18f4);
    puVar4 = *(undefined8 **)(param_2 + 0x60);
    if (puVar4 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar4 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar4 = &DAT_05240280;
      }
    }
    if ((*(uint *)((long)puVar4 + 0x15f4) >> 5 & 1) == 0) {
      bVar5 = *pbVar1 & 0xfd;
    }
    else {
      bVar5 = *pbVar1 | 2;
    }
    *pbVar1 = bVar5;
  }
  return uVar2 & 1;
}

