
void FUN_01332564(long param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined **local_878;
  char *pcStack_870;
  byte local_855;
  uint local_1c8;
  undefined **local_1c0 [8];
  void *local_180;
  undefined6 uStack_178;
  undefined2 local_172;
  undefined6 uStack_170;
  undefined **local_168;
  char *local_160;
  undefined8 local_158;
  char *local_150;
  undefined **local_148;
  undefined8 *local_140;
  undefined4 local_138;
  undefined1 local_55;
  
  if (**(char **)(param_1 + 8) != '\0' && *param_2 != 0) {
    lVar7 = 1;
    ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    pcStack_870 = "FieldPresetParamsHotelRoomInitHeap";
    local_878 = ppuVar1;
    plVar3 = (long *)FUN_038c6d48(0x40000,&local_878,*param_2,8,1,0);
    puVar2 = PTR_DAT_04bb3350;
    if (plVar3 != (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)(lVar4 + 0xa8);
      *(long **)(lVar4 + 0xa8) = plVar3;
    }
    FUN_01340710(&local_878,&DAT_05193ea8,param_1,0);
    local_1c8 = 0;
    local_160 = "mLandMaking";
    local_150 = "LandMaking";
    local_140 = &DAT_0407ebb1;
    local_878 = &PTR_FUN_0498f5b8;
    local_138 = 0;
    uStack_170 = 0;
    uStack_178 = 0;
    local_172 = 0;
    local_168 = ppuVar1;
    local_158 = ppuVar1;
    local_148 = ppuVar1;
    FUN_01332bd0(local_1c0,&local_168,&uStack_178,&local_878);
    local_55 = 0;
    local_1c0[0] = &PTR_FUN_0498f718;
    local_1c8 = local_1c8 | 0xf80;
    local_160 = (char *)((long)&local_158 + 4);
    local_158 = (undefined **)CONCAT35(local_158._5_3_,0x100);
    local_168 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
    uVar5 = (*(code *)local_878[0x1e])(&local_878,&local_168,1);
    if ((uVar5 & 1) != 0) {
      FUN_03c27e60(&local_878,&local_168,plVar3);
    }
    if ((local_855 & 1) != 0) {
      local_168 = (undefined **)param_2[1];
      FUN_013327dc(&local_878,&local_168);
    }
    (*(code *)local_878[4])(&local_878);
    local_1c0[0] = &PTR_FUN_0498f858;
    local_878 = &PTR_FUN_0498f5b8;
    uVar5 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                      (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),local_180);
    if (((uVar5 & 1) != 0) && (local_180 != (void *)0x0)) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(local_180);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_180);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,local_180);
        }
      }
    }
    local_180 = (void *)0x0;
    FUN_01341630(&local_878);
    if (lVar7 != 1) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      *(long *)(lVar4 + 0xa8) = lVar7;
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3);
    }
  }
  return;
}

