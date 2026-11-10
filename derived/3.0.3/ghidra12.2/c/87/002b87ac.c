
void FUN_002b87ac(int *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong local_60;
  int local_54;
  int local_50;
  ErrorResultVariant aEStack_4c [8];
  undefined4 local_44;
  undefined8 local_40;
  
  if (*(long *)(param_2 + 0x48) == 0 && *(long *)(param_2 + 0x50) != 0) {
    local_40 = 0;
    FUN_002282f0(&local_40);
    local_50 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)(aEStack_4c + 0x18));
    FUN_002296c4(param_1,&local_50);
    while( true ) {
      if (*(int *)(param_2 + 0x10) == 0) {
        return;
      }
      lVar1 = 0;
      if (*(long *)(param_2 + 8) != 0) {
        lVar1 = *(long *)(param_2 + 8) + 0x10;
      }
      if (local_40 <= *(ulong *)(lVar1 + 0x660)) break;
      (**(code **)(**(long **)(param_2 + 0x50) + 0x38))(&local_50,*(long **)(param_2 + 0x50),lVar1);
      FUN_00229780(param_1,&local_50);
      FUN_0022b830(lVar1);
      FUN_00223704(param_2,lVar1 + -0x10);
      FUN_002236e0(param_2 + 0x18,param_2 + 0x18,lVar1 + -0x10 + (long)*(int *)(param_2 + 0x2c));
      if (*param_1 != 0) {
        local_50 = 0x4c0d;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)(aEStack_4c + 0x18));
        if (*param_1 == local_50) {
          local_50 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)(aEStack_4c + 0x18));
          FUN_00229780(param_1,&local_50);
        }
        return;
      }
    }
    return;
  }
  if ((*(long *)(param_2 + 0x48) == 0) || (*(long *)(param_2 + 0x50) != 0)) {
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c + 0x2c,(Result *)(aEStack_4c + 0x38))
    ;
    FUN_002296c4(param_1,aEStack_4c + 0x28);
    return;
  }
  if (*(int *)(param_2 + 0x700) == 0) {
    local_54 = 0;
    local_60 = local_60 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)&local_50,(Result *)&local_60);
    FUN_002296c4(param_1,&local_54);
    return;
  }
  local_60 = 0;
  FUN_002282f0(&local_60);
  local_54 = 0;
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)&local_50,(Result *)&local_44);
  FUN_002296c4(param_1,&local_54);
  if (*(int *)(param_2 + 0x28) != 0) {
    do {
      (**(code **)(**(long **)(param_2 + 0x48) + 0x10))
                (&local_54,*(long **)(param_2 + 0x48),param_2 + 0x88);
      FUN_00229780(param_1,&local_54);
      if (*param_1 != 0) {
        local_44 = 0;
        local_54 = 0x2c09;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)&local_50,(Result *)&local_44);
        if (*param_1 == local_54) {
          local_54 = 0;
          local_44 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)&local_50,(Result *)&local_44);
          FUN_00229780(param_1,&local_54);
          return;
        }
        return;
      }
      iVar2 = FUN_002b8690(param_2,param_2 + 0x6c0);
      plVar3 = (long *)FUN_00228380();
      *(ulong *)(param_2 + 0x6e8) = local_60 + *plVar3 * (long)iVar2;
      if (*(int *)(param_2 + 0x28) == 0) {
        return;
      }
      lVar4 = FUN_002237a8(param_2 + 0x18);
      lVar1 = 0;
      if (lVar4 != 0) {
        lVar1 = lVar4 - *(int *)(param_2 + 0x2c);
      }
      lVar4 = lVar1 + 0x10;
      FUN_0022b6dc(lVar4);
      *(undefined8 *)(lVar1 + 0x670) = 0;
      FUN_0022b7ac(lVar4);
      FUN_002236bc(param_2,param_2,lVar1);
      FUN_0022b96c(lVar4,param_2 + 0x88);
      *(undefined8 *)(lVar1 + 0x670) = *(undefined8 *)(param_2 + 0x6e8);
    } while (*(int *)(param_2 + 0x28) != 0);
  }
  return;
}

