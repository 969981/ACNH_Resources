
void FUN_03c3e120(uint *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  void *__dest;
  void *__src;
  uint *puVar11;
  long lVar12;
  long *plVar13;
  uint *puVar14;
  
  if ((char)param_1[0x5d] != '\0') {
    if ((char)param_1[0x60] == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x5d) = 0;
  }
  uVar7 = param_1[0x5b];
  if (0 < (int)uVar7) {
    param_1[0x5b] = uVar7 - 1;
    uVar7 = uVar7 - 1;
  }
  if ((((char)param_1[0x58] != '\0') && (0 < (int)param_1[0x5a])) && (uVar7 == 0)) {
    uVar7 = param_1[0x59];
    lVar12 = *(long *)(param_1 + 2);
    __dest = *(void **)(param_1 + 8);
    if (*param_1 <= uVar7) {
      uVar7 = 0;
    }
    puVar14 = (uint *)(lVar12 + (long)(int)uVar7 * 0x150);
    param_1[4] = *puVar14;
    param_1[5] = puVar14[1];
    puVar11 = puVar14 + 2;
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11);
    __src = *(void **)(puVar14 + 4);
    if (__dest != __src) {
      (**(code **)(*(long *)(puVar14 + 2) + 0x18))(puVar11);
      lVar8 = 0;
      do {
        if (*(char *)(*(long *)(puVar14 + 4) + lVar8) == '\0') goto LAB_03c3e22c;
        lVar10 = *(long *)(puVar14 + 4) + lVar8;
        if (*(char *)(lVar10 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_03c3e22c;
        }
        if (*(char *)(lVar10 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_03c3e22c;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_03c3e22c:
      iVar4 = (int)lVar8;
      if ((int)param_1[10] <= (int)lVar8) {
        iVar4 = param_1[10] - 1;
      }
      memcpy(__dest,__src,(long)iVar4);
      *(undefined1 *)((long)__dest + (long)iVar4) = 0;
    }
    *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(puVar14 + 0x48);
    uVar1 = *(undefined8 *)(puVar14 + 0x4a);
    uVar2 = *(undefined8 *)(puVar14 + 0x4c);
    uVar9 = *(undefined8 *)(puVar14 + 0x4e);
    *(undefined8 *)((long)param_1 + 0x14e) = *(undefined8 *)((long)puVar14 + 0x13e);
    *(undefined8 *)(param_1 + 0x4e) = uVar1;
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    *(undefined8 *)(param_1 + 0x52) = uVar9;
    uVar3 = *param_1;
    *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(lVar12 + (long)(int)uVar7 * 0x150 + 0x148);
    iVar4 = 0;
    if (uVar3 != 0) {
      iVar4 = (int)(param_1[0x59] + 1) / (int)uVar3;
    }
    param_1[0x59] = (param_1[0x59] + 1) - iVar4 * uVar3;
    param_1[0x5a] = param_1[0x5a] - 1;
    param_1[0x5b] = 2;
    *(undefined1 *)(param_1 + 0x5d) = 1;
    puVar5 = PTR_DAT_04bb3518;
    uVar7 = param_1[0x5c];
    lVar8 = *(long *)(*(long *)PTR_DAT_04bb3518 + 0x108);
    lVar12 = *(long *)(lVar8 + 0x38);
    plVar6 = (long *)(lVar12 + -0x160);
    if (lVar12 != lVar8 + 0x30) {
      lVar10 = lVar12;
      plVar13 = plVar6;
      do {
        if (*(byte *)(plVar13 + 0x23) == uVar7) {
          nn::os::LockMutex((MutexType *)(plVar13 + 0x28));
          if ((int)plVar13[0x21] < *(int *)((long)plVar13 + 0x10c)) {
            *(uint **)(plVar13[0x22] + (long)(int)plVar13[0x21] * 8) = param_1 + 0x5e;
            *(int *)(plVar13 + 0x21) = (int)plVar13[0x21] + 1;
            *(undefined1 *)(param_1 + 0x60) = 0;
          }
          nn::os::UnlockMutex((MutexType *)(plVar13 + 0x28));
          uVar7 = param_1[0x5c];
          lVar8 = *(long *)(*(long *)puVar5 + 0x108);
          lVar12 = *(long *)(lVar8 + 0x38);
          plVar6 = (long *)(lVar12 + -0x160);
          break;
        }
        lVar10 = *(long *)(lVar10 + 8);
        plVar13 = (long *)(lVar10 + -0x160);
      } while (plVar13 != (long *)(lVar8 + -0x130));
    }
    while (plVar6 != (long *)(lVar8 + -0x130)) {
      if (*(byte *)(plVar6 + 0x23) == uVar7) {
                    /* WARNING: Could not recover jumptable at 0x03c3e3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))(plVar6,1,0);
        return;
      }
      lVar12 = *(long *)(lVar12 + 8);
      plVar6 = (long *)(lVar12 + -0x160);
    }
  }
  return;
}

