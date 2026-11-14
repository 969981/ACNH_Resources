
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0184d5f0(undefined4 param_1,long *param_2,undefined1 *param_3,long param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 *local_88;
  int local_80;
  int local_7c;
  undefined *local_78;
  undefined8 *puStack_70;
  int local_68;
  int iStack_64;
  undefined8 *local_60;
  int local_58;
  int local_54;
  
  local_78 = PTR_DAT_04bbc1a0;
  *param_3 = 1;
  local_78 = local_78 + 0x10;
  puStack_70 = &DAT_048f9750;
  local_60 = &DAT_048f9750;
  fVar7 = (float)*(int *)(param_4 + 0xc) * 10.0;
  fVar6 = (float)*(int *)(param_4 + 8) * 10.0;
  fVar9 = fVar6 + 2.5;
  fVar8 = fVar7 + 2.5;
  fVar6 = fVar6 + 10.0 + -2.5;
  fVar7 = fVar7 + 10.0 + -2.5;
  local_58 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  local_54 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  iVar2 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  local_68 = local_58;
  if (iVar2 <= local_58) {
    local_68 = iVar2;
  }
  if (local_58 <= iVar2) {
    local_58 = iVar2;
  }
  iVar2 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  iStack_64 = local_54;
  if (iVar2 <= local_54) {
    iStack_64 = iVar2;
  }
  if (local_54 <= iVar2) {
    local_54 = iVar2;
  }
  lVar5 = *param_5;
  if ((((local_68 < *(int *)(lVar5 + 0x20)) || (*(int *)(lVar5 + 0x30) < local_58)) ||
      (iStack_64 < *(int *)(lVar5 + 0x24))) ||
     (((*(int *)(lVar5 + 0x34) < local_54 || (uVar4 = FUN_02b672b0(param_4), (uVar4 & 1) != 0)) ||
      (uVar4 = FUN_01a19b90(param_1,&puStack_70), iVar2 = local_68, (uVar4 & 1) != 0)))) {
    uVar3 = 0;
  }
  else {
    local_88 = &DAT_048f9750;
    iVar1 = local_54 + 1;
    local_80 = local_68;
    local_7c = iStack_64;
    if (iVar1 == iStack_64) {
      uVar3 = 1;
    }
    else {
      do {
        uVar3 = (**(code **)(*param_2 + 0x2a8))(param_1,param_2,param_3,&local_88,param_5);
        if ((uVar3 & 1) == 0) break;
        if (local_80 < local_58) {
          local_80 = local_80 + 1;
        }
        else {
          local_7c = local_7c + 1;
          local_80 = local_68;
        }
      } while (iVar2 != local_80 || iVar1 != local_7c);
    }
  }
  return uVar3 & 1;
}

