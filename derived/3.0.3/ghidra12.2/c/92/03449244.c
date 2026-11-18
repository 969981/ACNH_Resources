
void FUN_03449244(undefined ***param_1,float *param_2)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined **local_98;
  undefined **local_90;
  undefined8 uStack_88;
  undefined **local_80;
  uint local_74;
  undefined *local_70;
  undefined4 local_68;
  
  puVar1 = PTR_DAT_04bd3ef0;
  local_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_80 = (undefined **)0x0;
  local_98 = (undefined **)(PTR_DAT_04bd3ee0 + 0x10);
  if (((*PTR_DAT_04bd3ef8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd3ef8), iVar6 != 0))
  {
    FUN_03c7fd94(puVar1);
    puVar5 = PTR_LAB_04bd3ed0;
    *(undefined **)(puVar1 + 0x650) = PTR_LAB_04bd3ec8;
    *(undefined **)(puVar1 + 0x658) = puVar5;
    *(undefined **)(puVar1 + 0x660) = PTR_LAB_04bd3ed8;
    __cxa_guard_release(PTR_DAT_04bd3ef8);
  }
  if (local_80 != (undefined **)0x0) {
    (*(code *)local_80[1])(local_90);
  }
  local_80 = (undefined **)puVar1;
  local_98 = (undefined **)(PTR_DAT_04bd3ee8 + 0x10);
  local_90 = (undefined **)0x0;
  if ((param_1 == (undefined ***)0x0) || (param_1[1] == (undefined **)0x0)) {
    ppuVar7 = (undefined **)PTR_DAT_04bd3ef0;
  }
  else {
    fVar9 = *param_2;
    fVar11 = param_2[1];
    fVar10 = 255.0;
    if (fVar9 <= 1.0) {
      fVar10 = fVar9 * 255.0;
    }
    fVar13 = 0.0;
    if (0.0 <= fVar9) {
      fVar13 = fVar10;
    }
    fVar10 = 255.0;
    if (fVar11 <= 1.0) {
      fVar10 = fVar11 * 255.0;
    }
    fVar12 = param_2[2];
    fVar14 = param_2[3];
    local_68 = 0x32;
    fVar9 = 0.0;
    if (0.0 <= fVar11) {
      fVar9 = fVar10;
    }
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    fVar10 = 255.0;
    if (fVar12 <= 1.0) {
      fVar10 = fVar12 * 255.0;
    }
    fVar11 = 0.0;
    if (0.0 <= fVar12) {
      fVar11 = fVar10;
    }
    fVar10 = 255.0;
    if (fVar14 <= 1.0) {
      fVar10 = fVar14 * 255.0;
    }
    fVar12 = 0.0;
    if (0.0 <= fVar14) {
      fVar12 = fVar10;
    }
    local_74 = (int)fVar13 << 0x18 | (int)fVar9 << 0x10 | (int)fVar11 << 8 | (int)fVar12;
    local_70 = puVar1;
    (*(code *)(*param_1)[3])(param_1,&local_70);
    pppuVar8 = param_1 + 1;
    (*(code *)param_1[3][0x67])(*pppuVar8,0,0,&local_74);
    fVar9 = *param_2;
    fVar11 = param_2[1];
    local_70 = puVar1;
    local_68 = 0x32;
    fVar10 = 255.0;
    if (fVar9 <= 1.0) {
      fVar10 = fVar9 * 255.0;
    }
    fVar13 = 0.0;
    if (0.0 <= fVar9) {
      fVar13 = fVar10;
    }
    fVar10 = 255.0;
    if (fVar11 <= 1.0) {
      fVar10 = fVar11 * 255.0;
    }
    fVar12 = param_2[2];
    fVar14 = param_2[3];
    fVar9 = 0.0;
    if (0.0 <= fVar11) {
      fVar9 = fVar10;
    }
    fVar10 = 255.0;
    if (fVar12 <= 1.0) {
      fVar10 = fVar12 * 255.0;
    }
    fVar11 = 0.0;
    if (0.0 <= fVar12) {
      fVar11 = fVar10;
    }
    fVar10 = 255.0;
    if (fVar14 <= 1.0) {
      fVar10 = fVar14 * 255.0;
    }
    fVar12 = 0.0;
    if (0.0 <= fVar14) {
      fVar12 = fVar10;
    }
    pppuVar2 = &local_98;
    if (*pppuVar8 != (undefined **)0x0) {
      pppuVar2 = param_1;
    }
    local_74 = (int)fVar13 << 0x18 | (int)fVar9 << 0x10 | (int)fVar11 << 8 | (int)fVar12;
    pppuVar3 = &local_90;
    pppuVar4 = &local_80;
    if (*pppuVar8 != (undefined **)0x0) {
      pppuVar3 = pppuVar8;
      pppuVar4 = param_1 + 3;
    }
    (*(code *)(*pppuVar2)[3])(pppuVar2,&local_70);
    (*(code *)(*pppuVar4)[0x67])(*pppuVar3,1,0,&local_74);
    ppuVar7 = local_80;
    if (local_80 == (undefined **)0x0) {
      return;
    }
  }
  local_98 = &PTR_LAB_04b2ac68;
  (*(code *)ppuVar7[1])(local_90);
  return;
}

