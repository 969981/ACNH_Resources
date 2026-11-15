
void FUN_023df9b4(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  byte local_38 [4];
  undefined4 local_34;
  undefined8 local_18;
  
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
  FUN_023164ec(param_1,6);
  local_38[0] = *(byte *)(param_1 + 0x1ee8);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  local_18 = 0xfffe;
  FUN_0277d4ac(&local_18);
  local_18 = *(undefined8 *)(param_1 + 0x1900);
  local_34 = 0;
  FUN_02326c70(local_38,&local_18,&local_34);
  lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)local_38[0] * 0x740;
  if (7 < local_38[0]) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
    *(undefined4 *)(lVar1 + 0x5b4) = 3;
    FUN_01393458(lVar1 + 0x658);
  }
  else {
    *(undefined4 *)(lVar1 + 0x5b4) = 4;
  }
  *(undefined1 *)(param_1 + 0x8f0) = 0;
  *(undefined1 *)(param_1 + 0x8c5) = 0;
  *(undefined1 *)(param_1 + 0x8e5) = 0;
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  *(undefined2 *)(param_1 + 0x8f8) = 0;
  *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(param_1 + 0x8bc);
  *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(param_1 + 0x8dc);
  *(undefined4 *)(puVar3 + 0x255) = *(undefined4 *)((long)puVar3 + 0x12ac);
  *(undefined1 *)((long)puVar3 + 0x12b5) = 0;
  return;
}

