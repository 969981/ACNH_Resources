
undefined8 FUN_026b2f38(byte *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined *local_458;
  undefined1 *puStack_450;
  long local_448 [30];
  long local_358 [6];
  long local_328 [6];
  long local_2f8 [25];
  undefined1 auStack_230 [152];
  undefined *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined1 local_184 [7];
  undefined1 local_17d;
  undefined *local_178;
  char *local_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  
  local_17d = 0;
  local_188 = 8;
  local_184[0] = 0;
  local_190 = local_184;
  local_198 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_198,"-----");
  if ((ulong)*param_1 < 0x23) {
    FUN_038d1270(&local_198,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0),
                 param_1[1]);
  }
  (**(code **)(local_198 + 0x18))(&local_198);
  FUN_0074fda4(auStack_230,"Param/NpcHouse/%s.byml",local_190);
  uVar3 = FUN_03eba3a0(auStack_230);
  puVar2 = PTR_DAT_04bb3350;
  if (((uVar3 & 1) == 0) ||
     (plVar7 = *(long **)(*(long *)PTR_DAT_04bb3968 + 0x17598), plVar7 == (long *)0x0)) {
    uVar6 = 0;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)(lVar4 + 0xa8);
    *(long **)(lVar4 + 0xa8) = plVar7;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_170 = "NpcHouse";
    local_178 = puVar1;
    (**(code **)(local_198 + 0x18))(&local_198);
    puStack_450 = local_190;
    local_458 = puVar1;
    FUN_0219fd80(local_448,&local_178,&local_458,0);
    local_170 = local_164;
    local_65 = 0;
    local_168 = 0x100;
    local_164[0] = 0;
    local_178 = PTR_DAT_04bb21f8 + 0x10;
    uVar3 = (**(code **)(local_448[0] + 0xf0))(local_448,&local_178,1);
    if ((uVar3 & 1) != 0) {
      FUN_03c27e60(local_448,&local_178,plVar7);
    }
    puVar5 = (undefined2 *)(**(code **)(local_358[0] + 0xf0))(local_358);
    *param_2 = *puVar5;
    puVar5 = (undefined2 *)(**(code **)(local_328[0] + 0xf0))(local_328);
    *param_3 = *puVar5;
    puVar5 = (undefined2 *)(**(code **)(local_2f8[0] + 0xf0))(local_2f8);
    *param_4 = *puVar5;
    (**(code **)(local_448[0] + 0x20))(local_448);
    (**(code **)(*plVar7 + 0x58))(plVar7);
    if (lVar8 != 1) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      *(long *)(lVar4 + 0xa8) = lVar8;
    }
    uVar6 = 1;
  }
  return uVar6;
}

