
void FUN_0242491c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  byte local_3c [4];
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  puVar4 = *(undefined8 **)(param_1 + 0x60);
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
  puVar2 = PTR_DAT_04bb37e0;
  *(undefined2 *)(puVar4 + 0xb86) = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)((long)puVar4 + 0x5c32) = puVar2[2];
  *(undefined *)((long)puVar4 + 0x5c33) = puVar2[3];
  *(undefined4 *)((long)puVar4 + 0x5c34) = *(undefined4 *)(puVar2 + 4);
  FUN_02330400(param_1);
  uVar1 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar1 & 0xfffffffe;
  if ((uVar1 & 1) != 0) {
    if ((*(ushort *)(param_1 + 0x1954) >> 8 & 1) == 0) {
      local_3c[0] = *(byte *)(param_1 + 0x1ee8);
      if (7 < local_3c[0]) {
        local_3c[0] = 0xff;
      }
      FUN_024232e0(local_3c,param_1 + 0x18e0);
    }
    FUN_023203ac(param_1,0,0);
    local_30 = 0;
    local_2c = 1;
    local_28 = 6;
    local_22 = 0;
    local_24 = 0;
    FUN_02321e44(auStack_38,param_1,&local_30);
  }
  FUN_02421f40(param_1);
  return;
}

