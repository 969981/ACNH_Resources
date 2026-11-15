
void FUN_0220d778(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  puVar6 = PTR_DAT_04bb27c0;
  uVar12 = *param_2;
  if (uVar12 == 0) {
    return;
  }
  if (**(uint **)(param_1 + 0x10) != 0 && uVar12 == **(uint **)(param_1 + 0x10)) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + ((ulong)(uVar12 >> 0x11) & 0x7ff8)
                      );
  if (((plVar11 == (long *)0x0) || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar6;
    iVar7 = (**(code **)(*plVar8 + 0x60))();
    if (iVar7 < 0x11) {
      uVar12 = 1;
      goto joined_r0x0220d848;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0220d848;
    }
  }
  uVar12 = 0;
joined_r0x0220d848:
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar10 == 1) {
      uVar1 = uVar12;
    }
    if (((uVar9 & 1) != 0) && (uVar1 != 0)) {
      fVar13 = *(float *)(plVar11[0xd] + 0x278);
      fVar14 = *(float *)(plVar11[0xd] + 0x280);
      fVar16 = fVar13 + -4.8500004;
      fVar13 = fVar13 + 4.8500004;
      fVar15 = fVar14 + -4.8500004;
      fVar14 = fVar14 + 4.8500004;
      iVar2 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
      iVar3 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
      iVar4 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
      iVar5 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
      iVar7 = iVar2;
      if (iVar4 <= iVar2) {
        iVar7 = iVar4;
      }
      if (iVar2 <= iVar4) {
        iVar2 = iVar4;
      }
      iVar4 = iVar3;
      if (iVar5 <= iVar3) {
        iVar4 = iVar5;
      }
      if (iVar3 <= iVar5) {
        iVar3 = iVar5;
      }
      lVar10 = *(long *)(param_1 + 8);
      if (((((*(int *)(lVar10 + 0x10) <= iVar7) && (iVar2 <= *(int *)(lVar10 + 0x20))) &&
           (*(int *)(lVar10 + 0x14) <= iVar4)) && (iVar3 <= *(int *)(lVar10 + 0x24))) ||
         (((iVar7 <= *(int *)(lVar10 + 0x20) && (*(int *)(lVar10 + 0x10) <= iVar2)) &&
          ((iVar4 <= *(int *)(lVar10 + 0x24) && (*(int *)(lVar10 + 0x14) <= iVar3)))))) {
        **(undefined1 **)(param_1 + 0x18) = 1;
      }
    }
  }
  return;
}

