
void FUN_0176e510(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char *__src;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  char *__dest;
  float fVar9;
  
  fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
  fVar9 = fVar9 * 8.381903e-08;
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if (45.0 <= fVar9) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar9)) {
      bVar3 = fVar9 < 315.0;
      bVar4 = fVar9 == 315.0;
      bVar5 = false;
    }
  }
  if (bVar4 || bVar3 != bVar5) {
    bVar3 = false;
    if ((45.0 <= fVar9) && (bVar3 = false, !NAN(fVar9))) {
      bVar3 = fVar9 < 135.0;
    }
    if (bVar3) {
      uVar6 = 3;
      if (*(char *)(param_1 + 0x6e8) != '\0') {
        uVar6 = 1;
      }
      uVar7 = (ulong)uVar6;
      goto LAB_0176e5c8;
    }
    uVar6 = (uint)(fVar9 < 135.0);
    if (225.0 <= fVar9) {
      uVar6 = 1;
    }
    uVar7 = (ulong)uVar6;
    cVar2 = *(char *)(param_1 + 0x6e8);
  }
  else {
    uVar7 = 2;
    cVar2 = *(char *)(param_1 + 0x6e8);
  }
  if (cVar2 != '\0') {
    uVar7 = (ulong)*(uint *)(&DAT_04130c24 + uVar7 * 4);
  }
LAB_0176e5c8:
  __src = (char *)FUN_017f1c78(*(long *)PTR_DAT_04bb5ce0 + 0xda0,uVar7);
  if (__src == (char *)0x0) {
    __dest = *(char **)(param_1 + 0xb50);
  }
  else {
    __dest = *(char **)(param_1 + 0xb50);
    if (*__src != '\0') {
      if (__dest == __src) {
        return;
      }
      lVar8 = 0;
      do {
        if (__src[lVar8] == '\0') goto LAB_0176e654;
        if (__src[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_0176e654;
        }
        if (__src[lVar8 + 2] == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_0176e654;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_0176e654:
      iVar1 = (int)lVar8;
      if (*(int *)(param_1 + 0xb58) <= (int)lVar8) {
        iVar1 = *(int *)(param_1 + 0xb58) + -1;
      }
      memcpy(__dest,__src,(long)iVar1);
      __dest = __dest + iVar1;
    }
  }
  *__dest = '\0';
  if (**(char **)(param_1 + 0xb50) == '\0') {
    **(undefined1 **)(param_1 + 0x348) = 0;
    *(undefined4 *)(param_1 + 0x638) = 0;
  }
  return;
}

