
void FUN_01fc6c5c(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (**(char **)(param_1 + 0x18) != '\0') {
    return;
  }
  uVar9 = *param_2;
  if (uVar9 == **(uint **)(param_1 + 8)) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
      goto joined_r0x01fc6d34;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01fc6d34;
    }
  }
  uVar9 = 0;
joined_r0x01fc6d34:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      lVar7 = *(long *)PTR_DAT_04bb4e28;
      iVar4 = FUN_03722560(lVar7,plVar8 + 0x7c);
      if ((iVar4 != -1) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0xe8) + (long)iVar4 * 8),
         (*(ushort *)(lVar7 + 0x114) >> 9 & 1) != 0)) {
        fVar10 = *(float *)(lVar7 + 0x104) + -2.5;
        iVar4 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
        fVar11 = (float)(iVar4 + 1) * 5.0 + 5.0;
        fVar10 = (float)*(int *)(*(long *)(param_1 + 0x10) + 8) * 5.0;
        bVar3 = false;
        if (((float)iVar4 * 5.0 <= fVar10) && (bVar3 = false, !NAN(fVar10) && !NAN(fVar11))) {
          bVar3 = fVar10 < fVar11;
        }
        if (bVar3) {
          fVar10 = *(float *)(lVar7 + 0x10c) + -2.5;
          iVar4 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
          fVar11 = (float)*(int *)(*(long *)(param_1 + 0x10) + 0xc) * 5.0;
          fVar10 = (float)(iVar4 + 1) * 5.0 + 5.0;
          bVar3 = false;
          if (((float)iVar4 * 5.0 <= fVar11) && (bVar3 = false, !NAN(fVar11) && !NAN(fVar10))) {
            bVar3 = fVar11 < fVar10;
          }
          if (bVar3) {
            **(undefined1 **)(param_1 + 0x18) = 1;
          }
        }
      }
    }
  }
  return;
}

