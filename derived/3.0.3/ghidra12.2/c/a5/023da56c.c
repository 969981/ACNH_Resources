
void FUN_023da56c(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  FUN_02499384(param_1,param_2);
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
  puVar1 = PTR_DAT_04bb37e0;
  *(undefined2 *)((long)puVar3 + 0x5e8c) = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)((long)puVar3 + 0x5e8e) = puVar1[2];
  *(undefined *)((long)puVar3 + 0x5e8f) = puVar1[3];
  *(undefined4 *)(puVar3 + 0xbd2) = *(undefined4 *)(puVar1 + 4);
  return;
}

