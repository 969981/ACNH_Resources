
void FUN_023f71e8(long param_1)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 local_4c [12];
  undefined8 local_40;
  char *local_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  cVar3 = *(char *)(param_1 + 0x1923);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_38 = "PlayerChairBedToSWalk";
  if (((puVar5[0x227] != 0) && (lVar4 = *(long *)(puVar5[0x227] + 0x78), lVar4 != 0)) &&
     (plVar2 = *(long **)(lVar4 + 0x48), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_40,cVar3 != '\0');
    cVar3 = *(char *)(param_1 + 0x1923);
  }
  if (cVar3 != '\0') {
    *(undefined4 *)(param_1 + 0x1810) = 7;
  }
  local_40 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x191a) * 0.25,
                      (float)*(int *)(param_1 + 0x1916) * 0.001);
  local_38 = (char *)CONCAT44(local_38._4_4_,(float)*(int *)(param_1 + 0x191c) * 0.001);
  FUN_016d8b9c(param_1,&local_40,local_4c,*(undefined1 *)(param_1 + 0x1921),0);
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar2 = &DAT_05240280;
    }
    else {
      plVar2 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar2 + 0x4b8))(0x3f800000);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 4;
  if (*(int *)(param_1 + 0x178) == 0) {
    *(byte *)(param_1 + 0x18f5) = *(byte *)(param_1 + 0x18f5) & 0xfd;
  }
  return;
}

