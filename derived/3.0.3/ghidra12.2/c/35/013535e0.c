
void FUN_013535e0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined *local_878;
  char *pcStack_870;
  byte local_855;
  uint local_1c8;
  undefined *local_1c0 [8];
  void *local_180;
  undefined6 uStack_178;
  undefined2 local_172;
  undefined6 uStack_170;
  undefined *local_168;
  char *local_160;
  undefined8 local_158;
  char *local_150;
  undefined *local_148;
  undefined8 *local_140;
  undefined4 local_138;
  undefined1 local_55;
  
  if (*param_2 != 0) {
    lVar8 = 1;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_870 = "FieldPresetParamsWherearenRoomInitHeap";
    local_878 = puVar1;
    plVar4 = (long *)FUN_038c6d48(&LAB_00500000,&local_878,*param_2,8,1,0);
    puVar2 = PTR_DAT_04bb3350;
    if (plVar4 != (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)(lVar5 + 0xa8);
      *(long **)(lVar5 + 0xa8) = plVar4;
    }
    FUN_01340710(&local_878,&DAT_05199fb8,param_1 + 8,0);
    puVar3 = PTR_DAT_04bbc458;
    local_1c8 = 0;
    local_160 = "mLandMaking";
    local_150 = "LandMaking";
    local_878 = PTR_DAT_04bbc458 + 0x10;
    local_140 = &DAT_0407ebb1;
    local_138 = 0;
    uStack_170 = 0;
    uStack_178 = 0;
    local_172 = 0;
    local_168 = puVar1;
    local_158 = puVar1;
    local_148 = puVar1;
    FUN_01332bd0(local_1c0,&local_168,&uStack_178,&local_878);
    local_55 = 0;
    local_1c0[0] = PTR_DAT_04bbc460 + 0x10;
    local_1c8 = local_1c8 | 0xf80;
    local_160 = (char *)((long)&local_158 + 4);
    local_158 = (undefined *)CONCAT35(local_158._5_3_,0x100);
    local_168 = PTR_DAT_04bb21f8 + 0x10;
    uVar6 = (**(code **)(local_878 + 0xf0))(&local_878,&local_168,1);
    if ((uVar6 & 1) != 0) {
      FUN_03c27e60(&local_878,&local_168,plVar4);
    }
    if ((local_855 & 1) != 0) {
      local_168 = (undefined *)param_2[1];
      FUN_013327dc(&local_878,&local_168);
    }
    (**(code **)(local_878 + 0x20))(&local_878);
    local_878 = puVar3 + 0x10;
    local_1c0[0] = PTR_DAT_04bbc468 + 0x10;
    uVar6 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                      (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),local_180);
    if (((uVar6 & 1) != 0) && (local_180 != (void *)0x0)) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(local_180);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_180);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,local_180);
        }
      }
    }
    local_180 = (void *)0x0;
    FUN_01341630(&local_878);
    if (lVar8 != 1) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      *(long *)(lVar5 + 0xa8) = lVar8;
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
  }
  return;
}

