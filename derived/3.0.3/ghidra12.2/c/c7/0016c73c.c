
long FUN_0016c73c(long param_1,uint param_2,uint param_3,uint *param_4,int param_5,
                 undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint local_70 [4];
  
  lVar1 = param_1 + 0x890;
  lVar5 = FUN_001726f0();
  if (lVar5 == 0) {
    lVar7 = FUN_001689e8(lVar1,0xe8);
    if (lVar7 == 0) {
      return 0;
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x90);
    lVar6 = *(long *)(lVar5 + 0x98);
    plVar2 = (long *)(param_1 + 0x8d0);
    if (lVar7 != 0) {
      plVar2 = (long *)(lVar7 + 0x98);
    }
    *plVar2 = lVar6;
    plVar2 = (long *)(param_1 + 0x8d8);
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0x90);
    }
    *plVar2 = lVar7;
    *(undefined8 *)(lVar5 + 0x90) = 0;
    *(undefined8 *)(lVar5 + 0x98) = 0;
    *(long *)(param_1 + 0x910) = *(long *)(param_1 + 0x910) + -1;
    iVar4 = FUN_00172d9c(lVar5);
    lVar7 = lVar5;
    if (iVar4 != 0) {
      return 0;
    }
  }
  local_70[2] = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  if (*param_4 == 0) {
    lVar6 = 0;
LAB_0016c89c:
    param_3 = param_5 == 4 | param_3;
    if (lVar5 == 0) {
      FUN_001727a4(lVar7,param_2,param_3,param_5,param_4[1],*(undefined4 *)(param_1 + 0x970),
                   *(undefined4 *)(param_1 + 0x98c),param_6,lVar1);
      iVar4 = FUN_001725a8(param_1,lVar7);
      if (iVar4 != 0) {
        FUN_0017289c(lVar7);
LAB_0016c940:
        FUN_001689f8(lVar1,lVar7);
        goto LAB_0016c9e8;
      }
    }
    else {
      *(char *)(lVar7 + 0xe4) = (char)param_3;
      *(int *)(lVar7 + 0xdc) = param_5;
      uVar3 = param_4[1];
      *(undefined8 *)(lVar7 + 0xa0) = param_6;
      *(uint *)(lVar7 + 0xd0) = uVar3;
    }
    if (param_5 == 5) {
      if (*(long *)(param_1 + 0x8d8) == 0) {
        *(long *)(param_1 + 0x8d0) = lVar7;
      }
      else {
        *(long *)(*(long *)(param_1 + 0x8d8) + 0x98) = lVar7;
        *(undefined8 *)(lVar7 + 0x90) = *(undefined8 *)(param_1 + 0x8d8);
      }
      *(long *)(param_1 + 0x8d8) = lVar7;
      *(long *)(param_1 + 0x910) = *(long *)(param_1 + 0x910) + 1;
    }
    else if (param_5 == 4) {
      if ((param_2 == 0) || (((param_2 ^ *(char *)(param_1 + 0x9aa) == '\0') & 1) != 0)) {
        FUN_001728a4(lVar7,2);
        *(long *)(param_1 + 0x8f8) = *(long *)(param_1 + 0x8f8) + 1;
      }
      else {
        FUN_001728a4(lVar7,1);
      }
    }
    else if ((param_2 == 0) || (((param_2 ^ *(char *)(param_1 + 0x9aa) == '\0') & 1) != 0)) {
      *(long *)(param_1 + 0x8f0) = *(long *)(param_1 + 0x8f0) + 1;
    }
    else {
      *(long *)(param_1 + 0x8e8) = *(long *)(param_1 + 0x8e8) + 1;
    }
    lVar1 = param_1 + 0x20;
    if (*param_4 != 0) {
      lVar1 = lVar6;
    }
    if ((char)param_4[2] == '\0') {
      FUN_00172d70(lVar1,lVar7);
      goto LAB_0016c9fc;
    }
    iVar4 = FUN_00172be8(lVar1,lVar7);
    if (iVar4 == 0) goto LAB_0016c9fc;
  }
  else {
    lVar6 = FUN_001726f0(param_1);
    if (lVar6 != 0) {
      iVar4 = FUN_00173148(lVar6);
      if (iVar4 == 0) goto LAB_0016c890;
      goto LAB_0016c89c;
    }
    uVar3 = *param_4;
    if (uVar3 == 0) {
LAB_0016c890:
      param_4 = local_70;
      FUN_00167498(local_70);
      goto LAB_0016c89c;
    }
    if ((uVar3 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
      iVar4 = *(int *)(param_1 + 0x934);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x938);
    }
    if ((int)uVar3 <= iVar4) goto LAB_0016c890;
    FUN_00167498(local_70);
    lVar6 = FUN_0016c73c(param_1,*param_4,0,local_70,5,0);
    if (lVar6 != 0) goto LAB_0016c89c;
    if (lVar5 == 0) goto LAB_0016c940;
  }
LAB_0016c9e8:
  lVar7 = 0;
LAB_0016c9fc:
  return lVar7;
}

