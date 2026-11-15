
void FUN_0248d7e4(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_3c [8];
  byte local_34 [4];
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  *(undefined1 *)(param_1 + 0x8f0) = 0;
  *(undefined1 *)(param_1 + 0x8c5) = 0;
  *(undefined1 *)(param_1 + 0x8e5) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  *(undefined2 *)(param_1 + 0x8f8) = 0;
  *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(param_1 + 0x8bc);
  *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(param_1 + 0x8dc);
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
  *(undefined1 *)((long)puVar2 + 0x12b5) = 0;
  *(undefined4 *)(puVar2 + 0x255) = *(undefined4 *)((long)puVar2 + 0x12ac);
  local_34[0] = *(byte *)(param_1 + 0x1ee8);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  FUN_0248d900(local_34,param_1 + 0x18e0);
  local_30 = 0;
  local_28 = 6;
  local_2c = 0;
  local_22 = 0;
  local_24 = 0;
  FUN_02321e44(auStack_3c,param_1,&local_30);
  return;
}

