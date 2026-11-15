
void FUN_02052120(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  void *__dest;
  uint uVar12;
  void *__src;
  
  puVar3 = PTR_DAT_04bb27c0;
  if (**(char **)(param_1 + 0xf0) == '\0') {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar12 = *(uint *)(param_1 + 0x54);
  if ((((uVar12 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar12)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar12 = 1;
      goto joined_r0x020521ec;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020521ec;
    }
  }
  uVar12 = 0;
joined_r0x020521ec:
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    uVar2 = 0;
    if ((int)lVar7 == 1) {
      uVar2 = uVar12;
    }
    if (((uVar6 & 1) != 0) && (uVar2 != 0)) {
      puVar11 = (undefined8 *)plVar10[0xc];
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
      pcVar8 = (char *)(puVar11 + 0xb9e);
      if (*pcVar8 == '\0') {
        lVar7 = 0;
      }
      else {
        pcVar8 = (char *)(puVar11 + 0xbae);
        if (*pcVar8 == '\0') {
          lVar7 = 1;
        }
        else if (*(char *)(puVar11 + 0xbbe) == '\0') {
          pcVar8 = (char *)(puVar11 + 0xbbe);
          lVar7 = 2;
        }
        else {
          if (*(char *)(puVar11 + 0xbce) != '\0') {
            return;
          }
          pcVar8 = (char *)(puVar11 + 0xbce);
          lVar7 = 3;
        }
      }
      *pcVar8 = '\x01';
      __dest = (void *)puVar11[lVar7 * 0x10 + 0xb90];
      *(int *)((long)puVar11 + lVar7 * 0x80 + 0x5cf4) =
           (int)*(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x508);
      (**(code **)(*(long *)(param_1 + 0xe8) + 0x18))(param_1 + 0xe8);
      __src = *(void **)(param_1 + 0xf0);
      if (__dest != __src) {
        (**(code **)(*(long *)(param_1 + 0xe8) + 0x18))(param_1 + 0xe8);
        lVar9 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0xf0) + lVar9) == '\0') goto LAB_0205235c;
          lVar1 = *(long *)(param_1 + 0xf0) + lVar9;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_0205235c;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_0205235c;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_0205235c:
        iVar4 = (int)lVar9;
        if (*(int *)(puVar11 + lVar7 * 0x10 + 0xb91) <= (int)lVar9) {
          iVar4 = *(int *)(puVar11 + lVar7 * 0x10 + 0xb91) + -1;
        }
        memcpy(__dest,__src,(long)iVar4);
        *(undefined1 *)((long)__dest + (long)iVar4) = 0;
      }
      *(undefined4 *)(puVar11 + lVar7 * 0x10 + 0xb9d) = 0;
    }
  }
  return;
}

