
uint FUN_02470d50(float param_1,float *param_2,byte *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_a0;
  float local_98;
  float local_94;
  byte local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined8 local_7c;
  undefined1 local_74 [4];
  float local_70;
  undefined4 local_6c;
  undefined1 local_68;
  short local_66;
  undefined2 local_64;
  undefined1 local_62;
  
  local_6c = 0;
  local_68 = 0;
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if (lVar5 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar1 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    local_66 = 0;
    puVar6 = DAT_055c1b60;
    do {
      if (*(int *)(puVar6 + -1) == *(int *)(puVar7 + 7)) {
        if (local_66 != -1) goto LAB_02470e54;
        break;
      }
      puVar6 = (undefined8 *)puVar6[1];
      local_66 = local_66 + 1;
    } while (puVar6 != &DAT_055c1b58);
  }
  local_66 = 0;
LAB_02470e54:
  local_64 = 0;
  local_62 = 1;
  local_74[0] = 1;
  local_70 = param_1;
  lVar5 = FUN_0251e98c(1);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar5 + 0x2a0) + 0xf0))(lVar5 + 0x2a0);
  fVar13 = *pfVar3;
  uVar4 = FUN_016ec400(fVar13,param_2,4);
  uVar2 = 0;
  if ((uVar4 & 1) == 0) {
    fVar8 = (float)FUN_016e8440(param_2,local_74);
    fVar9 = -fVar13;
    if (0.0 <= fVar13) {
      fVar9 = fVar13;
    }
    if (1.1920929e-07 <= fVar9) {
      lVar5 = 0;
      do {
        fVar10 = *(float *)((long)&DAT_04176bac + lVar5);
        fVar9 = *(float *)((long)&DAT_04176bb4 + lVar5);
        fVar12 = SQRT(fVar10 * fVar10 + 0.0 + fVar9 * fVar9);
        if (0.0 < fVar12) {
          fVar12 = 1.0 / fVar12;
          fVar10 = fVar10 * fVar12;
          fVar11 = fVar12 * 0.0;
          fVar9 = fVar9 * fVar12;
        }
        else {
          fVar11 = 0.0;
        }
        local_98 = fVar13 * fVar9 + param_2[2];
        local_a0 = CONCAT44(fVar13 * fVar11 + param_2[1],fVar13 * fVar10 + *param_2);
        fVar9 = (float)FUN_016e8440(&local_a0,local_74);
        lVar5 = lVar5 + 0xc;
        if (fVar9 <= fVar8) {
          fVar9 = fVar8;
        }
        fVar8 = fVar9;
      } while (lVar5 != 0x6c);
    }
    if (1.0 <= fVar8 - param_1) {
      uVar2 = 0;
    }
    else {
      local_98 = param_2[2];
      local_7c = 0x1000000000000;
      local_a0 = *(undefined8 *)param_2;
      lVar5 = FUN_0251e98c(1);
      pfVar3 = (float *)(**(code **)(*(long *)(lVar5 + 0x210) + 0xf0))(lVar5 + 0x210);
      local_90 = *param_3;
      local_8c = *param_4;
      local_88 = 0xbf8000000000001f;
      local_7e = 0;
      if (7 < local_90) {
        local_90 = 0xff;
      }
      local_94 = *pfVar3 * 0.98;
      local_80 = 0x101;
      uVar2 = FUN_0251fad0(&local_a0,0);
      uVar2 = uVar2 ^ 1;
    }
  }
  return uVar2 & 1;
}

