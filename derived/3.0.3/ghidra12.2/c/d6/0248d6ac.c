
void FUN_0248d6ac(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
      lVar1 = DAT_052413b8;
      goto joined_r0x0248d6e4;
    }
    puVar3 = &DAT_05240280;
  }
  lVar1 = puVar3[0x227];
joined_r0x0248d6e4:
  if (lVar1 == 0) {
    uVar4 = FUN_0170a6d0(puVar3,0);
  }
  else {
    local_2c = 1;
    uVar4 = FUN_0170a6d0(puVar3,*(uint *)(puVar3 + 0x2d3) >> 1 & 1);
  }
  if ((uVar4 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) != 0) {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
      return;
    }
    uVar4 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar4 & 1) == 0) {
      local_24 = 0;
      local_2c = 6;
      local_28 = 1;
      FUN_02374e74(param_1,&local_2c);
    }
  }
  return;
}

