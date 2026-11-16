
void FUN_028d3234(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *local_40;
  undefined8 local_38;
  
  uVar1 = nn::time::GetDayOfWeek
                    ((int)(short)param_2[2],(int)*(char *)((long)param_2 + 0x12),
                     (int)*(char *)((long)param_2 + 0x13));
  if (((char)param_2[5] == '\0') && (*param_2 == 0)) {
    return;
  }
  if (((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
     (*(int *)(DAT_0537d558 + 0x80) != 1)) {
    uVar2 = (ulong)uVar1;
    if (6 < uVar1) {
      uVar2 = 0;
    }
    uVar3 = *(uint *)(param_1 + uVar2 * 4);
    if (0xb < uVar3) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar3);
  switch(uVar3) {
  case 1:
  case 0xb:
    uVar2 = FUN_0168c840(param_3,param_1 + 0x1c);
    break;
  case 2:
  case 5:
  case 8:
  case 9:
    lVar4 = *(long *)PTR_DAT_04bb5c90;
    fVar5 = *(float *)(lVar4 + 0x40);
    *(float *)(param_1 + 0x1c) = fVar5;
    fVar6 = *(float *)(lVar4 + 0x44);
    *(float *)(param_1 + 0x20) = fVar6;
    fVar7 = *(float *)(lVar4 + 0x48);
    *(float *)(param_1 + 0x1c) = fVar5 + 15.0;
    *(float *)(param_1 + 0x20) = fVar6 + 0.0;
    *(float *)(param_1 + 0x24) = fVar7 + 20.0;
    goto LAB_028d33c0;
  case 3:
  case 7:
    uVar2 = FUN_0168ca40(param_3,param_1 + 0x1c,0);
    break;
  default:
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    goto LAB_028d33c0;
  case 6:
    local_40 = PTR_DAT_04bb2010 + 0x10;
    local_38 = 0;
    uVar2 = FUN_0168ae50(&local_40);
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(float *)(param_1 + 0x1c) = (float)(int)local_38 * 5.0 + 5.0;
      *(float *)(param_1 + 0x24) = (float)local_38._4_4_ * 5.0 + 5.0;
      goto LAB_028d33c0;
    }
    goto LAB_028d33b0;
  }
  if ((uVar2 & 1) == 0) {
LAB_028d33b0:
    uVar2 = (ulong)uVar1;
    if (6 < uVar1) {
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + uVar2 * 4) = 0;
  }
LAB_028d33c0:
  uVar2 = FUN_0168ca40(param_3,param_1 + 0x28,0);
  lVar4 = DAT_050d57c8;
  if ((uVar2 & 1) == 0) {
    fVar5 = *(float *)(DAT_050d57c8 + 0x40);
    *(float *)(param_1 + 0x28) = fVar5;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar4 + 0x44);
    fVar6 = *(float *)(lVar4 + 0x48);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(float *)(param_1 + 0x28) = fVar5 + 45.0;
    *(float *)(param_1 + 0x30) = fVar6 + 20.0;
  }
  return;
}

