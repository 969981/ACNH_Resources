
int FUN_01d3b574(long param_1,char *param_2,ulong *param_3)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
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
  cVar1 = *param_2;
  local_478 = &PTR_LAB_048f9770;
  uStack_450 = CONCAT71(uStack_47f,(char)param_3[3]);
  if (*pcStack_470 == '\0') {
    local_448 = &PTR_LAB_048f9770;
    puStack_440 = &DAT_0407ebb1;
    local_458._4_4_ = (int)(local_458 >> 0x20);
    iVar4 = local_458._4_4_;
    lVar7 = (long)local_458._4_4_;
    iVar6 = (int)local_458 - local_458._4_4_;
    iVar5 = FUN_01d3aee0(local_460 + lVar7,iVar6,&local_448,local_468 & 0xffffffff,0);
    iVar6 = 0;
    if (-1 < iVar5) {
      iVar6 = iVar4;
    }
    iVar4 = iVar6 + iVar5;
    iVar3 = iVar4;
    uVar2 = local_458;
    if (iVar4 < 0 != SCARRY4(iVar6,iVar5)) {
      iVar3 = -1;
    }
  }
  else {
    iVar4 = FUN_01d39660(&local_468,&local_478);
    iVar3 = iVar4;
    uVar2 = local_458;
  }
  local_458._4_4_ = iVar3;
  if (iVar4 < 0) {
    iVar6 = -1;
  }
  else {
    local_458._0_4_ = (int)uVar2;
    FUN_006e9454(&local_448,&DAT_040e1d15,(long)cVar1);
    iVar4 = FUN_01d3aee0(local_460 + (long)local_458._4_4_,(int)local_458 - local_458._4_4_,
                         &local_448,0,0);
    iVar6 = 0;
    if (-1 < iVar4) {
      iVar6 = local_458._4_4_;
    }
    iVar6 = iVar6 + iVar4;
  }
  return iVar6;
}

