
void FUN_024758a0(long param_1)

{
  long lVar1;
  uint *puVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  void *__dest;
  void *__src;
  undefined1 auStack_68 [8];
  byte local_60 [4];
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  local_50._0_4_ = 0xb;
  *(uint *)((long)puVar14 + 0x15f4) = *(uint *)((long)puVar14 + 0x15f4) | 0x800;
  cVar3 = *(char *)(param_1 + 0x190a);
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar11 = FUN_00a738a0(param_1 + 0x1ee8,0);
    iVar10 = 0;
    if ((uVar11 & 1) != 0) {
      uVar9 = FUN_00a74b78(param_1 + 0x1ee8);
      iVar10 = 1;
      if (uVar9 < 0xf) {
        if ((1 << (ulong)(uVar9 & 0x1f) & 0x600dU) == 0) {
          if ((uVar9 == 7) || (uVar9 == 9)) {
            iVar10 = (uint)((*(byte *)(param_1 + 0x17d0) & 6) != 0) << 1;
          }
        }
        else {
          iVar10 = 2;
        }
      }
    }
    local_50._0_4_ = iVar10;
    *(char *)(param_1 + 0x190b) = (char)(int)local_50;
    local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(param_1 + 0x230));
    sVar5 = *(short *)PTR_DAT_04bb6298;
    if (sVar5 == -1) {
LAB_02475a0c:
      FUN_016f742c(&local_50,&local_58,0);
      iVar10 = (int)local_50;
    }
    else {
      local_50._0_4_ = 1;
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 1 & 1) == 0) goto LAB_02475a0c;
      iVar10 = 0;
    }
    *(short *)(param_1 + 0x190c) = (short)((uint)iVar10 >> 0x10);
  }
  local_58 = 0xfffe;
  FUN_0277d4ac(&local_58);
  local_58 = *(undefined8 *)(param_1 + 0x1900);
  local_5c = FUN_01705ce0(&local_58);
  if (*(char *)(param_1 + 0x190e) == '\0') goto LAB_02475bd0;
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  puVar6 = PTR_DAT_04bb2020;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = "HandToolAfterToolChange";
  if (((puVar14[0x227] != 0) && (lVar13 = *(long *)(puVar14[0x227] + 0x78), lVar13 != 0)) &&
     (plVar12 = *(long **)(lVar13 + 0x48), plVar12 != (long *)0x0)) {
    (**(code **)(*plVar12 + 0x28))(plVar12,&local_50,local_5c);
  }
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  local_50 = puVar6 + 0x10;
  local_48 = "ToolChangeShortcut";
  if (((puVar14[0x227] != 0) && (lVar13 = *(long *)(puVar14[0x227] + 0x78), lVar13 != 0)) &&
     (plVar12 = *(long **)(lVar13 + 0x48), plVar12 != (long *)0x0)) {
    (**(code **)(*plVar12 + 0x28))(plVar12,&local_50,cVar3 != '\0');
  }
  puVar7 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar7 == 0) {
LAB_02475b74:
    bVar8 = false;
    puVar14 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if (*(uint *)(lVar13 + 0x1d8) <= uVar9) goto LAB_02475b74;
    bVar8 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) != 0;
    puVar14 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  if (bVar8) {
    local_48 = "PlayerToolChangeOn";
  }
  else {
    local_48 = "PlayerToolChangeOff";
  }
  local_50 = puVar6 + 0x10;
  FUN_017081d0(puVar14,&local_50,6,1,0);
LAB_02475bd0:
  local_60[0] = *(byte *)(param_1 + 0x1ee8);
  if (7 < local_60[0]) {
    local_60[0] = 0xff;
  }
  local_50 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_50);
  local_50 = *(undefined **)(param_1 + 0x1900);
  bVar4 = *(byte *)(param_1 + 0x1908);
  if (1 < bVar4) {
    bVar4 = 0;
  }
  FUN_02471f38(local_60,&local_50,bVar4,(long)*(char *)(param_1 + 0x1909));
  local_50._4_4_ = (uint)((ulong)local_50 >> 0x20) & 0xffffff00;
  local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
  local_48 = (char *)CONCAT17(local_48._7_1_,6);
  local_48 = (char *)CONCAT26(local_48._6_2_,6);
  FUN_02321e44(auStack_68,param_1,&local_50);
  FUN_023203ac(param_1,1,0);
  puVar6 = PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 0x21d4) = 0;
  *(undefined2 *)(param_1 + 0x21cc) = *(undefined2 *)puVar6;
  *(undefined *)(param_1 + 0x21ce) = puVar6[2];
  *(undefined *)(param_1 + 0x21cf) = puVar6[3];
  *(undefined4 *)(param_1 + 0x21d0) = *(undefined4 *)(puVar6 + 4);
  puVar6 = PTR_PTR_04bb2238;
  __dest = *(void **)(param_1 + 0x21e0);
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(void **)(puVar6 + 8);
  if (__dest != __src) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    lVar13 = 0;
    do {
      if (*(char *)(*(long *)(puVar6 + 8) + lVar13) == '\0') goto LAB_02475d0c;
      lVar1 = *(long *)(puVar6 + 8) + lVar13;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_02475d0c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_02475d0c;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_02475d0c:
    iVar10 = (int)lVar13;
    if (*(int *)(param_1 + 0x21e8) <= (int)lVar13) {
      iVar10 = *(int *)(param_1 + 0x21e8) + -1;
    }
    memcpy(__dest,__src,(long)iVar10);
    *(undefined1 *)((long)__dest + (long)iVar10) = 0;
  }
  return;
}

