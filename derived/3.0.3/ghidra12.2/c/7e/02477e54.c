
void FUN_02477e54(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined1 auStack_48 [8];
  int local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  byte local_18 [4];
  uint local_14;
  
  if (*(char *)(param_1 + 0x190b) == '\0') {
    FUN_02472404(0,param_1);
    cVar1 = *(char *)(param_1 + 0x190b);
  }
  else {
    FUN_0244d1b8(0,param_1);
    cVar1 = *(char *)(param_1 + 0x190b);
  }
  if (cVar1 != '\0') {
    FUN_02320230(param_1);
  }
  if ((*(int *)(param_1 + 0x178) == 0) &&
     (local_40 = FUN_00a74b78(param_1 + 0x1ee8), local_40 == 0x13)) {
    FUN_0244d1b8(0,param_1);
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
    FUN_01702b70(puVar3,6,3);
  }
  local_14 = (uint)*(byte *)(param_1 + 0x190a);
  if (0xd < local_14) {
    local_14 = 0;
  }
  if (local_14 != 9) {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_054f0960);
        puVar4 = (uint *)&DAT_054f0958;
        if (iVar2 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
          puVar4 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar4 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar4 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar4 = puVar4 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
      }
    }
    local_40 = 4;
    *puVar4 = *puVar4 & 0xffffffef;
  }
  local_18[0] = *(byte *)(param_1 + 0x1ee8);
  if (7 < local_18[0]) {
    local_18[0] = 0xff;
  }
  if (*(char *)(param_1 + 0x190c) != '\0') {
    FUN_02471f38(local_18,PTR_DAT_04bb37e0,0,0xffffffff);
  }
  local_40 = 0;
  local_3c = 1;
  local_38 = 6;
  local_32 = 0;
  local_34 = 0;
  FUN_02321e44(auStack_48,param_1,&local_40);
  return;
}

