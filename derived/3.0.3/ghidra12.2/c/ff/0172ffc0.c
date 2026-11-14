
/* WARNING: Removing unreachable block (ram,0x0173004c) */

void FUN_0172ffc0(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  undefined *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined **local_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  char *pcStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  long local_180;
  long *local_178;
  uint local_16c;
  undefined *local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  if (((DAT_0527ed48 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_0527ed48), iVar9 != 0)) {
    DAT_0527ed38 = 0;
    DAT_0527ed40 = 0;
    __cxa_guard_release(&DAT_0527ed48);
  }
  if ((*param_2 == 0) || (lVar14 = *(long *)(*param_2 + 0x280), lVar14 == 0)) goto LAB_0173066c;
  lVar12 = param_2[1];
  local_180 = 0;
  local_178 = (long *)0x0;
  local_190 = 0;
  uStack_188 = 0;
  if (lVar12 == 0) goto LAB_01730428;
  if (*(long *)(lVar12 + 0x1138) == 0) {
    local_16c = 0;
LAB_017300c0:
    if (*(char *)param_2[0x29] != '\0') goto LAB_01730428;
    bVar8 = false;
LAB_017300d0:
    lVar12 = param_2[0x27];
    if (lVar12 == 0) goto LAB_017303d0;
    param_2[0x27] = 0;
    iVar4 = (int)param_2[0x18] + *(int *)((long)param_2 + 0xbc) + -1;
    iVar9 = 0;
    if ((int)param_2[0x17] <= iVar4) {
      iVar9 = (int)param_2[0x17];
    }
    local_1b0 = &PTR_LAB_048f9770;
    local_1a8 = *(undefined8 *)(param_2[0x16] + (long)(iVar4 - iVar9) * 0x38 + 8);
    FUN_03ef3440(lVar14,&local_1b0);
    if ((int)param_2[0x18] == 0) {
      plVar11 = (long *)0x0;
    }
    else {
      iVar4 = (int)param_2[0x18] + *(int *)((long)param_2 + 0xbc) + -1;
      iVar9 = 0;
      if ((int)param_2[0x17] <= iVar4) {
        iVar9 = (int)param_2[0x17];
      }
      plVar11 = (long *)(param_2[0x16] + (long)(iVar4 - iVar9) * 0x38);
    }
    (**(code **)(*plVar11 + 0x18))(plVar11);
    if (lVar12 != plVar11[1]) {
      uVar10 = 0;
      bVar7 = true;
      do {
        if (*(char *)(lVar12 + uVar10) != *(char *)(plVar11[1] + uVar10)) break;
        if (*(char *)(lVar12 + uVar10) == '\0') {
          if (bVar7) goto LAB_01730424;
          break;
        }
        bVar7 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      if (1 < *(int *)(lVar14 + 100) - 3U) {
        local_168 = (undefined *)((ulong)local_168 & 0xffffffff00000000);
        *(ushort *)(lVar14 + 0x60) = *(ushort *)(lVar14 + 0x60) & 0xfffe;
      }
      *(undefined4 *)(lVar14 + 100) = 0;
      *(undefined4 *)(lVar14 + 0x38) = 2;
    }
LAB_01730424:
    if (!bVar8) goto LAB_01730428;
LAB_017305f4:
    if (*(int *)(lVar14 + 100) - 3U < 2) goto LAB_0173066c;
    *(undefined4 *)(lVar14 + 100) = 1;
  }
  else {
    local_16c = *(uint *)(lVar12 + 0x1698) >> 1 & 1;
    local_168 = (undefined *)CONCAT44(local_168._4_4_,0x27);
    uVar10 = FUN_03850a90(*(long *)(lVar12 + 0x1138),0x27,&local_190,local_16c);
    if ((uVar10 & 1) == 0) goto LAB_017300c0;
    if (*local_178 == 0) {
      local_55 = 0;
      local_158 = 0x100;
      local_160 = local_154;
      local_154[0] = 0;
      local_168 = PTR_DAT_04bb21f8 + 0x10;
      lVar12 = *(long *)(local_178[2] + 8);
      FUN_038d1270(&local_168,"%s.as",lVar12 + *(int *)(lVar12 + 0x24) + (long)*(int *)(lVar12 + 8))
      ;
LAB_017301e0:
      if (*(char *)param_2[0x29] != '\0') {
        *(char *)param_2[0x29] = '\0';
      }
      bVar8 = true;
    }
    else {
      iVar9 = *(int *)(*local_178 + 8);
      if (iVar9 < 0x60000000) {
        piVar2 = (int *)(*(long *)(local_178[2] + 8) + (long)iVar9);
        if (*piVar2 < 1) goto LAB_017301e0;
        iVar9 = *(int *)(((ulong)(uint)piVar2[1] & 0xfffffff) + *(long *)(local_178[2] + 8) + 4);
      }
      else {
        uVar1 = iVar9 + 0xa0000000;
        if (*(uint *)(local_180 + 0x80) <= uVar1) {
          uVar1 = 0;
        }
        lVar12 = *(long *)(local_180 + 0x88) + (ulong)uVar1 * 0x32;
        iVar9 = *(int *)(lVar12 + (ulong)*(byte *)(lVar12 + 0x20));
      }
      if (iVar9 == 0) goto LAB_017301e0;
      bVar8 = false;
    }
    if (*local_178 == 0) {
      local_55 = 0;
      local_158 = 0x100;
      local_160 = local_154;
      local_154[0] = 0;
      local_168 = PTR_DAT_04bb21f8 + 0x10;
      lVar12 = *(long *)(local_178[2] + 8);
      FUN_038d1270(&local_168,"%s.as",lVar12 + *(int *)(lVar12 + 0x24) + (long)*(int *)(lVar12 + 8))
      ;
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      pcVar13 = PTR_DAT_04c4b988;
    }
    else {
      iVar9 = *(int *)(*local_178 + 8);
      if (iVar9 < 0x60000000) {
        lVar12 = *(long *)(local_178[2] + 8);
        if (*(int *)(lVar12 + iVar9) < 2) {
          pcVar13 = "";
        }
        else {
          pcVar13 = (char *)(lVar12 + *(int *)(lVar12 + 0x24) +
                            (long)*(int *)(((ulong)(uint)((int *)(lVar12 + iVar9))[2] & 0xfffffff) +
                                           lVar12 + 4));
        }
      }
      else {
        uVar1 = iVar9 + 0xa0000000;
        if (*(uint *)(local_180 + 0x80) <= uVar1) {
          uVar1 = 0;
        }
        lVar12 = *(long *)(local_180 + 0x88) + (ulong)uVar1 * 0x32;
        pcVar13 = *(char **)(lVar12 + (ulong)*(byte *)(lVar12 + 0x21));
      }
    }
    if (*pcVar13 == '\0') {
      if (*(char *)param_2[0x29] != '\0') goto LAB_01730428;
      goto LAB_017300d0;
    }
    if (pcVar13 != (char *)param_2[0x27]) {
      param_2[0x27] = (long)pcVar13;
      if (*(char *)param_2[0x29] != '\0') {
        *(char *)param_2[0x29] = '\0';
      }
      local_1a0 = PTR_DAT_04bb2020 + 0x10;
      pcStack_198 = pcVar13;
      FUN_03ef3440(lVar14,&local_1a0);
      if (1 < *(int *)(lVar14 + 100) - 3U) {
        local_168 = (undefined *)((ulong)local_168 & 0xffffffff00000000);
        *(ushort *)(lVar14 + 0x60) = *(ushort *)(lVar14 + 0x60) & 0xfffe;
      }
      *(undefined4 *)(lVar14 + 100) = 0;
      *(undefined4 *)(lVar14 + 0x38) = 2;
    }
    if (*(char *)param_2[0x29] != '\0') goto LAB_01730428;
LAB_017303d0:
    if (bVar8) goto LAB_017305f4;
LAB_01730428:
    uVar1 = *(uint *)((long)param_2 + 0x14);
    if ((int)param_2[0x2d] == 0 && uVar1 == 0) goto LAB_017305f4;
    *(undefined8 *)((long)param_2 + 0x94) = *(undefined8 *)((long)param_2 + 0x7c);
    *(undefined4 *)((long)param_2 + 0x9c) = *(undefined4 *)((long)param_2 + 0x84);
    puVar5 = PTR_DAT_04bb27c0;
    bVar8 = *(char *)((long)param_2 + 0x16c) == '\0';
    uVar3 = uVar1;
    if (uVar1 == 0 || bVar8) {
      uVar3 = *(uint *)(param_2 + 2);
    }
    if (uVar3 == 0) goto LAB_01730560;
    local_160._0_4_ = CONCAT22(1,(undefined2)local_160);
    lVar12 = *(long *)PTR_DAT_04bb27c0;
    if (lVar12 == 0) {
LAB_01730620:
      if (uVar1 == 0 || bVar8) {
        *(undefined4 *)(param_2 + 2) = 0;
        *(undefined1 *)param_2[4] = 0;
        *(undefined4 *)(param_2 + 0x2d) = 0;
        *(undefined4 *)(param_2 + 0xe) = 0xffffffff;
      }
    }
    else {
      puVar15 = *(undefined **)
                 (*(long *)(*(long *)(lVar12 + 0x1c0) + 8) + (ulong)(uVar3 >> 0x14) * 8);
      if (((puVar15 == (undefined *)0x0) || ((*(uint *)(puVar15 + 0x248) >> 1 & 1) != 0)) ||
         (*(uint *)(puVar15 + 0x230) != uVar3)) {
        puVar15 = (undefined *)0x0;
      }
      local_168 = puVar15;
      if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
        plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        lVar12 = *(long *)puVar5;
        iVar9 = (**(code **)(*plVar11 + 0x60))();
        if (iVar9 < 0x11) {
          bVar7 = true;
        }
        else if ((4 < *(uint *)(lVar12 + 0x5e8)) ||
                (bVar7 = true, (1 << (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 0x1aU) == 0))
        goto LAB_01730518;
      }
      else {
LAB_01730518:
        bVar7 = false;
        local_160 = (undefined1 *)((ulong)local_160 & 0xffffffffff000000);
      }
      if (puVar15 == (undefined *)0x0) goto LAB_01730620;
      bVar8 = false;
      if (*(int *)(puVar15 + 0x150) == 1) {
        bVar8 = bVar7;
      }
      local_160._2_6_ = (undefined6)((ulong)local_160 >> 0x10);
      local_160 = (undefined1 *)
                  (CONCAT62(local_160._2_6_,
                            CONCAT11((char)(*(uint *)(puVar15 + 0x248) >> 4),
                                     *(int *)(puVar15 + 0x150) == 1)) & 0xffffffffffff01ff);
      if ((bVar8) &&
         (uVar10 = FUN_0172fbb8(param_2,(undefined8 *)((long)param_2 + 0x94),&local_168),
         (uVar10 & 1) != 0)) {
LAB_01730560:
        lVar12 = *(long *)(*(long *)(*param_2 + 0x48) + 0x68);
        if (lVar12 != 0) {
          fVar17 = *(float *)((long)param_2 + 0x94);
          fVar16 = *(float *)(param_2 + 0x13);
          fVar18 = *(float *)((long)param_2 + 0x9c);
          if (*(char *)((long)param_2 + 0x16e) != '\0') {
            fVar20 = fVar17 - *(float *)(lVar12 + 0x278);
            fVar21 = fVar18 - *(float *)(lVar12 + 0x280);
            uVar10 = (ulong)(*(uint *)(lVar12 + 0x2b4) >> 0x14) & 0xff0;
            fVar22 = (float)(*(uint *)(lVar12 + 0x2b4) & 0xffffff) * 5.9604645e-08;
            fVar19 = *(float *)((long)&DAT_04199798 + uVar10) +
                     fVar22 * *(float *)((long)&DAT_0419979c + uVar10);
            fVar22 = *(float *)((long)&DAT_041997a0 + uVar10) +
                     fVar22 * *(float *)((long)&DAT_041997a4 + uVar10);
            if (10.5625 <= fVar21 * fVar21 + fVar20 * fVar20) {
              if (fVar20 * fVar19 + 0.0 + fVar21 * fVar22 < 0.0) {
                fVar21 = (0.0 - fVar20 * fVar22) + fVar21 * fVar19;
                fVar20 = -fVar21;
                if (0.0 <= fVar21) {
                  fVar20 = fVar21;
                }
                if (fVar20 < 3.25) {
                  if (*(char *)((long)param_2 + 0x16d) == '\0') {
                    fVar20 = 3.25;
                    if (fVar21 <= 0.0) {
                      fVar20 = -3.25;
                    }
                    fVar20 = fVar20 - fVar21;
                    fVar17 = fVar17 + -fVar22 * fVar20;
                    fVar16 = fVar16 + fVar20 * 0.0;
                    fVar18 = fVar18 + fVar19 * fVar20;
                  }
                  else {
                    fVar17 = *(float *)(param_2 + 0x14);
                    fVar16 = *(float *)((long)param_2 + 0xa4);
                    fVar18 = *(float *)(param_2 + 0x15);
                  }
                }
              }
            }
            else {
              fVar17 = *(float *)(lVar12 + 0x278) + fVar19 * 3.25;
              fVar18 = *(float *)(lVar12 + 0x280) + fVar22 * 3.25;
            }
          }
          if (*(int *)(lVar14 + 100) != 0) {
            *(undefined4 *)(lVar14 + 100) = 0;
            *(undefined4 *)(lVar14 + 0x38) = 2;
          }
          *(float *)(lVar14 + 0x50) = fVar17;
          *(float *)(lVar14 + 0x54) = fVar16;
          *(float *)(lVar14 + 0x58) = fVar18;
          *(undefined1 *)((long)param_2 + 0x16d) = 1;
          *(float *)(param_2 + 0x14) = fVar17;
          *(float *)((long)param_2 + 0xa4) = fVar16;
          *(float *)(param_2 + 0x15) = fVar18;
        }
        uVar6 = DAT_0527ed40;
        *param_1 = DAT_0527ed38;
        *(undefined4 *)(param_1 + 1) = uVar6;
        uVar10 = FUN_03ef35c4(lVar14,&local_168,&local_190,0);
        if ((uVar10 & 1) == 0) {
          return;
        }
        *(int *)param_1 = (int)(long)((float)local_190 * 6.8356525e+08);
        *(int *)((long)param_1 + 4) = (int)(long)(local_168._0_4_ * 6.8356525e+08);
        return;
      }
    }
    if (*(int *)(lVar14 + 100) - 3U < 2) goto LAB_0173066c;
    *(undefined4 *)(lVar14 + 100) = 1;
  }
  *(ushort *)(lVar14 + 0x60) = *(ushort *)(lVar14 + 0x60) & 0xfffe;
LAB_0173066c:
  uVar6 = DAT_0527ed40;
  *param_1 = DAT_0527ed38;
  *(undefined4 *)(param_1 + 1) = uVar6;
  return;
}

