
undefined4 FUN_01412410(long param_1,float *param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_64;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  fVar16 = -1.0;
  uVar12 = 0;
  local_64 = *(undefined4 *)PTR_DAT_04bb3238;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  do {
    uVar9 = *(ulong *)(param_1 + 0xa10 + (-(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3));
    iVar5 = (int)uVar9;
    if ((iVar5 != 0) && (lVar8 = *(long *)puVar3, lVar8 != 0)) {
      if ((iVar5 == 0) ||
         (((plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                                (uVar9 >> 0x14 & 0xfff) * 8), plVar11 == (long *)0x0 ||
           ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || ((int)plVar11[0x46] != iVar5)))) {
        plVar11 = (long *)0x0;
      }
      if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar8 = *(long *)puVar3;
        iVar5 = (**(code **)(*plVar7 + 0x60))();
        if (iVar5 < 0x11) {
          uVar10 = 1;
        }
        else {
          uVar10 = *(uint *)(lVar8 + 0x5e8);
          if (4 < uVar10) goto LAB_01412538;
          uVar10 = 0x1aU >> (ulong)(uVar10 & 0x1f) & 1;
        }
      }
      else {
LAB_01412538:
        uVar10 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar8 = plVar11[0x2a];
        uVar2 = *(uint *)(plVar11 + 0x49);
        if (((*PTR_DAT_04bb4050 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb4050), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb4048 = puVar1;
          __cxa_guard_release(PTR_DAT_04bb4050);
        }
        uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb4048);
        if ((((int)lVar8 == 1) && ((uVar6 & uVar10) != 0)) &&
           (((uVar2 >> 4 & 1) != 0 && ((int)plVar11[0x4f] == param_3)))) {
          lVar8 = plVar11[0xd];
          fVar13 = *param_2 - *(float *)(lVar8 + 0x278);
          fVar14 = param_2[1] - *(float *)(lVar8 + 0x27c);
          fVar15 = param_2[2] - *(float *)(lVar8 + 0x280);
          fVar13 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15);
          if ((fVar16 < 0.0) || (fVar13 < fVar16)) {
            local_64 = (undefined4)plVar11[0x46];
            fVar16 = fVar13;
          }
        }
      }
    }
    uVar10 = (int)uVar12 + 1;
    uVar12 = (ulong)uVar10;
    if (uVar10 == 100) {
      return local_64;
    }
  } while( true );
}

