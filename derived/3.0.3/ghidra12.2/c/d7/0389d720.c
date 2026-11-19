
undefined8 FUN_0389d720(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint local_60;
  ErrorResultVariant aEStack_5c [12];
  undefined4 local_34;
  
  if (*param_1 == '\0') {
    return 1;
  }
  iVar4 = nn::err::ErrorResultVariant::GetState();
  if (iVar4 != 0) {
    return 1;
  }
  puVar8 = (uint *)(param_1 + 4);
  uVar2 = *puVar8;
  uVar6 = (ulong)(uVar2 >> 0xd) & 0x1f;
  if ((int)uVar6 - 1U < 2) {
    return 1;
  }
  lVar7 = uVar6 - 3;
  if ((uint)lVar7 < 6) {
    uVar9 = *(undefined4 *)(&DAT_04199454 + lVar7 * 4);
  }
  else {
    uVar9 = 2;
  }
  local_70 = 0;
  local_60 = 0x6c3d;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_70);
  if (*puVar8 != local_60) {
    local_34 = 0;
    local_70 = 0x6c4c;
    uVar5 = 0x13;
    if ((uVar2 & 0x1c00) != 0xc00) {
      uVar5 = 0;
    }
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)&uStack_6c,(Result *)&local_34);
    if (*puVar8 != local_70) goto LAB_0389d824;
  }
  uVar5 = 0x11;
LAB_0389d824:
  local_70 = 0;
  local_60 = 0x8c56;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_70);
  local_70 = 0;
  bVar3 = *(uint *)(param_1 + 4) != local_60;
  local_60 = 0x6c51;
  uVar1 = 9;
  if (bVar3) {
    uVar1 = uVar5;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_70);
  uVar5 = 0x12;
  if (*(uint *)(param_1 + 4) != local_60) {
    uVar5 = uVar1;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&local_70);
  FUN_0022983c(&local_60,puVar8,&local_70);
  *param_2 = uVar9;
  param_2[5] = uVar5;
  param_2[6] = 0;
  *(ulong *)(param_2 + 1) = CONCAT44(uStack_6c,local_70);
  param_2[3] = local_68;
  param_2[4] = 10;
  *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_6c,local_70);
  *(undefined4 *)(param_1 + 0x20) = local_68;
  return 0;
}

