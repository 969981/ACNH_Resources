
void FUN_024641b0(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  char *__dest;
  undefined *local_48;
  char *local_40;
  uint local_34;
  
  lVar3 = FUN_0251e98c(1);
  puVar4 = (uint *)(**(code **)(*(long *)(lVar3 + 0x14a0) + 0xf0))(lVar3 + 0x14a0);
  if (param_2 <= *puVar4) {
    return;
  }
  lVar3 = FUN_0251e98c(1);
  puVar4 = (uint *)(**(code **)(*(long *)(lVar3 + 0x14a0) + 0xf0))(lVar3 + 0x14a0);
  if (*puVar4 < param_3) {
    return;
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    local_34 = 0;
  }
  else {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    local_34 = 0;
    if (uVar1 < 0x149) {
      local_34 = uVar1;
    }
    if (local_34 == 0xfb) goto LAB_02464290;
  }
  if (local_34 != 0xfa) {
    return;
  }
LAB_02464290:
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  local_48 = PTR_DAT_04bb2020 + 0x10;
  local_40 = "BreathEnd";
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  pcVar5 = (char *)(puVar7 + 0xb9e);
  if (*pcVar5 == '\0') {
    lVar3 = 0;
  }
  else {
    pcVar5 = (char *)(puVar7 + 0xbae);
    if (*pcVar5 == '\0') {
      lVar3 = 1;
    }
    else if (*(char *)(puVar7 + 0xbbe) == '\0') {
      pcVar5 = (char *)(puVar7 + 0xbbe);
      lVar3 = 2;
    }
    else {
      if (*(char *)(puVar7 + 0xbce) != '\0') {
        return;
      }
      pcVar5 = (char *)(puVar7 + 0xbce);
      lVar3 = 3;
    }
  }
  *pcVar5 = '\x01';
  __dest = (char *)puVar7[lVar3 * 0x10 + 0xb90];
  *(int *)((long)puVar7 + lVar3 * 0x80 + 0x5cf4) =
       (int)*(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x508);
  (**(code **)(local_48 + 0x18))(&local_48);
  pcVar5 = local_40;
  if (__dest != local_40) {
    (**(code **)(local_48 + 0x18))(&local_48);
    lVar6 = 0;
    do {
      if (local_40[lVar6] == '\0') goto LAB_024643c0;
      if (local_40[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_024643c0;
      }
      if (local_40[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_024643c0;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_024643c0:
    iVar2 = (int)lVar6;
    if (*(int *)(puVar7 + lVar3 * 0x10 + 0xb91) <= (int)lVar6) {
      iVar2 = *(int *)(puVar7 + lVar3 * 0x10 + 0xb91) + -1;
    }
    memcpy(__dest,pcVar5,(long)iVar2);
    __dest[iVar2] = '\0';
  }
  *(undefined4 *)(puVar7 + lVar3 * 0x10 + 0xb9d) = 0;
  return;
}

