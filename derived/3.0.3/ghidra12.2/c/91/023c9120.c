
void FUN_023c9120(long param_1,ulong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  puVar1 = (undefined1 *)((long)puVar5 + 0x5f06);
  uVar2 = *puVar1;
  *puVar1 = 1;
  if ((*(uint *)(param_1 + 0x17d0) >> 0x14 & 1) != 0) {
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xffefffff;
    *(undefined4 *)(param_1 + 0x1f88) = 9;
    if (*(long *)(param_1 + 0x4d0) != 0) {
      local_38 = *param_3;
      FUN_023c92f0(param_1,&local_38);
      if ((param_2 & 1) == 0) {
        plVar4 = *(long **)(param_1 + 0x4d0);
        local_34 = 0;
        FUN_0172d300((int)plVar4[1],plVar4,&local_34,0);
        *(undefined1 *)((long)plVar4 + 0x16) = 0;
        FUN_0172e420(*plVar4 + 0x1430,0);
      }
    }
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    if (puVar5 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar5 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    *(uint *)((long)puVar5 + 0x15f4) = *(uint *)((long)puVar5 + 0x15f4) & 0xffffefff;
  }
  *(undefined4 *)(param_1 + 0x2240) = 0xffffffff;
  *puVar1 = uVar2;
  return;
}

