
uint FUN_0220b170(float *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_88;
  float local_84;
  float local_80;
  float local_7c [3];
  undefined1 local_18 [4];
  undefined4 local_14;
  
  if ((DAT_0519d040 != 0) && (*(char *)(DAT_0519d040 + 0x4b30) != '\0')) {
    fVar12 = *(float *)(DAT_0519d040 + 0x4b34);
    lVar4 = FUN_01260194(0xe7);
    if ((uint)fVar12 < (uint)*(float *)(lVar4 + 0x420)) {
      lVar4 = *(long *)(*(long *)(lVar4 + 0x428) + (long)(int)fVar12 * 8);
      uVar3 = 0;
      if (lVar4 != 0) {
        plVar6 = (long *)(lVar4 + 0xd0);
        local_7c[0] = fVar12;
        (**(code **)(*plVar6 + 0xf0))(plVar6);
        (**(code **)(*plVar6 + 0xf0))(plVar6);
        (**(code **)(*(long *)(lVar4 + 0xa0) + 0xf0))((long *)(lVar4 + 0xa0));
        uVar3 = FUN_0125ec00(local_7c);
        lVar4 = DAT_0523ae60;
        if ((uVar3 & 1) != 0) {
          pfVar5 = (float *)(**(code **)(*(long *)(DAT_0523ae60 + 0x458) + 0xf0))
                                      (DAT_0523ae60 + 0x458);
          fVar14 = *pfVar5;
          fVar12 = pfVar5[1];
          fVar13 = pfVar5[2];
          pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x490) + 0xf0))(lVar4 + 0x490);
          fVar11 = *pfVar5;
          fVar10 = pfVar5[1];
          fVar16 = pfVar5[2];
          FUN_0125f714(&local_88);
          pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x4c8) + 0xf0))(lVar4 + 0x4c8);
          fVar15 = *pfVar5;
          pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x4f8) + 0xf0))(lVar4 + 0x4f8);
          fVar7 = *pfVar5;
          if (local_88 <= local_7c[0]) {
            fVar15 = -fVar15;
            fVar8 = fVar10;
            fVar10 = fVar14;
            fVar9 = fVar13;
          }
          else {
            fVar8 = fVar12;
            fVar12 = fVar10;
            fVar10 = fVar11;
            fVar9 = fVar16;
            fVar11 = fVar14;
            fVar16 = fVar13;
          }
          *param_1 = local_88 + fVar15;
          param_1[2] = fVar7 + local_80;
          param_1[1] = local_84 + 0.0;
          puVar2 = PTR_DAT_04bb27c8;
          if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
             (lVar4 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar4 == 0)) {
            fVar7 = -500.0;
          }
          else {
            local_18[0] = 0;
            if (DAT_04c487d4 == -1) {
              local_14 = 7;
            }
            else {
              puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
              if (0xff < (uint)(int)DAT_04c487d4) {
                puVar1 = (uint *)PTR_DAT_04bc39f8;
              }
              local_14 = 7;
              if ((*puVar1 & 2) != 0) {
                local_14 = 5;
              }
            }
            fVar7 = (float)FUN_00962700(lVar4,param_1,&local_14,0,local_18);
          }
          param_1[3] = fVar10 + local_88;
          param_1[1] = fVar7;
          lVar4 = *(long *)puVar2;
          param_1[5] = fVar9 + local_80;
          param_1[4] = fVar12 + local_84;
          if ((lVar4 == 0) || (*(long *)(lVar4 + 0x90) == 0)) {
            fVar12 = -500.0;
          }
          else {
            local_18[0] = 0;
            if (DAT_04c487d4 == -1) {
              local_14 = 7;
            }
            else {
              puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
              if (0xff < (uint)(int)DAT_04c487d4) {
                puVar1 = (uint *)PTR_DAT_04bc39f8;
              }
              local_14 = 7;
              if ((*puVar1 & 2) != 0) {
                local_14 = 5;
              }
            }
            fVar12 = (float)FUN_00962700(*(long *)(lVar4 + 0x90),param_1 + 3,&local_14,0,local_18);
            lVar4 = *(long *)puVar2;
          }
          param_1[6] = fVar11 + local_88;
          param_1[4] = fVar12;
          param_1[7] = fVar8 + local_84;
          param_1[8] = fVar16 + local_80;
          if ((lVar4 == 0) || (*(long *)(lVar4 + 0x90) == 0)) {
            fVar12 = -500.0;
          }
          else {
            local_18[0] = 0;
            if (DAT_04c487d4 == -1) {
              local_14 = 7;
            }
            else {
              puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
              if (0xff < (uint)(int)DAT_04c487d4) {
                puVar1 = (uint *)PTR_DAT_04bc39f8;
              }
              local_14 = 7;
              if ((*puVar1 & 2) != 0) {
                local_14 = 5;
              }
            }
            fVar12 = (float)FUN_00962700(*(long *)(lVar4 + 0x90),param_1 + 6,&local_14,0,local_18);
          }
          param_1[7] = fVar12;
          fVar12 = *param_1;
          fVar7 = param_1[1];
          fVar10 = param_1[2];
          fVar13 = -(fVar10 * local_84) + local_80 * fVar7;
          fVar16 = -(fVar12 * local_80) + local_88 * fVar10;
          fVar11 = -(fVar7 * local_88) + local_84 * fVar12;
          fVar12 = atan2f(SQRT(fVar16 * fVar16 + fVar13 * fVar13 + fVar11 * fVar11),
                          fVar7 * local_84 + local_88 * fVar12 + local_80 * fVar10);
          fVar10 = param_1[7];
          fVar13 = param_1[8];
          fVar11 = param_1[3];
          fVar7 = param_1[4];
          fVar8 = param_1[5];
          fVar15 = param_1[6];
          fVar9 = -(fVar8 * fVar10) + fVar13 * fVar7;
          fVar14 = -(fVar11 * fVar13) + fVar15 * fVar8;
          fVar16 = -(fVar7 * fVar15) + fVar10 * fVar11;
          param_1[9] = (float)(long)(fVar12 * 6.8356525e+08);
          fVar12 = atan2f(SQRT(fVar14 * fVar14 + fVar9 * fVar9 + fVar16 * fVar16),
                          fVar7 * fVar10 + fVar15 * fVar11 + fVar13 * fVar8);
          fVar11 = param_1[3];
          fVar7 = param_1[4];
          fVar10 = param_1[7];
          fVar13 = param_1[8];
          fVar8 = param_1[5];
          fVar15 = param_1[6];
          fVar9 = -(fVar13 * fVar7) + fVar8 * fVar10;
          fVar14 = -(fVar15 * fVar8) + fVar11 * fVar13;
          fVar16 = -(fVar10 * fVar11) + fVar7 * fVar15;
          param_1[10] = (float)(long)(fVar12 * 6.8356525e+08);
          fVar12 = atan2f(SQRT(fVar14 * fVar14 + fVar9 * fVar9 + fVar16 * fVar16),
                          fVar10 * fVar7 + fVar11 * fVar15 + fVar8 * fVar13);
          param_1[0xb] = (float)(long)(fVar12 * 6.8356525e+08);
        }
      }
      goto LAB_0220b2cc;
    }
  }
  uVar3 = 0;
LAB_0220b2cc:
  return uVar3 & 1;
}

