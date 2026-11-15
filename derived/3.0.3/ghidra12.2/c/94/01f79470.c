
void FUN_01f79470(long param_1)

{
  undefined *puVar1;
  undefined1 *__src;
  int iVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *__dest;
  undefined *local_40;
  undefined1 *local_38;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  puVar1 = PTR_DAT_04bb2020;
  pcVar3 = (char *)(puVar6 + 0xb9e);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_38 = &DAT_040ff51f;
  if (*pcVar3 == '\0') {
    lVar5 = 0;
  }
  else {
    pcVar3 = (char *)(puVar6 + 0xbae);
    if (*pcVar3 == '\0') {
      lVar5 = 1;
    }
    else if (*(char *)(puVar6 + 0xbbe) == '\0') {
      pcVar3 = (char *)(puVar6 + 0xbbe);
      lVar5 = 2;
    }
    else {
      if (*(char *)(puVar6 + 0xbce) != '\0') {
        return;
      }
      pcVar3 = (char *)(puVar6 + 0xbce);
      lVar5 = 3;
    }
  }
  *pcVar3 = '\x01';
  __dest = (undefined1 *)puVar6[lVar5 * 0x10 + 0xb90];
  *(int *)((long)puVar6 + lVar5 * 0x80 + 0x5cf4) = *(int *)(*(long *)PTR_DAT_04bb2118 + 0x508) + 1;
  (**(code **)(puVar1 + 0x28))(&local_40);
  __src = local_38;
  if (__dest != local_38) {
    (**(code **)(local_40 + 0x18))(&local_40);
    lVar4 = 0;
    do {
      if (local_38[lVar4] == '\0') goto LAB_01f795bc;
      if (local_38[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01f795bc;
      }
      if (local_38[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01f795bc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01f795bc:
    iVar2 = (int)lVar4;
    if (*(int *)(puVar6 + lVar5 * 0x10 + 0xb91) <= (int)lVar4) {
      iVar2 = *(int *)(puVar6 + lVar5 * 0x10 + 0xb91) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    __dest[iVar2] = 0;
  }
  *(undefined4 *)(puVar6 + lVar5 * 0x10 + 0xb9d) = 0;
  return;
}

