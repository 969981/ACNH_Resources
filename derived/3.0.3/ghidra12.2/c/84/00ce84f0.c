
void FUN_00ce84f0(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  
  puVar5 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  uVar18 = *param_2;
  if ((((uVar18 == 0) ||
       (plVar17 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
      ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar17 + 0x46) != uVar18)) {
    plVar17 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar5;
    iVar7 = (**(code **)(*plVar9 + 0x60))();
    if (iVar7 < 0x11) {
      uVar18 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_00ce85b0;
      uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_00ce85b0:
    uVar18 = 0;
  }
  if (plVar17 == (long *)0x0) {
    return;
  }
  lVar10 = plVar17[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar8 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb37d0);
  if ((int)lVar10 != 1) {
    return;
  }
  if ((uVar18 & uVar8) != 1) {
    return;
  }
  lVar10 = plVar17[0x77];
  if (lVar10 == 0) {
    return;
  }
  lVar12 = plVar17[0xa0];
  plVar9 = plVar17 + 0x7c;
  uVar20 = *(undefined8 *)(lVar10 + 0xad58);
  (**(code **)(plVar17[0x7c] + 0x18))(plVar9);
  (**(code **)(plVar17[0x7c] + 0x18))(plVar9);
  if ((undefined1 *)plVar17[0x7d] == &DAT_04066e12) {
    return;
  }
  uVar15 = 0;
  puVar1 = (uint *)(plVar17 + 0x49);
  bVar6 = true;
  do {
    cVar3 = ((undefined1 *)plVar17[0x7d])[uVar15];
    if (cVar3 != (&DAT_04066e12)[uVar15]) break;
    if (cVar3 == '\0') {
      if (bVar6) {
        return;
      }
      break;
    }
    bVar6 = uVar15 < 0x80000;
    uVar15 = uVar15 + 1;
  } while (uVar15 != 0x80001);
  (**(code **)(plVar17[0x7c] + 0x18))(plVar9);
  (**(code **)(plVar17[0x7c] + 0x18))(plVar9);
  pcVar11 = (char *)plVar17[0x7d];
  if (pcVar11 == "sza") {
    return;
  }
  uVar18 = (uint)uVar20;
  if (*pcVar11 == 's') {
    uVar15 = 0;
    do {
      uVar16 = uVar15;
      uVar15 = uVar16;
      if (uVar16 == 0x80000) goto LAB_00ce8728;
      if (pcVar11[uVar16 + 1] != (&DAT_04076b76)[uVar16]) {
        uVar15 = 0;
        goto LAB_00ce8728;
      }
      uVar15 = uVar16 + 1;
    } while (pcVar11[uVar16 + 1] != '\0');
    uVar15 = 1;
LAB_00ce8728:
    uVar8 = (uint)(uVar16 < 0x80000) & (uint)uVar15;
    if (((int)lVar12 != 0) && ((uVar18 >> 0xc & 1) != 0)) {
      if (uVar8 != 0) {
        return;
      }
      goto LAB_00ce8740;
    }
    if (uVar8 != 0) {
      return;
    }
  }
  else if (((int)lVar12 != 0) && ((uVar18 >> 0xc & 1) != 0)) {
LAB_00ce8740:
    puVar19 = (undefined8 *)plVar17[0xc];
    if (puVar19 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar19 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar19 = &DAT_05240280;
      }
    }
    (**(code **)(plVar17[0x7c] + 0x18))(plVar9);
    (**(code **)(plVar17[0x7c] + 0x18))(plVar9);
    if ((undefined1 *)plVar17[0x7d] != &DAT_040b026f) {
      uVar15 = 0;
      bVar6 = true;
      do {
        cVar3 = ((undefined1 *)plVar17[0x7d])[uVar15];
        if (cVar3 != (&DAT_040b026f)[uVar15]) break;
        if (cVar3 == '\0') {
          if (bVar6) goto LAB_00ce88b8;
          break;
        }
        bVar6 = uVar15 < 0x80000;
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x80001);
      (**(code **)(plVar17[0x7c] + 0x18))(plVar9);
      (**(code **)(plVar17[0x7c] + 0x18))(plVar9);
      pcVar11 = (char *)plVar17[0x7d];
      if (pcVar11 != "hgh") {
        if (*pcVar11 != 'h') {
LAB_00ce8920:
          *(undefined4 *)((long)puVar19 + 0x12d4) = *(undefined4 *)(param_1 + 8);
          return;
        }
        lVar12 = 0;
        do {
          if ((lVar12 == 0x80000) || (lVar4 = lVar12 + 1, pcVar11[lVar4] != (&DAT_04086b31)[lVar12])
             ) goto LAB_00ce8920;
          lVar12 = lVar12 + 1;
        } while (pcVar11[lVar4] != '\0');
      }
    }
LAB_00ce88b8:
    uVar8 = FUN_006bd550("IsPAnnounce",0);
    uVar18 = *(uint *)(lVar10 + 0x20);
    if (uVar18 != 0) {
      lVar12 = *(long *)(lVar10 + 0x28);
      if ((int)uVar18 < 2) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        iVar7 = uVar18 - 1;
        do {
          uVar2 = iVar7 + uVar13;
          if ((int)uVar2 < 0 != SCARRY4(iVar7,uVar13)) {
            uVar2 = uVar2 + 1;
          }
          uVar14 = (int)uVar2 >> 1;
          uVar2 = *(uint *)(lVar12 + ((long)((ulong)uVar2 << 0x20) >> 0x21) * 0x20 + 0x18);
          if (uVar2 == uVar8) goto LAB_00ce8960;
          if (uVar2 < uVar8) {
            uVar13 = uVar14 + 1;
          }
          else {
            iVar7 = uVar14 - 1;
          }
        } while ((int)uVar13 < iVar7);
      }
      uVar14 = uVar13;
      if (*(uint *)(lVar12 + (long)(int)uVar13 * 0x20 + 0x18) == uVar8) {
LAB_00ce8960:
        if (-1 < (int)uVar14) {
          if (uVar18 <= uVar14) {
            uVar14 = 0;
          }
          *(undefined4 *)(lVar12 + (ulong)uVar14 * 0x20) = 1;
        }
      }
    }
    FUN_01ea5c80(lVar10,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
    return;
  }
  *(undefined4 *)(*(long *)(plVar17[0x12] + 0x278) + 0x40) = 0;
  if ((((*(uint *)(plVar17 + 0x49) >> 9 & 1) == 0) && ((*puVar1 >> 1 & 1) == 0)) &&
     ((*puVar1 >> 8 & 1) == 0)) {
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 0x200;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((long *)plVar17[0x16] != plVar17 + 0x15) {
      lVar10 = (long)*(int *)((long)plVar17 + 0xbc);
      plVar9 = (long *)(plVar17[0x16] - lVar10);
      do {
        (**(code **)(*plVar9 + 0xb0))(plVar9);
        plVar9 = (long *)(*(long *)((long)plVar9 + lVar10 + 8) - lVar10);
      } while (plVar9 != (long *)((long)(plVar17 + 0x15) - lVar10));
    }
  }
  return;
}

