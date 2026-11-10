
void FUN_0025c53c(int *param_1,long param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  piVar4 = &local_60;
  if (param_3 == 0) {
    local_50 = 0x10c07;
LAB_0025c690:
    local_60 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
  }
  else {
    if (*(long *)(param_2 + 0x400) == 0) {
LAB_0025c688:
      local_50 = 0x10c08;
      goto LAB_0025c690;
    }
    lVar1 = param_2 + 0x2c8;
    uVar3 = FUN_0021fea0(lVar1);
    if ((uVar3 & 1) == 0) {
LAB_0025c59c:
      uVar3 = FUN_0021fea0(lVar1);
      if ((uVar3 & 1) == 0) {
LAB_0025c5c8:
        FUN_002296c4(param_1,param_2 + 0x172c);
        if (*param_1 == 0) {
          local_60 = 0;
          local_50 = 0xc406;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
          FUN_00229780(param_1,&local_50);
          return;
        }
        return;
      }
      uVar3 = FUN_0021fea0(param_2 + 0x2a8);
      if (((uVar3 & 1) == 0) || (uVar3 = FUN_002200e4(param_2 + 0x2a8,lVar1), (uVar3 & 1) != 0))
      goto LAB_0025c5c8;
    }
    else {
      uVar3 = FUN_0021fea0(param_2 + 0x2a8);
      if (((uVar3 & 1) == 0) || (uVar3 = FUN_002200e4(param_2 + 0x2a8,lVar1), (uVar3 & 1) == 0))
      goto LAB_0025c59c;
    }
    uVar3 = FUN_0021fea0(lVar1);
    if ((uVar3 & 1) == 0) goto LAB_0025c688;
    uVar3 = FUN_0021fea0(param_2 + 0x2a8);
    if (((uVar3 & 1) == 0) || (uVar3 = FUN_002200e4(param_2 + 0x2a8,lVar1), (uVar3 & 1) == 0))
    goto LAB_0025c688;
    uVar3 = FUN_002212e4(*(undefined8 *)(param_2 + 0x400));
    if ((uVar3 & 1) != 0) {
      local_50 = 0x4c11;
      goto LAB_0025c690;
    }
    iVar2 = FUN_002212bc(*(undefined8 *)(param_2 + 0x400));
    if (iVar2 != 0) {
      (**(code **)(**(long **)(param_2 + 0x400) + 0x10))(*(long **)(param_2 + 0x400),1);
    }
    FUN_0025e468(&local_50,*(undefined8 *)(param_2 + 0x400),param_3,param_4);
    if (local_50 == 0) {
      FUN_002211bc(*(undefined8 *)(param_2 + 0x400),0);
      local_60 = 0;
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
      goto LAB_0025c6ac;
    }
  }
  piVar4 = &local_50;
LAB_0025c6ac:
  FUN_002296c4(param_1,piVar4);
  return;
}

