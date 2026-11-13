
void FUN_01328340(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *__src;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_358;
  char *pcStack_350;
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
  
  if (*param_2 != 0) {
    local_358 = PTR_DAT_04bb2020 + 0x10;
    pcStack_350 = "FieldPresetParamsCloudIsland";
    plVar4 = (long *)FUN_038c6d48(&LAB_00500000,&local_358,*param_2,8,1,0);
    puVar2 = PTR_DAT_04bb2bc0;
    local_16d = 0;
    local_1ac[0] = 0;
    local_1b0 = 0x40;
    local_1c0 = PTR_DAT_04bb2bc0 + 0x10;
    puStack_1b8 = local_1ac;
    (**(code **)(DAT_051925e0 + 0x18))(&DAT_051925e0);
    __src = DAT_051925e8;
    if (local_1ac != DAT_051925e8) {
      (**(code **)(DAT_051925e0 + 0x18))(&DAT_051925e0);
      lVar7 = 0;
      do {
        if (DAT_051925e8[lVar7] == '\0') goto LAB_0132844c;
        if (DAT_051925e8[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_0132844c;
        }
        if (DAT_051925e8[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_0132844c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_0132844c:
      iVar1 = (int)lVar7;
      if (local_1b0 <= (int)lVar7) {
        iVar1 = local_1b0 + -1;
      }
      memcpy(local_1ac,__src,(long)iVar1);
      local_1ac[iVar1] = 0;
    }
    puVar3 = PTR_DAT_04bb3350;
    if (plVar4 == (long *)0x0) {
      lVar7 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)(lVar5 + 0xa8);
      *(long **)(lVar5 + 0xa8) = plVar4;
    }
    local_218 = puVar2 + 0x10;
    local_1c5 = 0;
    local_208 = 0x40;
    puStack_210 = local_204;
    local_204[0] = 0;
    FUN_01328aa0(param_1,&local_218,1);
    FUN_013352c8(&local_358,&local_1c0,&local_218,0);
    local_55 = 0;
    local_158 = 0x100;
    puStack_160 = local_154;
    local_154[0] = 0;
    local_168 = PTR_DAT_04bb21f8 + 0x10;
    uVar6 = (**(code **)(local_358 + 0xf0))(&local_358,&local_168,1);
    if ((uVar6 & 1) != 0) {
      FUN_03c27e60(&local_358,&local_168,plVar4);
    }
    FUN_01335660(&local_358,param_2[1],0);
    (**(code **)(local_358 + 0x20))(&local_358);
    FUN_01335460(&local_358);
    if (lVar7 != 1) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
  }
  return;
}

