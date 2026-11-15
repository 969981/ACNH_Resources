
void FUN_023ea818(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined *local_60;
  undefined *puStack_58;
  int local_50;
  int iStack_4c;
  undefined *local_48;
  int local_40;
  int iStack_3c;
  byte local_34 [4];
  undefined *local_30;
  char *pcStack_28;
  
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar4 = &DAT_05240280;
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "CommonBedInReady";
  FUN_017081d0(puVar4,&local_30,6,1,0);
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
    if (7 < *(byte *)(param_1 + 0x1ee8)) {
      lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    *(undefined8 *)(lVar1 + 0x420) = 0x100000000;
    *(undefined4 *)(lVar1 + 0x4c0) = 0;
    local_34[0] = *(byte *)(param_1 + 0x1ee8);
    local_60 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_58 = PTR_DAT_04bb2010 + 0x10;
    fVar5 = (float)*(int *)(param_1 + 0x1902) * 0.001 + -2.5;
    fVar6 = (float)*(int *)(param_1 + 0x1908) * 0.001 + -2.5;
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    local_50 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
    local_40 = local_50 + 1;
    iStack_4c = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
    iStack_3c = iStack_4c + 1;
    local_48 = puStack_58;
    bVar2 = FUN_02301084(lVar1 + 0x4c8,local_34,&local_60);
    *(byte *)(param_1 + 0xb48) = bVar2 & 1;
  }
  return;
}

