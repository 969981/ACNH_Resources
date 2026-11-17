
void FUN_02b27974(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int local_38 [2];
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    local_38[1] = 3;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      iVar4 = FUN_02b1e180(param_1,param_1 + 0x20);
      if (iVar4 == 2) {
        uVar6 = 9;
        goto LAB_02b27ad0;
      }
      if (iVar4 == 1) {
        uVar6 = 5;
        goto LAB_02b27ad0;
      }
    }
  }
  lVar1 = param_1 + 0x20;
  iVar4 = FUN_02b1d200(param_1,lVar1,1);
  if (iVar4 == 4) {
    uVar6 = 3;
  }
  else if (iVar4 == 0) {
    local_38[0] = 0;
    uVar5 = FUN_02b1dc50(param_1,local_38,lVar1,0);
    if ((uVar5 & 1) == 0) {
      iVar4 = FUN_02b1e490(param_1,lVar1,param_3);
      if (iVar4 == 2) {
        uVar6 = 0xb;
      }
      else {
        if (iVar4 != 1) {
          return;
        }
        uVar6 = 10;
      }
    }
    else {
      if (5 < local_38[0] - 1U) {
        return;
      }
      uVar6 = *(uint *)(&DAT_0417fac4 + (long)(int)(local_38[0] - 1U) * 4);
    }
  }
  else if (iVar4 - 1U < 5) {
    uVar6 = *(uint *)(&DAT_0417fab0 + (long)(int)(iVar4 - 1U) * 4);
  }
  else {
    uVar6 = 0x16;
  }
LAB_02b27ad0:
  if ((*(int *)(param_2 + 8) == 0) && (uVar6 < 0x18)) {
    *(int *)(param_2 + 8) = 1 << (ulong)(uVar6 & 0x1f);
  }
  return;
}

