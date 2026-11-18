
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0369b240(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  byte bVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined *local_88;
  int local_80;
  int local_7c;
  undefined *local_78;
  undefined *puStack_70;
  int local_68;
  int iStack_64;
  undefined *local_60;
  int local_58;
  int iStack_54;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar15 = *param_2;
  if ((((uVar15 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar15)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar15 = 1;
      goto joined_r0x0369b30c;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0369b30c;
    }
  }
  uVar15 = 0;
joined_r0x0369b30c:
  if (plVar14 != (long *)0x0) {
    lVar8 = plVar14[0x2a];
    uVar1 = *(uint *)(plVar14 + 0x49);
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb37d0);
    if ((((int)lVar8 == 1) && ((uVar5 & uVar15) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
      puVar16 = (undefined8 *)plVar14[0x77];
      if (((*PTR_DAT_04bb6710 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6710);
      }
      if ((puVar16 != (undefined8 *)0x0) &&
         (uVar7 = (**(code **)*puVar16)(puVar16,PTR_DAT_04bb6708), (uVar7 & 1) != 0)) {
        fVar19 = *(float *)(plVar14[0xd] + 0x278);
        local_78 = PTR_DAT_04bbc1a0 + 0x10;
        local_88 = PTR_DAT_04bb2010 + 0x10;
        fVar18 = fVar19 + -2.5;
        fVar17 = *(float *)(plVar14[0xd] + 0x280) + -2.5;
        iVar2 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
        local_58 = iVar2 + 1;
        local_7c = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
        iStack_54 = local_7c + 1;
        iVar4 = local_7c + 2;
        local_80 = iVar2;
        puStack_70 = local_88;
        local_68 = iVar2;
        iStack_64 = local_7c;
        local_60 = local_88;
        do {
          uVar7 = FUN_02a7c8c0(*(undefined8 *)(param_1 + 8),&local_88);
          if ((uVar7 & 1) == 0) {
            if (*(short *)((long)puVar16 + 0x12184) == -1) goto LAB_0369b4e8;
            iVar4 = *(int *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
            if (iVar4 == 0) goto LAB_0369b4e8;
            lVar11 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
            lVar8 = 0;
            lVar13 = (long)iVar4 << 3;
            goto LAB_0369b4cc;
          }
          if (local_80 < local_58) {
            local_80 = local_80 + 1;
          }
          else {
            local_7c = local_7c + 1;
            local_80 = local_68;
          }
        } while (iVar2 != local_80 || iVar4 != local_7c);
      }
    }
  }
  return;
  while( true ) {
    lVar8 = lVar8 + 1;
    lVar13 = lVar13 + -8;
    if (lVar13 == 0) break;
LAB_0369b4cc:
    if (*(short *)(*(long *)(lVar11 + lVar8 * 8) + 0x38) == *(short *)((long)puVar16 + 0x12184)) {
      bVar10 = (byte)(*(ushort *)(*(long *)(lVar11 + lVar8 * 8) + 0x114) >> 5) & 1;
      goto LAB_0369b4ec;
    }
  }
LAB_0369b4e8:
  bVar10 = 0;
LAB_0369b4ec:
  piVar9 = *(int **)(param_1 + 0x10);
  if (piVar9[1] <= *piVar9) {
    return;
  }
  uVar15 = *param_2;
  puVar12 = *(uint **)(piVar9 + 4);
  if (puVar12 != (uint *)0x0) {
    *(undefined8 *)(piVar9 + 4) = *(undefined8 *)puVar12;
  }
  *puVar12 = uVar15;
  puVar12[1] = (uint)fVar19;
  *(byte *)(puVar12 + 2) = bVar10;
  if (*piVar9 < piVar9[1]) {
    *(uint **)(*(long *)(piVar9 + 2) + (long)*piVar9 * 8) = puVar12;
    *piVar9 = *piVar9 + 1;
    return;
  }
  return;
}

