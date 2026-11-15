
void FUN_023c3310(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  char *local_28;
  
  local_30 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x190c) * 0.25,
                      (float)*(int *)(param_1 + 0x1908) * 0.001);
  local_28 = (char *)CONCAT44(local_28._4_4_,(float)*(int *)(param_1 + 0x190e) * 0.001);
  FUN_0231ece4(param_1,*(long *)(param_1 + 0x68) + 0x278,&local_30);
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  local_28 = "PlayerFtrPickupWall";
  FUN_017081d0(puVar2,&local_30,6,0,0);
  *(undefined1 *)(param_1 + 0x8f0) = 0;
  *(undefined1 *)(param_1 + 0x8c5) = 0;
  *(undefined1 *)(param_1 + 0x8e5) = 0;
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  *(undefined2 *)(param_1 + 0x8f8) = 0;
  *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(param_1 + 0x8bc);
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(param_1 + 0x8dc);
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  *(undefined4 *)(puVar2 + 0x255) = *(undefined4 *)((long)puVar2 + 0x12ac);
  *(undefined1 *)((long)puVar2 + 0x12b5) = 0;
  return;
}

