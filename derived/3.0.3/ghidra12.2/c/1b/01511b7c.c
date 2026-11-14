
bool FUN_01511b7c(undefined2 *param_1,byte *param_2)

{
  short *psVar1;
  float *pfVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined2 *puVar14;
  uint *puVar15;
  long *plVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  uint uVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  byte local_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  int local_68;
  int iStack_64;
  
  puVar7 = PTR_DAT_04bb37e0;
  if (7 < *param_2) {
    *param_1 = *(undefined2 *)PTR_DAT_04bb37e0;
    puVar8 = PTR_DAT_04bb3238;
    uVar3 = puVar7[2];
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 1) = uVar3;
    *(undefined *)((long)param_1 + 3) = puVar7[3];
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar7 + 4);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)puVar8;
    return false;
  }
  uVar10 = FUN_02582d8c(param_2,1);
  puVar7 = PTR_DAT_04bb4fb8;
  if (((7 < uVar10) ||
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar10 * 0x13f0 + 0x13d4) == '\0')) ||
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar10 * 0x13f0 + 0x13d6) == '\0')) {
LAB_01511f78:
    return false;
  }
  uVar10 = FUN_02582d8c(param_2,1);
  puVar8 = PTR_DAT_04bb43c0;
  if ((7 < uVar10) || (*(char *)(*(long *)puVar7 + (ulong)uVar10 * 0x13f0 + 0x13d4) == '\0'))
  goto LAB_01511f78;
  lVar18 = *(long *)puVar7 + (ulong)uVar10 * 0x13f0;
  psVar1 = (short *)(lVar18 + 0x560);
  lVar23 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(psVar1);
  puVar7 = PTR_DAT_04bb27c0;
  lVar19 = *(long *)puVar8;
  if (lVar19 != 0) {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar23 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      local_88 = PTR_DAT_04bc0510 + 0x10;
      local_80 = *(undefined **)(lVar18 + 0x560);
      local_78 = 0;
      uVar10 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar8 != 0) {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          lVar19 = *(long *)PTR_DAT_04bc0428;
          uVar10 = FUN_0277d6c4(psVar1);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if (uVar10 < *(uint *)(lVar19 + 0x1d8)) {
            lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8);
            if (lVar19 != 0) {
              local_78 = lVar19;
            }
          }
        }
      }
      iVar11 = FUN_01ae7550(&local_88);
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,iVar11);
      if (iVar11 - 1U < 6) {
        fVar25 = *(float *)(lVar18 + 0x50c) + -2.5;
        fVar24 = *(float *)(lVar18 + 0x514) + -2.5;
        iVar11 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
        iVar6 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
        pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar18 + 0x51c) >> 0x14) & 0xff0));
        fVar24 = (float)(*(uint *)(lVar18 + 0x51c) & 0xffffff) * 5.9604645e-08;
        local_98 = 0;
        local_88 = PTR_DAT_04bbc1a0 + 0x10;
        local_80 = PTR_DAT_04bb2010 + 0x10;
        local_a0 = PTR_DAT_04bbfe68 + 0x10;
        fVar25 = (*pfVar2 + fVar24 * pfVar2[1]) * 10.0 +
                 ((float)iVar11 * 5.0 + (float)(iVar11 + 1) * 5.0 + 5.0) * 0.5 + -2.5;
        fVar24 = (pfVar2[2] + fVar24 * pfVar2[3]) * 10.0 +
                 ((float)iVar6 * 5.0 + (float)(iVar6 + 1) * 5.0 + 5.0) * 0.5 + -2.5;
        local_68 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
        iStack_64 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
        local_78 = CONCAT44(iStack_64,local_68);
        local_68 = local_68 + 1;
        iStack_64 = iStack_64 + 1;
        lVar19 = *(long *)PTR_DAT_04bb2720;
        local_70 = local_80;
        if (lVar19 == 0) {
          puVar21 = &DAT_055c04a0;
        }
        else {
          puVar21 = &DAT_055c04a0;
          if (*(long *)(lVar19 + 0x330) != 0) {
            puVar21 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
            iVar11 = FUN_006bd550(*puVar21,0);
            puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar11 != 0x758f7eaf) {
              puVar21 = &DAT_055c04a0;
            }
          }
        }
        local_94 = *(undefined4 *)(puVar21 + 7);
        local_90 = FUN_017baf44();
        local_90 = local_90 & 1;
        local_a0 = PTR_DAT_04bb3140 + 0x10;
        puVar14 = (undefined2 *)FUN_01a5190c(&local_a0,1,&local_80,0);
        uVar5 = *puVar14;
        uVar3 = *(undefined1 *)(puVar14 + 1);
        uVar4 = *(undefined1 *)((long)puVar14 + 3);
        uVar17 = *(undefined4 *)(puVar14 + 2);
        puVar15 = (uint *)FUN_014fbd50(&local_a0,1,&local_80);
        uVar10 = *puVar15;
        if ((uVar10 != 0) && (lVar19 = *(long *)puVar7, lVar19 != 0)) {
          plVar20 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                              ((ulong)(uVar10 >> 0x11) & 0x7ff8));
          if ((plVar20 == (long *)0x0) ||
             (((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar20 + 0x46) != uVar10))))
          {
            plVar20 = (long *)0x0;
          }
          if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
            plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar19 = *(long *)puVar7;
            iVar11 = (**(code **)(*plVar16 + 0x60))();
            if (iVar11 < 0x11) {
              uVar22 = 1;
            }
            else {
              if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_0151209c;
              uVar22 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_0151209c:
            uVar22 = 0;
          }
          if (plVar20 != (long *)0x0) {
            lVar19 = plVar20[0x2a];
            uVar13 = *(uint *)(plVar20 + 0x49);
            if (((*PTR_DAT_04bb5928 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar11 != 0)) {
              *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb5928);
            }
            uVar12 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb5920);
            if ((((int)lVar19 == 1) && ((uVar12 & uVar22) != 0)) && ((uVar13 >> 4 & 1) != 0)) {
              *param_1 = uVar5;
              *(undefined4 *)(param_1 + 2) = uVar17;
              *(undefined1 *)(param_1 + 1) = uVar3;
              *(undefined1 *)((long)param_1 + 3) = uVar4;
              bVar9 = FUN_014fd19c(&local_a0,plVar20 + 0x58,1);
              *(byte *)(param_1 + 4) = bVar9 & 1;
              *(int *)(param_1 + 0xc) = (int)plVar20[0x59];
              uVar17 = *(undefined4 *)((long)plVar20 + 0x2cc);
              *(undefined4 *)(param_1 + 0x12) = 1;
              *(undefined4 *)(param_1 + 0xe) = uVar17;
              *(uint *)(param_1 + 0x10) = uVar10;
              goto LAB_01512288;
            }
          }
        }
      }
    }
  }
  *param_1 = *(undefined2 *)(lVar18 + 0x560);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(lVar18 + 0x562);
  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)(lVar18 + 0x563);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar18 + 0x564);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(lVar18 + 0x568);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar18 + 0x578);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(lVar18 + 0x57c);
  lVar19 = *(long *)puVar7;
  uVar10 = *(uint *)(lVar18 + 0x584);
  *(uint *)(param_1 + 0x10) = uVar10;
  uVar17 = 0;
  if (lVar19 != 0) {
    if (((uVar10 == 0) ||
        (plVar20 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                             ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0)) ||
       (((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar20 + 0x46) != uVar10)))) {
      plVar20 = (long *)0x0;
    }
    if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
      plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar18 = *(long *)puVar7;
      iVar11 = (**(code **)(*plVar16 + 0x60))();
      if (iVar11 < 0x11) {
        uVar10 = 1;
      }
      else {
        if (4 < *(uint *)(lVar18 + 0x5e8)) goto LAB_01512220;
        uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar18 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01512220:
      uVar10 = 0;
    }
    if (plVar20 == (long *)0x0) {
      uVar17 = 0;
    }
    else {
      lVar18 = plVar20[0x2a];
      uVar22 = *(uint *)(plVar20 + 0x49);
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar11 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      uVar13 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb5920);
      uVar17 = 0;
      if ((((int)lVar18 == 1) && ((uVar13 & uVar10) != 0)) && ((uVar22 >> 4 & 1) != 0)) {
        uVar17 = (undefined4)plVar20[0x5a];
      }
    }
  }
  *(undefined4 *)(param_1 + 0x12) = uVar17;
LAB_01512288:
  return *psVar1 != -2;
}

