
/* WARNING: Removing unreachable block (ram,0x021ffe10) */
/* WARNING: Removing unreachable block (ram,0x021ffd30) */
/* WARNING: Removing unreachable block (ram,0x021ffda0) */
/* WARNING: Removing unreachable block (ram,0x021ffe80) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff68 : 0x021ffdb0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_021ff9a0(int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  float local_58;
  undefined8 local_50;
  float local_48;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0;
  }
  uVar15 = *param_3;
  if ((((uVar15 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar15)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar15 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_021ffa64;
      uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_021ffa64:
    uVar15 = 0;
  }
  if (plVar14 == (long *)0x0) {
    return 0;
  }
  lVar9 = plVar14[0x2a];
  if (((*PTR_DAT_04bb2e60 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2e60);
  }
  uVar7 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb2e58);
  uVar1 = 0;
  if ((int)lVar9 == 1) {
    uVar1 = uVar15;
  }
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  local_48 = 0.0;
  local_50 = 0;
  local_60 = *(undefined8 *)(plVar14[0xd] + 0x278);
  local_58 = *(float *)(plVar14[0xd] + 0x280);
  lVar10 = *(long *)PTR_DAT_04bb26a8;
  lVar9 = *(long *)(lVar10 + 0x1469a0);
  if (lVar9 == lVar10 + 0x146998) {
    fVar16 = 0.0;
  }
  else {
    local_48 = 0.0;
    fVar16 = 0.0;
    fVar18 = 0.0;
    fVar17 = 3.4028235e+38;
    lVar11 = lVar9 + -0x28;
    lVar12 = lVar9;
    lVar13 = lVar11;
    do {
      fVar19 = (float)local_60 - *(float *)(lVar12 + -0x28);
      fVar20 = local_58 - *(float *)(lVar13 + 8);
      fVar19 = fVar20 * fVar20 + fVar19 * fVar19;
      if (fVar19 < fVar17) {
        fVar16 = *(float *)(lVar13 + 4);
        fVar17 = fVar19;
        local_48 = *(float *)(lVar13 + 8);
        fVar18 = *(float *)(lVar12 + -0x28);
      }
      lVar12 = *(long *)(lVar12 + 8);
      lVar13 = lVar12 + -0x28;
    } while (lVar13 != lVar10 + 0x146970);
    do {
      fVar19 = (float)local_60 - *(float *)(lVar9 + -0x28);
      fVar20 = local_58 - *(float *)(lVar11 + 8);
      fVar19 = fVar20 * fVar20 + fVar19 * fVar19;
      if (fVar19 < fVar17) {
        fVar16 = *(float *)(lVar11 + 4);
        fVar17 = fVar19;
        local_48 = *(float *)(lVar11 + 8);
        fVar18 = *(float *)(lVar9 + -0x28);
      }
      lVar9 = *(long *)(lVar9 + 8);
      lVar11 = lVar9 + -0x28;
    } while (lVar11 != lVar10 + 0x146970);
    local_50 = CONCAT44(fVar16,fVar18);
    if (fVar18 != 0.0) goto LAB_021ffc00;
  }
  if ((fVar16 == 0.0) && (local_48 == 0.0)) {
    return 0;
  }
LAB_021ffc00:
  local_68 = 0;
  uVar7 = FUN_021e7e60(&local_50,&local_60,auStack_70);
  if ((uVar7 & 1) != 0) {
    fVar16 = (float)(int)local_68 * 5.0 + 2.5 + -10.0;
    fVar17 = (float)local_68._4_4_ * 5.0 + 2.5 + -10.0;
    iVar2 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
    iVar3 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
    iVar8 = iVar2;
    iVar5 = iVar3;
    do {
      if (iVar8 < iVar2 + 4) {
        iVar8 = iVar8 + 1;
      }
      else {
        iVar5 = iVar5 + 1;
        iVar8 = iVar2;
      }
    } while ((iVar2 != iVar8) || (iVar3 + 5 != iVar5));
    lVar9 = *(long *)PTR_DAT_04bb3968;
    if ((*(int *)(lVar9 + 0x2e18) < iVar2) ||
       (((iVar2 + 4 < *(int *)(lVar9 + 0x2e28) || (*(int *)(lVar9 + 0x2e1c) < iVar3)) ||
        (iVar3 + 4 < *(int *)(lVar9 + 0x2e2c))))) {
      *param_1 = (int)local_68;
      *param_2 = local_68._4_4_;
      return 1;
    }
  }
  return 0;
}

