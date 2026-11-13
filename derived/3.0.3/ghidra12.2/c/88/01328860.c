
void FUN_01328860(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *__src;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
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
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  local_338 = PTR_DAT_04bb2020 + 0x10;
  pcStack_330 = "FieldPresetParamsCloudIsland";
  plVar4 = (long *)FUN_038c6d48(0x100000,&local_338,param_3,8,1,0);
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
      if (DAT_051925e8[lVar7] == '\0') goto LAB_0132897c;
      if (DAT_051925e8[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0132897c;
      }
      if (DAT_051925e8[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0132897c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0132897c:
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
  puStack_160 = local_154;
  local_154[0] = 0;
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  uVar5 = (**(code **)(local_338 + 0xf0))(&local_338,&local_168,1);
  if ((uVar5 & 1) != 0) {
    FUN_03c27e60(&local_338,&local_168,plVar4);
  }
  if ((local_315 & 1) != 0) {
    puVar6 = (undefined4 *)(**(code **)(local_278[0] + 0xf0))(local_278);
    uVar2 = *puVar6;
    puVar6 = (undefined4 *)(**(code **)(local_248[0] + 0xf0))(local_248);
    uVar3 = *puVar6;
    *(undefined4 *)(param_2 + 8) = uVar2;
    *(undefined4 *)(param_2 + 0xc) = uVar3;
  }
  (**(code **)(local_338 + 0x20))(&local_338);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  return;
}

