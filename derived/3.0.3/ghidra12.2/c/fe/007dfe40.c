
undefined8 FUN_007dfe40(long param_1,long param_2,byte param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  float *pfVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  float local_88;
  
  if (param_2 == 0) {
    uVar11 = 0;
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      fVar17 = 0.0;
      fVar16 = 0.0;
      uVar11 = 0;
      fVar15 = 0.0;
      fVar18 = 0.0;
      fVar14 = 0.0;
    }
    else {
      puVar9 = *(undefined8 **)(param_1 + 0x10);
      fVar14 = 0.0;
      fVar18 = 0.0;
      fVar15 = 0.0;
      fVar16 = 0.0;
      uVar11 = 0;
      fVar17 = 0.0;
      lVar10 = (long)*(int *)(param_1 + 8) << 3;
      do {
        plVar8 = (long *)*puVar9;
        if ((*(byte *)(plVar8 + 4) & param_3) != 0) {
          local_a8 = 0.0;
          local_c0 = 0;
          local_b8 = 0;
          local_b0 = 0;
          puVar3 = (undefined8 *)(**(code **)(*(long *)plVar8[3] + 0x20))();
          (**(code **)*puVar3)();
          iVar1 = FUN_007e0214();
          iVar2 = 0;
          if (iVar1 != -1) {
            iVar2 = iVar1;
          }
          local_a0 = CONCAT44(local_a0._4_4_,iVar2);
          iVar2 = FUN_007e00fc(&local_a0);
          if (iVar2 == 5) {
            uVar4 = (**(code **)(*(long *)plVar8[3] + 0x20))();
            uVar5 = FUN_03eafa70(uVar4,param_2,&local_c0);
            fVar13 = local_b8._4_4_ * local_c0._4_4_;
            fVar12 = local_b8._4_4_ * (float)local_c0;
            local_c0 = CONCAT44(-local_c0._4_4_,-(float)local_c0);
            local_a8 = local_b8._4_4_ * (float)local_b8 + local_a8;
            local_b0 = CONCAT44(fVar13 + local_b0._4_4_,fVar12 + (float)local_b0);
            local_b8 = CONCAT44(local_b8._4_4_,-(float)local_b8);
          }
          else {
            if (iVar2 != 9) goto LAB_007dfeb4;
            uVar4 = (**(code **)(*(long *)plVar8[3] + 0x20))();
            uVar5 = FUN_03eb05c0(param_2,uVar4,&local_c0);
          }
          if ((uVar5 & 1) != 0) {
            if ((param_4 != (int *)0x0) && (*param_4 < param_4[1])) {
              plVar7 = *(long **)(param_4 + 4);
              if (plVar7 != (long *)0x0) {
                *(long *)(param_4 + 4) = *plVar7;
              }
              *plVar7 = (long)(plVar8 + 1);
              plVar7[1] = local_c0;
              *(float *)(plVar7 + 4) = local_a8;
              plVar7[2] = local_b8;
              plVar7[3] = local_b0;
              local_a0 = local_c0;
              lStack_98 = local_b8;
              local_90 = local_b0;
              local_88 = local_a8;
              if (*param_4 < param_4[1]) {
                *(long **)(*(long *)(param_4 + 2) + (long)*param_4 * 8) = plVar7;
                *param_4 = *param_4 + 1;
              }
            }
            fVar12 = *(float *)((long)plVar8 + 0x34);
            if (fVar18 <= fVar12) {
              fVar18 = fVar12;
            }
            fVar12 = fVar14 + fVar12;
            fVar14 = 5.0;
            if (fVar12 <= 5.0) {
              fVar14 = fVar12;
            }
            plVar8 = (long *)(**(code **)(*plVar8 + 0x50))(plVar8);
            pfVar6 = (float *)(**(code **)(*plVar8 + 0x28))();
            fVar16 = fVar16 + pfVar6[1];
            fVar17 = fVar17 + *pfVar6;
            fVar15 = fVar15 + pfVar6[2];
            fVar12 = SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar15 * fVar15);
            if (0.0 < fVar12) {
              fVar12 = 1.0 / fVar12;
              fVar17 = fVar17 * fVar12;
              fVar16 = fVar16 * fVar12;
              fVar15 = fVar15 * fVar12;
            }
            uVar11 = 1;
          }
        }
LAB_007dfeb4:
        puVar9 = puVar9 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    if (param_4 != (int *)0x0) {
      param_4[0xcb] = (int)fVar18;
      param_4[0xcc] = (int)fVar14;
      param_4[200] = (int)fVar17;
      param_4[0xc9] = (int)fVar16;
      param_4[0xca] = (int)fVar15;
    }
  }
  return uVar11;
}

