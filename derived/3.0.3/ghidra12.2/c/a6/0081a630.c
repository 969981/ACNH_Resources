
void FUN_0081a630(long param_1,long *param_2,undefined **param_3,ulong param_4)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined *local_458;
  undefined1 *puStack_450;
  undefined1 *local_448;
  uint local_440;
  int local_43c;
  undefined1 local_438 [128];
  undefined *local_3b8;
  undefined4 local_3b0;
  undefined *local_3a8;
  undefined *local_3a0;
  undefined *local_398;
  undefined1 *local_390;
  undefined *local_388;
  undefined *local_380;
  undefined4 local_378;
  undefined *local_370;
  undefined *local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  int local_354;
  undefined4 uStack_350;
  undefined4 local_34c;
  undefined4 uStack_348;
  undefined4 local_344;
  undefined4 uStack_340;
  undefined4 local_33c;
  undefined4 uStack_338;
  undefined4 local_334;
  undefined4 uStack_330;
  undefined4 local_32c;
  undefined4 uStack_328;
  undefined4 local_324;
  undefined4 uStack_320;
  undefined4 local_31c;
  undefined *local_318;
  undefined1 *local_310;
  undefined1 *local_308;
  uint local_300;
  int local_2fc;
  undefined1 local_2f8 [128];
  undefined *local_278;
  undefined1 *puStack_270;
  
  local_2f8[0] = 0;
  local_308 = local_2f8;
  local_300 = 0;
  local_2fc = 0x80;
  if (*(char *)param_2[1] != '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar9 = local_308;
    puVar5 = (undefined1 *)param_2[1];
    if (local_308 != puVar5) {
      lVar7 = 0;
      do {
        pcVar2 = puVar5 + lVar7;
        lVar7 = lVar7 + 1;
      } while (*pcVar2 != '\0');
      uVar8 = (int)lVar7 - 1;
      if (local_2fc <= (int)uVar8) {
        uVar8 = local_2fc - 1;
      }
      if ((int)uVar8 < 1) {
        uVar8 = 0;
      }
      else {
        memcpy(local_308,puVar5,(ulong)uVar8);
        puVar9 = puVar9 + uVar8;
      }
      *puVar9 = 0;
      local_300 = uVar8;
    }
    if (0 < (int)local_300) {
      uVar4 = (ulong)(local_300 - 1);
      do {
        if (((local_308[uVar4] == '.') && (local_308[uVar4 + 1] == 'z')) &&
           (local_308[uVar4 + 2] == 's')) {
          if ((int)uVar4 != -1) {
            uVar8 = local_300;
            if (2 < (int)local_300) {
              uVar8 = 3;
            }
            local_300 = local_300 - uVar8;
            local_308[(int)local_300] = 0;
          }
          break;
        }
        bVar1 = 0 < (long)uVar4;
        uVar4 = uVar4 - 1;
      } while (bVar1);
    }
  }
  puVar6 = PTR_DAT_04bb2020;
  local_378 = 1;
  local_360 = 0x1010100;
  uStack_35c = 0x1010100;
  uStack_358 = CONCAT31(uStack_358._1_3_,1);
  local_354 = 0;
  uStack_350 = 0;
  local_3a8 = PTR_DAT_04bb2020 + 0x10;
  local_34c = 0;
  uStack_348 = 0;
  local_380 = PTR_DAT_04bdf0b0 + 0x10;
  local_368 = PTR_DAT_04bb2120;
  local_344 = 0;
  uStack_340 = 0;
  local_33c = 0;
  uStack_338 = 0;
  local_334 = 0;
  uStack_330 = 0;
  local_32c = 0;
  uStack_328 = 0;
  local_324 = 0;
  uStack_320 = 0;
  local_31c = 0;
  local_3b0 = 1;
  local_310 = PTR_DAT_04bb2120;
  local_3a0 = PTR_DAT_04bb2120;
  local_3b8 = PTR_DAT_04bdf0b8 + 0x10;
  local_388 = (undefined *)0x0;
  local_438[0] = 0;
  local_448 = local_438;
  local_390 = PTR_DAT_04bb2120;
  local_440 = 0;
  local_43c = 0x80;
  local_398 = local_3a8;
  local_370 = local_3a8;
  local_318 = local_3a8;
  if (param_3 != (undefined **)0x0) {
    if (((*PTR_DAT_04bb4ef0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb4ef0), iVar3 != 0)) {
      *(undefined ***)PTR_DAT_04bb4ee8 = &PTR_LAB_049178f8;
      __cxa_guard_release(PTR_DAT_04bb4ef0);
    }
    uVar4 = (**(code **)*param_3)(param_3,PTR_DAT_04bb4ee8);
    if ((uVar4 & 1) == 0) {
      if (((*PTR_DAT_04bb4f18 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb4f18), iVar3 != 0)) {
        *(undefined ***)PTR_DAT_04bb4f10 = &PTR_LAB_049178f8;
        __cxa_guard_release(PTR_DAT_04bb4f18);
      }
      uVar4 = (**(code **)*param_3)(param_3,PTR_DAT_04bb4f10);
      puStack_270 = local_308;
      if ((uVar4 & 1) != 0) {
        if (*param_3[5] != '\0') {
          (**(code **)(param_3[4] + 0x18))(param_3 + 4);
          puVar9 = local_448;
          puVar5 = param_3[5];
          if (local_448 != puVar5) {
            lVar7 = 0;
            do {
              pcVar2 = puVar5 + lVar7;
              lVar7 = lVar7 + 1;
            } while (*pcVar2 != '\0');
            uVar8 = (int)lVar7 - 1;
            if (local_43c <= (int)uVar8) {
              uVar8 = local_43c - 1;
            }
            if ((int)uVar8 < 1) {
              uVar8 = 0;
            }
            else {
              memcpy(local_448,puVar5,(ulong)uVar8);
              puVar9 = puVar9 + uVar8;
            }
            *puVar9 = 0;
            local_440 = uVar8;
          }
          uVar4 = (ulong)(local_440 - 1);
          if (0 < (int)local_440) {
            do {
              if (((local_448[uVar4] == '.') && (local_448[uVar4 + 1] == 'z')) &&
                 (local_448[uVar4 + 2] == 's')) {
                if ((int)uVar4 != -1) {
                  uVar8 = local_440;
                  if (2 < (int)local_440) {
                    uVar8 = 3;
                  }
                  local_440 = local_440 - uVar8;
                  local_448[(int)local_440] = 0;
                }
                break;
              }
              bVar1 = 0 < (long)uVar4;
              uVar4 = uVar4 - 1;
            } while (bVar1);
          }
        }
        local_3b0 = *(undefined4 *)(param_3 + 1);
        local_3a0 = param_3[3];
        local_388 = param_3[6];
        param_3 = &local_3b8;
        local_390 = local_448;
        puStack_270 = local_308;
      }
      goto joined_r0x0081aae0;
    }
    if (*param_3[0xe] != '\0') {
      (**(code **)(param_3[0xd] + 0x18))(param_3 + 0xd);
      puVar9 = local_448;
      puVar5 = param_3[0xe];
      if (local_448 != puVar5) {
        lVar7 = 0;
        do {
          pcVar2 = puVar5 + lVar7;
          lVar7 = lVar7 + 1;
        } while (*pcVar2 != '\0');
        uVar8 = (int)lVar7 - 1;
        if (local_43c <= (int)uVar8) {
          uVar8 = local_43c - 1;
        }
        if ((int)uVar8 < 1) {
          uVar8 = 0;
        }
        else {
          memcpy(local_448,puVar5,(ulong)uVar8);
          puVar9 = puVar9 + uVar8;
        }
        *puVar9 = 0;
        local_440 = uVar8;
      }
      if (0 < (int)local_440) {
        uVar4 = (ulong)(local_440 - 1);
        do {
          if (((local_448[uVar4] == '.') && (local_448[uVar4 + 1] == 'z')) &&
             (local_448[uVar4 + 2] == 's')) {
            if ((int)uVar4 != -1) {
              uVar8 = local_440;
              if (2 < (int)local_440) {
                uVar8 = 3;
              }
              local_440 = local_440 - uVar8;
              local_448[(int)local_440] = 0;
            }
            break;
          }
          bVar1 = 0 < (long)uVar4;
          uVar4 = uVar4 - 1;
        } while (bVar1);
      }
    }
    local_378 = *(undefined4 *)(param_3 + 1);
    uStack_340 = SUB84(param_3[8],0);
    local_33c = (undefined4)((ulong)param_3[8] >> 0x20);
    uStack_350 = SUB84(param_3[6],0);
    local_34c = (undefined4)((ulong)param_3[6] >> 0x20);
    uStack_348 = SUB84(param_3[7],0);
    local_344 = (undefined4)((ulong)param_3[7] >> 0x20);
    uStack_328 = SUB84(param_3[0xb],0);
    local_324 = (undefined4)((ulong)param_3[0xb] >> 0x20);
    uStack_320 = SUB84(param_3[0xc],0);
    local_31c = (undefined4)((ulong)param_3[0xc] >> 0x20);
    uStack_338 = SUB84(param_3[9],0);
    local_334 = (undefined4)((ulong)param_3[9] >> 0x20);
    uStack_330 = SUB84(param_3[10],0);
    local_32c = (undefined4)((ulong)param_3[10] >> 0x20);
    local_368 = param_3[3];
    local_360 = SUB84(param_3[4],0);
    uStack_35c = (undefined4)((ulong)param_3[4] >> 0x20);
    uStack_358 = SUB84(param_3[5],0);
    local_354 = (int)((ulong)param_3[5] >> 0x20);
    local_310 = local_448;
    if (local_354 != 0) {
      param_3 = &local_380;
      puStack_270 = local_308;
      goto joined_r0x0081aae0;
    }
  }
  param_3 = &local_380;
  local_354 = 0x100;
  puStack_270 = local_308;
joined_r0x0081aae0:
  local_308 = puStack_270;
  if ((param_4 & 1) == 0) {
    local_458 = puVar6 + 0x10;
    puStack_450 = puStack_270;
    if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf0 | 2;
      FUN_03f33f70(*(undefined8 *)PTR_DAT_04bb49b8,param_1,&local_458,param_3);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 == 0) {
        puVar6 = &DAT_0406a300;
      }
      else {
        (**(code **)(*(long *)(lVar7 + 0x360) + 0x18))(lVar7 + 0x360);
        puVar6 = *(undefined **)(lVar7 + 0x368);
      }
      FUN_0156b428(&local_278,&DAT_0406f6e3,puVar6,puStack_270);
      *(undefined4 *)(param_1 + 0xc) = 8;
    }
  }
  else {
    local_278 = puVar6 + 0x10;
    FUN_03f2dbac(param_1,&local_278,param_3,0);
  }
  return;
}

