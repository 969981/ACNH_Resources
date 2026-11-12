
int FUN_008479d0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar8 = *(float *)(param_1 + 0x2d8);
  iVar7 = 10;
  fVar10 = *(float *)(param_1 + 0x2dc);
  fVar11 = *(float *)(param_1 + 0x2e0);
  fVar12 = *(float *)(param_1 + 0x2e4);
  fVar13 = *(float *)(param_1 + 0x2e8);
  fVar14 = *(float *)(param_1 + 0x2ec);
  do {
    uVar2 = nn::os::GetSystemTick();
    uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
    uVar2 = uVar1 ^ uVar1 * 0x800;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
    fVar9 = (fVar8 + 0.0 + fVar10 + fVar11 + fVar12 + fVar13 + fVar14) *
            ((float)((uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1) >> 9 | 0x3f800000) + -1.0);
    if (fVar9 <= *(float *)(param_1 + 0x2d8)) {
      iVar5 = DAT_04cdba18;
    }
    else {
      fVar9 = fVar9 - *(float *)(param_1 + 0x2d8);
      if (fVar9 <= *(float *)(param_1 + 0x2dc)) {
        lVar3 = 1;
      }
      else {
        fVar9 = fVar9 - *(float *)(param_1 + 0x2dc);
        if (fVar9 <= *(float *)(param_1 + 0x2e0)) {
          lVar3 = 2;
        }
        else {
          fVar9 = fVar9 - *(float *)(param_1 + 0x2e0);
          if (fVar9 <= *(float *)(param_1 + 0x2e4)) {
            lVar3 = 3;
          }
          else {
            fVar9 = fVar9 - *(float *)(param_1 + 0x2e4);
            if (fVar9 <= *(float *)(param_1 + 0x2e8)) {
              lVar3 = 4;
            }
            else {
              if (*(float *)(param_1 + 0x2ec) < fVar9 - *(float *)(param_1 + 0x2e8)) {
                iVar5 = 0;
                goto LAB_00847b68;
              }
              lVar3 = 5;
            }
          }
        }
      }
      iVar5 = (&DAT_04cdba18)[lVar3];
    }
LAB_00847b68:
    if (iVar5 != *(int *)(param_1 + 0x274)) {
      if (iVar5 != 1) {
        return iVar5;
      }
      lVar6 = *(long *)(param_1 + 0x68);
      lVar3 = FUN_00834d74(0x88);
      pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x2f0) + 0xf0))(lVar3 + 0x2f0);
      fVar9 = *pfVar4 * (float)*(int *)(param_1 + 0x2c0);
      if (*(int *)(param_1 + 0x2b4) == 0) {
        if (*(float *)(param_1 + 0x278) + *(float *)(param_1 + 0x284) * -0.5 <=
            *(float *)(lVar6 + 0x278) - fVar9) goto LAB_00847a64;
      }
      else if ((*(int *)(param_1 + 0x2b4) == 4) &&
              (fVar9 + *(float *)(lVar6 + 0x278) <=
               *(float *)(param_1 + 0x278) + *(float *)(param_1 + 0x284) * 0.5)) {
LAB_00847a64:
        if (*(int *)(param_1 + 0x178) == 0) {
          return 1;
        }
      }
    }
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      return 0;
    }
  } while( true );
}

