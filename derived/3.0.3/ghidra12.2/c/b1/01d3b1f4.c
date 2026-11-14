
int FUN_01d3b1f4(long param_1,char *param_2,ulong *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  undefined7 uStack_87;
  undefined **local_80;
  char *pcStack_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined **local_50;
  char *pcStack_48;
  
  local_70 = *param_3;
  uVar7 = param_3[1];
  local_60 = param_3[2];
  pcStack_78 = *(char **)(param_1 + 8);
  cVar2 = *param_2;
  local_80 = &PTR_LAB_048f9770;
  uStack_58 = CONCAT71(uStack_87,(char)param_3[3]);
  local_68 = uVar7;
  if (*pcStack_78 == '\0') {
    iVar8 = (int)local_60;
    local_60._4_4_ = (uint)(local_60 >> 0x20);
    iVar3 = local_60._4_4_;
    lVar9 = (long)(int)local_60._4_4_;
    local_50 = &PTR_LAB_048f9770;
    pcStack_48 = "";
    iVar6 = (int)local_60 - local_60._4_4_;
    iVar5 = FUN_01d3aee0(uVar7 + lVar9,iVar6,&local_50,local_70 & 0xffffffff,0);
    iVar6 = 0;
    if (-1 < iVar5) {
      iVar6 = iVar3;
    }
    uVar1 = iVar6 + iVar5;
    uVar4 = uVar1;
    if ((int)uVar1 < 0 != SCARRY4(iVar6,iVar5)) {
      uVar4 = 0xffffffff;
    }
    if ((int)uVar1 < 0) {
      return -1;
    }
  }
  else {
    uVar4 = FUN_01d39660(&local_70,&local_80);
    if ((int)uVar4 < 0) {
      return -1;
    }
    uVar7 = local_68;
    iVar8 = (int)local_60;
  }
  pcStack_48 = "false";
  if (cVar2 != '\0') {
    pcStack_48 = "true";
  }
  local_50 = &PTR_LAB_048f9770;
  local_60._4_4_ = uVar4;
  iVar6 = FUN_01d3aee0(uVar7 + uVar4,iVar8 - uVar4,&local_50,0,0);
  uVar1 = 0;
  if (-1 < iVar6) {
    uVar1 = local_60._4_4_;
  }
  return uVar1 + iVar6;
}

