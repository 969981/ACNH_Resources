
void FUN_023da4a0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_8;
  
  FUN_02498a80();
  local_8 = 0xfffe;
  FUN_0277d4ac(&local_8);
  local_8 = *(undefined8 *)(param_1 + 0x1923);
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
  *(undefined2 *)((long)puVar2 + 0x5e8c) = (undefined2)local_8;
  *(undefined1 *)((long)puVar2 + 0x5e8e) = local_8._2_1_;
  *(undefined1 *)((long)puVar2 + 0x5e8f) = local_8._3_1_;
  *(undefined4 *)(puVar2 + 0xbd2) = local_8._4_4_;
  return;
}

