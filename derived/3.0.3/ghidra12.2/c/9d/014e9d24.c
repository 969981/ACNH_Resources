
void FUN_014e9d24(undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_40;
  float fStack_3c;
  float local_38;
  int local_34;
  
  local_40 = (float)FUN_014e8b30();
  iVar1 = *(int *)(param_5 + 0x18);
  if (iVar1 - 2U < 4) {
    fStack_3c = param_2;
    local_38 = param_3;
    local_34 = iVar1;
    if (DAT_05aed670 == 0) {
      puVar3 = &DAT_055c04a0;
    }
    else {
      puVar3 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
        puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar3 = &DAT_055c04a0;
        }
      }
    }
    local_40 = (float)FUN_0153e900(&local_40,iVar1,*(undefined4 *)(puVar3 + 7));
  }
  else {
    param_2 = 0.0;
  }
  param_2 = param_2 - *(float *)(param_5 + 0xc);
  local_40 = local_40 - *(float *)(param_5 + 8);
  fVar4 = *(float *)(param_5 + 0x10);
  *(float *)(param_4 + 0x6c) = param_2;
  param_3 = param_3 - fVar4;
  *(float *)(param_4 + 0x68) = local_40;
  *(float *)(param_4 + 0x70) = param_3;
  fVar4 = *(float *)(param_5 + 8);
  fVar6 = *(float *)(param_5 + 0xc);
  fVar5 = *(float *)(param_5 + 0x10);
  *(undefined4 *)(param_4 + 0x54) = *(undefined4 *)(param_4 + 0x34);
  *(undefined4 *)(param_4 + 0x58) = *(undefined4 *)(param_4 + 0x38);
  *(float *)(param_4 + 0x4c) = param_2 + fVar6;
  *(float *)(param_4 + 0x48) = local_40 + fVar4;
  *(float *)(param_4 + 0x50) = param_3 + fVar5;
  return;
}

