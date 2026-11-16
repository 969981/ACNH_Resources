
void FUN_0260cdfc(undefined4 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_05554798 == (undefined8 *)0x0) {
    if (((DAT_05554920 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_05554920), iVar2 != 0)) {
      DAT_055547a0 = PTR_DAT_04bb2020 + 0x10;
      DAT_055547a8 = "MegaphoneUseCount";
      DAT_055547b8 = "MegaphoneUseCount";
      DAT_055547c8 = "GetHighPriceTradeOrderBonusCount";
      DAT_055547d8 = "GetHighPriceTradeOrderBonusCount";
      DAT_055547e8 = "GetTotalTradeBonusCount";
      DAT_055547f8 = "GetTotalTradeBonusCount";
      DAT_05554808 = "GetTradeRemakeBonusCount";
      DAT_05554818 = "GetTradeRemakeBonusCount";
      DAT_05554828 = "FamicomPlayCount1";
      DAT_05554838 = "FamicomPlayCount1";
      DAT_05554848 = "FamicomPlayCount2";
      DAT_05554858 = "FamicomPlayCount2";
      DAT_05554868 = "FamicomPlayCount3";
      DAT_05554878 = "FamicomPlayCount3";
      DAT_05554888 = "FamicomPlayCount4";
      DAT_05554898 = "FamicomPlayCount4";
      DAT_055548a8 = "FamicomPlayCount5";
      DAT_055548b8 = "FamicomPlayCount5";
      DAT_055548c8 = "FamicomPlayCount6";
      DAT_055548d8 = "FamicomPlayCount6";
      DAT_055548e8 = "FamicomPlayCount7";
      DAT_055548f8 = "FamicomPlayCount7";
      DAT_05554908 = "ChangeStickUseCount";
      DAT_05554918 = "ChangeStickUseCount";
      DAT_055547b0 = DAT_055547a0;
      DAT_055547c0 = DAT_055547a0;
      DAT_055547d0 = DAT_055547a0;
      DAT_055547e0 = DAT_055547a0;
      DAT_055547f0 = DAT_055547a0;
      DAT_05554800 = DAT_055547a0;
      DAT_05554810 = DAT_055547a0;
      DAT_05554820 = DAT_055547a0;
      DAT_05554830 = DAT_055547a0;
      DAT_05554840 = DAT_055547a0;
      DAT_05554850 = DAT_055547a0;
      DAT_05554860 = DAT_055547a0;
      DAT_05554870 = DAT_055547a0;
      DAT_05554880 = DAT_055547a0;
      DAT_05554890 = DAT_055547a0;
      DAT_055548a0 = DAT_055547a0;
      DAT_055548b0 = DAT_055547a0;
      DAT_055548c0 = DAT_055547a0;
      DAT_055548d0 = DAT_055547a0;
      DAT_055548e0 = DAT_055547a0;
      DAT_055548f0 = DAT_055547a0;
      DAT_05554900 = DAT_055547a0;
      DAT_05554910 = DAT_055547a0;
      __cxa_guard_release(&DAT_05554920);
    }
    DAT_05554798 = &DAT_055547a0;
    uVar3 = 0xc;
    DAT_05554790 = '\x01';
  }
  else {
    uVar3 = 0xc;
    if (DAT_05554790 == '\0') {
      uVar3 = 0;
    }
  }
  puVar1 = DAT_05554798;
  *param_1 = uVar3;
  *(undefined8 **)(param_1 + 2) = puVar1;
  return;
}

