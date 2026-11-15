
void FUN_024411b4(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_18 [8];
  
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar3 + 0x4e8))(plVar3,0);
  FUN_02cae8a8(*(undefined8 *)PTR_DAT_04bc5c78,param_1 + 0x1ee8);
  if ((*(uint *)(param_1 + 0x17d4) >> 5 & 1) == 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    if (puVar4 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar4 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar4 = &DAT_05240280;
      }
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    local_38 = "PlayerSharePlayWarpSceneIn";
    FUN_017029bc(puVar4,&local_40,6,0,0);
    uVar1 = *(uint *)(param_1 + 0x17d4) | 0x40;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x17d4) & 0xffffffbf;
  }
  *(uint *)(param_1 + 0x17d4) = uVar1;
  FUN_023203ac(param_1,0,0);
  local_40 = (undefined *)CONCAT35((int3)((ulong)local_40 >> 0x28),0x100000000);
  local_38 = (char *)CONCAT17(local_38._7_1_,6);
  local_38 = (char *)CONCAT26(local_38._6_2_,6);
  FUN_02321e44(auStack_18,param_1,&local_40);
  return;
}

