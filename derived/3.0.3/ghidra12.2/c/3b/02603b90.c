
undefined8 FUN_02603b90(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  int local_3c;
  uint local_38;
  int local_34;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*param_2 == 0xffffffff) {
    return 0;
  }
  uVar1 = *param_2 & 0xf0;
  if (uVar1 == 0x20) {
    lVar3 = nn::prepo::Struct::GetBuffer();
    if (lVar3 == 0) goto LAB_02603cd4;
    pcVar4 = "Kind";
  }
  else if (uVar1 == 0x10) {
    lVar3 = nn::prepo::Struct::GetBuffer();
    if (lVar3 != 0) {
      nn::prepo::Struct::Add((char *)(param_1 + 8),0x407c03e);
    }
    local_38 = *param_2 >> 8 & 0xff;
    if ((*param_2 & 0xf0) != 0x10) {
      local_38 = 8;
    }
    lVar3 = nn::prepo::Struct::GetBuffer();
    if (lVar3 == 0) goto LAB_02603cd4;
    pcVar4 = "FacilityRoomId";
  }
  else {
    if (uVar1 != 0) goto LAB_02603cd4;
    lVar3 = nn::prepo::Struct::GetBuffer();
    if (lVar3 != 0) {
      nn::prepo::Struct::Add((char *)(param_1 + 8),0x407c03e);
    }
    uVar1 = *param_2 >> 8 & 0xff;
    if ((*param_2 & 0xf0) != 0) {
      uVar1 = 0xffffffff;
    }
    iVar2 = FUN_00831bb0(uVar1);
    local_34 = 0;
    if (iVar2 != -1) {
      local_34 = iVar2;
    }
    FUN_00831a94(&local_34);
    lVar3 = nn::prepo::Struct::GetBuffer();
    if (lVar3 == 0) goto LAB_02603cd4;
    pcVar4 = "NpcRoomId";
  }
  nn::prepo::Struct::Add((char *)(param_1 + 8),(long)pcVar4);
LAB_02603cd4:
  iVar2 = FUN_00831e00(*param_2 & 0xf);
  local_3c = 0;
  if (iVar2 != -1) {
    local_3c = iVar2;
  }
  FUN_00831cf0(&local_3c);
  lVar3 = nn::prepo::Struct::GetBuffer();
  if (lVar3 != 0) {
    nn::prepo::Struct::Add((char *)(param_1 + 8),0x4078482);
  }
  return 1;
}

