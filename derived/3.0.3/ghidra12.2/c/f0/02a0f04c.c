
undefined8 FUN_02a0f04c(long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined **local_2e0;
  char *pcStack_2d8;
  undefined *local_2d0;
  undefined4 local_2c8;
  undefined **local_2c0;
  char *pcStack_2b8;
  undefined4 local_2b0;
  undefined1 local_2ac;
  undefined4 local_2ab;
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined8 local_294;
  undefined4 local_28c;
  long lStack_288;
  undefined4 uStack_280;
  undefined8 local_27c;
  undefined8 local_274;
  undefined4 local_26c;
  undefined **local_268;
  char *pcStack_260;
  undefined **local_258;
  char *pcStack_250;
  
  local_258 = &PTR_LAB_048f9770;
  pcStack_250 = "BGMMgr_Res";
  uVar2 = FUN_038c9744(0,&local_258,*param_2,8,1,0);
  local_2d0 = PTR_DAT_04bdf0b0;
  local_2b0 = 0x1010100;
  local_2c8 = 1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  local_2ac = 0;
  local_2d0 = local_2d0 + 0x10;
  uStack_280 = 0;
  local_2ab = 0x1010001;
  local_28c = 0;
  local_2a4 = 0;
  local_29c = 0;
  local_294 = 0;
  local_27c = 0;
  local_274 = 0;
  local_26c = 0;
  lStack_288 = *(long *)PTR_DAT_04bb28b0 + 0x448;
  local_268 = &PTR_LAB_048f9770;
  pcStack_260 = "Sound/Bgm/BgmStatic.byml";
  local_2e0 = &PTR_LAB_048f9770;
  pcStack_2d8 = "Sound/Bgm/BgmStatic.byml";
  local_2c0 = &PTR_LAB_048f9770;
  pcStack_2b8 = "BGMMgr";
  bVar1 = *(byte *)(param_1 + 0x19eb8);
  if ((bVar1 >> 1 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x19ebc) = 0;
    *(byte *)(param_1 + 0x19eb8) = bVar1 & 0xf0 | 2;
    FUN_03f33f70(*(undefined8 *)PTR_DAT_04bb49b8,param_1 + 0x19eb0,&local_2e0,&local_2d0);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x19ec0);
    if (lVar4 == 0) {
      puVar3 = &DAT_0406a300;
    }
    else {
      (**(code **)(*(long *)(lVar4 + 0x360) + 0x18))(lVar4 + 0x360);
      puVar3 = *(undefined **)(lVar4 + 0x368);
    }
    FUN_0156b428(&local_258,&DAT_0406f6e3,puVar3,"Sound/Bgm/BgmStatic.byml");
    *(undefined4 *)(param_1 + 0x19ebc) = 8;
  }
  *(undefined4 *)(param_1 + 0x1a03c) = 0;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return 1;
}

