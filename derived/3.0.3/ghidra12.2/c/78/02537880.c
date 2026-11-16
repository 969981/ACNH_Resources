
bool FUN_02537880(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 *__src;
  void *__dest;
  undefined **local_98;
  void *local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_45;
  
  local_45 = 0;
  local_90 = (void *)((long)&local_88 + 4);
  local_88 = 0x6552614d00000040;
  uVar7 = *param_2;
  local_80 = 0;
  local_98 = &PTR_LAB_048fb9f8;
  if ((int)uVar7 < 0x6d) {
    if (0x6c < uVar7) {
LAB_025378f8:
      __src = &DAT_0407ebb1;
      goto LAB_02537914;
    }
    ppuVar4 = &PTR_s_EmotEnd_04913cd8;
  }
  else {
    if (0x78 < uVar7) goto LAB_025378f8;
    ppuVar4 = (undefined **)FUN_007c3ad0();
    uVar7 = uVar7 - 0x6d;
  }
  __src = (undefined8 *)ppuVar4[uVar7];
LAB_02537914:
  pvVar3 = local_90;
  (*(code *)local_98[3])(&local_98);
  lVar6 = 0;
  do {
    if (*(char *)((long)local_90 + lVar6) == '\0') goto LAB_0253796c;
    if (*(char *)((long)local_90 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_0253796c;
    }
    if (*(char *)((long)local_90 + lVar6 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_0253796c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_0253796c:
  uVar7 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  lVar6 = 0;
  do {
    if (*(char *)((long)__src + lVar6) == '\0') goto LAB_025379b0;
    if (*(char *)((long)__src + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_025379b0;
    }
    if (*(char *)((long)__src + lVar6 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_025379b0;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_025379b0:
  uVar1 = (uint)lVar6;
  if ((int)((int)local_88 - uVar7) <= (int)(uint)lVar6) {
    uVar1 = (int)local_88 + ~uVar7;
  }
  if (0 < (int)uVar1) {
    memcpy((void *)((long)pvVar3 + (ulong)uVar7),__src,(ulong)uVar1);
    *(undefined1 *)((long)pvVar3 + (long)(int)(uVar1 + uVar7)) = 0;
  }
  lVar6 = FUN_0171ee68(&local_98);
  if (lVar6 != 0) {
    __dest = *(void **)(param_1 + 8);
    (*(code *)local_98[3])(&local_98);
    pvVar3 = local_90;
    if (__dest != local_90) {
      (*(code *)local_98[3])(&local_98);
      lVar5 = 0;
      do {
        if (*(char *)((long)local_90 + lVar5) == '\0') goto LAB_02537a6c;
        if (*(char *)((long)local_90 + lVar5 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_02537a6c;
        }
        if (*(char *)((long)local_90 + lVar5 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_02537a6c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_02537a6c:
      iVar2 = (int)lVar5;
      if (*(int *)(param_1 + 0x10) <= (int)lVar5) {
        iVar2 = *(int *)(param_1 + 0x10) + -1;
      }
      memcpy(__dest,pvVar3,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
  }
  return lVar6 != 0;
}

