
void FUN_02455a60(long param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_120;
  undefined8 local_118;
  int local_110;
  undefined1 *local_c0;
  int local_b8;
  undefined4 local_68;
  
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x191a);
  cVar2 = *(char *)(param_1 + 0x191b);
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar8 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  if (((puVar8[0x227] != 0) && (lVar7 = *(long *)(puVar8[0x227] + 0x78), lVar7 != 0)) &&
     (plVar5 = *(long **)(lVar7 + 0x48), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x28))(plVar5,&DAT_054cce98,cVar1 != '\0');
  }
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar8 = &DAT_05240280;
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  local_120 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_118 = "CommonStairsOut";
  FUN_017081d0(puVar8,&local_120,6,0,0);
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x8000;
  local_120 = (undefined **)
              CONCAT44((float)(int)*(short *)(param_1 + 0x1912) * 0.25,
                       (float)*(int *)(param_1 + 0x190e) * 0.001);
  local_118 = (char *)CONCAT44((uint)*(ushort *)(param_1 + 0x1918) << 0x10,
                               (float)*(int *)(param_1 + 0x1914) * 0.001);
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar8 = &DAT_05240280;
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  FUN_01714178(puVar8,&local_120);
  if (((cVar2 != '\0') || (uVar6 = FUN_02453e40(), (uVar6 & 1) != 0)) &&
     (*(long *)(param_1 + 0x298) != 0)) {
    FUN_0234c5b0();
  }
  local_120 = &PTR_FUN_04a73030;
  local_118 = (char *)CONCAT71(local_118._1_7_,cVar1 != '\0');
  iVar4 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  if (iVar4 != 0) {
    lVar7 = (long)iVar4 << 3;
    puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_120)(&local_120,*puVar8);
      lVar7 = lVar7 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar7 != 0);
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x3ee08254 && *(int *)(param_1 + 0x178) == 0) {
    if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
      puVar8 = *(undefined8 **)(param_1 + 0x1dc0);
      *(undefined4 *)(param_1 + 0x1da8) = 0;
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffd;
      if (puVar8 != &DAT_0407ebb1) {
        iVar4 = 0;
        if (*(int *)(param_1 + 0x1dc8) < 1) {
          iVar4 = *(int *)(param_1 + 0x1dc8) + -1;
        }
        memset(puVar8,0,(long)iVar4);
        *(undefined1 *)((long)puVar8 + (long)iVar4) = 0;
      }
      puVar8 = *(undefined8 **)(param_1 + 0x1e18);
      if (puVar8 != &DAT_0407ebb1) {
        iVar4 = 0;
        if (*(int *)(param_1 + 0x1e20) < 1) {
          iVar4 = *(int *)(param_1 + 0x1e20) + -1;
        }
        memset(puVar8,0,(long)iVar4);
        *(undefined1 *)((long)puVar8 + (long)iVar4) = 0;
      }
      *(undefined8 *)(param_1 + 0x1e68) = 0;
      *(undefined8 *)(param_1 + 0x1e78) = 0;
      *(undefined2 *)(param_1 + 0x1e70) = 0xff;
    }
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffb;
    FUN_0230e2b0(&local_120);
    pcVar3 = local_118;
    if (local_118 != "System_HotelRoomVisit") {
      iVar4 = 0x15;
      if (local_110 < 0x16) {
        iVar4 = local_110 + -1;
      }
      memcpy(local_118,"System_HotelRoomVisit",(long)iVar4);
      pcVar3[iVar4] = '\0';
    }
    if (local_c0 != &DAT_04066c7f) {
      iVar4 = 4;
      if (local_b8 < 5) {
        iVar4 = local_b8 + -1;
      }
      memcpy(local_c0,&DAT_04066c7f,(long)iVar4);
      local_c0[iVar4] = 0;
    }
    local_68 = 0xc;
    FUN_02328d9c(param_1,&local_120);
  }
  return;
}

