
void FUN_004c3770(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined1 auStack_210 [16];
  undefined *local_200;
  undefined *puStack_1f8;
  undefined **local_1f0;
  undefined1 *local_1e8;
  undefined8 *puStack_1e0;
  undefined8 local_1d8;
  undefined1 auStack_1d0 [40];
  undefined8 *local_1a8;
  undefined8 local_1a0;
  long local_198 [18];
  long local_108;
  long lStack_100;
  long local_f8 [19];
  
  FUN_00422780(local_f8);
  iVar3 = FUN_004229e0(local_f8,0x3c,0,0x7fffffff);
  iVar4 = FUN_00422b30(local_f8,0x3e,0,0x7fffffff);
  pcVar10 = (char *)(local_f8[0] + iVar3);
  do {
    pcVar10 = pcVar10 + 1;
    iVar3 = iVar3 + 1;
  } while (*pcVar10 == ' ');
  plVar7 = (long *)FUN_004237e0(local_f8,iVar3,(iVar4 + -1) - iVar3);
  local_108 = *plVar7;
  lStack_100 = local_108 + (int)plVar7[1] + -1;
  FUN_00422780(local_198,&local_108);
  lVar14 = local_198[0];
  local_1a8 = (undefined8 *)0x0;
  local_1a0 = 0x8000000000000000;
  uVar16 = *(undefined8 *)PTR_PTR_04bd4d28;
  FUN_00426990(uVar16,&local_1a8,8);
  local_1a8[(int)(uint)local_1a0] = lVar14;
  local_1a0._0_4_ = (uint)local_1a0 + 1;
  iVar3 = 0;
LAB_004c3880:
  do {
    iVar4 = FUN_004229e0(local_198,0x2c,iVar3,0x7fffffff);
    iVar3 = FUN_004229e0(local_198,0x3c,iVar3,0x7fffffff);
    puVar2 = PTR_DAT_048607b8;
    if ((iVar3 < 0) || (iVar4 <= iVar3)) {
      if (iVar4 < 0) {
        if ((uint)local_1a0 != 0) {
          puVar1 = local_1a8 + (int)(uint)local_1a0;
          puVar19 = local_1a8;
LAB_004c39d0:
          do {
            uVar9 = *(uint *)(param_1 + 0xe);
            pcVar10 = (char *)*puVar19;
            if (uVar9 == (*(uint *)((long)param_1 + 0x74) & 0x3fffffff)) {
              FUN_00426990(puVar2,param_1 + 0xd,0x28);
              uVar9 = *(uint *)(param_1 + 0xe);
            }
            lVar14 = param_1[0xd];
            puVar17 = (undefined8 *)(lVar14 + (long)(int)uVar9 * 0x28);
            lVar15 = (long)(int)uVar9;
            *(uint *)(param_1 + 0xe) = uVar9 + 1;
            *(undefined1 *)(puVar17 + 4) = 0;
            puVar17[2] = 0;
            puVar17[3] = 0;
            *puVar17 = 0;
            puVar17[1] = 0;
            cVar12 = *pcVar10;
            if (cVar12 != '\0') {
              lVar11 = 1;
              do {
                if ((cVar12 != ' ') && (9 < (byte)(cVar12 - 0x30U))) {
                  FUN_004c9a00(auStack_1d0,param_3);
                  local_1f0 = &PTR_LAB_04868700;
                  local_1e8 = auStack_1d0;
                  puStack_1e0 = param_1;
                  local_1d8 = (**(code **)(*(long *)*param_1 + 0x40))();
                  local_200 = &DAT_040b9689;
                  puStack_1f8 = &DAT_040b968d;
                  FUN_004297c0(auStack_210,pcVar10);
                  uVar8 = FUN_004ca820(&local_1f0,&local_200,auStack_210);
                  lVar11 = lVar14 + lVar15 * 0x28;
                  lVar18 = *(long *)(lVar11 + 8);
                  *(undefined8 *)(lVar11 + 8) = uVar8;
                  if (lVar18 != 0) {
                    FUN_004ca7b0(lVar18);
                    FUN_00438870(lVar18,0x28);
                  }
                  lVar14 = lVar14 + lVar15 * 0x28;
                  *(undefined8 *)(lVar14 + 0x10) = 0;
                  FUN_0043bf00(puVar17,&DAT_040b4131,&DAT_040b4132);
                  *(undefined1 *)(lVar14 + 0x20) = 0;
                  FUN_004c9960(auStack_1d0);
                  puVar19 = puVar19 + 1;
                  if (puVar19 != puVar1) goto LAB_004c39d0;
                  goto LAB_004c3b5c;
                }
                cVar12 = pcVar10[lVar11];
                lVar11 = lVar11 + 1;
              } while (cVar12 != '\0');
            }
            uVar8 = FUN_0043a320(pcVar10,0);
            lVar11 = lVar14 + lVar15 * 0x28;
            lVar18 = *(long *)(lVar11 + 8);
            *(undefined8 *)(lVar11 + 8) = 0;
            *(undefined8 *)(lVar11 + 0x10) = uVar8;
            if (lVar18 != 0) {
              FUN_004ca7b0(lVar18);
              FUN_00438870(lVar18,0x28);
            }
            FUN_0043bf00(puVar17,&DAT_040b4131,&DAT_040b4132);
            *(undefined1 *)(lVar14 + lVar15 * 0x28 + 0x20) = 1;
            puVar19 = puVar19 + 1;
          } while (puVar19 != puVar1);
        }
LAB_004c3b5c:
        uVar9 = local_1a0._4_4_;
        local_1a0 = (ulong)local_1a0._4_4_ << 0x20;
        if ((-1 < (int)uVar9) && (local_1a8 != (undefined8 *)0x0)) {
          FUN_00421f90(uVar16,local_1a8,8,uVar9 & 0x3fffffff);
        }
        FUN_00422550(local_198);
        FUN_00422550(local_f8);
        return;
      }
      FUN_00424ac0(local_198,iVar4,1,&DAT_04142a7e,1);
      pcVar10 = (char *)(local_198[0] + iVar4);
      do {
        pcVar10 = pcVar10 + 1;
        iVar4 = iVar4 + 1;
      } while (*pcVar10 == ' ');
      if ((uint)local_1a0 == (local_1a0._4_4_ & 0x3fffffff)) {
        FUN_00426990(uVar16,&local_1a8,8);
      }
      local_1a8[(int)(uint)local_1a0] = pcVar10;
      local_1a0._0_4_ = (uint)local_1a0 + 1;
      iVar3 = iVar4;
      goto LAB_004c3880;
    }
    iVar3 = iVar3 + 1;
    iVar4 = 1;
    do {
      iVar5 = FUN_004229e0(local_198,0x3c,iVar3,0x7fffffff);
      iVar6 = FUN_004229e0(local_198,0x3e,iVar3,0x7fffffff);
      if (iVar5 < 0) {
        iVar13 = -1;
        if (iVar6 < 0) break;
      }
      else {
        iVar13 = 1;
        if (!(iVar6 < 0 || iVar5 <= iVar6)) {
          iVar13 = -1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
      }
      iVar4 = iVar4 + iVar13;
      iVar3 = iVar6 + 1;
    } while (0 < iVar4);
  } while( true );
}

