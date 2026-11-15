
void FUN_02202780(undefined4 *param_1,byte *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *local_908;
  undefined1 *puStack_900;
  long local_8f8 [72];
  long local_6b8 [147];
  undefined1 auStack_220 [152];
  undefined *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined1 local_174 [7];
  undefined1 local_16d;
  undefined *local_168;
  char *local_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  local_16d = 0;
  local_178 = 8;
  local_174[0] = 0;
  local_180 = local_174;
  local_188 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_188,"-----");
  if ((ulong)*param_2 < 0x23) {
    FUN_038d1270(&local_188,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_2 * 8 + 0xb0),
                 param_2[1]);
  }
  (**(code **)(local_188 + 0x18))(&local_188);
  FUN_0074fda4(auStack_220,"Param/NpcRoom/%s.byml",local_180);
  uVar4 = FUN_03eba3a0(auStack_220);
  puVar3 = PTR_DAT_04bb3350;
  if (((uVar4 & 1) == 0) ||
     (plVar7 = *(long **)(*(long *)PTR_DAT_04bb3968 + 0x17598), plVar7 == (long *)0x0)) {
    uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
    param_1[1] = uVar2;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)(lVar5 + 0xa8);
    *(long **)(lVar5 + 0xa8) = plVar7;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_160 = "NpcRoom";
    local_168 = puVar1;
    (**(code **)(local_188 + 0x18))(&local_188);
    puStack_900 = local_180;
    local_908 = puVar1;
    FUN_00b62c50(local_8f8,&local_168,&local_908,0);
    local_160 = local_154;
    local_55 = 0;
    local_158 = 0x100;
    local_154[0] = 0;
    local_168 = PTR_DAT_04bb21f8 + 0x10;
    uVar4 = (**(code **)(local_8f8[0] + 0xf0))(local_8f8,&local_168,1);
    if ((uVar4 & 1) != 0) {
      FUN_03c27e60(local_8f8,&local_168,plVar7);
    }
    puVar6 = (undefined8 *)(**(code **)(local_6b8[0] + 0xf0))(local_6b8);
    uVar9 = *puVar6;
    *(undefined2 *)((long)param_1 + 2) = 0;
    param_1[1] = 0;
    *(short *)param_1 = (short)uVar9;
    FUN_0277d4ac(param_1);
    *(char *)((long)param_1 + 2) = (char)((ulong)uVar9 >> 0x10);
    *(char *)((long)param_1 + 3) = (char)((ulong)uVar9 >> 0x18);
    param_1[1] = (int)((ulong)uVar9 >> 0x20);
    (**(code **)(local_8f8[0] + 0x20))(local_8f8);
    (**(code **)(*plVar7 + 0x58))(plVar7);
    FUN_00b634e0(local_8f8);
    if (lVar8 != 1) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      *(long *)(lVar5 + 0xa8) = lVar8;
    }
  }
  return;
}

