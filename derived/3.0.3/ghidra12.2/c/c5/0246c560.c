
/* WARNING: Removing unreachable block (ram,0x0246c5c0) */

void FUN_0246c560(long param_1)

{
  int iVar1;
  float *pfVar2;
  undefined8 *puVar3;
  long lVar4;
  float fVar5;
  undefined *local_40;
  char *pcStack_38;
  
  fVar5 = -20.0;
  puVar3 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x4c8);
  }
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar4 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar4 != 0)) {
    local_40 = (undefined *)((ulong)local_40 & 0xffffffff00000000);
    lVar4 = *(long *)(lVar4 + 0x118);
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0x280);
      fVar5 = 0.0;
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 8), lVar4 != 0)) {
        pfVar2 = (float *)(**(code **)(*(long *)(lVar4 + 0x488) + 0xf0))(lVar4 + 0x488);
        fVar5 = *pfVar2;
      }
      lVar4 = FUN_0251e98c(1);
      pfVar2 = (float *)(**(code **)(*(long *)(lVar4 + 0x1560) + 0xf0))(lVar4 + 0x1560);
      fVar5 = fVar5 + *pfVar2;
    }
  }
  *(float *)((long)puVar3 + 0x27c) = fVar5;
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "PlayerDiveIn";
  FUN_017029bc(puVar3,&local_40,6,0,0);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 6;
  return;
}

