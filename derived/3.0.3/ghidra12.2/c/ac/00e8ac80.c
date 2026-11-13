
void FUN_00e8ac80(long param_1,uint *param_2)

{
  uint *puVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  uVar13 = *param_2;
  if ((((uVar13 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar3;
    iVar6 = (**(code **)(*plVar8 + 0x60))();
    if (iVar6 < 0x11) {
      uVar13 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_00e8ad3c;
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_00e8ad3c:
    uVar13 = 0;
  }
  if (plVar12 == (long *)0x0) {
    return;
  }
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
  if ((uVar13 & uVar7) != 1) {
    return;
  }
  puVar14 = (undefined8 *)plVar12[0x77];
  if (((*PTR_DAT_04bb6b60 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb6b60), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb6b58 = PTR_DAT_04bb6b68 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6b60);
  }
  if ((puVar14 == (undefined8 *)0x0) ||
     (uVar9 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bb6b58), (uVar9 & 1) == 0)) {
    puVar14 = (undefined8 *)plVar12[0x77];
    if (((*PTR_DAT_04bb6b78 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb6b78), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb6b70 = PTR_DAT_04bb4100 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6b78);
    }
    if ((puVar14 != (undefined8 *)0x0) &&
       (uVar9 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bb6b70), (uVar9 & 1) != 0))
    goto LAB_00e8adf0;
    puVar14 = (undefined8 *)plVar12[0x77];
    if (((*PTR_DAT_04bb6908 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb6908), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb6900 = PTR_DAT_04bb6850 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6908);
    }
    if (puVar14 == (undefined8 *)0x0) {
      return;
    }
    uVar9 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bb6900);
    if ((uVar9 & 1) == 0) {
      return;
    }
    if (puVar14[1] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_021dcc90(puVar14[1] + 0x508);
    }
    if (iVar6 < 0x1b) {
      bVar4 = true;
    }
    else if (iVar6 == 0x1b) {
      bVar4 = false;
    }
    else {
      bVar4 = iVar6 != 0x1e;
    }
    if ((*(ushort *)(puVar14 + 0x24ae) & 1) == 0) {
      bVar5 = (*(byte *)((long)puVar14 + 0xad5a) & 2) == 0;
    }
    else {
      bVar5 = false;
    }
    lVar10 = plVar12[0xd];
    if (!(bool)(bVar4 | bVar5)) {
      if (lVar10 == 0) {
        return;
      }
      fVar16 = *(float *)(lVar10 + 0x278) + -2.5;
      lVar11 = *(long *)(param_1 + 8);
      fVar15 = *(float *)(lVar10 + 0x280) + -2.5;
      iVar6 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
      if ((((*(int *)(lVar11 + 0x10) <= iVar6) && (iVar6 + 1 <= *(int *)(lVar11 + 0x20))) &&
          (iVar6 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0),
          *(int *)(lVar11 + 0x14) <= iVar6)) &&
         ((iVar6 + 1 <= *(int *)(lVar11 + 0x24) && (uVar9 = FUN_01e7f04c(puVar14), (uVar9 & 1) != 0)
          ))) {
        return;
      }
      goto LAB_00e8aff0;
    }
  }
  else {
LAB_00e8adf0:
    lVar10 = plVar12[0xd];
  }
  if (lVar10 == 0) {
    return;
  }
  fVar16 = *(float *)(lVar10 + 0x278) + -2.5;
  lVar11 = *(long *)(param_1 + 8);
  fVar15 = *(float *)(lVar10 + 0x280) + -2.5;
  iVar6 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  if (iVar6 < *(int *)(lVar11 + 0x10)) {
    return;
  }
  if (*(int *)(lVar11 + 0x20) < iVar6 + 1) {
    return;
  }
  iVar6 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  if (iVar6 < *(int *)(lVar11 + 0x14)) {
    return;
  }
  if (*(int *)(lVar11 + 0x24) < iVar6 + 1) {
    return;
  }
LAB_00e8aff0:
  puVar1 = (uint *)(plVar12 + 0x49);
  if ((((*puVar1 >> 9 & 1) == 0) && ((*puVar1 >> 1 & 1) == 0)) && ((*puVar1 >> 8 & 1) == 0)) {
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 0x200;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((long *)plVar12[0x16] != plVar12 + 0x15) {
      lVar10 = (long)*(int *)((long)plVar12 + 0xbc);
      plVar8 = (long *)(plVar12[0x16] - lVar10);
      do {
        (**(code **)(*plVar8 + 0xb0))(plVar8);
        plVar8 = (long *)(*(long *)((long)plVar8 + lVar10 + 8) - lVar10);
      } while (plVar8 != (long *)((long)(plVar12 + 0x15) - lVar10));
    }
  }
  return;
}

