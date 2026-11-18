
void FUN_03405a20(float param_1,float param_2,uint *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined **ppuVar12;
  uint uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined *local_138;
  uint local_130;
  undefined4 uStack_12c;
  undefined *local_128 [4];
  undefined8 local_108;
  undefined *apuStack_100 [4];
  undefined8 local_e0;
  undefined **local_d8;
  uint *puStack_d0;
  int local_c8;
  undefined4 local_b8;
  int iStack_b4;
  undefined8 local_b0;
  uint *local_a8;
  int local_a0;
  undefined4 local_90;
  int iStack_8c;
  
  uVar6 = param_3[8];
  if (0 < (int)uVar6) {
    lVar3 = 0;
    do {
      iVar2 = (int)lVar3;
      pfVar5 = *(float **)(*(long *)(param_3 + 10) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *pfVar5 = param_1 + (float)param_3[0x10] * (float)iVar2;
      pfVar5[1] = param_2 + 0.0;
      uVar6 = param_3[8];
    } while (lVar3 < (int)uVar6);
  }
  uVar10 = (ulong)*param_3;
  if (0 < (int)*param_3) {
    uVar11 = 0;
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    uVar4 = uVar6;
    do {
      lVar3 = (long)(int)uVar4;
      if ((long)uVar11 < lVar3) {
        fVar16 = 3.4028235e+38;
        uVar14 = uVar11 & 0xffffffff;
        uVar8 = uVar11;
        do {
          fVar15 = **(float **)(*(long *)(param_3 + 10) + uVar8 * 8) - (float)param_3[0x11];
          fVar17 = -fVar15;
          if (0.0 <= fVar15) {
            fVar17 = fVar15;
          }
          uVar13 = (uint)uVar8;
          if (fVar16 <= fVar17) {
            uVar13 = (uint)uVar14;
            fVar17 = fVar16;
          }
          fVar16 = fVar17;
          uVar14 = (ulong)uVar13;
          uVar8 = uVar8 + uVar10;
        } while ((long)uVar8 < lVar3);
      }
      else {
        uVar14 = uVar11 & 0xffffffff;
        uVar13 = (uint)uVar11;
      }
      if (-1 < (int)uVar13) {
        uVar13 = (uint)uVar14;
        if ((int)uVar13 < (int)uVar4) {
          plVar9 = *(long **)(*(long *)(*(long *)(param_3 + 2) + uVar11 * 8) + 0x10);
          if (plVar9 != (long *)0x0) {
            puVar7 = *(undefined8 **)(*(long *)(param_3 + 10) + uVar14 * 8);
            local_b0 = (undefined **)*puVar7;
            local_a8 = (uint *)((ulong)local_a8 & 0xffffffff00000000);
            local_130 = 8;
            local_138 = puVar1;
            (**(code **)(*plVar9 + 0x18))(plVar9,&local_138);
            (**(code **)(plVar9[3] + 0x98))(plVar9[1],&local_b0);
            *(byte *)(puVar7 + 1) = *(char *)(puVar7 + 1) << 1 | 1;
            uVar6 = param_3[8];
            lVar3 = (long)(int)uVar6;
            uVar4 = uVar6;
          }
        }
      }
      if ((long)uVar11 < lVar3) {
        uVar14 = uVar11;
        do {
          if ((long)(int)uVar13 != uVar14) {
            lVar3 = *(long *)(*(long *)(param_3 + 10) + uVar14 * 8);
            *(char *)(lVar3 + 8) = *(char *)(lVar3 + 8) << 1;
            uVar6 = param_3[8];
          }
          uVar14 = uVar14 + uVar10;
          uVar4 = uVar6;
        } while ((long)uVar14 < (long)(int)uVar6);
      }
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)(int)*param_3);
    uVar10 = (ulong)*param_3;
  }
  if ((int)uVar6 < (int)uVar10) {
    lVar3 = (long)(int)uVar6;
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    pfVar5 = *(float **)(*(long *)(param_3 + 10) + (long)(int)(uVar6 - 1) * 8);
    fVar16 = pfVar5[1] + 0.0;
    fVar17 = (float)param_3[0x10] + *pfVar5;
    do {
      plVar9 = *(long **)(*(long *)(*(long *)(param_3 + 2) + lVar3 * 8) + 0x10);
      if (plVar9 != (long *)0x0) {
        fVar16 = fVar16 + 0.0;
        local_a8 = (uint *)((ulong)local_a8 & 0xffffffff00000000);
        local_130 = 8;
        fVar17 = fVar17 + (float)param_3[0x10];
        local_b0 = (undefined **)CONCAT44(fVar16,fVar17);
        local_138 = puVar1;
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_138);
        (**(code **)(plVar9[3] + 0x98))(plVar9[1],&local_b0);
        uVar10 = (ulong)*param_3;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar10);
    uVar6 = param_3[8];
  }
  puVar1 = PTR_DAT_04bc7618;
  if (0 < (int)uVar6) {
    lVar3 = 0;
    do {
      if (((*(byte *)(*(long *)(*(long *)(param_3 + 10) + lVar3 * 8) + 8) & 3) == 1) &&
         (uVar4 = *param_3, 0 < (int)uVar4)) {
        local_d8 = (undefined **)(puVar1 + 0x10);
        local_130 = (uint)lVar3;
        iStack_8c = 0;
        local_b0 = local_d8;
        if ((0 < (int)local_130) && ((int)local_130 <= (int)param_3[0x1b])) {
          uVar6 = 0;
          if (uVar4 != 0) {
            uVar6 = (local_130 - 1) / uVar4;
          }
          local_a0 = (local_130 - 1) - uVar6 * uVar4;
          iVar2 = ((int *)**(undefined8 **)(param_3 + 2))[6];
          local_b0 = &PTR_LAB_04b29708;
          iStack_8c = 0;
          if (iVar2 != 0) {
            iStack_8c = *(int *)**(undefined8 **)(param_3 + 2) / iVar2;
          }
          local_a8 = param_3;
        }
        local_90 = 0;
        iStack_b4 = 0;
        if (((int)local_130 < -1) || (uVar6 = local_130 + 1, (int)param_3[0x1b] <= (int)uVar6)) {
          puVar7 = *(undefined8 **)(param_3 + 2);
          ppuVar12 = (undefined **)(puVar1 + 0x10);
        }
        else {
          uVar13 = 0;
          if (uVar4 != 0) {
            uVar13 = uVar6 / uVar4;
          }
          ppuVar12 = &PTR_LAB_04b29730;
          local_c8 = uVar6 - uVar13 * uVar4;
          puVar7 = *(undefined8 **)(param_3 + 2);
          iVar2 = ((int *)*puVar7)[6];
          local_d8 = &PTR_LAB_04b29730;
          iStack_b4 = 0;
          if (iVar2 != 0) {
            iStack_b4 = *(int *)*puVar7 / iVar2;
          }
          puStack_d0 = param_3;
        }
        local_b8 = 0;
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = local_130 / uVar4;
        }
        local_138 = (undefined *)0x0;
        uVar6 = local_130 - uVar6 * uVar4;
        uStack_12c = *(undefined4 *)(puVar7[uVar6] + 0x20);
        *(uint *)(puVar7[uVar6] + 0x20) = local_130;
        local_128[0] = puVar1 + 0x10;
        local_e0 = 0;
        local_108 = 0;
        if (uVar6 < *param_3) {
          local_138 = *(undefined **)(*(long *)(param_3 + 2) + (ulong)uVar6 * 8);
        }
        apuStack_100[0] = local_128[0];
        (*(code *)local_b0[2])(&local_b0,local_128);
        local_108 = CONCAT44(iStack_8c,local_90);
        (*(code *)ppuVar12[2])(&local_d8,apuStack_100);
        local_e0 = CONCAT44(iStack_b4,local_b8);
        (*(code *)**(undefined8 **)(param_3 + 0x20))(param_3 + 0x20,&local_138);
        uVar6 = param_3[8];
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar6);
  }
  return;
}

