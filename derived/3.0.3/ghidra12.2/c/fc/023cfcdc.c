
void FUN_023cfcdc(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  byte local_28 [2];
  undefined2 local_26;
  undefined4 local_24;
  
  if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
    FUN_02334278(param_1);
  }
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
  FUN_01707f58(puVar3,6,6,0);
  uVar1 = *(uint *)(param_1 + 0x17cc);
  *(undefined4 *)(param_1 + 0xce8) = 0;
  *(uint *)(param_1 + 0x17cc) = uVar1 & 0xfffffffe;
  if (((uVar1 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
    local_24 = 0;
    local_28[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_28[0]) {
      local_28[0] = 0xff;
    }
    local_26 = *(undefined2 *)PTR_DAT_04bb6298;
    FUN_0254497c(local_28);
  }
  return;
}

