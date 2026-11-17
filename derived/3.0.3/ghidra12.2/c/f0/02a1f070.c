
uint FUN_02a1f070(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *__src;
  uint uVar5;
  char cVar6;
  undefined7 uVar7;
  undefined7 uVar8;
  undefined7 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  int *piVar15;
  ulong uVar16;
  undefined *local_398;
  char *local_390;
  undefined *local_388;
  undefined4 local_380;
  undefined *local_378;
  char *pcStack_370;
  undefined4 local_368;
  undefined1 local_364;
  undefined4 local_363;
  undefined8 local_35c;
  undefined8 uStack_354;
  undefined8 local_34c;
  undefined4 local_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined8 local_334;
  undefined8 uStack_32c;
  undefined4 local_324;
  undefined *local_320;
  undefined *puStack_318;
  char *local_310;
  undefined8 local_308;
  char local_300 [7];
  char cStack_2f9;
  char acStack_2f8 [7];
  char local_2f1 [113];
  undefined1 auStack_280 [544];
  
  *(undefined1 *)(param_1 + 8) = 0;
  lVar11 = FUN_03c4c750(*(undefined8 *)PTR_DAT_04bb28d0);
  uVar8 = s_Sound_Resource__040d5fac._0_7_;
  uVar10 = 0;
  if (lVar11 != 0) {
    piVar15 = *(int **)(lVar11 + 8);
    if ((((piVar15 == (int *)0x0) || (*piVar15 != 0x4c535241)) ||
        ((0xfe < (byte)(*(ushort *)(piVar15 + 1) >> 8) &&
         ((*(ushort *)(piVar15 + 1) & 0xff) == 0xfe)))) || (*(short *)((long)piVar15 + 6) != 1)) {
      uVar10 = ~*(uint *)(param_1 + 0x14) >> 0x1f;
    }
    else {
      uVar5 = piVar15[3];
      uVar10 = (uint)((int)uVar5 <= *(int *)(param_1 + 0x14));
      if (0 < (int)uVar5 && (int)uVar5 <= *(int *)(param_1 + 0x14)) {
        cVar6 = s_Sound_Resource__040d5fac[7];
        uVar7._0_1_ = s_Sound_Resource__040d5fac[8];
        uVar7._1_1_ = s_Sound_Resource__040d5fac[9];
        uVar7._2_1_ = s_Sound_Resource__040d5fac[10];
        uVar7._3_1_ = s_Sound_Resource__040d5fac[0xb];
        uVar7._4_1_ = s_Sound_Resource__040d5fac[0xc];
        uVar7._5_1_ = s_Sound_Resource__040d5fac[0xd];
        uVar7._6_1_ = s_Sound_Resource__040d5fac[0xe];
        uVar16 = 0;
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        puVar2 = PTR_DAT_04bdf0b0 + 0x10;
        puVar3 = PTR_DAT_04bdf0c8 + 0x10;
        puVar4 = PTR_DAT_04bdf1d8 + 0x10;
        do {
          uVar9 = s_Sound_Resource__040d5fac._0_7_;
          s_Sound_Resource__040d5fac[0] = (char)uVar8;
          s_Sound_Resource__040d5fac[1] = SUB71(uVar8,1);
          s_Sound_Resource__040d5fac[2] = SUB71(uVar8,2);
          s_Sound_Resource__040d5fac[3] = SUB71(uVar8,3);
          s_Sound_Resource__040d5fac[4] = SUB71(uVar8,4);
          s_Sound_Resource__040d5fac[5] = SUB71(uVar8,5);
          s_Sound_Resource__040d5fac[6] = SUB71(uVar8,6);
          local_300[0] = s_Sound_Resource__040d5fac[0];
          local_300[1] = s_Sound_Resource__040d5fac[1];
          local_300[2] = s_Sound_Resource__040d5fac[2];
          local_300[3] = s_Sound_Resource__040d5fac[3];
          local_300[4] = s_Sound_Resource__040d5fac[4];
          local_300[5] = s_Sound_Resource__040d5fac[5];
          local_300[6] = s_Sound_Resource__040d5fac[6];
          local_2f1[0] = '\0';
          __src = (void *)((long)piVar15 +
                          (ulong)(uint)piVar15[uVar16 + 4] + (ulong)uVar5 * 4 + 0x10);
          local_308 = 0x800000000f;
          lVar11 = 0;
          do {
            lVar12 = lVar11;
            lVar11 = lVar12 + 1;
          } while (*(char *)((long)__src + lVar12) != '\0');
          uVar10 = (uint)lVar12;
          s_Sound_Resource__040d5fac._0_7_ = uVar9;
          local_310 = local_300;
          cStack_2f9 = cVar6;
          acStack_2f8 = (char  [7])uVar7;
          if (0 < (int)uVar10) {
            if (0x6f < (int)uVar10) {
              uVar10 = 0x70;
            }
            memcpy(local_2f1,__src,(ulong)uVar10);
            lVar11 = (ulong)uVar10 + 0xf;
            local_300[lVar11] = '\0';
            local_308 = CONCAT44(local_308._4_4_,(int)lVar11);
          }
          local_380 = 1;
          local_364 = 0;
          local_324 = 0;
          local_34c = 0;
          local_368 = 0x1010100;
          local_363 = 0x1010101;
          local_334 = 0;
          uStack_32c = 0;
          local_344 = 0;
          uStack_338 = 0;
          local_35c = 0;
          uStack_354 = 0;
          plVar13 = *(long **)(param_1 + 0x20);
          puStack_318 = PTR_DAT_04bb2120;
          uStack_340 = (undefined4)*(undefined8 *)(param_2 + 0x10);
          uStack_33c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
          pcStack_370 = "AssetResContainer";
          if (plVar13 != (long *)0x0) {
            *(long *)(param_1 + 0x20) = *plVar13;
          }
          *(undefined1 *)(plVar13 + 1) = 1;
          *(undefined4 *)((long)plVar13 + 0xc) = 0;
          plVar13[6] = 0;
          *plVar13 = (long)puVar3;
          plVar13[4] = 0;
          plVar13[5] = 0;
          plVar13[2] = 0;
          plVar13[3] = (long)puVar4;
          if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
            *(long **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = plVar13;
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          }
          local_398 = PTR_DAT_04bb2020 + 0x10;
          local_390 = local_310;
          local_388 = puVar2;
          local_378 = puVar1;
          local_320 = puVar1;
          if ((*(byte *)(plVar13 + 1) >> 1 & 1) == 0) {
            *(undefined4 *)((long)plVar13 + 0xc) = 0;
            *(byte *)(plVar13 + 1) = *(byte *)(plVar13 + 1) & 0xf0 | 2;
            FUN_03f33f70(*(undefined8 *)PTR_DAT_04bb49b8,plVar13,&local_398,&local_388);
          }
          else {
            lVar11 = plVar13[2];
            if (lVar11 == 0) {
              puVar14 = &DAT_0406a300;
            }
            else {
              (**(code **)(*(long *)(lVar11 + 0x360) + 0x18))(lVar11 + 0x360);
              puVar14 = *(undefined **)(lVar11 + 0x368);
            }
            (**(code **)(local_398 + 0x18))(&local_398);
            FUN_0156b428(auStack_280,&DAT_0406f6e3,puVar14,local_390);
            *(undefined4 *)((long)plVar13 + 0xc) = 8;
          }
          uVar16 = uVar16 + 1;
          uVar10 = 1;
        } while (uVar16 != uVar5);
      }
    }
  }
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  return uVar10;
}

