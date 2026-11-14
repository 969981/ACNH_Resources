
void FUN_0176d630(long param_1)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  char *__src;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  char *__dest;
  void *__dest_00;
  void *__src_00;
  float fVar11;
  
  fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
  fVar11 = fVar11 * 8.381903e-08;
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  if (45.0 <= fVar11) {
    bVar4 = false;
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar11)) {
      bVar4 = fVar11 < 315.0;
      bVar5 = fVar11 == 315.0;
      bVar6 = false;
    }
  }
  if (bVar5 || bVar4 != bVar6) {
    bVar4 = false;
    if ((45.0 <= fVar11) && (bVar4 = false, !NAN(fVar11))) {
      bVar4 = fVar11 < 135.0;
    }
    if (bVar4) {
      uVar8 = 3;
      if (*(char *)(param_1 + 0x6e8) != '\0') {
        uVar8 = 1;
      }
      uVar9 = (ulong)uVar8;
      goto LAB_0176d6ec;
    }
    uVar8 = (uint)(fVar11 < 135.0);
    if (225.0 <= fVar11) {
      uVar8 = 1;
    }
    uVar9 = (ulong)uVar8;
    cVar3 = *(char *)(param_1 + 0x6e8);
  }
  else {
    uVar9 = 2;
    cVar3 = *(char *)(param_1 + 0x6e8);
  }
  if (cVar3 != '\0') {
    uVar9 = (ulong)*(uint *)(&DAT_04130c24 + uVar9 * 4);
  }
LAB_0176d6ec:
  __src = (char *)FUN_017f844c(*(long *)PTR_DAT_04bb5ce0 + 0xda0,uVar9);
  if ((__src == (char *)0x0) || (*__src == '\0')) {
    **(undefined1 **)(param_1 + 0x348) = 0;
    *(undefined4 *)(param_1 + 0x638) = 0;
  }
  else {
    __dest = *(char **)(param_1 + 0x348);
    if (__dest != __src) {
      lVar10 = 0;
      do {
        if (__src[lVar10] == '\0') goto LAB_0176d77c;
        if (__src[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_0176d77c;
        }
        if (__src[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_0176d77c;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_0176d77c:
      iVar2 = (int)lVar10;
      if (*(int *)(param_1 + 0x350) <= (int)lVar10) {
        iVar2 = *(int *)(param_1 + 0x350) + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      __dest[iVar2] = '\0';
    }
    __dest_00 = *(void **)(param_1 + 0x3e0);
    (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
    __src_00 = *(void **)(param_1 + 0x348);
    if (__dest_00 != __src_00) {
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
      lVar10 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x348) + lVar10) == '\0') goto LAB_0176d81c;
        lVar1 = *(long *)(param_1 + 0x348) + lVar10;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_0176d81c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_0176d81c;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_0176d81c:
      iVar2 = (int)lVar10;
      if (*(int *)(param_1 + 1000) <= (int)lVar10) {
        iVar2 = *(int *)(param_1 + 1000) + -1;
      }
      memcpy(__dest_00,__src_00,(long)iVar2);
      *(undefined1 *)((long)__dest_00 + (long)iVar2) = 0;
    }
  }
  uVar7 = FUN_0176d1a0(param_1 + 0x340);
  *(undefined4 *)(param_1 + 0x6f8) = uVar7;
  return;
}

