
bool FUN_016e11a0(float *param_1,uint param_2,ulong param_3)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  short local_48 [2];
  undefined1 local_44;
  
  fVar6 = (float)FUN_016e026c(0,param_1,0,0);
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar3 + 0x338));
      iVar2 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    local_48[0] = 0;
    puVar4 = DAT_055c1b60;
    do {
      if (*(int *)(puVar4 + -1) == *(int *)(puVar5 + 7)) {
        if (local_48[0] != -1) goto LAB_016e1298;
        break;
      }
      puVar4 = (undefined8 *)puVar4[1];
      local_48[0] = local_48[0] + 1;
    } while (puVar4 != &DAT_055c1b58);
  }
  local_48[0] = 0;
LAB_016e1298:
  local_48[1] = 0;
  local_44 = 1;
  fVar7 = (float)FUN_016e06d0(param_1,0,param_2 & 1,local_48,0);
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar1 >> 0x19 & 1) != 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b)) &&
       ((param_3 & 1) != 0)) {
      fVar8 = *param_1;
      fVar9 = 650.0 - param_1[2];
      fVar9 = fVar9 * fVar9;
      if (((SQRT(fVar9 + (395.0 - fVar8) * (395.0 - fVar8)) < 12.5) ||
          (SQRT(fVar9 + (385.0 - fVar8) * (385.0 - fVar8)) < 12.5)) ||
         ((SQRT(fVar9 + (405.0 - fVar8) * (405.0 - fVar8)) < 12.5 ||
          (fVar9 = 665.0 - param_1[2],
          SQRT(fVar9 * fVar9 + (430.0 - fVar8) * (430.0 - fVar8)) < 10.0)))) {
        return true;
      }
    }
  }
  fVar6 = fVar6 - fVar7;
  fVar7 = -fVar6;
  if (0.0 <= fVar6) {
    fVar7 = fVar6;
  }
  return 0.1 < fVar7;
}

