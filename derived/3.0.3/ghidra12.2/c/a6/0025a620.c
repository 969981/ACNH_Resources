
void FUN_0025a620(int *param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  Result *pRVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [16];
  int local_60 [4];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  if (param_3 == 0) {
    local_50 = 0x10c07;
LAB_0025a674:
    pRVar4 = (Result *)local_60;
    local_60[0] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x4f0) == 1) {
LAB_0025a64c:
      local_50 = 0x10c08;
      goto LAB_0025a674;
    }
    if (*(int *)(param_2 + 0x47c) == 2) {
      if ((*(int *)(param_2 + 0x420) == 0) || (*(char *)(param_2 + 0x478) == '\0')) {
        uVar3 = FUN_002212e4(*(undefined8 *)(param_2 + 1000));
        if ((uVar3 & 1) == 0) {
          iVar1 = FUN_002212bc(*(undefined8 *)(param_2 + 1000));
          if (iVar1 != 0) {
            (**(code **)(**(long **)(param_2 + 1000) + 0x10))(*(long **)(param_2 + 1000),1);
          }
          FUN_0025d7f4(param_1,*(undefined8 *)(param_2 + 1000),param_3);
          if (*param_1 != 0) {
            return;
          }
          uVar6 = *(undefined8 *)(param_2 + 1000);
          goto LAB_0025a91c;
        }
        if ((*(char *)(param_2 + 0x478) != '\0') &&
           (uVar3 = FUN_002212e4(*(undefined8 *)(param_2 + 0x3f0)), (uVar3 & 1) == 0)) {
          iVar1 = FUN_002212bc(*(undefined8 *)(param_2 + 0x3f0));
          if (iVar1 != 0) {
            (**(code **)(**(long **)(param_2 + 0x3f0) + 0x10))(*(long **)(param_2 + 0x3f0),1);
          }
          FUN_00250c64(param_1,*(undefined8 *)(param_2 + 0x3f0),param_3,1);
          if (*param_1 != 0) {
            return;
          }
          uVar6 = *(undefined8 *)(param_2 + 0x3f0);
          goto LAB_0025a91c;
        }
        goto LAB_0025a64c;
      }
    }
    else if (*(int *)(param_2 + 0x47c) == 1) {
      if (*(int *)(param_2 + 0x420) == 0) {
        uVar3 = FUN_002212e4(*(undefined8 *)(param_2 + 0x3d0));
        if ((uVar3 & 1) != 0) goto LAB_0025a64c;
        iVar1 = FUN_002212bc(*(undefined8 *)(param_2 + 0x3d0));
        if (iVar1 != 0) {
          (**(code **)(**(long **)(param_2 + 0x3d0) + 0x10))(*(long **)(param_2 + 0x3d0),1);
        }
        uVar6 = *(undefined8 *)(param_2 + 0x3d0);
        uVar3 = FUN_0021fea0(param_2 + 0x2c8);
        if ((uVar3 & 1) == 0) {
LAB_0025a8f8:
          uVar2 = 0;
        }
        else {
          uVar3 = FUN_0021fea0(param_2 + 0x2a8);
          if ((uVar3 & 1) == 0) goto LAB_0025a8f8;
          uVar2 = FUN_002200e4(param_2 + 0x2a8,param_2 + 0x2c8);
        }
        FUN_0025cb50(param_1,uVar6,param_3,uVar2 & 1);
        if (*param_1 != 0) {
          return;
        }
        uVar6 = *(undefined8 *)(param_2 + 0x3d0);
LAB_0025a91c:
        FUN_002211bc(uVar6,0);
        return;
      }
      if (*(char *)(param_2 + 0x478) == '\0') goto LAB_0025a64c;
    }
    else if ((*(int *)(param_2 + 0x420) == 0) || (*(char *)(param_2 + 0x478) == '\0')) {
      FUN_00220f24(param_3);
      FUN_00220f78(param_3);
      local_50 = 0;
      local_60[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)local_60);
      FUN_002296c4(auStack_70,&local_50);
      FUN_00220f8c(param_3,auStack_70);
      local_50 = 0;
      goto LAB_0025a674;
    }
    FUN_002210f0(*(undefined8 *)(param_2 + 0x428));
    local_50 = 0;
    local_34 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
    FUN_002296c4(local_60,&local_50);
    uVar3 = FUN_002212e4(*(undefined8 *)(param_2 + 0x3f0));
    if ((uVar3 & 1) == 0) {
      iVar1 = FUN_002212bc(*(undefined8 *)(param_2 + 0x3f0));
      if (iVar1 != 0) {
        (**(code **)(**(long **)(param_2 + 0x3f0) + 0x10))(*(long **)(param_2 + 0x3f0),1);
      }
      FUN_00250c64(&local_50,*(undefined8 *)(param_2 + 0x3f0),param_3,0);
      FUN_00229780(local_60,&local_50);
      if (local_60[0] == 0) {
        FUN_002211bc(*(undefined8 *)(param_2 + 0x3f0),0);
      }
      piVar5 = local_60;
      goto LAB_0025a680;
    }
    local_34 = 0;
    local_50 = 0x10c08;
    pRVar4 = (Result *)&local_34;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,pRVar4);
  piVar5 = &local_50;
LAB_0025a680:
  FUN_002296c4(param_1,piVar5);
  return;
}

