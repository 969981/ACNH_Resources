
/* WARNING: Type propagation algorithm not settling */

bool FUN_01ee2e10(long param_1)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  puVar4 = PTR_DAT_04bb27c0;
  puVar1 = (uint *)(param_1 + 0x7800);
  uVar3 = *puVar1;
  if (uVar3 == 0) {
    uVar9 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,param_1 + 0x78a0,PTR_DAT_04bb3238,1);
    lVar14 = *(long *)puVar4;
    if (lVar14 == 0) {
      return false;
    }
    if ((((uVar9 == 0) ||
         (lVar16 = *(long *)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) + (ulong)(uVar9 >> 0x14) * 8),
         lVar16 == 0)) || ((*(uint *)(lVar16 + 0x248) >> 1 & 1) != 0)) ||
       (*(uint *)(lVar16 + 0x230) != uVar9)) {
      lVar16 = 0;
    }
    if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
      plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar14 = *(long *)puVar4;
      iVar8 = (**(code **)(*plVar15 + 0x60))();
      if (iVar8 < 0x11) {
        uVar13 = 0;
      }
      else {
        if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_01ee30a8;
        uVar13 = 5U >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01ee30a8:
      uVar13 = 1;
    }
    if (lVar16 == 0) {
      return false;
    }
    if (*(int *)(lVar16 + 0x150) != 1) {
      uVar13 = 1;
    }
    if (uVar13 != 0) {
      return false;
    }
    FUN_02077fb0(*(undefined8 *)(param_1 + 0x89b8));
    *(undefined8 *)(param_1 + 0xa9f0) = 0;
    *(undefined4 *)(param_1 + 0xa9f8) = 0;
    *(uint *)(param_1 + 0xa9fc) = uVar9;
    uVar6 = DAT_053e0d18;
    *(undefined4 *)(param_1 + 0xaa14) = DAT_053e0d14;
    uVar5 = DAT_053e0d0c;
    uVar12 = DAT_053e0d04;
    *(undefined4 *)(param_1 + 0xaa18) = uVar6;
    *(undefined4 *)(param_1 + 0xaa1c) = DAT_053e0d1c;
    uVar6 = DAT_053e0d20;
    *(undefined4 *)(param_1 + 0xaa00) = 2;
    *(undefined1 *)(param_1 + 0xaa44) = 0;
    *puVar1 = uVar9;
    *(undefined4 *)(param_1 + 0xaa20) = uVar6;
    *(undefined8 *)(param_1 + 0xaa04) = uVar12;
    *(undefined8 *)(param_1 + 0xaa0c) = uVar5;
    lVar14 = *(long *)puVar4;
  }
  else {
    lVar14 = *(long *)PTR_DAT_04bb27c0;
    uVar9 = uVar3;
  }
  uVar13 = 0;
  if (lVar14 != 0) {
    if (((uVar9 == 0) ||
        (plVar15 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) + (ulong)(uVar9 >> 0x14) * 8)
        , plVar15 == (long *)0x0)) ||
       (((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar15 + 0x46) != uVar9)))) {
      plVar15 = (long *)0x0;
    }
    if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
      plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar14 = *(long *)puVar4;
      iVar8 = (**(code **)(*plVar10 + 0x60))();
      if (iVar8 < 0x11) {
        uVar9 = 1;
        uVar13 = 1;
      }
      else {
        uVar13 = *(uint *)(lVar14 + 0x5e8);
        if (4 < uVar13) goto LAB_01ee2fbc;
        uVar9 = 0x1aU >> (ulong)(uVar13 & 0x1f) & 1;
        uVar13 = (uint)(0x101000100 >> (((ulong)uVar13 & 7) << 3)) & 1;
      }
    }
    else {
LAB_01ee2fbc:
      uVar9 = 0;
      uVar13 = 0;
    }
    if (plVar15 != (long *)0x0) {
      lVar14 = plVar15[0x2a];
      bVar7 = (int)lVar14 == 1;
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar11 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb37d0);
      if ((uVar11 & 1) != 0) {
        uVar13 = 0;
        if ((int)lVar14 == 1) {
          uVar13 = uVar9;
        }
        if (uVar13 == 0) {
          *puVar1 = 0;
          return false;
        }
        lVar14 = *(long *)(param_1 + 8);
        if ((uVar3 == 0) &&
           ((-1 < *(char *)(lVar14 + 0x6a4) || ((*(uint *)(lVar14 + 0x248) >> 4 & 1) == 0)))) {
          fVar17 = *(float *)(*(long *)(lVar14 + 0x68) + 0x280);
          local_68 = *(undefined **)(*(long *)(lVar14 + 0x68) + 0x278);
          local_60 = (undefined8 *)CONCAT44(local_60._4_4_,fVar17);
          local_54 = FUN_006f0400(*(float *)(plVar15[0xd] + 0x278) - local_68._0_4_,
                                  *(float *)(plVar15[0xd] + 0x280) - fVar17);
          FUN_01e39778(*(undefined8 *)(param_1 + 8),&local_68,&local_54,0);
          uVar12 = *(undefined8 *)(param_1 + 0x18);
          *(undefined1 *)(param_1 + 0xae54) = 0;
          uVar3 = *puVar1;
          *(undefined4 *)(param_1 + 0xae50) = 0x5a;
          *(undefined8 *)(param_1 + 0xae48) = 0;
        }
        else {
          fVar17 = *(float *)(*(long *)(lVar14 + 0x68) + 0x278);
          fVar18 = *(float *)(*(long *)(lVar14 + 0x68) + 0x280);
          fVar19 = *(float *)(plVar15[0xd] + 0x278);
          fVar20 = *(float *)(plVar15[0xd] + 0x280);
          *(undefined1 *)(param_1 + 0xae54) = 0;
          *(undefined8 *)(param_1 + 0xae48) = 0;
          *(undefined4 *)(param_1 + 0xae50) = 0x5a;
          local_58 = FUN_006f0400(fVar19 - fVar17,fVar20 - fVar18);
          local_68 = PTR_DAT_04bb2020 + 0x10;
          local_60 = &DAT_0407ebb1;
          FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),&local_58,PTR_DAT_04bb65b0,&local_68,6);
          uVar12 = *(undefined8 *)(param_1 + 0x18);
          uVar3 = *puVar1;
        }
        FUN_02085e20(uVar12,0,uVar3,PTR_DAT_04bb6928,0);
        *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 0x1000;
        return true;
      }
      uVar13 = 0;
      goto LAB_01ee3140;
    }
  }
  bVar7 = false;
LAB_01ee3140:
  *puVar1 = 0;
  bVar2 = false;
  if (uVar13 != 0) {
    bVar2 = bVar7;
  }
  return bVar2;
}

