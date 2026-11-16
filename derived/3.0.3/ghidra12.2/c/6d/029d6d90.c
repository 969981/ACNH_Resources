
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029d6d90(long param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  undefined *local_390;
  char *pcStack_388;
  undefined **local_380;
  undefined4 local_378;
  undefined *local_370;
  char *pcStack_368;
  undefined4 local_360;
  undefined1 local_35c;
  undefined4 local_35b;
  undefined8 local_354;
  undefined8 local_34c;
  undefined8 local_344;
  undefined4 local_33c;
  undefined4 uStack_338;
  undefined4 local_334;
  undefined4 uStack_330;
  undefined8 local_32c;
  undefined8 local_324;
  undefined4 local_31c;
  undefined *local_318;
  undefined1 *puStack_310;
  undefined *local_308;
  undefined *puStack_300;
  char *local_2f8;
  uint local_2f0;
  int local_2ec;
  char local_2e8 [7];
  char cStack_2e1;
  char acStack_2e0 [7];
  char local_2d9;
  undefined5 uStack_2d8;
  char acStack_2d3 [2];
  char acStack_2d1 [6];
  char local_2cb;
  char cStack_2ca;
  undefined8 local_2c9;
  undefined1 local_2c1;
  char *local_268;
  undefined8 local_260;
  char local_258 [520];
  int local_34;
  
  puVar2 = PTR_DAT_04bb2020;
  iVar3 = *param_2;
  local_2d9 = '\0';
  local_2f0 = 0xf;
  local_2ec = 0x80;
  local_2e8 = (char  [7])s_Sound_Resource__040d5fac._0_7_;
  cStack_2e1 = s_Sound_Resource__040d5fac[7];
  acStack_2e0 = (char  [7])s_Sound_Resource__040d5fac._8_7_;
  pcVar10 = local_2e8;
  local_2f8 = local_2e8;
  if (iVar3 < 0x191) {
    uVar6 = iVar3 - 200;
    if (uVar6 < 0xc) {
      local_2c9 = local_2c9 & 0xffffffffffffff00;
      local_2d9 = s_BGM_DJ_Emission__040b1d67[0];
      uStack_2d8 = s_BGM_DJ_Emission__040b1d67._1_5_;
      acStack_2d3 = s_BGM_DJ_Emission__040b1d67._6_2_;
      acStack_2d1 = s_BGM_DJ_Emission__040b1d67._8_6_;
      local_2cb = s_BGM_DJ_Emission__040b1d67[0xe];
      cStack_2ca = s_BGM_DJ_Emission__040b1d67[0xf];
      uVar7 = 0x1f;
      local_2f0 = 0x1f;
      local_2ec = 0x80;
      if (uVar6 < 0xc) {
        lVar9 = 0;
        do {
          lVar4 = lVar9;
          lVar9 = lVar4 + 1;
        } while ((&PTR_DAT_04a98708)[(int)uVar6][lVar4] != '\0');
        uVar5 = (uint)lVar4;
        if (0 < (int)uVar5) {
          if (0x5f < (int)uVar5) {
            uVar5 = 0x60;
          }
          memcpy(&local_2c9,(&PTR_DAT_04a98708)[(int)uVar6],(ulong)uVar5);
          uVar7 = (ulong)uVar5 + 0x1f;
          local_2e8[uVar7] = '\0';
          goto LAB_029d7004;
        }
        uVar7 = 0x1f;
      }
    }
    else {
      uVar6 = iVar3 - 300;
      if (0xb < uVar6) {
LAB_029d7164:
        local_258[0] = '\0';
        local_268 = local_258;
        local_260 = 0x8000000000;
        local_308 = PTR_DAT_04bb2020 + 0x10;
        puStack_300 = &DAT_040ead18;
        local_34 = 0;
        if (iVar3 != 99999 && -1 < iVar3) {
          local_34 = iVar3;
        }
        FUN_02a21700(&local_268,&local_308,2,&local_34);
        uVar5 = local_2f0;
        pcVar10 = local_2f8;
        uVar6 = (uint)local_260;
        if ((uint)local_260 == 0xffffffff) {
          uVar6 = 0xffffffff;
          pcVar8 = local_268;
          do {
            cVar1 = *pcVar8;
            uVar6 = uVar6 + 1;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
        }
        if (local_2ec <= (int)(local_2f0 + uVar6)) {
          uVar6 = local_2ec + ~local_2f0;
        }
        if ((int)uVar6 < 1) {
          uVar7 = (ulong)local_2f0;
          iVar3 = local_2ec;
        }
        else {
          memcpy(local_2f8 + (int)local_2f0,local_268,(ulong)uVar6);
          local_2f0 = uVar6 + uVar5;
          uVar7 = (ulong)local_2f0;
          pcVar10[(int)local_2f0] = '\0';
          pcVar10 = local_2f8;
          iVar3 = local_2ec;
        }
        goto LAB_029d700c;
      }
      local_2cb = '\0';
      local_2d9 = (char)_DAT_040b6ec9;
      uStack_2d8 = (undefined5)((uint6)_DAT_040b6ec9 >> 8);
      acStack_2d3 = (char  [2])s__Melody__040b6ecf._0_2_;
      acStack_2d1 = (char  [6])s__Melody__040b6ecf._2_6_;
      uVar7 = 0x1d;
      local_2f0 = 0x1d;
      local_2ec = 0x80;
      if (uVar6 < 0xc) {
        lVar9 = 0;
        do {
          lVar4 = lVar9;
          lVar9 = lVar4 + 1;
        } while ((&PTR_DAT_04a98708)[(int)uVar6][lVar4] != '\0');
        uVar5 = (uint)lVar4;
        if (0 < (int)uVar5) {
          if (0x61 < (int)uVar5) {
            uVar5 = 0x62;
          }
          memcpy(&local_2cb,(&PTR_DAT_04a98708)[(int)uVar6],(ulong)uVar5);
          uVar7 = (ulong)uVar5 + 0x1d;
          goto LAB_029d6f14;
        }
        uVar7 = 0x1d;
      }
    }
  }
  else {
    uVar6 = iVar3 - 600;
    if (uVar6 < 0xc) {
      uVar7 = local_2c9 >> 0x10;
      local_2c9 = CONCAT62((uint6)uVar7 & 0xffffffffff00,0x5f6f);
      local_2d9 = s_BGM_DJ_Demo_Outro__04097ce7[0];
      uStack_2d8 = s_BGM_DJ_Demo_Outro__04097ce7._1_5_;
      acStack_2d3 = s_BGM_DJ_Demo_Outro__04097ce7._6_2_;
      acStack_2d1 = s_BGM_DJ_Demo_Outro__04097ce7._8_6_;
      local_2cb = s_BGM_DJ_Demo_Outro__04097ce7[0xe];
      cStack_2ca = s_BGM_DJ_Demo_Outro__04097ce7[0xf];
      uVar7 = 0x21;
      local_2f0 = 0x21;
      local_2ec = 0x80;
      if (uVar6 < 0xc) {
        lVar9 = 0;
        do {
          lVar4 = lVar9;
          lVar9 = lVar4 + 1;
        } while ((&PTR_DAT_04a98708)[(int)uVar6][lVar4] != '\0');
        uVar5 = (uint)lVar4;
        if (0 < (int)uVar5) {
          if (0x5d < (int)uVar5) {
            uVar5 = 0x5e;
          }
          memcpy((void *)((long)&local_2c9 + 2),(&PTR_DAT_04a98708)[(int)uVar6],(ulong)uVar5);
          uVar7 = (ulong)uVar5 + 0x21;
LAB_029d6f14:
          local_2e8[uVar7] = '\0';
          local_2f0 = (uint)uVar7;
          iVar3 = 0x80;
          goto LAB_029d700c;
        }
        uVar7 = 0x21;
      }
    }
    else {
      if (iVar3 == 0x191) {
        uVar7 = local_2c9 >> 8;
        local_2c9 = CONCAT71((uint7)uVar7 & 0xffffffffffff00,'t');
        local_2d9 = s_BGM_DJ_Demo_First_040e5c68[0];
        uStack_2d8 = s_BGM_DJ_Demo_First_040e5c68._1_5_;
        acStack_2d3 = s_BGM_DJ_Demo_First_040e5c68._6_2_;
        acStack_2d1 = s_BGM_DJ_Demo_First_040e5c68._8_6_;
        local_2cb = s_BGM_DJ_Demo_First_040e5c68[0xe];
        cStack_2ca = s_BGM_DJ_Demo_First_040e5c68[0xf];
        uVar7 = 0x20;
      }
      else {
        if (iVar3 != 0x1f5) goto LAB_029d7164;
        local_2c1 = 0;
        local_2d9 = s_BGM_DJ_Demo_Intro_Second_040f0679[0];
        uStack_2d8 = s_BGM_DJ_Demo_Intro_Second_040f0679._1_5_;
        acStack_2d3 = s_BGM_DJ_Demo_Intro_Second_040f0679._6_2_;
        acStack_2d1 = s_BGM_DJ_Demo_Intro_Second_040f0679._8_6_;
        local_2cb = s_BGM_DJ_Demo_Intro_Second_040f0679[0xe];
        cStack_2ca = s_BGM_DJ_Demo_Intro_Second_040f0679[0xf];
        local_2c9 = s_BGM_DJ_Demo_Intro_Second_040f0679._16_8_;
        uVar7 = 0x27;
      }
LAB_029d7004:
      local_2f0 = (uint)uVar7;
    }
  }
  iVar3 = 0x80;
LAB_029d700c:
  uVar5 = (uint)uVar7;
  uVar6 = 5;
  if (iVar3 <= (int)(uVar5 + 5)) {
    uVar6 = iVar3 + ~uVar5;
  }
  if (0 < (int)uVar6) {
    memcpy(pcVar10 + (int)uVar5,".bars",(ulong)uVar6);
    lVar9 = (long)(int)uVar5 + (long)(int)uVar6;
    pcVar10[lVar9] = '\0';
    local_2f0 = (uint)lVar9;
    pcVar10 = local_2f8;
  }
  local_390 = puVar2 + 0x10;
  local_378 = 1;
  local_360 = 0x1010100;
  local_35b = 0x1010001;
  local_35c = 0;
  local_33c = 0;
  uStack_330 = 0;
  local_354 = 0;
  local_34c = 0;
  local_344 = 0;
  local_32c = 0;
  local_324 = 0;
  local_31c = 0;
  local_380 = &PTR_LAB_04ba8a48;
  uStack_338 = (undefined4)param_3;
  local_334 = (undefined4)((ulong)param_3 >> 0x20);
  puStack_310 = &DAT_0419b684;
  pcStack_368 = "KKFesDynamicWaveLoader";
  pcStack_388 = pcVar10;
  local_370 = local_390;
  local_318 = local_390;
  if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf0 | 2;
    FUN_03f33f70(*(undefined8 *)PTR_DAT_04bb49b8,param_1,&local_390,&local_380);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 == 0) {
      puVar2 = &DAT_0406a300;
    }
    else {
      (**(code **)(*(long *)(lVar9 + 0x360) + 0x18))(lVar9 + 0x360);
      puVar2 = *(undefined **)(lVar9 + 0x368);
    }
    FUN_0156b428(&local_268,&DAT_0406f6e3,puVar2,pcVar10);
    *(undefined4 *)(param_1 + 0xc) = 8;
  }
  return;
}

