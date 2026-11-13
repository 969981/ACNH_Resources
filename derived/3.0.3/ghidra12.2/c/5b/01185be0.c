
undefined8 FUN_01185be0(long *param_1,long *param_2,long param_3,uint *param_4,undefined8 param_5)

{
  long lVar1;
  short *psVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uStack_3b8;
  short *local_3b0;
  uint *puStack_3a8;
  short *local_3a0;
  long lStack_398;
  undefined **local_390;
  undefined4 local_388;
  undefined **local_380;
  undefined *local_378;
  undefined4 local_370;
  undefined1 local_36c;
  undefined4 local_36b;
  undefined8 local_364;
  undefined4 local_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 local_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined8 local_33c;
  undefined8 uStack_334;
  undefined4 local_32c;
  undefined **local_328;
  undefined *puStack_320;
  undefined8 local_318;
  undefined1 *local_310;
  undefined4 local_308;
  undefined1 local_304 [127];
  undefined1 local_285;
  undefined8 local_280;
  long lStack_278;
  
  (**(code **)(*param_1 + 0x18))();
  local_318 = (undefined *)((ulong)local_318._5_3_ << 0x28);
  uVar5 = FUN_03ea9450(&DAT_050cc5d0,&local_318,param_1[1]);
  psVar2 = DAT_050cc5d0;
  if ((uVar5 & 1) != 0) {
    if (local_318._4_1_ - 0xc0 < 2) {
      lStack_278 = (long)DAT_050cc5d0 + ((ulong)local_318 & 0xffffffff);
    }
    else {
      if (local_318._4_1_ != 0xff) {
        return 1;
      }
      lStack_278 = 0;
    }
    if (DAT_050cc5d0 != (short *)0x0) {
      local_280 = DAT_050cc5d0;
      (**(code **)(*param_2 + 0x18))(param_2);
      local_318 = (undefined *)((ulong)local_318 & 0xffffff0000000000);
      uVar5 = FUN_03ea9450(&local_280,&local_318,param_2[1]);
      if ((uVar5 & 1) != 0) {
        if (local_318._4_1_ - 0xc0 < 2) {
          lStack_398 = (long)psVar2 + ((ulong)local_318 & 0xffffffff);
        }
        else {
          if (local_318._4_1_ != 0xff) {
            return 1;
          }
          lStack_398 = 0;
        }
        local_280 = (short *)((ulong)local_280 & 0xffffff0000000000);
        local_3a0 = psVar2;
        uVar5 = FUN_03ea9450(&local_3a0,&local_280,"subfile");
        if ((uVar5 & 1) != 0) {
          if (local_280._4_1_ - 0xc0 < 2) {
            puVar10 = (uint *)((long)psVar2 + ((ulong)local_280 & 0xffffffff));
          }
          else {
            if (local_280._4_1_ != 0xff) {
              return 1;
            }
            puVar10 = (uint *)0x0;
          }
          local_3b0 = psVar2;
          uVar9 = 0;
          puVar8 = PTR_DAT_04bb2d88 + 0x10;
          puStack_3a8 = puVar10;
          if (puVar10 == (uint *)0x0) goto LAB_01185dbc;
          while ((*puVar10 & 0xfe) == 0xc0) {
            uVar6 = *puVar10 >> 8;
            if (*psVar2 != 0x5942) goto LAB_01185dc0;
            if ((uVar6 & 0xff00 | *puVar10 >> 0x18 | (uVar6 & 0xff) << 0x10) <= uVar9) {
              return 1;
            }
            while( true ) {
              uVar5 = FUN_03eaa1d8(&local_3b0,&uStack_3b8,uVar9);
              uVar3 = uStack_3b8;
              if ((uVar5 & 1) == 0) {
                return 0;
              }
              local_285 = 0;
              local_308 = 0x80;
              local_304[0] = 0;
              lVar1 = param_3 + (ulong)*param_4 * 0x58;
              if (99 < *param_4) {
                lVar1 = param_3;
              }
              local_318 = puVar8;
              local_310 = local_304;
              FUN_038d1270(&local_318,"EventFlow/%s.bfevfl",uStack_3b8);
              local_388 = 1;
              local_380 = &PTR_LAB_048f9770;
              local_390 = &PTR_LAB_04ba8a48;
              local_36c = 0;
              local_32c = 0;
              local_33c = 0;
              uStack_334 = 0;
              local_364 = 0;
              local_370 = 0x1010100;
              local_36b = 0x1010101;
              local_378 = PTR_DAT_04bb2120;
              local_328 = &PTR_LAB_048f9770;
              puStack_320 = PTR_DAT_04bb2120;
              local_34c = 0;
              uStack_340 = 0;
              uStack_348 = (undefined4)param_5;
              uStack_344 = (undefined4)((ulong)param_5 >> 0x20);
              local_35c = 0;
              uStack_350 = 0;
              uStack_358 = 0x50cc510;
              uStack_354 = 0;
              if ((*(byte *)(lVar1 + 0x18) >> 1 & 1) != 0) {
                lVar7 = *(long *)(lVar1 + 0x20);
                if (lVar7 == 0) {
                  puVar8 = &DAT_0406a300;
                }
                else {
                  (**(code **)(*(long *)(lVar7 + 0x360) + 0x18))(lVar7 + 0x360);
                  puVar8 = *(undefined **)(lVar7 + 0x368);
                }
                (**(code **)(local_318 + 0x18))(&local_318);
                FUN_0156b428(&local_280,&DAT_0406f6e3,puVar8,local_310);
                *(undefined4 *)(lVar1 + 0x1c) = 8;
                return 0;
              }
              *(undefined4 *)(lVar1 + 0x1c) = 0;
              *(byte *)(lVar1 + 0x18) = *(byte *)(lVar1 + 0x18) & 0xf0 | 2;
              iVar4 = FUN_03f33f70(*(undefined8 *)PTR_DAT_04bb49b8,lVar1 + 0x10,&local_318,
                                   &local_390);
              if (iVar4 != 4) {
                return 0;
              }
              uVar9 = uVar9 + 1;
              lVar1 = param_3 + (ulong)*param_4 * 0x58;
              if (99 < *param_4) {
                lVar1 = param_3;
              }
              *(undefined8 *)(lVar1 + 8) = uVar3;
              *param_4 = *param_4 + 1;
              if (puVar10 != (uint *)0x0) break;
LAB_01185dbc:
              uVar6 = 0;
LAB_01185dc0:
              if (uVar6 <= uVar9) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

