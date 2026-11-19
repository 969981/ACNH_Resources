
void FUN_03871908(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_40 [16];
  
  iVar8 = *param_1;
  if (iVar8 == 0) {
    piVar1 = param_1 + 0x13b0;
    FUN_0024ddd0(piVar1);
    piVar2 = param_1 + 0x13be;
    uVar6 = FUN_00244444(piVar2);
    FUN_0024ddf8(piVar1,uVar6);
    uVar3 = FUN_0024445c(piVar2);
    FUN_0024de28(piVar1,uVar3);
    uVar3 = FUN_002446c8(piVar2);
    FUN_0024de68(piVar1,uVar3);
    uVar3 = FUN_002931d4(piVar2);
    FUN_0025fa20(piVar1,uVar3);
    FUN_0025fa48(piVar1,1);
    FUN_0025fa58(piVar1,1);
    FUN_002a3864(auStack_40,piVar1,0,0x18);
  }
  else if (iVar8 == 2) {
    piVar1 = param_1 + (long)param_2 * 0x9a + 0x17da;
    (**(code **)(*(long *)(param_1 + (long)param_2 * 0x9a + 0x17da) + 0x18))(piVar1);
    piVar2 = param_1 + 0x176a;
    uVar3 = FUN_002931b4(piVar2);
    FUN_00242a60(piVar1,uVar3);
    uVar3 = FUN_002931d4(piVar2);
    FUN_00242a78(piVar1,uVar3);
    FUN_00242aa8(piVar1,1);
    FUN_00242abc(piVar1,1);
    (**(code **)(*(long *)(param_1 + (long)param_2 * 0x9a + 0x17da) + 0x10))(auStack_40,piVar1,0,10)
    ;
    uVar3 = FUN_0022cf74(piVar2);
    FUN_00242ad0(piVar1,uVar3);
    uVar3 = FUN_0022cf9c(piVar2);
    FUN_00242ae4(piVar1,uVar3);
    uVar5 = FUN_0022d03c(piVar2,0);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_0022d020(piVar2,0);
      FUN_00242af8(auStack_40,piVar1,0,uVar3);
    }
    uVar5 = FUN_0022d03c(piVar2,1);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_0022d020(piVar2,1);
      FUN_00242af8(auStack_40,piVar1,1,uVar3);
    }
    uVar5 = FUN_0022d03c(piVar2,2);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_0022d020(piVar2,2);
      FUN_00242af8(auStack_40,piVar1,2,uVar3);
    }
    uVar5 = FUN_0022d03c(piVar2,3);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_0022d020(piVar2,3);
      FUN_00242af8(auStack_40,piVar1,3,uVar3);
    }
    uVar5 = FUN_0022d03c(piVar2,4);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_0022d020(piVar2,4);
      FUN_00242af8(auStack_40,piVar1,4,uVar3);
    }
    uVar5 = FUN_0022d03c(piVar2,5);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_0022d020(piVar2,5);
      FUN_00242af8(auStack_40,piVar1,5,uVar3);
    }
  }
  else {
    if (iVar8 != 1) goto LAB_03872080;
    piVar1 = param_1 + (long)param_2 * 0x34e + 0x198;
    (**(code **)(*(long *)(param_1 + (long)param_2 * 0x34e + 0x198) + 0x18))(piVar1);
    piVar2 = param_1 + 8;
    uVar3 = FUN_002931b4(piVar2);
    FUN_0030a9f4(piVar1,uVar3);
    uVar3 = FUN_002931d4(piVar2);
    FUN_0030aa10(piVar1,uVar3);
    FUN_0030aa44(piVar1,1);
    FUN_0030aa58(piVar1,1);
    (**(code **)(*(long *)(param_1 + (long)param_2 * 0x34e + 0x198) + 0x10))
              (auStack_40,piVar1,0,0x10);
    uVar3 = FUN_002bdae8(piVar2);
    FUN_0030aa6c(piVar1,uVar3);
    uVar3 = FUN_002bdb2c(piVar2);
    FUN_0030aa80(piVar1,uVar3);
    FUN_0030aa94(piVar1,0);
    uVar5 = FUN_002bdbf8(piVar2,0);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_002bdbdc(piVar2,0);
      FUN_0030aaa8(auStack_40,piVar1,0,uVar3);
    }
    uVar5 = FUN_002bdbf8(piVar2,1);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_002bdbdc(piVar2,1);
      FUN_0030aaa8(auStack_40,piVar1,1,uVar3);
    }
    uVar5 = FUN_002bdbf8(piVar2,2);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_002bdbdc(piVar2,2);
      FUN_0030aaa8(auStack_40,piVar1,2,uVar3);
    }
    uVar5 = FUN_002bdbf8(piVar2,3);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_002bdbdc(piVar2,3);
      FUN_0030aaa8(auStack_40,piVar1,3,uVar3);
    }
    uVar5 = FUN_002bdbf8(piVar2,4);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_002bdbdc(piVar2,4);
      FUN_0030aaa8(auStack_40,piVar1,4,uVar3);
    }
    uVar5 = FUN_002bdbf8(piVar2,5);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_002bdbdc(piVar2,5);
      FUN_0030aaa8(auStack_40,piVar1,5,uVar3);
    }
    uVar5 = FUN_002bdf60(piVar2);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_002bdf58(piVar2);
      FUN_0030ab5c(piVar1,uVar3);
    }
    uVar5 = FUN_002bdf88(piVar2);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_002bdf80(piVar2);
      FUN_0030ab70(piVar1,uVar3);
    }
    uVar5 = FUN_002bdf74(piVar2);
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_002bdf6c(piVar2);
      FUN_0030ab84(piVar1,uVar3);
    }
    uVar5 = FUN_002bdfb0(piVar2);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_002bdfa8(piVar2);
      FUN_0030abac(auStack_40,piVar1,uVar6);
    }
    uVar5 = FUN_002bdf9c(piVar2);
    if ((uVar5 & 1) != 0) {
      uVar4 = FUN_002bdf94(piVar2);
      FUN_0030ab98(piVar1,uVar4 & 1);
    }
    uVar5 = FUN_002be31c(piVar2,0);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_002be2f8(piVar2,0);
      uVar7 = FUN_002be310(piVar2,0);
      FUN_0030ad94(auStack_40,piVar1,0,uVar6,uVar7);
    }
    uVar5 = FUN_002be31c(piVar2,1);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_002be2f8(piVar2,1);
      uVar7 = FUN_002be310(piVar2,1);
      FUN_0030ad94(auStack_40,piVar1,1,uVar6,uVar7);
    }
    uVar5 = FUN_002be31c(piVar2,2);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_002be2f8(piVar2,2);
      uVar7 = FUN_002be310(piVar2,2);
      FUN_0030ad94(auStack_40,piVar1,2,uVar6,uVar7);
    }
    uVar5 = FUN_002be354(piVar2,0);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_002be334(piVar2,0);
      uVar7 = FUN_002be344(piVar2,0);
      FUN_0030ae8c(auStack_40,piVar1,0,uVar6,uVar7);
    }
    uVar5 = FUN_002bdfd0(piVar2);
    if ((uVar5 & 1) != 0) {
      iVar8 = *param_1;
      if (iVar8 == 1) {
        FUN_0030aa94(piVar1,2);
        iVar8 = *param_1;
      }
      if (iVar8 == 2) {
        FUN_0022d52c(auStack_40,param_1 + 0x1b4a,param_1 + 0x176a);
        FUN_0022d584(auStack_40,param_1 + 0x1b4a,param_1 + 0x17da,param_1[0x834]);
      }
      else if (iVar8 == 1) {
        FUN_002cbc30(auStack_40,param_1 + 0x918,piVar2);
        FUN_002cbc90(auStack_40,param_1 + 0x918,param_1 + 0x198,param_1[0x834]);
      }
      iVar8 = *param_1;
      if (iVar8 == 1) {
        FUN_0030ab48(piVar1,0);
        iVar8 = *param_1;
      }
      if (iVar8 == 2) {
        FUN_0022d52c(auStack_40,param_1 + 0x1b4a,param_1 + 0x176a);
        FUN_0022d584(auStack_40,param_1 + 0x1b4a,param_1 + 0x17da,param_1[0x834]);
      }
      else if (iVar8 == 1) {
        FUN_002cbc30(auStack_40,param_1 + 0x918,piVar2);
        FUN_002cbc90(auStack_40,param_1 + 0x918,param_1 + 0x198,param_1[0x834]);
      }
    }
    uVar5 = FUN_002bdbd0(piVar2);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_002bdf20(piVar2);
      FUN_0030aca4(auStack_40,piVar1,uVar6);
    }
  }
  iVar8 = *param_1;
LAB_03872080:
  if (iVar8 == 2) {
    FUN_0022d52c(auStack_40,param_1 + 0x1b4a,param_1 + 0x176a);
    FUN_0022d584(auStack_40,param_1 + 0x1b4a,param_1 + 0x17da,param_1[0x834]);
  }
  else if (iVar8 == 1) {
    FUN_002cbc30(auStack_40,param_1 + 0x918,param_1 + 8);
    FUN_002cbc90(auStack_40,param_1 + 0x918,param_1 + 0x198,param_1[0x834]);
  }
  return;
}

