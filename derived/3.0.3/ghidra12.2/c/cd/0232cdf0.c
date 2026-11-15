
undefined8 FUN_0232cdf0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  void *__src;
  undefined4 uVar3;
  int iVar4;
  undefined2 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint *puVar10;
  undefined8 *puVar11;
  void *__dest;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar2 = PTR_DAT_04bb4718;
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar10 = &DAT_054f08c0;
      if (iVar4 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar10 = &DAT_054f08c0;
    }
  }
  else {
    puVar10 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
  }
  local_40._0_4_ = 8;
  if ((*puVar10 >> 8 & 1) != 0) {
    return 0;
  }
  if (*(long *)puVar2 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar10 = &DAT_054f08c0;
      if (iVar4 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar10 = &DAT_054f08c0;
    }
  }
  else {
    puVar10 = (uint *)(*(long *)puVar2 + 0x1fc);
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,8);
  *puVar10 = *puVar10 | 0x100;
  puVar2 = PTR_DAT_04bb26a8;
  if ((*(long *)PTR_DAT_04bb39b0 == 0) || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)) {
    lVar7 = *(long *)PTR_DAT_04bb26a8;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    puStack_38 = &DAT_040bbbd8;
    for (lVar8 = *(long *)(lVar7 + 0x19f840); lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
      while (iVar4 = FUN_029ca720(&local_40,lVar8 + 0x20), -1 < iVar4) {
        if (iVar4 == 0) {
          uVar5 = *(undefined2 *)(lVar8 + 0x30);
          goto LAB_0232cfb8;
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) goto LAB_0232cfac;
      }
    }
LAB_0232cfac:
    uVar5 = 0xffff;
LAB_0232cfb8:
    FUN_02a0d880(lVar7 + 0xa7660,uVar5);
    (**(code **)(DAT_05491770 + 0x18))(&DAT_05491770);
    uVar3 = FUN_006bd550(DAT_05491778,0);
    lVar8 = *(long *)puVar2;
    plVar1 = (long *)(lVar8 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar8 + 0xb3b58));
    if (*(int *)(lVar8 + 0xb3b88) < *(int *)(lVar8 + 0xb3ba0)) {
      puVar11 = *(undefined8 **)(lVar8 + 0xb3b90);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar8 + 0xb3b90) = *puVar11;
      }
      *(undefined2 *)puVar11 = 0;
      plVar9 = puVar11 + 2;
      *plVar9 = 0;
      *(undefined1 *)((long)puVar11 + 2) = 0;
      *(undefined4 *)((long)puVar11 + 4) = uVar3;
      *(undefined4 *)(puVar11 + 1) = 0x3f800000;
      puVar11[3] = 0;
      lVar7 = *plVar1;
      *plVar1 = (long)plVar9;
      puVar11[3] = plVar1;
      *plVar9 = lVar7;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar9;
      }
      *(int *)(lVar8 + 0xb3b88) = *(int *)(lVar8 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0xb3b58));
  }
  else {
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    if (puVar11 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        puVar11 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar11 = &DAT_05240280;
      }
    }
    puVar2 = PTR_DAT_04bb2118;
    pcVar6 = (char *)(puVar11 + 0xb9e);
    if (*pcVar6 == '\0') {
      lVar8 = 0;
    }
    else {
      pcVar6 = (char *)(puVar11 + 0xbae);
      if (*pcVar6 == '\0') {
        lVar8 = 1;
      }
      else if (*(char *)(puVar11 + 0xbbe) == '\0') {
        pcVar6 = (char *)(puVar11 + 0xbbe);
        lVar8 = 2;
      }
      else {
        if (*(char *)(puVar11 + 0xbce) != '\0') {
          return 1;
        }
        pcVar6 = (char *)(puVar11 + 0xbce);
        lVar8 = 3;
      }
    }
    *pcVar6 = '\x01';
    __dest = (void *)puVar11[lVar8 * 0x10 + 0xb90];
    *(int *)((long)puVar11 + lVar8 * 0x80 + 0x5cf4) = (int)*(undefined8 *)(*(long *)puVar2 + 0x508);
    (**(code **)(DAT_05491790 + 0x18))(&DAT_05491790);
    __src = DAT_05491798;
    if (__dest != DAT_05491798) {
      (**(code **)(DAT_05491790 + 0x18))(&DAT_05491790);
      lVar7 = 0;
      do {
        if (*(char *)((long)DAT_05491798 + lVar7) == '\0') goto LAB_0232d13c;
        if (*(char *)((long)DAT_05491798 + lVar7 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_0232d13c;
        }
        if (*(char *)((long)DAT_05491798 + lVar7 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_0232d13c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_0232d13c:
      iVar4 = (int)lVar7;
      if (*(int *)(puVar11 + lVar8 * 0x10 + 0xb91) <= (int)lVar7) {
        iVar4 = *(int *)(puVar11 + lVar8 * 0x10 + 0xb91) + -1;
      }
      memcpy(__dest,__src,(long)iVar4);
      *(undefined1 *)((long)__dest + (long)iVar4) = 0;
    }
    *(undefined4 *)(puVar11 + lVar8 * 0x10 + 0xb9d) = 0;
  }
  return 1;
}

