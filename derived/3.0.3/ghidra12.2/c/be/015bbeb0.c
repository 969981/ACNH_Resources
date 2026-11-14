
/* WARNING: Type propagation algorithm not settling */

float FUN_015bbeb0(long param_1)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  float *pfVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  float fVar16;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar15 = *(long *)(*(long *)(param_1 + 0x280) + 8);
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar15 == 0 || lVar12 == 0) {
    return 0.0;
  }
  uVar14 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar14 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar14)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar4;
    iVar8 = (**(code **)(*plVar9 + 0x60))();
    if (iVar8 < 0x11) {
      uVar14 = 0;
    }
    else {
      if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_015bbfac;
      uVar14 = 5U >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_015bbfac:
    uVar14 = 1;
  }
  if (plVar13 == (long *)0x0) {
    return 0.0;
  }
  lVar12 = plVar13[0x2a];
  if (((*PTR_DAT_04bb3280 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3280);
  }
  uVar10 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb3278);
  if ((int)lVar12 != 1) {
    uVar14 = 1;
  }
  if ((uVar10 & 1) == 0) {
    return 0.0;
  }
  if (uVar14 != 0) {
    return 0.0;
  }
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    plVar9 = *(long **)(*(long *)PTR_DAT_04bb2200 + 0x160);
    if (plVar9 == (long *)0x0) {
LAB_015bc1b4:
      pfVar11 = (float *)(**(code **)(*(long *)(lVar15 + 0x278) + 0xf0))(lVar15 + 0x278);
      fVar16 = *pfVar11;
      if ((*(long *)puVar4 == 0) || (uVar14 = *(uint *)((long)plVar13 + 0x274), uVar14 == 0)) {
LAB_015bc234:
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = *(long **)(*(long *)(*(long *)(*(long *)puVar4 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8));
        if (plVar13 != (long *)0x0) {
          if (((*(uint *)(plVar13 + 0x49) >> 1 & 1) == 0) && (*(uint *)(plVar13 + 0x46) == uVar14))
          {
            if (((*PTR_DAT_04bb32d8 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb32d8), iVar8 != 0)) {
              *(undefined **)PTR_DAT_04bb32d0 = PTR_DAT_04bb2e50 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb32d8);
            }
            bVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb32d0);
            goto LAB_015bc23c;
          }
          goto LAB_015bc234;
        }
      }
      bVar7 = 1;
LAB_015bc23c:
      plVar9 = plVar13 + 0x55;
      if ((bVar7 & plVar13 != (long *)0x0) == 0) {
        plVar9 = (long *)PTR_DAT_04bb39d0;
      }
      return fVar16 * (100.0 - *(float *)((long)plVar9 + 4));
    }
    bVar6 = false;
LAB_015bc08c:
    (**(code **)(*plVar9 + 0x18))(plVar9);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    if ((char *)plVar9[1] != "Viewer/GameSceneViewer") {
      uVar10 = 0;
      bVar5 = true;
      do {
        cVar2 = ((char *)plVar9[1])[uVar10];
        if (cVar2 != "Viewer/GameSceneViewer"[uVar10]) break;
        if (cVar2 == '\0') {
          if (!bVar6 && !bVar5) goto LAB_015bc1b4;
          goto LAB_015bc0fc;
        }
        bVar5 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      if (!bVar6) goto LAB_015bc1b4;
    }
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    bVar6 = (*puVar1 & 0x400000) != 0;
    plVar9 = *(long **)(*(long *)PTR_DAT_04bb2200 + 0x160);
    if (plVar9 != (long *)0x0) goto LAB_015bc08c;
    if ((*puVar1 & 0x400000) == 0) goto LAB_015bc1b4;
  }
LAB_015bc0fc:
  pfVar11 = (float *)(**(code **)(*(long *)(lVar15 + 0x278) + 0xf0))(lVar15 + 0x278);
  fVar16 = *pfVar11;
  if ((*(long *)puVar4 == 0) || (uVar14 = *(uint *)((long)plVar13 + 0x274), uVar14 == 0)) {
LAB_015bc17c:
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = *(long **)(*(long *)(*(long *)(*(long *)puVar4 + 0x1c0) + 8) +
                        ((ulong)(uVar14 >> 0x11) & 0x7ff8));
    if (plVar13 != (long *)0x0) {
      if (((*(uint *)(plVar13 + 0x49) >> 1 & 1) == 0) && (*(uint *)(plVar13 + 0x46) == uVar14)) {
        if (((*PTR_DAT_04bb32d8 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb32d8), iVar8 != 0)) {
          *(undefined **)PTR_DAT_04bb32d0 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb32d8);
        }
        bVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb32d0);
        goto LAB_015bc184;
      }
      goto LAB_015bc17c;
    }
  }
  bVar7 = 1;
LAB_015bc184:
  plVar9 = plVar13 + 0x55;
  if ((bVar7 & plVar13 != (long *)0x0) == 0) {
    plVar9 = (long *)PTR_DAT_04bb39d0;
  }
  return -(*(float *)((long)plVar9 + 4) * fVar16);
}

