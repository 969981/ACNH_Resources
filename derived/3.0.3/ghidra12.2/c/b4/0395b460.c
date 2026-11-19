
/* WARNING: Type propagation algorithm not settling */

void FUN_0395b460(long param_1,uint param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  short *psVar3;
  long *plVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  long lVar11;
  long lVar12;
  undefined2 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined4 uVar24;
  int iVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined4 local_9c;
  uint local_98;
  undefined4 uStack_94;
  long local_90;
  long lStack_88;
  
  lVar22 = DAT_05ae7600;
  uVar18 = param_2 + 1;
  uVar21 = -(ulong)(uVar18 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar18 << 5;
  lVar9 = param_3;
  if (param_3 == 0) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar22 + 8);
    if (lVar9 != 0) {
      plVar4 = (long *)(lVar9 + 0xa8);
    }
    lVar9 = *plVar4;
  }
  *(undefined8 *)(param_1 + 0xa58) = 0;
  *(undefined8 *)(param_1 + 0xa30) = 0;
  *(undefined8 *)(param_1 + 0xa38) = 0;
  *(undefined8 *)(param_1 + 0xa40) = 0;
  puVar8 = PTR_DAT_04bd0fa8;
  *(undefined8 *)(param_1 + 0xa48) = 0;
  *(undefined2 *)(param_1 + 0xa52) = 0;
  *(byte *)(param_1 + 0xa50) = *(byte *)(param_1 + 0xa50) & 0xfe;
  if (uVar18 == 0) {
    uVar18 = 0;
    lVar22 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)puVar8,param_1 + 0xa28,lVar9,uVar21,8,0);
    *(undefined2 *)(param_1 + 0xa52) = 0;
    lVar22 = *(long *)(param_1 + 0xa40);
    if (*(long *)(param_1 + 0xa48) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(int *)(param_1 + 0xa30) - *(int *)(*(long *)(param_1 + 0xa48) + 0x10);
    }
    if (lVar22 != 0) {
      local_9c = *(undefined4 *)(lVar22 + 0x104);
      lVar9 = (*DAT_04c61fd0)(lVar22);
      goto LAB_0395b58c;
    }
  }
  lVar9 = 0;
  local_9c = 0;
