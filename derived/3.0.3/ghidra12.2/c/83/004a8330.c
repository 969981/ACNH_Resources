
long FUN_004a8330(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  int local_170 [16];
  undefined1 auStack_130 [208];
  
  FUN_004545f0(param_1 + 0x100);
  FUN_004ac220(param_1 + 0x70);
  uVar1 = *(uint *)(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (uVar1 == (*(uint *)(param_1 + 0x1ac) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1 + 0x1a0,0x10);
    uVar1 = *(uint *)(param_1 + 0x1a8);
  }
  *(uint *)(param_1 + 0x1a8) = uVar1 + 1;
  FUN_0049d1f0(auStack_130,param_2);
  do {
    uVar1 = FUN_0049d960(auStack_130);
    if ((uVar1 | 1) == 7) goto LAB_004a856c;
  } while (1 < uVar1 - 1);
  auVar6 = FUN_0049dac0();
  uVar3 = FUN_0043a700(auVar6._0_8_,auVar6._8_8_ - auVar6._0_8_,"hktagfile");
  if ((uVar3 & 1) == 0) {
LAB_004a856c:
    if (1 < DAT_04c71448) {
      FUN_00444bc0(local_170,&DAT_04c713f8,2);
      lVar5 = FUN_004446b0(local_170,"File does not begin with a \'tagfile\' element",&DAT_0413df78)
      ;
      *(char **)(lVar5 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Xml/hkXmlReadFormat.cpp"
      ;
      *(undefined8 *)(lVar5 + 0x30) = 0xf1;
      FUN_00444c00(local_170);
    }
LAB_004a85c0:
    lVar5 = 0;
  }
  else {
    uVar4 = FUN_0049dbd0(auStack_130,"version",local_170);
    lVar5 = 0;
    if ((local_170[0] == 3) && (-1 < (int)uVar4)) {
      iVar2 = FUN_004a8280(uVar4,auStack_130,"hktagfile");
      while (-1 < iVar2) {
        auVar6 = FUN_0049dac0(auStack_130);
        uVar3 = FUN_0043a700(auVar6._0_8_,auVar6._8_8_ - auVar6._0_8_,&DAT_040dd778);
        if ((uVar3 & 1) == 0) {
          auVar6 = FUN_0049dac0(auStack_130);
          uVar3 = FUN_0043a700(auVar6._0_8_,auVar6._8_8_ - auVar6._0_8_,"object");
          if ((uVar3 & 1) != 0) {
            FUN_004a9420(param_1);
            uVar3 = FUN_004a9710(param_1,auStack_130,0);
            iVar2 = (int)uVar3;
            goto joined_r0x004a84b8;
          }
          auVar6 = FUN_0049dac0(auStack_130);
          uVar3 = FUN_0043a700(auVar6._0_8_,auVar6._8_8_ - auVar6._0_8_,"import");
          if ((uVar3 & 1) == 0) {
            auVar6 = FUN_0049dac0(auStack_130);
            uVar3 = FUN_0043a700(auVar6._0_8_,auVar6._8_8_ - auVar6._0_8_,"export");
            if ((uVar3 & 1) == 0) {
              auVar6 = FUN_0049dac0(auStack_130);
              uVar3 = FUN_0043a700(auVar6._0_8_,auVar6._8_8_ - auVar6._0_8_,&DAT_0408adeb);
              if ((uVar3 & 1) != 0) {
                FUN_004a9420(param_1);
                uVar3 = FUN_004a9710(param_1,auStack_130,1);
                iVar2 = (int)uVar3;
                goto joined_r0x004a84b8;
              }
              goto LAB_004a85c0;
            }
            do {
              uVar3 = FUN_004a8280(uVar3,auStack_130,"export");
            } while (-1 < (int)uVar3);
          }
          else {
            do {
              uVar3 = FUN_004a8280(uVar3,auStack_130,"import");
            } while (-1 < (int)uVar3);
          }
        }
        else {
          uVar3 = FUN_004a8620(param_1,auStack_130);
          iVar2 = (int)uVar3;
joined_r0x004a84b8:
          if (iVar2 < 0) goto LAB_004a85c0;
        }
        iVar2 = FUN_004a8280(uVar3,auStack_130,"hktagfile");
      }
      FUN_004a9d60(param_1);
      lVar5 = param_1 + 0x70;
    }
  }
  FUN_0049d260(auStack_130);
  return lVar5;
}

