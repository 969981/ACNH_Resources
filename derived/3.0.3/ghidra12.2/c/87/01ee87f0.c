
void FUN_01ee87f0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *__dest;
  char *__src;
  undefined *local_b8;
  char *pcStack_b0;
  undefined *local_a8;
  char *local_a0;
  int local_98;
  char local_94 [63];
  undefined1 local_55;
  
  local_55 = 0;
  local_98 = 0x40;
  local_94[0] = '\0';
  local_a0 = local_94;
  local_a8 = PTR_DAT_04bb2bc0 + 0x10;
  uVar3 = FUN_01714adc(&local_a8,param_2,1);
  pcVar7 = local_a0;
  if ((uVar3 & 1) == 0) goto LAB_01ee89ac;
  __dest = *(char **)(param_1 + 0x78a8);
  if (*__dest == '\0') {
    (**(code **)(local_a8 + 0x18))(&local_a8);
    __src = local_a0;
    if (__dest != local_a0) {
      (**(code **)(local_a8 + 0x18))(&local_a8);
      lVar4 = 0;
      do {
        if (local_a0[lVar4] == '\0') {
LAB_01ee8978:
          iVar2 = (int)lVar4;
          iVar5 = *(int *)(param_1 + 0x78b0);
          goto LAB_01ee897c;
        }
        if (local_a0[lVar4 + 1] == '\0') {
          iVar5 = *(int *)(param_1 + 0x78b0);
          iVar2 = (int)lVar4 + 1;
          goto LAB_01ee897c;
        }
        if (local_a0[lVar4 + 2] == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_01ee8978;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      iVar5 = *(int *)(param_1 + 0x78b0);
      iVar2 = 0;
      goto LAB_01ee897c;
    }
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x78a0) + 0x18))(param_1 + 0x78a0);
    __src = *(char **)(param_1 + 0x78a8);
    if (pcVar7 != __src) {
      (**(code **)(*(long *)(param_1 + 0x78a0) + 0x18))(param_1 + 0x78a0);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x78a8) + lVar4) == '\0') goto LAB_01ee8960;
        lVar1 = *(long *)(param_1 + 0x78a8) + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_01ee8960;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_01ee8960;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_01ee8960:
      iVar2 = (int)lVar4;
      __dest = pcVar7;
      iVar5 = local_98;
LAB_01ee897c:
      if (iVar5 <= iVar2) {
        iVar2 = iVar5 + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      __dest[iVar2] = '\0';
    }
  }
  *(undefined1 *)(param_1 + 0x789c) = 1;
LAB_01ee89ac:
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x10))(param_3,&local_a8);
  }
  if (**(char **)(param_1 + 0x78a8) == '\0') {
    pcVar7 = "NpcPlayMusic";
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x78a0) + 0x18))(param_1 + 0x78a0);
    pcVar7 = *(char **)(param_1 + 0x78a8);
  }
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
  local_b8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_b0 = pcVar7;
  FUN_017081d0(puVar6,&local_b8,6,0,0);
  return;
}