LAB_0395b58c:
  if (param_2 == 0) {
    uVar26 = 0;
  }
  else {
    uVar17 = 0;
    uVar26 = (ulong)param_2;
    lVar23 = (ulong)uVar18 + lVar9 + 0x10;
    do {
      fVar28 = ((float)(uVar17 & 0xffffffff) * 6.2831855) / (float)param_2;
      fVar27 = cosf(fVar28);
      fVar28 = sinf(fVar28);
      uVar17 = uVar17 + 1;
      *(undefined4 *)(lVar23 + -8) = 0;
      *(undefined8 *)(lVar23 + -4) = 0;
      *(undefined4 *)(lVar23 + 4) = 0x3f800000;
      *(float *)(lVar23 + -0x10) = fVar27 * 0.5;
      *(float *)(lVar23 + -0xc) = fVar28 * 0.5;
      *(float *)(lVar23 + 8) = fVar27 * 0.5 + 0.5;
      *(float *)(lVar23 + 0xc) = 0.5 - fVar28 * 0.5;
      lVar23 = lVar23 + 0x20;
    } while (uVar26 != uVar17);
  }
  puVar1 = (undefined8 *)(lVar9 + (ulong)uVar18 + uVar26 * 0x20);
  puVar1[3] = 0x3f0000003f000000;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *(undefined4 *)((long)puVar1 + 0x14) = 0x3f800000;
  uStack_94 = local_9c;
  local_98 = uVar18;
  local_90 = lVar22;
  lStack_88 = param_1 + 0xa28;
  FUN_0390ebc0(param_1 + 0xc58,&local_98,0x20,uVar21);
  *(undefined8 *)(param_1 + 0xc90) = 0x22;
  *(undefined8 *)(param_1 + 0xc9c) = 0xc00000022;
  lVar22 = 0;
  *(undefined2 *)(param_1 + 0xc98) = 1;
  *(undefined2 *)(param_1 + 0xca4) = 1;
  *(undefined8 *)(param_1 + 0xca8) = 0x1800000016;
  *(undefined2 *)(param_1 + 0xcb0) = 1;
  uVar21 = extraout_x1;
  do {
    lVar9 = 0;
    uVar18 = param_2 >> (ulong)((uint)lVar22 & 0x1f);
    iVar5 = 1 << (ulong)((uint)lVar22 & 0x1f);
    lVar23 = param_1 + 0xd78 + lVar22 * 0x120;
    do {
      lVar16 = DAT_05ae7600;
      iVar25 = (int)lVar9;
      uVar19 = uVar18;
      if (((iVar25 == 2) || (uVar19 = uVar18 << 2, iVar25 == 1)) ||
         (uVar19 = uVar18 * 3, iVar25 == 0)) {
        uVar26 = (ulong)uVar19;
      }
      else {
        uVar26 = 0;
      }
      lVar11 = param_3;
      if (param_3 == 0) {
        auVar29 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68),uVar21,0);
        uVar21 = auVar29._8_8_;
        plVar4 = (long *)(lVar16 + 8);
        if (auVar29._0_8_ != 0) {
          plVar4 = (long *)(auVar29._0_8_ + 0xa8);
        }
        lVar11 = *plVar4;
      }
      lVar16 = param_1 + 0xa60 + lVar22 * 0xa8 + lVar9 * 0x38;
      piVar20 = (int *)(lVar16 + 8);
      piVar20[0] = 0;
      piVar20[1] = 0;
      *(undefined8 *)(lVar16 + 0x30) = 0;
      *(undefined8 *)(lVar16 + 0x20) = 0;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(undefined2 *)(lVar16 + 0x2a) = 0;
      *(byte *)(lVar16 + 0x28) = *(byte *)(lVar16 + 0x28) & 0xfe;
      if ((int)uVar26 == 0) {
        uVar26 = 0;
        lVar11 = 0;
LAB_0395b82c:
        uVar24 = 0;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = uVar21;
        auVar29 = auVar29 << 0x40;
      }
      else {
        FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar16,lVar11,
                     -(uVar26 >> 0x1f) & 0xfffffffe00000000 | uVar26 << 1,4,0);
        lVar11 = *(long *)(lVar16 + 0x18);
        *(undefined2 *)(lVar16 + 0x2a) = 0;
        if (*(long *)(lVar16 + 0x20) == 0) {
          uVar26 = 0;
        }
        else {
          uVar26 = (ulong)(uint)(*piVar20 - *(int *)(*(long *)(lVar16 + 0x20) + 0x10));
        }
        uVar21 = extraout_x1_01;
        if (lVar11 == 0) goto LAB_0395b82c;
        uVar24 = *(undefined4 *)(lVar11 + 0x104);
        auVar29 = (**(code **)PTR_DAT_04bb2cd8)(lVar11);
      }
      uVar21 = auVar29._8_8_;
      lVar2 = auVar29._0_8_ + uVar26;
      lVar10 = lVar23 + lVar9 * 0x60;
      uVar19 = (uint)uVar26;
      sVar6 = (short)param_2;
      if (iVar25 == 0) {
        if (param_2 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          uVar14 = 0;
          do {
            psVar3 = (short *)(lVar2 + lVar12 * 2);
            lVar12 = lVar12 + 3;
            psVar3[1] = (short)uVar14;
            uVar14 = uVar14 + iVar5;
            *psVar3 = sVar6;
            sVar7 = 0;
            if (param_2 != 0) {
              sVar7 = (short)(uVar14 / param_2);
            }
            psVar3[2] = (short)uVar14 - sVar7 * sVar6;
          } while (uVar14 < param_2);
        }
        local_98 = uVar19;
        uStack_94 = uVar24;
        local_90 = lVar11;
        lStack_88 = lVar16;
        FUN_03901480(lVar10,&local_98,1,lVar12);
        uVar15 = 4;
        uVar21 = extraout_x1_03;
LAB_0395b734:
        *(undefined4 *)(lVar23 + lVar9 * 0x60 + 0xc) = uVar15;
      }
      else {
        if (iVar25 == 1) {
          iVar25 = 0;
          if (param_2 != 0) {
            uVar14 = 0;
            puVar13 = (undefined2 *)(lVar2 + 4);
            do {
              puVar13[-1] = (short)uVar14;
              iVar25 = iVar25 + 4;
              *puVar13 = (short)uVar14;
              uVar14 = uVar14 + iVar5;
              sVar7 = 0;
              if (param_2 != 0) {
                sVar7 = (short)(uVar14 / param_2);
              }
              puVar13[-2] = sVar6;
              puVar13[1] = (short)uVar14 - sVar7 * sVar6;
              puVar13 = puVar13 + 4;
            } while (uVar14 < param_2);
          }
          uVar15 = 1;
          local_98 = uVar19;
          uStack_94 = uVar24;
          local_90 = lVar11;
          lStack_88 = lVar16;
          FUN_03901480(lVar10,&local_98,1,iVar25);
          uVar21 = extraout_x1_02;
          goto LAB_0395b734;
        }
        if (iVar25 == 2) {
          if (param_2 == 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = 0;
            uVar14 = 0;
            do {
              *(short *)(lVar2 + lVar12 * 2) = (short)uVar14;
              uVar14 = uVar14 + iVar5;
              lVar12 = lVar12 + 1;
            } while (uVar14 < param_2);
          }
          local_98 = uVar19;
          uStack_94 = uVar24;
          local_90 = lVar11;
          lStack_88 = lVar16;
          FUN_03901480(lVar10,&local_98,1,lVar12);
          uVar15 = 0;
          uVar21 = extraout_x1_00;
          goto LAB_0395b734;
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 3);
    lVar22 = lVar22 + 1;
    if (lVar22 == 3) {
      return;
    }
  } while( true );
}

