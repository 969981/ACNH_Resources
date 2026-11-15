
uint FUN_022069a0(long *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *__src;
  undefined *local_98;
  long local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_45;
  
  uVar4 = (**(code **)(*param_1 + 0x100))();
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    goto LAB_02206b44;
  }
  uVar3 = *param_2;
  local_90 = (long)&local_88 + 4;
  local_45 = 0;
  local_88 = 0x6552614d00000040;
  local_80 = 0;
  local_98 = PTR_DAT_04bb2bc0 + 0x10;
  if ((int)uVar3 < 0x6d) {
    if (uVar3 < 0x6d) {
      ppuVar5 = &PTR_s_EmotEnd_04913cd8;
      goto LAB_02206a50;
    }
LAB_02206a38:
    __src = &DAT_0407ebb1;
  }
  else {
    if (0x78 < uVar3) goto LAB_02206a38;
    ppuVar5 = (undefined **)FUN_007c3ad0();
    uVar3 = uVar3 - 0x6d;
LAB_02206a50:
    __src = (undefined8 *)ppuVar5[uVar3];
  }
  lVar2 = local_90;
  (**(code **)(local_98 + 0x18))(&local_98);
  lVar6 = 0;
  do {
    if (*(char *)(local_90 + lVar6) == '\0') goto LAB_02206aac;
    if (*(char *)(local_90 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_02206aac;
    }
    if (*(char *)(local_90 + lVar6 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_02206aac;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_02206aac:
  uVar3 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  lVar6 = 0;
  do {
    if (*(char *)((long)__src + lVar6) == '\0') goto LAB_02206af0;
    if (*(char *)((long)__src + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_02206af0;
    }
    if (*(char *)((long)__src + lVar6 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_02206af0;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_02206af0:
  uVar1 = (uint)lVar6;
  if ((int)((int)local_88 - uVar3) <= (int)(uint)lVar6) {
    uVar1 = (int)local_88 + ~uVar3;
  }
  if (0 < (int)uVar1) {
    memcpy((void *)(lVar2 + (ulong)uVar3),__src,(ulong)uVar1);
    *(undefined1 *)(lVar2 + (int)(uVar1 + uVar3)) = 0;
  }
  lVar6 = FUN_0171ee68(&local_98);
  uVar3 = 0;
  if (lVar6 != 0) {
    uVar3 = FUN_0170acf0(param_1,&local_98,param_3 & 1);
  }
LAB_02206b44:
  return uVar3 & 1;
}

