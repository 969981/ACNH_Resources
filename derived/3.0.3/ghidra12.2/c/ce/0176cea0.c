
void FUN_0176cea0(long param_1)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 *__src;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *__dest;
  void *__dest_00;
  void *__src_00;
  float fVar10;
  
  fVar10 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
  fVar10 = fVar10 * 8.381903e-08;
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  if (45.0 <= fVar10) {
    bVar4 = false;
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar10)) {
      bVar4 = fVar10 < 315.0;
      bVar5 = fVar10 == 315.0;
      bVar6 = false;
    }
  }
  if (bVar5 || bVar4 != bVar6) {
    bVar4 = false;
    if ((45.0 <= fVar10) && (bVar4 = false, !NAN(fVar10))) {
      bVar4 = fVar10 < 135.0;
    }
    if (bVar4) {
      uVar7 = 3;
      if (*(char *)(param_1 + 0x6e8) != '\0') {
        uVar7 = 1;
      }
      uVar8 = (ulong)uVar7;
      goto LAB_0176cf5c;
    }
    uVar7 = (uint)(fVar10 < 135.0);
    if (225.0 <= fVar10) {
      uVar7 = 1;
    }
    uVar8 = (ulong)uVar7;
    cVar3 = *(char *)(param_1 + 0x6e8);
  }
  else {
    uVar8 = 2;
    cVar3 = *(char *)(param_1 + 0x6e8);
  }
  if (cVar3 != '\0') {
    uVar8 = (ulong)*(uint *)(&DAT_04130c24 + uVar8 * 4);
  }
LAB_0176cf5c:
  __src = (undefined1 *)FUN_017f8364(*(long *)PTR_DAT_04bb5ce0 + 0xda0,uVar8);
  __dest = *(undefined1 **)(param_1 + 0x348);
  if (__src != (undefined1 *)0x0) {
    if (__dest != __src) {
      lVar9 = 0;
      do {
        if (__src[lVar9] == '\0') goto LAB_0176cfdc;
        if (__src[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0176cfdc;
        }
        if (__src[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0176cfdc;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0176cfdc:
      iVar2 = (int)lVar9;
      if (*(int *)(param_1 + 0x350) <= (int)lVar9) {
        iVar2 = *(int *)(param_1 + 0x350) + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      __dest[iVar2] = 0;
    }
    __dest_00 = *(void **)(param_1 + 0x3e0);
    (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
    __src_00 = *(void **)(param_1 + 0x348);
    if (__dest_00 == __src_00) {
      return;
    }
    (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
    lVar9 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x348) + lVar9) == '\0') goto LAB_0176d07c;
      lVar1 = *(long *)(param_1 + 0x348) + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0176d07c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_0176d07c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0176d07c:
    iVar2 = (int)lVar9;
    if (*(int *)(param_1 + 1000) <= (int)lVar9) {
      iVar2 = *(int *)(param_1 + 1000) + -1;
    }
    memcpy(__dest_00,__src_00,(long)iVar2);
    __dest = (undefined1 *)((long)__dest_00 + (long)iVar2);
  }
  *__dest = 0;
  return;
}

