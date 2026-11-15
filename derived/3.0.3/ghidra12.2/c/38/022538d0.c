
void FUN_022538d0(long param_1,float *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_84;
  undefined **local_80;
  long lStack_78;
  
  if (0 < *(int *)(param_1 + 0x440)) {
    lVar7 = 0;
    puVar8 = *(undefined8 **)(param_1 + 0x450);
    do {
      puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x448) + lVar7 * 8);
      lVar7 = lVar7 + 1;
      *puVar10 = puVar8;
      *(undefined8 **)(param_1 + 0x450) = puVar10;
      puVar8 = puVar10;
    } while (lVar7 < *(int *)(param_1 + 0x440));
  }
  *(undefined4 *)(param_1 + 0x440) = 0;
  local_80 = &PTR_FUN_04a7a6a8;
  iVar3 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  if (iVar3 != 0) {
    lVar7 = (long)iVar3 << 3;
    puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    lStack_78 = param_1;
    do {
      (*(code *)*local_80)(&local_80,*puVar8);
      puVar5 = PTR_DAT_04bb3350;
      puVar4 = PTR_DAT_04bb27c0;
      lVar7 = lVar7 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar7 != 0);
    if (1 < *(int *)(param_1 + 0x440)) {
      lVar7 = *(long *)(param_1 + 0x448);
      uVar14 = 0;
      local_84 = *(int *)(param_1 + 0x440) - 1;
      do {
        if ((int)local_84 <= (int)uVar14) {
          return;
        }
        uVar13 = (ulong)uVar14;
        uVar15 = (ulong)local_84;
        uVar16 = uVar13;
        local_84 = uVar14;
        do {
          puVar8 = (undefined8 *)(lVar7 + uVar16 * 8);
          puVar1 = (uint *)puVar8[1];
          uVar2 = *(uint *)*puVar8;
          if ((((uVar2 == 0) ||
               (lVar11 = *(long *)(*(long *)(*(long *)(*(long *)puVar4 + 0x1c0) + 8) +
                                  ((ulong)(uVar2 >> 0x11) & 0x7ff8)), lVar11 == 0)) ||
              ((*(uint *)(lVar11 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar11 + 0x230) != uVar2))
          {
            lVar11 = 0;
          }
          iVar3 = *(int *)(*(long *)puVar4 + 0x288);
          if (iVar3 == 1 || iVar3 == -1) {
            plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
            (**(code **)(*plVar6 + 0x60))();
          }
          uVar2 = *puVar1;
          if (((uVar2 == 0) ||
              (lVar12 = *(long *)(*(long *)(*(long *)(*(long *)puVar4 + 0x1c0) + 8) +
                                 ((ulong)(uVar2 >> 0x11) & 0x7ff8)), lVar12 == 0)) ||
             (((*(uint *)(lVar12 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar12 + 0x230) != uVar2))))
          {
            lVar12 = 0;
          }
          iVar3 = *(int *)(*(long *)puVar4 + 0x288);
          if (iVar3 == 1 || iVar3 == -1) {
            plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
            (**(code **)(*plVar6 + 0x60))();
          }
          fVar17 = *(float *)(*(long *)(lVar11 + 0x68) + 0x278) - *param_2;
          fVar19 = *(float *)(*(long *)(lVar11 + 0x68) + 0x280) - param_2[2];
          fVar18 = *(float *)(*(long *)(lVar12 + 0x68) + 0x278) - *param_2;
          fVar20 = *(float *)(*(long *)(lVar12 + 0x68) + 0x280) - param_2[2];
          if (SQRT(fVar20 * fVar20 + fVar18 * fVar18) < SQRT(fVar19 * fVar19 + fVar17 * fVar17)) {
            uVar9 = puVar8[1];
            local_84 = (uint)uVar16;
            puVar8[1] = *(undefined8 *)(lVar7 + uVar16 * 8);
            *(undefined8 *)(lVar7 + uVar16 * 8) = uVar9;
          }
          uVar16 = uVar16 + 1;
        } while (uVar15 != uVar16);
        if ((int)local_84 <= (int)uVar14) {
          return;
        }
        uVar16 = (ulong)local_84;
        uVar14 = local_84;
        do {
          puVar8 = (undefined8 *)(lVar7 + uVar16 * 8);
          puVar1 = (uint *)puVar8[-1];
          uVar2 = *(uint *)*puVar8;
          if (((uVar2 == 0) ||
              (lVar11 = *(long *)(*(long *)(*(long *)(*(long *)puVar4 + 0x1c0) + 8) +
                                 ((ulong)(uVar2 >> 0x11) & 0x7ff8)), lVar11 == 0)) ||
             (((*(uint *)(lVar11 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar11 + 0x230) != uVar2))))
          {
            lVar11 = 0;
          }
          iVar3 = *(int *)(*(long *)puVar4 + 0x288);
          if (iVar3 == 1 || iVar3 == -1) {
            plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
            (**(code **)(*plVar6 + 0x60))();
          }
          uVar2 = *puVar1;
          if ((((uVar2 == 0) ||
               (lVar12 = *(long *)(*(long *)(*(long *)(*(long *)puVar4 + 0x1c0) + 8) +
                                  ((ulong)(uVar2 >> 0x11) & 0x7ff8)), lVar12 == 0)) ||
              ((*(uint *)(lVar12 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar12 + 0x230) != uVar2))
          {
            lVar12 = 0;
          }
          iVar3 = *(int *)(*(long *)puVar4 + 0x288);
          if (iVar3 == 1 || iVar3 == -1) {
            plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
            (**(code **)(*plVar6 + 0x60))();
          }
          fVar17 = *(float *)(*(long *)(lVar11 + 0x68) + 0x278) - *param_2;
          fVar19 = *(float *)(*(long *)(lVar11 + 0x68) + 0x280) - param_2[2];
          fVar18 = *(float *)(*(long *)(lVar12 + 0x68) + 0x278) - *param_2;
          fVar20 = *(float *)(*(long *)(lVar12 + 0x68) + 0x280) - param_2[2];
          if (SQRT(fVar19 * fVar19 + fVar17 * fVar17) < SQRT(fVar20 * fVar20 + fVar18 * fVar18)) {
            uVar9 = puVar8[-1];
            uVar14 = (uint)uVar16;
            puVar8[-1] = *(undefined8 *)(lVar7 + uVar16 * 8);
            *(undefined8 *)(lVar7 + uVar16 * 8) = uVar9;
          }
          uVar16 = uVar16 - 1;
        } while ((long)uVar13 < (long)uVar16);
      } while (uVar14 != local_84);
    }
  }
  return;
}

