
void FUN_014eaae8(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  undefined8 local_38;
  
  local_70 = *(undefined8 *)(param_3 + 8);
  local_68 = *(undefined8 *)(param_3 + 0x10);
  local_78 = PTR_DAT_04bbbc20 + 0x10;
  local_60 = *(undefined4 *)(param_3 + 0x18);
  if (*(char *)(param_1 + 0x74) != '\0') {
    local_48 = 0;
    local_38 = 0;
    FUN_014edb38(param_1,auStack_58,param_1 + 0x20);
    fVar7 = -2.5;
    if ((((int)local_38 - (int)local_48) + 1U & 1) != 0) {
      fVar7 = 0.0;
    }
    fVar6 = -2.5;
    if (((local_38._4_4_ - local_48._4_4_) + 1U & 1) != 0) {
      fVar6 = 0.0;
    }
    fVar8 = fVar7 + *(float *)(param_1 + 0x28);
    fVar9 = fVar6 + *(float *)(param_1 + 0x30);
    fVar7 = *(float *)(param_3 + 8) + fVar7;
    iVar3 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    fVar6 = *(float *)(param_3 + 0x10) + fVar6;
    iVar4 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    iVar5 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
    uVar1 = iVar5 - iVar3 & 1;
    uVar2 = -uVar1;
    if (iVar3 <= iVar5) {
      uVar2 = uVar1;
    }
    fVar7 = -1.0;
    if (iVar5 - iVar3 == 0 || iVar5 < iVar3) {
      fVar7 = 1.0;
    }
    iVar3 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
    uVar1 = iVar3 - iVar4 & 1;
    fVar6 = -1.0;
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) {
      fVar6 = 1.0;
    }
    local_70 = CONCAT44(*(undefined4 *)(param_3 + 0xc),
                        *(float *)(param_3 + 8) + (float)(int)uVar2 * 5.0 * fVar7);
    uVar2 = -uVar1;
    if (iVar4 <= iVar3) {
      uVar2 = uVar1;
    }
    local_68 = CONCAT44(local_68._4_4_,
                        *(float *)(param_3 + 0x10) + (float)(int)((float)(int)uVar2 * 5.0) * fVar6);
  }
  FUN_014edb38(param_1,param_2,&local_78);
  return;
}

