
void FUN_014eed1c(undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5,
                 int *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_d0 [4];
  undefined8 local_c0;
  undefined8 local_b0;
  undefined *puStack_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined4 local_94;
  int iStack_90;
  float local_88;
  float fStack_84;
  float local_80;
  undefined8 local_78;
  undefined8 local_68;
  
  if (param_5 != (float *)0x0) {
    uVar3 = *(undefined4 *)(param_4 + 0x34);
    iVar4 = *param_6;
    fVar8 = (float)FUN_014e8b30();
    local_d0[0] = iVar4;
    local_88 = fVar8;
    fStack_84 = param_2;
    local_80 = param_3;
    if (iVar4 - 2U < 4) {
      if (DAT_05aed670 == 0) {
        puVar7 = &DAT_055c04a0;
      }
      else {
        puVar7 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar7 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar6 = FUN_006bd550(*puVar7,0);
          puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar6 != 0x758f7eaf) {
            puVar7 = &DAT_055c04a0;
          }
        }
      }
      fVar8 = (float)FUN_0153e900(&local_88,iVar4,*(undefined4 *)(puVar7 + 7));
    }
    else {
      param_2 = 0.0;
    }
    local_c0 = 0;
    puStack_a8 = PTR_DAT_04bbbc20 + 0x10;
    local_b0 = 0;
    local_a0 = fVar8;
    local_98 = param_3;
    local_94 = uVar3;
    iStack_90 = iVar4;
    if (*(char *)(param_4 + 0x74) != '\0') {
      local_78 = 0;
      local_68 = 0;
      fStack_9c = param_2;
      FUN_014edb38(param_4,&local_88,param_4 + 0x20);
      fVar9 = -2.5;
      if ((((int)local_68 - (int)local_78) + 1U & 1) != 0) {
        fVar9 = 0.0;
      }
      fVar11 = -2.5;
      if (((local_68._4_4_ - local_78._4_4_) + 1U & 1) != 0) {
        fVar11 = 0.0;
      }
      fVar12 = *(float *)(param_4 + 0x30) + fVar11;
      fVar10 = *(float *)(param_4 + 0x28) + fVar9;
      iVar4 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
      iVar6 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
      iVar5 = (int)((float)(int)(fVar8 + fVar9) / 5.0) - (uint)(fVar8 + fVar9 < 0.0);
      uVar1 = iVar5 - iVar4 & 1;
      uVar2 = -uVar1;
      if (iVar4 <= iVar5) {
        uVar2 = uVar1;
      }
      fVar9 = -1.0;
      if (iVar5 - iVar4 == 0 || iVar5 < iVar4) {
        fVar9 = 1.0;
      }
      local_a0 = fVar8 + (float)(int)uVar2 * 5.0 * fVar9;
      iVar4 = (int)((float)(int)(param_3 + fVar11) / 5.0) - (uint)(param_3 + fVar11 < 0.0);
      uVar1 = iVar4 - iVar6 & 1;
      fVar9 = -1.0;
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) {
        fVar9 = 1.0;
      }
      uVar2 = -uVar1;
      if (iVar6 <= iVar4) {
        uVar2 = uVar1;
      }
      local_98 = param_3 + (float)(int)((float)(int)uVar2 * 5.0) * fVar9;
    }
    fStack_9c = param_2;
    FUN_014edb38(param_4,local_d0,&puStack_a8);
    param_5[1] = param_2;
    fVar9 = (float)(((int)local_b0 - (int)local_c0) + 1) * 5.0 * 0.5;
    fVar11 = (float)((local_b0._4_4_ - local_c0._4_4_) + 1) * 5.0 * 0.5;
    param_5[4] = param_2 + 0.0;
    param_5[3] = fVar8 + fVar9;
    *param_5 = fVar8 - fVar9;
    param_5[2] = param_3 - fVar11;
    param_5[5] = param_3 + fVar11;
  }
  return;
}

