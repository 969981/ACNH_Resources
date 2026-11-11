
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00514650(long param_1,undefined1 (*param_2) [12],int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar12;
  undefined1 auVar11 [16];
  undefined8 uVar13;
  long local_50;
  undefined8 local_48;
  
  uVar7 = DAT_0413f500;
  fVar10 = (float)DAT_0413f500;
  uVar6 = (ulong)DAT_0413f500 >> 0x20;
  fVar12 = (float)_DAT_0413f508;
  uVar5 = (ulong)_DAT_0413f508 >> 0x20;
  *(undefined8 *)(*param_2 + 8) = _DAT_0413f508;
  *(undefined8 *)*param_2 = uVar7;
  *(ulong *)param_2[2] = CONCAT44(-(float)uVar5,-fVar12);
  *(ulong *)(param_2[1] + 4) = CONCAT44(-(float)uVar6,-fVar10);
  if (*(char *)(param_1 + 0x130) == '\0') {
    uVar7 = 0;
  }
  else {
    local_50 = 0;
    local_48 = -0x8000000000000000;
    FUN_00514140(param_1,*(undefined4 *)(param_1 + 0x134),&local_50);
    uVar4 = local_48._4_4_;
    if ((int)local_48 == 0) {
      uVar7 = 0;
    }
    else if ((int)local_48 < 1) {
      uVar7 = 1;
    }
    else {
      if (param_3 == 0) {
        lVar9 = 0;
        do {
          lVar8 = *(long *)(*(long *)(param_1 + 0x40) + (long)*(int *)(local_50 + lVar9 * 4) * 8);
          uVar6 = FUN_004d1aa0(lVar8 + 0x60);
          if ((uVar6 & 1) == 0) {
            FUN_0053b500(lVar8);
          }
          auVar2 = *(undefined1 (*) [16])(param_2[1] + 4);
          auVar11._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
          auVar11._0_12_ = *param_2;
          auVar11 = NEON_fmin(auVar11,*(undefined1 (*) [16])(lVar8 + 0x60),4);
          *(long *)(*param_2 + 8) = auVar11._8_8_;
          *(long *)*param_2 = auVar11._0_8_;
          auVar11 = NEON_fmax(auVar2,*(undefined1 (*) [16])(lVar8 + 0x70),4);
          *(long *)param_2[2] = auVar11._8_8_;
          *(long *)(param_2[1] + 4) = auVar11._0_8_;
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)local_48);
      }
      else {
        lVar9 = 0;
        do {
          lVar8 = *(long *)(*(long *)(param_1 + 0x40) + (long)*(int *)(local_50 + lVar9 * 4) * 8);
          if (param_3 == 2) {
            if (*(int *)(*(long *)(lVar8 + 0x18) + 0x158) != 0) {
              uVar6 = FUN_004d1aa0(lVar8 + 0xb0);
              if ((uVar6 & 1) == 0) {
                FUN_0053b5d0(lVar8);
              }
              uVar13 = *(undefined8 *)param_2[2];
              uVar7 = *(undefined8 *)(param_2[1] + 4);
              auVar2._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
              auVar2._0_12_ = *param_2;
              auVar11 = NEON_fmin(auVar2,*(undefined1 (*) [16])(lVar8 + 0xb0),4);
              *(long *)(*param_2 + 8) = auVar11._8_8_;
              *(long *)*param_2 = auVar11._0_8_;
              auVar11 = *(undefined1 (*) [16])(lVar8 + 0xc0);
              goto LAB_00514740;
            }
          }
          else if (param_3 == 1) {
            uVar6 = FUN_004d1aa0(lVar8 + 0x80);
            if ((uVar6 & 1) == 0) {
              FUN_0053b5d0(lVar8);
            }
            uVar13 = *(undefined8 *)param_2[2];
            uVar7 = *(undefined8 *)(param_2[1] + 4);
            auVar1._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
            auVar1._0_12_ = *param_2;
            auVar11 = NEON_fmin(auVar1,*(undefined1 (*) [16])(lVar8 + 0x80),4);
            *(long *)(*param_2 + 8) = auVar11._8_8_;
            *(long *)*param_2 = auVar11._0_8_;
            auVar11 = *(undefined1 (*) [16])(lVar8 + 0x90);
LAB_00514740:
            auVar3._8_8_ = uVar13;
            auVar3._0_8_ = uVar7;
            auVar11 = NEON_fmax(auVar3,auVar11,4);
            *(long *)param_2[2] = auVar11._8_8_;
            *(long *)(param_2[1] + 4) = auVar11._0_8_;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)local_48);
      }
      uVar7 = 1;
      uVar4 = local_48._4_4_;
    }
    if ((-1 < local_48) && (local_48 = (ulong)uVar4 << 0x20, local_50 != 0)) {
      FUN_00421f90(PTR_DAT_048607b8,local_50,4,uVar4 & 0x3fffffff);
    }
  }
  return uVar7;
}

