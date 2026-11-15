
void FUN_023e2f84(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined *local_30;
  char *pcStack_28;
  
  uVar4 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0x288);
    uVar4 = 0;
    if (uVar1 < 0x149) {
      uVar4 = uVar1;
    }
  }
  local_30 = (undefined *)CONCAT44(local_30._4_4_,uVar4);
  if (uVar4 != 0x4f) {
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
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "FtrPushReady";
    FUN_017029bc(puVar3,&local_30,6,0,0);
  }
  return;
}

