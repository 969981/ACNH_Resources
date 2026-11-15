
void FUN_023718a0(long param_1)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 local_50;
  char *pcStack_48;
  
  lVar4 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar4 == 0) || (bVar6 = *(byte *)(param_1 + 0x1ee8), *(int *)(lVar4 + 0x15c) == 0)) {
    bVar2 = false;
  }
  else {
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar4 + 0x15c) != 0) {
      pbVar1 = (byte *)(lVar4 + 0x158);
    }
    bVar5 = *pbVar1;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    bVar2 = bVar5 != bVar6;
  }
  if ((*(int *)(param_1 + 0x178) == 0) && (!bVar2)) {
    local_50 = (undefined **)
               (CONCAT44(local_50._4_4_,(uint)(**(byte **)PTR_DAT_04bb38d0 >> 2)) &
               0xffffffff0000000f);
    if (((int)local_50 == 6) && (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2)) {
      local_50 = &PTR_FUN_04a732b0;
      iVar3 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
      if (iVar3 != 0) {
        lVar4 = (long)iVar3 << 3;
        puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
        do {
          (*(code *)*local_50)(&local_50,*puVar7);
          lVar4 = lVar4 + -8;
          puVar7 = puVar7 + 1;
        } while (lVar4 != 0);
      }
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  local_50 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  pcStack_48 = "PlayerTkkLiveClap";
  FUN_017081d0(puVar7,&local_50,6,1,0);
  return;
}

