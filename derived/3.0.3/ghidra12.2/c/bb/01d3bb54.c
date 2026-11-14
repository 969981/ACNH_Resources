
int FUN_01d3bb54(long param_1,undefined8 *param_2,ulong *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined7 uStack_47f;
  undefined **local_478;
  char *pcStack_470;
  ulong local_468;
  ulong local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined **local_448;
  undefined8 *puStack_440;
  
  local_468 = *param_3;
  local_460 = param_3[1];
  local_458 = param_3[2];
  pcStack_470 = *(char **)(param_1 + 8);
  uVar6 = *param_2;
  local_478 = &PTR_LAB_048f9770;
  uStack_450 = CONCAT71(uStack_47f,(char)param_3[3]);
  if (*pcStack_470 == '\0') {
    local_448 = &PTR_LAB_048f9770;
    puStack_440 = &DAT_0407ebb1;
    local_458._4_4_ = (int)(local_458 >> 0x20);
    iVar3 = local_458._4_4_;
    lVar7 = (long)local_458._4_4_;
    iVar5 = (int)local_458 - local_458._4_4_;
    iVar4 = FUN_01d3aee0(local_460 + lVar7,iVar5,&local_448,local_468 & 0xffffffff,0);
    iVar5 = 0;
    if (-1 < iVar4) {
      iVar5 = iVar3;
    }
    iVar3 = iVar5 + iVar4;
    iVar2 = iVar3;
    uVar1 = local_458;
    if (iVar3 < 0 != SCARRY4(iVar5,iVar4)) {
      iVar2 = -1;
    }
  }
  else {
    iVar3 = FUN_01d39660(&local_468,&local_478);
    iVar2 = iVar3;
    uVar1 = local_458;
  }
  local_458._4_4_ = iVar2;
  if (iVar3 < 0) {
    iVar5 = -1;
  }
  else {
    local_458._0_4_ = (int)uVar1;
    FUN_006e9454(&local_448,&DAT_040e1d15,uVar6);
    iVar3 = FUN_01d3aee0(local_460 + (long)local_458._4_4_,(int)local_458 - local_458._4_4_,
                         &local_448,0,0);
    iVar5 = 0;
    if (-1 < iVar3) {
      iVar5 = local_458._4_4_;
    }
    iVar5 = iVar5 + iVar3;
  }
  return iVar5;
}

