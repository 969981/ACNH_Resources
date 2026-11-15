
void FUN_020cd0a0(long param_1,uint *param_2)

{
  int *piVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  lVar12 = *(long *)(param_1 + 8);
  uVar13 = *param_2;
  if ((((uVar13 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar13)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar13 = 1;
      goto joined_r0x020cd160;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020cd160;
    }
  }
  uVar13 = 0;
joined_r0x020cd160:
  if (plVar11 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
    if ((uVar13 & uVar6) == 1) {
      fVar14 = *(float *)(plVar11[0xd] + 0x294);
      fVar15 = *(float *)(plVar11[0xd] + 0x29c);
      fVar14 = SQRT(fVar15 * fVar15 + fVar14 * fVar14);
      bVar3 = false;
      bVar4 = true;
      if (-1.1920929e-07 <= fVar14) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar14)) {
          bVar3 = fVar14 == 1.1920929e-07;
          bVar4 = 1.1920929e-07 <= fVar14;
        }
      }
      if (bVar4 && !bVar3) {
        uVar13 = *param_2;
        piVar1 = (int *)(lVar12 + 0x196c0);
        iVar5 = *piVar1;
        if (iVar5 != 0) {
          puVar10 = *(undefined8 **)(lVar12 + 0x196c8);
          lVar8 = (long)iVar5 << 3;
          do {
            if (uVar13 == *(uint *)*puVar10) {
              ((uint *)*puVar10)[1] = 0x96;
              return;
            }
            puVar10 = puVar10 + 1;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
          if (0x1b < iVar5) {
            return;
          }
        }
        if (iVar5 < *(int *)(lVar12 + 0x196c4)) {
          puVar9 = *(ulong **)(lVar12 + 0x196d0);
          if (puVar9 != (ulong *)0x0) {
            *(ulong *)(lVar12 + 0x196d0) = *puVar9;
          }
          *puVar9 = (ulong)uVar13 | 0x9600000000;
          if (*piVar1 < *(int *)(lVar12 + 0x196c4)) {
            *(ulong **)(*(long *)(lVar12 + 0x196c8) + (long)*piVar1 * 8) = puVar9;
            *piVar1 = *piVar1 + 1;
          }
        }
      }
    }
  }
  return;
}

