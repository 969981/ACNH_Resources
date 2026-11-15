
void FUN_01f86bb0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 *__src;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *__dest;
  long lVar9;
  undefined4 local_650;
  float local_64c;
  undefined4 uStack_648;
  float local_644;
  undefined8 local_640;
  undefined1 *local_638;
  undefined8 local_28;
  
  uVar5 = FUN_0291e130(&local_640,&local_64c,9);
  bVar3 = (uVar5 & 1) == 0;
  local_644 = local_638._0_4_ + 10.0;
  local_64c = (float)local_640;
  uStack_648 = local_640._4_4_;
  if (bVar3) {
    uStack_648 = 0;
    local_64c = 515.0;
  }
  local_650 = 0x80000000;
  if (bVar3) {
    local_644 = 215.0;
  }
  FUN_01e39778(*(undefined8 *)(param_1 + 8),&local_64c,&local_650,0);
  local_28 = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x56c) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x570) = 0;
  lVar9 = *(long *)(param_1 + 0x10);
  local_640 = (undefined *)
              (ulong)(uint)((float)(int)((int)((float)(int)local_64c / 5.0) -
                                        (uint)(local_64c < 0.0)) * 5.0 + 2.5);
  local_638 = (undefined1 *)
              CONCAT44(local_638._4_4_,
                       (float)(int)((int)((float)(int)local_644 / 5.0) - (uint)(local_644 < 0.0)) *
                       5.0 + 2.5);
  FUN_01e5a930(0x40000000,lVar9,0x14,&local_640,(long)&local_28 + 4,&local_28,PTR_DAT_04bc1600,6);
  uVar1 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined4 *)(lVar9 + 0x408) = *(undefined4 *)PTR_DAT_04bb37e0;
  *(undefined4 *)(lVar9 + 0x40c) = uVar1;
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
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
  puVar2 = PTR_DAT_04bb2020;
  pcVar6 = (char *)(puVar8 + 0xb9e);
  local_640 = PTR_DAT_04bb2020 + 0x10;
  local_638 = &DAT_040ca868;
  if (*pcVar6 == '\0') {
    lVar9 = 0;
  }
  else {
    pcVar6 = (char *)(puVar8 + 0xbae);
    if (*pcVar6 == '\0') {
      lVar9 = 1;
    }
    else if (*(char *)(puVar8 + 0xbbe) == '\0') {
      pcVar6 = (char *)(puVar8 + 0xbbe);
      lVar9 = 2;
    }
    else {
      if (*(char *)(puVar8 + 0xbce) != '\0') {
        return;
      }
      pcVar6 = (char *)(puVar8 + 0xbce);
      lVar9 = 3;
    }
  }
  *pcVar6 = '\x01';
  __dest = (undefined1 *)puVar8[lVar9 * 0x10 + 0xb90];
  *(int *)((long)puVar8 + lVar9 * 0x80 + 0x5cf4) = *(int *)(*(long *)PTR_DAT_04bb2118 + 0x508) + 1;
  (**(code **)(puVar2 + 0x28))(&local_640);
  __src = local_638;
  if (__dest != local_638) {
    (**(code **)(local_640 + 0x18))(&local_640);
    lVar7 = 0;
    do {
      if (local_638[lVar7] == '\0') goto LAB_01f86e2c;
      if (local_638[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01f86e2c;
      }
      if (local_638[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01f86e2c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01f86e2c:
    iVar4 = (int)lVar7;
    if (*(int *)(puVar8 + lVar9 * 0x10 + 0xb91) <= (int)lVar7) {
      iVar4 = *(int *)(puVar8 + lVar9 * 0x10 + 0xb91) + -1;
    }
    memcpy(__dest,__src,(long)iVar4);
    __dest[iVar4] = 0;
  }
  *(undefined4 *)(puVar8 + lVar9 * 0x10 + 0xb9d) = 0;
  return;
}

