
undefined8 * FUN_03984844(long *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if (DAT_05ae92e0 != (undefined8 *)0x0) {
    return DAT_05ae92e0;
  }
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar7 = malloc(0x1a0);
  }
  else {
    plVar6 = param_1;
    if (param_1 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        puVar7 = (undefined8 *)0x0;
        goto LAB_039848cc;
      }
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x1a0,8);
  }
LAB_039848cc:
  FUN_038c69f0(puVar7 + 0x30,param_1,3);
  DAT_05ae92d8 = puVar7 + 0x30;
  puVar7[0x30] = &PTR_FUN_04b68a70;
  *(undefined4 *)(puVar7 + 2) = 0;
  *puVar7 = &PTR_FUN_04b68a90;
  puVar7[1] = 0;
  puVar7[3] = 0;
  FUN_038e18e4(puVar7 + 4);
  pcVar1 = (char *)((long)puVar7 + 0x7c);
  *(undefined4 *)(puVar7 + 0xc) = 0;
  puVar7[0xe] = pcVar1;
  *(undefined4 *)(puVar7 + 0xf) = 0x100;
  *(undefined1 *)((long)puVar7 + 0x17b) = 0;
  uVar4 = s__AGL_ROOT__tools_bat_perforce_sa_0406f061._16_8_;
  if (pcVar1 != "%AGL_ROOT%/tools/bat/perforce_save.bat") {
    uVar2 = CONCAT26(s__AGL_ROOT__tools_bat_perforce_sa_0406f061._30_2_,
                     s__AGL_ROOT__tools_bat_perforce_sa_0406f061._24_6_);
    *(undefined1 *)((long)puVar7 + 0xa2) = 0;
    uVar3 = CONCAT62(s__AGL_ROOT__tools_bat_perforce_sa_0406f061._32_6_,
                     s__AGL_ROOT__tools_bat_perforce_sa_0406f061._30_2_);
    *(undefined8 *)((long)puVar7 + 0x8c) = uVar4;
    *(undefined8 *)((long)puVar7 + 0x94) = uVar2;
    uVar2 = s__AGL_ROOT__tools_bat_perforce_sa_0406f061._8_8_;
    uVar4 = s__AGL_ROOT__tools_bat_perforce_sa_0406f061._0_8_;
    *(undefined8 *)((long)puVar7 + 0x9a) = uVar3;
    *(undefined8 *)pcVar1 = uVar4;
    *(undefined8 *)((long)puVar7 + 0x84) = uVar2;
  }
  DAT_05ae92e0 = puVar7;
  puVar7[0xd] = &PTR_LAB_048f9a70;
  return puVar7;
}

