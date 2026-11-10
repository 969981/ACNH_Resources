
bool FUN_00334414(char *param_1,undefined8 param_2,long *param_3,undefined4 param_4,long param_5)

{
  char *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*param_1 == '\0' || param_1[0x158] == '\0') {
    param_1[0x178] = '\0';
    param_1[0x179] = '\0';
    param_1[0x17a] = '\0';
    param_1[0x17b] = '\0';
    param_1[0x17c] = '\0';
    param_1[0x17d] = '\0';
    param_1[0x17e] = '\0';
    param_1[0x17f] = '\0';
    param_1[0x180] = '\0';
    param_1[0x181] = '\0';
    param_1[0x182] = '\0';
    param_1[0x183] = '\0';
    param_1[0x184] = '\0';
    param_1[0x185] = '\0';
    param_1[0x186] = '\0';
    param_1[0x187] = '\0';
    *(long *)(param_1 + 0x170) = param_5;
    local_50 = 0;
    uStack_48 = 0;
    FUN_0034fb50(&local_50);
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    local_68 = 0;
    local_50._4_4_ = param_4;
    FUN_0034fb74(&local_70);
    local_70 = CONCAT44(local_70._4_4_,0x22);
    uVar3 = FUN_00347a58(param_2,&local_50);
    *(undefined8 *)(param_1 + 0x168) = uVar3;
    uVar3 = FUN_003490a4(param_2,&local_70);
    lVar4 = FUN_003490ac(param_2,&local_70);
    uVar5 = (param_5 + lVar4) - 1U & -lVar4;
    *(ulong *)(param_1 + 0x178) = uVar5;
    local_68 = (**(code **)(*param_3 + 0x10))(param_3,uVar5,uVar3);
    bVar2 = local_68 != 0;
    *(long *)(param_1 + 0x180) = local_68;
    if (local_68 != 0) {
      local_60 = *(undefined8 *)(param_1 + 0x178);
      pcVar1 = param_1 + 0x48;
      local_70 = CONCAT44((int)local_60,(undefined4)local_70);
      FUN_003490c4(pcVar1,param_2,&local_70);
      FUN_003491ac(pcVar1,param_2,"NnVfx2GfxMemoryPool");
      local_50 = CONCAT44(local_50._4_4_,(int)*(undefined8 *)(param_1 + 0x170));
      FUN_00347b9c(param_1,param_2,&local_50,pcVar1,0,*(undefined8 *)(param_1 + 0x178));
      FUN_00347d50(param_1,param_2,"NnVfx2GfxBuffer");
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

