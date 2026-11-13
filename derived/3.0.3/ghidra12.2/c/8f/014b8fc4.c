
void FUN_014b8fc4(float *param_1,float *param_2)

{
  uint *puVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  
  lVar3 = DAT_05abff60;
  if (DAT_05abff60 != 0) {
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar1 >> 1 & 1) != 0) && ((*puVar1 >> 0x1a & 1) != 0)) {
        if (DAT_05aed670 == 0) {
          puVar5 = &DAT_055c04a0;
        }
        else {
          puVar5 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar5 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar4 = FUN_006bd550(*puVar5,0);
            puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar4 != 0x758f7eaf) {
              puVar5 = &DAT_055c04a0;
            }
          }
        }
        if (*(int *)(puVar5 + 7) == -0x17df00c3) {
          iVar4 = *(int *)(lVar3 + 0x2c);
          iVar9 = *(int *)(lVar3 + 0x38);
          iVar11 = *(int *)(lVar3 + 0x3c);
          *param_1 = (float)*(int *)(lVar3 + 0x28) * 5.0;
          param_1[2] = (float)iVar4 * 5.0;
          *param_2 = (float)iVar9 * 5.0 + 5.0;
          param_2[2] = (float)iVar11 * 5.0 + 5.0;
          return;
        }
      }
    }
    if (DAT_05292338 == 0) {
      fVar6 = 0.0;
      fVar7 = 0.0;
      fVar8 = 85.0;
      fVar10 = 85.0;
    }
    else {
      fVar7 = (float)*(int *)(DAT_05292338 + 0xd88) * 5.0;
      fVar6 = (float)*(int *)(DAT_05292338 + 0xd8c) * 5.0;
      fVar8 = (float)*(int *)(DAT_05292338 + 0xd98) * 5.0 + 5.0;
      fVar10 = (float)*(int *)(DAT_05292338 + 0xd9c) * 5.0 + 5.0;
    }
    *param_1 = fVar7;
    param_1[1] = 0.0;
    param_1[2] = fVar6;
    *param_2 = fVar8;
    param_2[1] = 0.0;
    param_2[2] = fVar10;
  }
  return;
}

