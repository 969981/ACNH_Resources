
void FUN_01fc4510(long param_1,float *param_2,uint *param_3,uint *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  uint *puVar6;
  ushort uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  undefined *local_68;
  uint local_60;
  uint local_5c;
  uint *local_58;
  
  if (DAT_04c93e08 == 0) {
    return;
  }
  uVar17 = *param_4;
  if ((((uVar17 == 0) ||
       (lVar13 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                          ((ulong)(uVar17 >> 0x11) & 0x7ff8)), lVar13 == 0)) ||
      ((*(uint *)(lVar13 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar13 + 0x230) != uVar17)) {
    lVar13 = 0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar9 = DAT_04c93e08;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar17 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_01fc45e0;
      uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01fc45e0:
    uVar17 = 0;
  }
  if (lVar13 == 0) {
    return;
  }
  uVar17 = uVar17 ^ 1;
  if (*(int *)(lVar13 + 0x150) != 1) {
    uVar17 = 1;
  }
  if (uVar17 != 0) {
    return;
  }
  lVar13 = *(long *)(lVar13 + 0x68);
  uVar17 = param_4[0x3e];
  if (uVar17 == 0) {
LAB_01fc4b20:
    *param_2 = *(float *)(lVar13 + 0x278);
    param_2[1] = *(float *)(lVar13 + 0x27c);
    fVar14 = *(float *)(lVar13 + 0x280);
  }
  else {
    if (uVar17 == 2) {
      if (param_4[0xe] - 2 < 4) {
        local_60 = 0;
        lVar9 = *(long *)PTR_DAT_04bb2720;
        if (lVar9 == 0) {
          puVar12 = &DAT_055c04a0;
        }
        else {
          puVar12 = &DAT_055c04a0;
          if (*(long *)(lVar9 + 0x330) != 0) {
            puVar12 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
            iVar4 = FUN_006bd550(*puVar12,0);
            puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar4 != 0x758f7eaf) {
              puVar12 = &DAT_055c04a0;
            }
          }
        }
        local_5c = *(uint *)(puVar12 + 7);
        uVar3 = FUN_017baf44();
        local_58 = (uint *)(CONCAT71(local_58._1_7_,uVar3) & 0xffffffffffffff01);
        local_68 = PTR_DAT_04bb3140 + 0x10;
        puVar6 = (uint *)FUN_014fbd50(&local_68,param_4[0xe],param_4 + 6);
        uVar17 = *puVar6;
        if ((uVar17 == 0) || (DAT_04c93e08 == 0)) goto LAB_01fc4b20;
        lVar9 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                         ((ulong)(uVar17 >> 0x11) & 0x7ff8));
        if ((lVar9 == 0) ||
           (((*(uint *)(lVar9 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar9 + 0x230) != uVar17)))) {
          lVar9 = 0;
        }
        if ((*(int *)(DAT_04c93e08 + 0x288) == 1) || (*(int *)(DAT_04c93e08 + 0x288) == -1)) {
          plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          lVar2 = DAT_04c93e08;
          iVar4 = (**(code **)(*plVar5 + 0x60))();
          if (iVar4 < 0x11) {
            uVar17 = 1;
          }
          else {
            if (4 < *(uint *)(lVar2 + 0x5e8)) goto LAB_01fc4af4;
            uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar2 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_01fc4af4:
          uVar17 = 0;
        }
        if (lVar9 != 0) {
          uVar17 = uVar17 ^ 1;
          if (*(int *)(lVar9 + 0x150) != 1) {
            uVar17 = 1;
          }
          if (uVar17 == 0) {
            lVar13 = *(long *)(lVar9 + 0x68);
          }
        }
        goto LAB_01fc4b20;
      }
      puVar6 = param_4 + 2;
      uVar8 = FUN_0277e294(puVar6);
      puVar1 = PTR_DAT_04bb43c0;
      if ((uVar8 & 1) != 0) {
        if (param_2 == (float *)0x0) {
          return;
        }
        uVar19 = param_4[0xd];
        uVar17 = param_4[9];
        *param_2 = ((float)(int)param_4[8] * 5.0 + (float)(int)param_4[0xc] * 5.0 + 5.0) * 0.5;
        fVar14 = ((float)(int)uVar17 * 5.0 + (float)(int)uVar19 * 5.0 + 5.0) * 0.5;
        goto LAB_01fc4b34;
      }
      local_58 = (uint *)0x0;
      local_68 = PTR_DAT_04bc0510 + 0x10;
      local_60 = param_4[2];
      local_5c = param_4[3];
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar17 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar1 == 0) {
LAB_01fc48c8:
        uVar7 = 0xbc;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar17) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar17 * 8) == 0)) goto LAB_01fc48c8;
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar17 = FUN_0277d6c4(puVar6);
        uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar17) ||
           (puVar10 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar17 * 8),
           puVar10 == (uint *)0x0)) goto LAB_01fc48c8;
        uVar7 = 0;
        uVar17 = *puVar10;
        local_58 = puVar10;
        if ((uVar17 != 0) && (puVar10 != (uint *)(ulong)uVar17)) {
          puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar17);
          uVar7 = 0;
          if (*puVar11 != 0) {
            uVar17 = puVar11[1];
            if ((uVar17 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar11 + lVar9 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar9 != 0) {
                uVar19 = 0;
                if ((ulong)uVar17 != 0) {
                  uVar19 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar17);
                }
                if (*puVar11 <= uVar19) {
                  uVar19 = 0xffffffff;
                }
                if ((uVar19 < DAT_05326ec0) &&
                   (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar19 * 2), uVar7 < 0xbd))
                goto LAB_01fc48d4;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_01fc48d4:
      if (uVar7 == 4) {
        iVar4 = FUN_01fc4fcc(param_1,puVar6);
        uVar8 = (ulong)((float)iVar4 * 90.0 * 11930465.0);
        uVar17 = (uint)uVar8;
        *param_3 = uVar17;
        uVar8 = uVar8 >> 0x18 & 0xff;
        fVar14 = (float)(uVar17 & 0xffffff) * 5.9604645e-08;
        lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x68);
        fVar18 = *(float *)(lVar13 + 0x27c);
        fVar16 = ((float)(&DAT_04199798)[uVar8 * 4] + fVar14 * (float)(&DAT_0419979c)[uVar8 * 4]) *
                 5.0;
        fVar15 = ((float)(&DAT_041997a0)[uVar8 * 4] + fVar14 * (float)(&DAT_041997a4)[uVar8 * 4]) *
                 5.0;
        fVar14 = *(float *)(lVar13 + 0x280);
        *param_2 = *(float *)(lVar13 + 0x278) + fVar16 + fVar16;
        param_2[1] = fVar18 + 0.0;
        fVar14 = fVar14 + fVar15 + fVar15;
        goto LAB_01fc4b34;
      }
      uVar8 = FUN_01ad6a30(&local_68,5);
      if ((uVar8 & 1) == 0) goto LAB_01fc4b20;
      *param_3 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x2b4);
      lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      uVar8 = (ulong)(*(uint *)(lVar13 + 0x2b4) >> 0x14) & 0xff0;
      fVar14 = (float)(*(uint *)(lVar13 + 0x2b4) & 0xffffff) * 5.9604645e-08;
      fVar15 = *(float *)((long)&DAT_041997a0 + uVar8) +
               fVar14 * *(float *)((long)&DAT_041997a4 + uVar8);
      fVar18 = *(float *)(lVar13 + 0x27c);
      fVar14 = (*(float *)((long)&DAT_04199798 + uVar8) +
               fVar14 * *(float *)((long)&DAT_0419979c + uVar8)) * 5.0;
      fVar16 = *(float *)(lVar13 + 0x278) + fVar14 + fVar14;
    }
    else {
      if (uVar17 != 1) {
        return;
      }
      uVar17 = *(uint *)(lVar13 + 0x2b4);
      *param_3 = uVar17;
      uVar8 = (ulong)(uVar17 >> 0x14) & 0xff0;
      fVar14 = (float)(uVar17 & 0xffffff) * 5.9604645e-08;
      lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      fVar15 = *(float *)((long)&DAT_041997a0 + uVar8) +
               fVar14 * *(float *)((long)&DAT_041997a4 + uVar8);
      fVar18 = *(float *)(lVar13 + 0x27c);
      fVar14 = (*(float *)((long)&DAT_04199798 + uVar8) +
               fVar14 * *(float *)((long)&DAT_0419979c + uVar8)) * 5.0;
      fVar16 = fVar14 + fVar14 + *(float *)(lVar13 + 0x278);
    }
    fVar14 = *(float *)(lVar13 + 0x280);
    *param_2 = fVar16;
    param_2[1] = fVar18 + 0.0;
    fVar14 = fVar15 * 5.0 + fVar15 * 5.0 + fVar14;
  }
LAB_01fc4b34:
  param_2[2] = fVar14;
  return;
}

