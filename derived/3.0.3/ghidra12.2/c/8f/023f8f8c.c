
void FUN_023f8f8c(long param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *local_48;
  char *pcStack_40;
  uint local_38;
  undefined4 local_34;
  
  cVar1 = *(char *)(param_1 + 0x190e);
  cVar2 = *(char *)(param_1 + 0x190d);
  local_38 = (uint)*(byte *)(param_1 + 0x1900);
  if (3 < local_38) {
    local_38 = 0;
  }
  if (local_38 == 3) {
    if (cVar2 == '\0') {
      FUN_023164ec(param_1,6);
      return;
    }
    local_34 = 3;
    *(byte *)(param_1 + 0x18f4) = *(byte *)(param_1 + 0x18f4) | 8;
    local_48 = (undefined *)CONCAT44(local_48._4_4_,3);
    FUN_0231b68c(param_1,6);
    return;
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
  if (((puVar7[0x227] != 0) && (lVar6 = *(long *)(puVar7[0x227] + 0x78), lVar6 != 0)) &&
     (plVar4 = *(long **)(lVar6 + 0x48), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,&DAT_054b4540,local_38);
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
  if (cVar2 == '\0') {
    pcStack_40 = "PlayerChestClose";
    uVar5 = 0;
  }
  else {
    if (cVar1 == '\0') {
      pcStack_40 = "PlayerChestOpen";
    }
    else {
      pcStack_40 = "PlayerChestOpenKeep";
    }
    uVar5 = 6;
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar7,&local_48,uVar5,0,0);
  return;
}

