
int FUN_008658d0(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = *(float *)(param_1 + 0x2b8);
  iVar5 = 10;
  fVar8 = *(float *)(param_1 + 700);
  fVar9 = *(float *)(param_1 + 0x2c0);
  fVar10 = *(float *)(param_1 + 0x2c4);
  fVar11 = *(float *)(param_1 + 0x2c8);
  do {
    uVar2 = nn::os::GetSystemTick();
    uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
    uVar2 = uVar1 ^ uVar1 * 0x800;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
    fVar7 = (fVar6 + 0.0 + fVar8 + fVar9 + fVar10 + fVar11) *
            ((float)((uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1) >> 9 | 0x3f800000) + -1.0);
    if (fVar7 <= *(float *)(param_1 + 0x2b8)) {
      iVar3 = DAT_04ce4e28;
    }
    else {
      fVar7 = fVar7 - *(float *)(param_1 + 0x2b8);
      if (fVar7 <= *(float *)(param_1 + 700)) {
        lVar4 = 1;
      }
      else {
        fVar7 = fVar7 - *(float *)(param_1 + 700);
        if (fVar7 <= *(float *)(param_1 + 0x2c0)) {
          lVar4 = 2;
        }
        else {
          fVar7 = fVar7 - *(float *)(param_1 + 0x2c0);
          if (fVar7 <= *(float *)(param_1 + 0x2c4)) {
            lVar4 = 3;
          }
          else {
            if (*(float *)(param_1 + 0x2c8) < fVar7 - *(float *)(param_1 + 0x2c4)) {
              iVar3 = 0;
              goto LAB_00865a24;
            }
            lVar4 = 4;
          }
        }
      }
      iVar3 = (&DAT_04ce4e28)[lVar4];
    }
LAB_00865a24:
    if (iVar3 != *(int *)(param_1 + 0x274)) {
      return iVar3;
    }
    if (iVar3 == 0) {
      return 0;
    }
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      return 0;
    }
  } while( true );
}

