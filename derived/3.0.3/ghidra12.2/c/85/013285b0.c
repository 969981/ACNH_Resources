
void FUN_013285b0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *__src;
  long *plVar3;
  ulong uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  undefined *local_360;
  undefined1 local_358;
  undefined4 local_354;
  uint *local_350;
  undefined8 uStack_348;
  undefined4 local_340;
  undefined2 local_33c;
  undefined *local_338;
  char *pcStack_330;
  byte local_315;
  long local_278 [6];
  long local_248 [6];
  undefined *local_218;
  undefined1 *puStack_210;
  undefined4 local_208;
  undefined1 local_204 [63];
  undefined1 local_1c5;
  undefined *local_1c0;
  undefined1 *puStack_1b8;
  int local_1b0;
  undefined1 local_1ac [63];
  undefined1 local_16d;
  undefined *local_168;
  uint *local_160;
  undefined4 local_158;
  uint local_154 [3];
  undefined2 local_148;
  undefined1 local_55;
  
  lVar8 = param_2[1];
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x150) != 0)) {
    local_338 = PTR_DAT_04bb2020 + 0x10;
    pcStack_330 = "FieldPresetParamsCloudIsland";
    plVar3 = (long *)FUN_038c6d48(0x100000,&local_338,*param_2,8,1,0);
    local_16d = 0;
    local_1b0 = 0x40;
    local_208 = 0x40;
    local_1c5 = 0;
    puStack_210 = local_204;
    local_1ac[0] = 0;
    local_204[0] = 0;
    local_218 = PTR_DAT_04bb2bc0 + 0x10;
    local_1c0 = local_218;
    puStack_1b8 = local_1ac;
    (**(code **)(DAT_051925e0 + 0x18))(&DAT_051925e0);
    __src = DAT_051925e8;
    if (local_1ac != DAT_051925e8) {
      (**(code **)(DAT_051925e0 + 0x18))(&DAT_051925e0);
      lVar7 = 0;
      do {
        if (DAT_051925e8[lVar7] == '\0') goto LAB_013286dc;
        if (DAT_051925e8[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_013286dc;
        }
        if (DAT_051925e8[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_013286dc;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_013286dc:
      iVar1 = (int)lVar7;
      if (local_1b0 <= (int)lVar7) {
        iVar1 = local_1b0 + -1;
      }
      memcpy(local_1ac,__src,(long)iVar1);
      local_1ac[iVar1] = 0;
    }
    FUN_01328aa0(param_1,&local_218,2);
    FUN_01327410(&local_338,&local_1c0,&local_218,0);
    local_55 = 0;
    local_158 = 0x100;
    local_160 = local_154;
    local_154[0] = local_154[0] & 0xffffff00;
    local_168 = PTR_DAT_04bb21f8 + 0x10;
    uVar4 = (**(code **)(local_338 + 0xf0))(&local_338,&local_168,1);
    if ((uVar4 & 1) != 0) {
      FUN_03c27e60(&local_338,&local_168,plVar3);
    }
    if ((local_315 & 1) != 0) {
      puVar5 = (undefined4 *)(**(code **)(local_278[0] + 0xf0))(local_278);
      uVar2 = *puVar5;
      puVar6 = (uint *)(**(code **)(local_248[0] + 0xf0))(local_248);
      local_154[0] = *puVar6;
      local_148 = 0;
      local_168 = (undefined *)CONCAT44(local_168._4_4_,0x26);
      local_154[1] = 0;
      local_350 = (uint *)(PTR_DAT_04bb2010 + 0x10);
      local_358 = 0;
      local_354 = 0;
      local_360 = PTR_DAT_04bc4608 + 0x10;
      local_340 = 0;
      local_33c = 0;
      uStack_348 = 0;
      local_160 = local_350;
      local_158 = uVar2;
      FUN_02a8f958(&local_360,&local_168);
      FUN_02a59250(lVar8 + 0x148,&local_360);
    }
    (**(code **)(local_338 + 0x20))(&local_338);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3);
    }
  }
  return;
}

