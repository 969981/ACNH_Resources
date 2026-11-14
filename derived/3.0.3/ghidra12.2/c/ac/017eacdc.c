
void FUN_017eacdc(void *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  char cVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  undefined4 uVar19;
  long lVar20;
  float fVar21;
  undefined8 local_154;
  float local_14c;
  undefined *local_148;
  char *pcStack_140;
  undefined8 local_138;
  char *local_130;
  undefined8 uStack_128;
  undefined *local_110;
  undefined8 *puStack_108;
  undefined4 local_100;
  undefined8 local_fc [8];
  undefined1 local_b5;
  char *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  char *local_90;
  undefined *local_88;
  char *local_80;
  char *local_78;
  undefined *local_68;
  char *local_60;
  undefined8 local_58;
  
  if ((param_2 & 1) != 0) {
    FUN_00944ce0(DAT_04cfae30 + 0x28);
  }
  puVar1 = PTR_DAT_04bb6298;
  puVar7 = PTR_DAT_04bb27c8;
  puVar2 = PTR_DAT_04bb2020;
  switch(*(undefined4 *)(DAT_05292338 + 0xe48)) {
  case 1:
    *(undefined4 *)((long)param_1 + 0x148) = 1;
    sVar5 = *(short *)puVar1;
    pvVar13 = param_1;
    if (sVar5 != -1) {
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 7 & 1) != 0) {
        local_110 = (undefined *)CONCAT44(local_110._4_4_,*(undefined4 *)((long)param_1 + 0x138));
        lVar18 = *(long *)PTR_DAT_04bb46b0;
        if (lVar18 != 0) {
          puVar16 = *(undefined8 **)(lVar18 + 0x10);
          if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
            pvVar13 = (void *)(**(code **)(*(long *)*puVar16 + 0x38))();
            if (pvVar13 != (void *)0x0) {
              pvVar13 = (void *)((long)pvVar13 + 0x70);
LAB_017e8950:
              if ((uint)local_110 < 10) {
                lVar18 = (long)pvVar13 + 0x1962d8 + ((ulong)local_110 & 0xffffffff) * 0x10d8;
                if (9 < (uint)local_110) {
                  lVar18 = (long)pvVar13 + 0x1962d8;
                }
                if (*(long **)(lVar18 + 0x28) == (long *)0x0) {
LAB_017e899c:
                  uVar17 = 1;
                }
                else {
                  puVar16 = (undefined8 *)**(long **)(lVar18 + 0x28);
                  pvVar13 = (void *)0x0;
                  if (puVar16 == (undefined8 *)0x0) goto LAB_017e899c;
                  pvVar13 = (void *)(**(code **)*puVar16)();
                  uVar17 = (uint)pvVar13 ^ 1;
                }
                sVar5 = *(short *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 8);
                if (sVar5 == 8) {
                  uVar19 = 2;
LAB_017e89c8:
                  *(undefined4 *)((long)param_1 + 0x148) = uVar19;
                }
                else if (sVar5 == 0x24) {
                  uVar19 = 3;
                  goto LAB_017e89c8;
                }
                if (((uVar17 & 1) == 0) && (*(long *)(lVar18 + 0x28) != 0)) {
                  puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8);
                  pvVar13 = (void *)0x0;
                  if (puVar16 != (undefined8 *)0x0) {
                    pvVar13 = (void *)(**(code **)*puVar16)();
                  }
                }
              }
            }
          }
          else if (puVar16 != (undefined8 *)0x0) {
            pvVar13 = (void *)0x0;
            if (((long *)puVar16[0x26] != (long *)0x0) &&
               (pvVar13 = (void *)(**(code **)(*(long *)puVar16[0x26] + 0x38))(),
               pvVar13 != (void *)0x0)) goto LAB_017e8950;
          }
        }
      }
    }
    local_80._0_4_ = (uint)(uint3)local_80;
    local_100 = 0x80;
    local_fc[0]._0_1_ = 0;
    local_110 = PTR_DAT_04bb2d88 + 0x10;
    puStack_108 = local_fc;
    if (*(uint *)((long)param_1 + 0x148) < 4) {
      puVar16 = *(undefined8 **)
                 (PTR_DAT_04bbe460 + (ulong)*(uint *)((long)param_1 + 0x148) * 8 + 0x30);
      if (local_fc == puVar16) goto LAB_017e8aa4;
    }
    else {
      puVar16 = &DAT_0407ebb1;
    }
    lVar18 = 0;
    do {
      if (*(char *)((long)puVar16 + lVar18) == '\0') {
LAB_017e8a84:
        iVar11 = (int)lVar18;
joined_r0x017e8a88:
        if (0x7f < iVar11) {
          iVar11 = 0x7f;
        }
        goto LAB_017e8a90;
      }
      if (*(char *)((long)puVar16 + lVar18 + 1) == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_017e8a84;
      }
      if (*(char *)((long)puVar16 + lVar18 + 2) == '\0') {
        iVar11 = (int)lVar18 + 2;
        goto joined_r0x017e8a88;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    iVar11 = 0;
LAB_017e8a90:
    pvVar13 = memcpy(local_fc,puVar16,(long)iVar11);
    *(undefined1 *)((long)local_fc + (long)iVar11) = 0;
LAB_017e8aa4:
    puVar7 = PTR_DAT_04bb27c8;
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    lVar18 = FUN_00947800(pvVar13,&local_110);
    puVar1 = PTR_DAT_04bbc1a0;
    puVar2 = PTR_DAT_04bb2010;
    if (lVar18 != 0) {
      local_78 = PTR_DAT_04bb2010 + 0x10;
      local_68 = PTR_DAT_04bbc1a0 + 0x10;
      local_58 = 0;
      local_60 = local_78;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_78,&local_68,0);
      if ((uVar15 & 1) != 0) {
        FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_68);
      }
    }
    local_68 = puVar1 + 0x10;
    local_60 = puVar2 + 0x10;
    local_58 = 0;
    FUN_00970be0(*(undefined8 *)(*(long *)puVar7 + 0xa8),&local_68,1);
    *(undefined4 *)((long)param_1 + 0x20) = 1;
    *(undefined8 *)((long)param_1 + 8) = 0;
    *(undefined8 *)((long)param_1 + 0x10) = 0x100000000;
    *(undefined8 *)((long)param_1 + 100) = 0x400000001;
    *(undefined8 *)((long)param_1 + 0x18) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x34) = 0;
    *(undefined8 *)((long)param_1 + 0x3c) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x44) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x4c) = 0;
    *(undefined8 *)((long)param_1 + 0x54) = 0;
    *(undefined8 *)((long)param_1 + 0x5c) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0x100000004;
    *(undefined8 *)((long)param_1 + 0x84) = 0;
    *(undefined8 *)((long)param_1 + 0x7c) = 0;
    *(undefined8 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x8c) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x94) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x9c) = 0;
    *(undefined4 *)((long)param_1 + 0xa4) = 0;
    return;
  case 2:
  case 3:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "RoomMdlFloor6x6";
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    local_88 = puVar2;
    lVar18 = FUN_00947800(param_1,&local_88);
    puVar6 = PTR_DAT_04bbc1a0;
    puVar1 = PTR_DAT_04bb2010;
    uVar15 = 0;
    if (lVar18 != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac,
                            &local_78,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    lVar20 = *(long *)puVar7;
    local_80 = "RoomMdlStairsNml";
    local_88 = puVar2;
    lVar18 = FUN_00947800(uVar15,&local_88);
    if (lVar18 != 0) {
      local_60 = puVar1 + 0x10;
      local_78 = puVar6 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac,
                            &local_78,1);
      if ((uVar15 & 1) != 0) {
        FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    *(undefined8 *)((long)param_1 + 8) = 0;
    *(undefined8 *)((long)param_1 + 0x10) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x18) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x20) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x28) = 0;
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + 0x38) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x40) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x48) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x50) = 0;
    *(undefined8 *)((long)param_1 + 0x58) = 0;
    *(undefined8 *)((long)param_1 + 0x60) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x68) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x70) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x78) = 0;
    *(undefined8 *)((long)param_1 + 0x80) = 0;
    *(undefined8 *)((long)param_1 + 0x88) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x90) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x98) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0xa0) = 0;
    return;
  case 4:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "RoomMdlFloor6x6";
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    local_88 = puVar2;
    lVar18 = FUN_00947800(param_1,&local_88);
    puVar6 = PTR_DAT_04bbc1a0;
    puVar1 = PTR_DAT_04bb2010;
    uVar15 = 0;
    if (lVar18 != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac,
                            &local_78,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    lVar20 = *(long *)puVar7;
    local_80 = "RoomMdlStairsNml";
    local_88 = puVar2;
    lVar18 = FUN_00947800(uVar15,&local_88);
    if (lVar18 != 0) {
      local_60 = puVar1 + 0x10;
      local_78 = puVar6 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0x42b40000,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac
                            ,&local_78,1);
      if ((uVar15 & 1) != 0) {
        FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    *(undefined8 *)((long)param_1 + 8) = 0;
    *(undefined8 *)((long)param_1 + 0x10) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x38) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x40) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x18) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x20) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x48) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x50) = 0;
    *(undefined8 *)((long)param_1 + 0x58) = 0;
    *(undefined8 *)((long)param_1 + 0x60) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x68) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x70) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x88) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x90) = 0x400000001;
    *(undefined8 *)((long)param_1 + 0x28) = 0;
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + 0x78) = 0;
    *(undefined8 *)((long)param_1 + 0x80) = 0;
    *(undefined8 *)((long)param_1 + 0x98) = 0x100000004;
    *(undefined8 *)((long)param_1 + 0xa0) = 0;
    return;
  case 5:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "RoomMdlFloor6x6";
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    local_88 = puVar2;
    lVar18 = FUN_00947800(param_1,&local_88);
    puVar6 = PTR_DAT_04bbc1a0;
    puVar1 = PTR_DAT_04bb2010;
    uVar15 = 0;
    if (lVar18 != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac,
                            &local_78,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    lVar20 = *(long *)puVar7;
    local_80 = "RoomMdlStairsNml";
    local_88 = puVar2;
    lVar18 = FUN_00947800(uVar15,&local_88);
    if (lVar18 != 0) {
      local_60 = puVar1 + 0x10;
      local_78 = puVar6 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0x43870000,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac
                            ,&local_78,1);
      if ((uVar15 & 1) != 0) {
        FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    *(undefined8 *)((long)param_1 + 8) = 0;
    *(undefined8 *)((long)param_1 + 0x10) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x38) = 0x400000001;
    *(undefined8 *)((long)param_1 + 0x40) = 0x100000004;
    *(undefined8 *)((long)param_1 + 0x18) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x20) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x28) = 0;
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + 0x48) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x50) = 0;
    *(undefined8 *)((long)param_1 + 0x58) = 0;
    *(undefined8 *)((long)param_1 + 0x60) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x68) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x70) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x78) = 0;
    *(undefined8 *)((long)param_1 + 0x80) = 0;
    *(undefined8 *)((long)param_1 + 0x88) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x90) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x98) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0xa0) = 0;
    return;
  default:
    FUN_017e9024(param_1);
    return;
  case 7:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_90 = "RoomMdlFloor8x8";
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    local_98 = puVar1;
    lVar18 = FUN_00947800(param_1,&local_98);
    puVar8 = PTR_DAT_04bbc1a0;
    puVar6 = PTR_DAT_04bb2010;
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = PTR_DAT_04bb2010 + 0x10;
      local_88 = PTR_DAT_04bbc1a0 + 0x10;
      local_68 = (undefined *)0x0;
      local_78 = (char *)0x0;
      local_58 = 0x2000000020;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    local_90 = "RoomMdlStairsNml";
    lVar20 = *(long *)puVar7;
    local_98 = puVar1;
    lVar18 = FUN_00947800(uVar15,&local_98);
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_78 = (char *)0x0;
      local_58 = 0x2800000020;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    local_98 = puVar2 + 0x10;
    lVar20 = *(long *)puVar7;
    local_90 = "RoomMdlStairsNml";
    lVar18 = FUN_00947800(uVar15,&local_98);
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_58 = 0x1800000020;
      local_78 = (char *)0x0;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0x43340000,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1
                           );
      if ((uVar15 & 1) != 0) {
        FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    *(undefined8 *)((long)param_1 + 8) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x10) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x18) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x20) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x28) = 1;
    *(undefined8 *)((long)param_1 + 0x30) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x38) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x40) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x48) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x50) = 1;
    *(undefined8 *)((long)param_1 + 0x58) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x60) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x68) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x70) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x78) = 1;
    *(undefined8 *)((long)param_1 + 0x80) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x88) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x90) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x98) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0xa0) = 1;
    return;
  case 8:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_90 = "RoomMdlFloor8x8";
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    local_98 = puVar1;
    lVar18 = FUN_00947800(param_1,&local_98);
    puVar8 = PTR_DAT_04bbc1a0;
    puVar6 = PTR_DAT_04bb2010;
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = PTR_DAT_04bb2010 + 0x10;
      local_88 = PTR_DAT_04bbc1a0 + 0x10;
      local_68 = (undefined *)0x0;
      local_78 = (char *)0x0;
      local_58 = 0x2000000020;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    local_90 = "RoomMdlStairsNml";
    lVar20 = *(long *)puVar7;
    local_98 = puVar1;
    lVar18 = FUN_00947800(uVar15,&local_98);
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_78 = (char *)0x0;
      local_58 = 0x2800000020;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    lVar20 = *(long *)puVar7;
    local_90 = "RoomMdlStairsNml";
    local_98 = puVar2 + 0x10;
    lVar18 = FUN_00947800(uVar15,&local_98);
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_58 = 0x1800000020;
      local_78 = (char *)0x0;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0x43340000,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1
                           );
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    lVar20 = *(long *)puVar7;
    local_90 = "RoomMdlStairsNml";
    local_98 = puVar2 + 0x10;
    lVar18 = FUN_00947800(uVar15,&local_98);
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_58 = 0x2400000018;
      local_78 = (char *)0x0;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0x43870000,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1
                           );
      if ((uVar15 & 1) != 0) {
        FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    *(undefined8 *)((long)param_1 + 8) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x10) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x18) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x20) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x28) = 1;
    *(undefined8 *)((long)param_1 + 0x30) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x38) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x40) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x48) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x50) = 1;
    *(undefined8 *)((long)param_1 + 0x58) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x60) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x68) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x70) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x78) = 1;
    *(undefined8 *)((long)param_1 + 0x80) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x88) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x90) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x98) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0xa0) = 1;
    return;
  case 9:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_90 = "RoomMdlFloor8x8";
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    local_98 = puVar1;
    lVar18 = FUN_00947800(param_1,&local_98);
    puVar8 = PTR_DAT_04bbc1a0;
    puVar6 = PTR_DAT_04bb2010;
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = PTR_DAT_04bb2010 + 0x10;
      local_88 = PTR_DAT_04bbc1a0 + 0x10;
      local_68 = (undefined *)0x0;
      local_78 = (char *)0x0;
      local_58 = 0x2000000020;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    local_90 = "RoomMdlStairsNml";
    lVar20 = *(long *)puVar7;
    local_98 = puVar1;
    lVar18 = FUN_00947800(uVar15,&local_98);
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_78 = (char *)0x0;
      local_58 = 0x2800000020;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    lVar20 = *(long *)puVar7;
    local_90 = "RoomMdlStairsNml";
    local_98 = puVar2 + 0x10;
    lVar18 = FUN_00947800(uVar15,&local_98);
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_58 = 0x1800000020;
      local_78 = (char *)0x0;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0x43340000,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1
                           );
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    lVar20 = *(long *)puVar7;
    local_90 = "RoomMdlStairsNml";
    local_98 = puVar2 + 0x10;
    lVar18 = FUN_00947800(uVar15,&local_98);
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_58 = 0x2400000018;
      local_78 = (char *)0x0;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0x43870000,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1
                           );
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    local_98 = puVar2 + 0x10;
    lVar20 = *(long *)puVar7;
    local_90 = "RoomMdlStairsNml";
    lVar18 = FUN_00947800(uVar15,&local_98);
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_58 = 0x2400000028;
      local_78 = (char *)0x0;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0x42b40000,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1
                           );
      if ((uVar15 & 1) != 0) {
        FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    *(undefined8 *)((long)param_1 + 8) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x10) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x18) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x20) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x28) = 1;
    *(undefined8 *)((long)param_1 + 0x30) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x38) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x40) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x48) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x50) = 1;
    *(undefined8 *)((long)param_1 + 0x58) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x60) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x68) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x70) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x78) = 1;
    *(undefined8 *)((long)param_1 + 0x80) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x88) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x90) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x98) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0xa0) = 1;
    return;
  case 10:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_90 = "RoomMdlFloor8x8";
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    local_98 = puVar1;
    lVar18 = FUN_00947800(param_1,&local_98);
    puVar8 = PTR_DAT_04bbc1a0;
    puVar6 = PTR_DAT_04bb2010;
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = PTR_DAT_04bb2010 + 0x10;
      local_88 = PTR_DAT_04bbc1a0 + 0x10;
      local_68 = (undefined *)0x0;
      local_78 = (char *)0x0;
      local_58 = 0x2000000020;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    local_90 = "RoomMdlStairsNmlUp";
    lVar20 = *(long *)puVar7;
    local_98 = puVar1;
    lVar18 = FUN_00947800(uVar15,&local_98);
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_78 = (char *)0x0;
      local_58 = 0x2800000020;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    lVar20 = *(long *)puVar7;
    local_90 = "RoomMdlStairsNml";
    local_98 = puVar2 + 0x10;
    lVar18 = FUN_00947800(uVar15,&local_98);
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_58 = 0x1800000020;
      local_78 = (char *)0x0;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0x43340000,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1
                           );
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    lVar20 = *(long *)puVar7;
    local_90 = "RoomMdlStairsNml";
    local_98 = puVar2 + 0x10;
    lVar18 = FUN_00947800(uVar15,&local_98);
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_58 = 0x2400000018;
      local_78 = (char *)0x0;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0x43870000,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1
                           );
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    local_98 = puVar2 + 0x10;
    lVar20 = *(long *)puVar7;
    local_90 = "RoomMdlStairsNml";
    lVar18 = FUN_00947800(uVar15,&local_98);
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_58 = 0x2400000028;
      local_78 = (char *)0x0;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0x42b40000,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1
                           );
      if ((uVar15 & 1) != 0) {
        FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    *(undefined8 *)((long)param_1 + 8) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x10) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x18) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x20) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x28) = 1;
    *(undefined8 *)((long)param_1 + 0x30) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x38) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x40) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x48) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x50) = 1;
    *(undefined8 *)((long)param_1 + 0x58) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x60) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x68) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x70) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x78) = 1;
    *(undefined8 *)((long)param_1 + 0x80) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x88) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x90) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x98) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0xa0) = 1;
    return;
  case 0xb:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_90 = "RoomMdlFloor8x8";
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    local_98 = puVar1;
    lVar18 = FUN_00947800(param_1,&local_98);
    puVar8 = PTR_DAT_04bbc1a0;
    puVar6 = PTR_DAT_04bb2010;
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = PTR_DAT_04bb2010 + 0x10;
      local_88 = PTR_DAT_04bbc1a0 + 0x10;
      local_68 = (undefined *)0x0;
      local_78 = (char *)0x0;
      local_58 = 0x2000000020;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    local_90 = "RoomMdlStairsBoth";
    lVar20 = *(long *)puVar7;
    local_98 = puVar1;
    lVar18 = FUN_00947800(uVar15,&local_98);
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_78 = (char *)0x0;
      local_58 = 0x2800000020;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    lVar20 = *(long *)puVar7;
    local_90 = "RoomMdlStairsNml";
    local_98 = puVar2 + 0x10;
    lVar18 = FUN_00947800(uVar15,&local_98);
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_58 = 0x1800000020;
      local_78 = (char *)0x0;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0x43340000,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1
                           );
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    lVar20 = *(long *)puVar7;
    local_90 = "RoomMdlStairsNml";
    local_98 = puVar2 + 0x10;
    lVar18 = FUN_00947800(uVar15,&local_98);
    uVar15 = 0;
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_58 = 0x2400000018;
      local_78 = (char *)0x0;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0x43870000,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1
                           );
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    local_98 = puVar2 + 0x10;
    lVar20 = *(long *)puVar7;
    local_90 = "RoomMdlStairsNml";
    lVar18 = FUN_00947800(uVar15,&local_98);
    if (lVar18 != 0) {
      local_80 = puVar6 + 0x10;
      local_88 = puVar8 + 0x10;
      local_68 = (undefined *)0x0;
      local_58 = 0x2400000028;
      local_78 = (char *)0x0;
      local_60 = local_80;
      uVar15 = FUN_0096cca0(0,0x42b40000,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_60,&local_88,1
                           );
      if ((uVar15 & 1) != 0) {
        FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_88);
      }
    }
    *(undefined8 *)((long)param_1 + 8) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x10) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x18) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x20) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x28) = 1;
    *(undefined8 *)((long)param_1 + 0x30) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x38) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x40) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x48) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x50) = 1;
    *(undefined8 *)((long)param_1 + 0x58) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x60) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x68) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x70) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x78) = 1;
    *(undefined8 *)((long)param_1 + 0x80) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x88) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x90) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x98) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0xa0) = 1;
    return;
  case 0xd:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "RoomMdlFloor8x8";
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    local_88 = puVar2;
    lVar18 = FUN_00947800(param_1,&local_88);
    puVar6 = PTR_DAT_04bbc1a0;
    puVar1 = PTR_DAT_04bb2010;
    uVar15 = 0;
    if (lVar18 != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac,
                            &local_78,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    lVar20 = *(long *)puVar7;
    local_80 = "RoomMdlStairsNml";
    local_88 = puVar2;
    lVar18 = FUN_00947800(uVar15,&local_88);
    if (lVar18 != 0) {
      local_60 = puVar1 + 0x10;
      local_78 = puVar6 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0x42b40000,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac
                            ,&local_78,1);
      if ((uVar15 & 1) != 0) {
        FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    *(undefined8 *)((long)param_1 + 8) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x10) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x28) = 1;
    *(undefined8 *)((long)param_1 + 0x30) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x58) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x60) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x78) = 1;
    *(undefined8 *)((long)param_1 + 0x80) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x18) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x20) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x38) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x40) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x48) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x50) = 1;
    *(undefined8 *)((long)param_1 + 0x68) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x70) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x88) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x90) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x98) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0xa0) = 1;
    return;
  case 0xe:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "RoomMdlFloor8x8";
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    local_88 = puVar2;
    lVar18 = FUN_00947800(param_1,&local_88);
    puVar6 = PTR_DAT_04bbc1a0;
    puVar1 = PTR_DAT_04bb2010;
    uVar15 = 0;
    if (lVar18 != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac,
                            &local_78,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    lVar20 = *(long *)puVar7;
    local_80 = "RoomMdlStairsNml";
    local_88 = puVar2;
    lVar18 = FUN_00947800(uVar15,&local_88);
    if (lVar18 != 0) {
      local_60 = puVar1 + 0x10;
      local_78 = puVar6 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0x43870000,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac
                            ,&local_78,1);
      if ((uVar15 & 1) != 0) {
        FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    *(undefined8 *)((long)param_1 + 8) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x10) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x28) = 1;
    *(undefined8 *)((long)param_1 + 0x30) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x58) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x60) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x78) = 1;
    *(undefined8 *)((long)param_1 + 0x80) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x18) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x20) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x38) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x40) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x48) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x50) = 1;
    *(undefined8 *)((long)param_1 + 0x68) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x70) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x88) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x90) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x98) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0xa0) = 1;
    return;
  case 0xf:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "RoomMdlFloor8x8";
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    local_88 = puVar2;
    lVar18 = FUN_00947800(param_1,&local_88);
    puVar6 = PTR_DAT_04bbc1a0;
    puVar1 = PTR_DAT_04bb2010;
    uVar15 = 0;
    if (lVar18 != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac,
                            &local_78,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    lVar20 = *(long *)puVar7;
    local_80 = "RoomMdlStairsDown";
    local_88 = puVar2;
    lVar18 = FUN_00947800(uVar15,&local_88);
    if (lVar18 != 0) {
      local_60 = puVar1 + 0x10;
      local_78 = puVar6 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac,
                            &local_78,1);
      if ((uVar15 & 1) != 0) {
        FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    *(undefined8 *)((long)param_1 + 8) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x10) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x18) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x20) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x28) = 1;
    *(undefined8 *)((long)param_1 + 0x30) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x38) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x40) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x48) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x50) = 1;
    *(undefined8 *)((long)param_1 + 0x58) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x60) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x68) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x70) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x78) = 1;
    *(undefined8 *)((long)param_1 + 0x80) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x88) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x90) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x98) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0xa0) = 1;
    return;
  case 0x10:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "RoomMdlFloor8x8";
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    local_88 = puVar2;
    lVar18 = FUN_00947800(param_1,&local_88);
    puVar6 = PTR_DAT_04bbc1a0;
    puVar1 = PTR_DAT_04bb2010;
    uVar15 = 0;
    if (lVar18 != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac,
                            &local_78,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    lVar20 = *(long *)puVar7;
    local_80 = "RoomMdlStairsUp";
    local_88 = puVar2;
    lVar18 = FUN_00947800(uVar15,&local_88);
    if (lVar18 != 0) {
      local_60 = puVar1 + 0x10;
      local_78 = puVar6 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac,
                            &local_78,1);
      if ((uVar15 & 1) != 0) {
        FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    *(undefined8 *)((long)param_1 + 8) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x10) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x18) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x20) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x28) = 1;
    *(undefined8 *)((long)param_1 + 0x30) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x38) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x40) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x48) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x50) = 1;
    *(undefined8 *)((long)param_1 + 0x58) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x60) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x68) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x70) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x78) = 1;
    *(undefined8 *)((long)param_1 + 0x80) = 0x100000000;
    *(undefined8 *)((long)param_1 + 0x88) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x90) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x98) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0xa0) = 1;
    return;
  case 0x11:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "RoomMdlFloor10x6";
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    local_88 = puVar2;
    lVar18 = FUN_00947800(param_1,&local_88);
    puVar6 = PTR_DAT_04bbc1a0;
    puVar1 = PTR_DAT_04bb2010;
    uVar15 = 0;
    if (lVar18 != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac,
                            &local_78,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    lVar20 = *(long *)puVar7;
    local_80 = "RoomMdlStairsDown";
    local_88 = puVar2;
    lVar18 = FUN_00947800(uVar15,&local_88);
    if (lVar18 != 0) {
      local_60 = puVar1 + 0x10;
      local_78 = puVar6 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac,
                            &local_78,1);
      if ((uVar15 & 1) != 0) {
        FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    *(undefined8 *)((long)param_1 + 8) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x10) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x18) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x20) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x28) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + 0x38) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x40) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x48) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x50) = 0;
    *(undefined8 *)((long)param_1 + 0x58) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x60) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x68) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x70) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x78) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x80) = 0;
    *(undefined8 *)((long)param_1 + 0x88) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x90) = 0x300000002;
    *(undefined8 *)((long)param_1 + 0x98) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0xa0) = 0;
    return;
  case 0x12:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "RoomMdlFloor10x6";
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    local_88 = puVar2;
    lVar18 = FUN_00947800(param_1,&local_88);
    puVar6 = PTR_DAT_04bbc1a0;
    puVar1 = PTR_DAT_04bb2010;
    uVar15 = 0;
    if (lVar18 != 0) {
      local_60 = PTR_DAT_04bb2010 + 0x10;
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac,
                            &local_78,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    lVar20 = *(long *)puVar7;
    local_80 = "RoomMdlStairsUp";
    local_88 = puVar2;
    lVar18 = FUN_00947800(uVar15,&local_88);
    if (lVar18 != 0) {
      local_60 = puVar1 + 0x10;
      local_78 = puVar6 + 0x10;
      local_58 = 0;
      local_68 = (undefined *)0x0;
      uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,(long)local_fc + 0xac,
                            &local_78,1);
      if ((uVar15 & 1) != 0) {
        FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_78);
      }
    }
    *(undefined8 *)((long)param_1 + 8) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x10) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x18) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x20) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x28) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + 0x38) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x40) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x48) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x50) = 0;
    *(undefined8 *)((long)param_1 + 0x58) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x60) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x68) = 0x400000004;
    *(undefined8 *)((long)param_1 + 0x70) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x78) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x80) = 0;
    *(undefined8 *)((long)param_1 + 0x88) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x90) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x98) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0xa0) = 0;
    return;
  case 0x13:
    return;
  case 0x14:
    break;
  }
  lVar18 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar18 == 0) {
    iVar11 = 4;
    iVar12 = 4;
  }
  else {
    iVar11 = *(int *)(lVar18 + 0xf64) * 2 + 4;
    iVar12 = *(int *)(lVar18 + 0xf68) * 2 + 4;
  }
  local_b5 = 0;
  pcStack_140 = (char *)((long)&local_138 + 4);
  local_138 = CONCAT35(local_138._5_3_,0x80);
  local_148 = PTR_DAT_04bb2d88 + 0x10;
  uVar14 = FUN_038d1270(&local_148,"RoomMdlFloor%dx%d",iVar11,iVar12);
  puVar2 = PTR_DAT_04bb27c8;
  lVar20 = *(long *)PTR_DAT_04bb27c8;
  lVar18 = FUN_00947800(uVar14,&local_148);
  if (lVar18 != 0) {
    local_a8 = PTR_DAT_04bb2010 + 0x10;
    local_b0 = PTR_DAT_04bbc1a0 + 0x10;
    local_90 = (char *)0x0;
    local_a0 = 0;
    local_80 = (char *)0x2000000020;
    local_98 = local_a8;
    local_88 = local_a8;
    uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_88,&local_b0,0);
    if ((uVar15 & 1) != 0) {
      FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_b0);
    }
  }
  puVar6 = PTR_DAT_04bbe4b0;
  puVar1 = PTR_DAT_04bb6298;
  puVar7 = PTR_DAT_04bb2720;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 == -1) {
LAB_017ea7e4:
    lVar18 = *(long *)PTR_DAT_04bb2720;
    iVar11 = 0;
    if (lVar18 != 0) {
      if (*(long *)(lVar18 + 0x330) == 0) {
        iVar11 = 0;
      }
      else {
        puVar16 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
        iVar10 = FUN_006bd550(*puVar16,0);
        iVar11 = 0;
        if (iVar10 == 0x758f7eaf) {
          iVar11 = 0;
          if (*(long *)puVar7 != 0) {
            lVar18 = *(long *)(*(long *)puVar7 + 0x330);
            iVar11 = 0;
            if (lVar18 != 0) {
              iVar11 = *(int *)(lVar18 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar6 + 0xcc) == iVar11) {
      FUN_016cd510();
    }
  }
  else {
    local_148 = (undefined *)CONCAT44(local_148._4_4_,0x1a);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0x1a & 1) == 0) goto LAB_017ea7e4;
    if (*(long *)PTR_DAT_04bb59d8 != 0) {
      FUN_0370d960(*(long *)PTR_DAT_04bb59d8 + 0x10,0);
    }
  }
  uVar15 = FUN_01807fd0((long)param_1 + 8,(long)param_1 + 0x30,(long)param_1 + 0x58,
                        (long)param_1 + 0x80);
  if ((uVar15 & 1) != 0) {
    return;
  }
  local_154 = 0x43200000;
  lVar18 = *(long *)puVar7;
  fVar21 = (float)(10 - iVar12) * -5.0 + 160.0 + 50.0;
  iVar11 = 0;
  local_14c = fVar21;
  if (lVar18 != 0) {
    if (*(long *)(lVar18 + 0x330) == 0) {
      iVar11 = 0;
    }
    else {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
      uVar15 = FUN_006bd550(*puVar16,0);
      iVar11 = 0;
      if ((int)uVar15 == 0x758f7eaf) {
        iVar11 = 0;
        if (*(long *)puVar7 != 0) {
          lVar18 = *(long *)(*(long *)puVar7 + 0x330);
          iVar11 = 0;
          if (lVar18 != 0) {
            iVar11 = *(int *)(lVar18 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(puVar6 + 0xb4) != iVar11) {
    lVar18 = *(long *)puVar7;
    iVar11 = 0;
    if (lVar18 != 0) {
      if (*(long *)(lVar18 + 0x330) == 0) {
        iVar11 = 0;
      }
      else {
        puVar16 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
        uVar15 = FUN_006bd550(*puVar16,0);
        iVar11 = 0;
        if ((int)uVar15 == 0x758f7eaf) {
          iVar11 = 0;
          if (*(long *)puVar7 != 0) {
            lVar18 = *(long *)(*(long *)puVar7 + 0x330);
            iVar11 = 0;
            if (lVar18 != 0) {
              iVar11 = *(int *)(lVar18 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar6 + 0xb8) != iVar11) {
      lVar18 = *(long *)puVar7;
      iVar11 = 0;
      if (lVar18 != 0) {
        if (*(long *)(lVar18 + 0x330) == 0) {
          iVar11 = 0;
        }
        else {
          puVar16 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
          uVar15 = FUN_006bd550(*puVar16,0);
          iVar11 = 0;
          if ((int)uVar15 == 0x758f7eaf) {
            iVar11 = 0;
            if (*(long *)puVar7 != 0) {
              lVar18 = *(long *)(*(long *)puVar7 + 0x330);
              iVar11 = 0;
              if (lVar18 != 0) {
                iVar11 = *(int *)(lVar18 + 0x244);
              }
            }
          }
        }
      }
      if (*(int *)(puVar6 + 0xa4) != iVar11) {
        sVar5 = *(short *)puVar1;
        if (sVar5 == -1) {
LAB_017eac08:
          lVar18 = *(long *)puVar7;
          iVar11 = 0;
          if (lVar18 != 0) {
            if (*(long *)(lVar18 + 0x330) == 0) {
              iVar11 = 0;
            }
            else {
              puVar16 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
              iVar12 = FUN_006bd550(*puVar16,0);
              iVar11 = 0;
              if (iVar12 == 0x758f7eaf) {
                iVar11 = 0;
                if (*(long *)puVar7 != 0) {
                  lVar18 = *(long *)(*(long *)puVar7 + 0x330);
                  iVar11 = 0;
                  if (lVar18 != 0) {
                    iVar11 = *(int *)(lVar18 + 0x244);
                  }
                }
              }
            }
          }
          if (*(int *)(puVar6 + 0xcc) != iVar11) goto LAB_017eaabc;
LAB_017eac7c:
          pcStack_140 = "RoomMdlStairsNml";
        }
        else {
          local_148 = (undefined *)CONCAT44(local_148._4_4_,0x19);
          puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
          if (0xff < (uint)(int)sVar5) {
            puVar3 = (uint *)PTR_DAT_04bc39f8;
          }
          if (((*puVar3 >> 0x19 & 1) == 0) ||
             (local_148 = (undefined *)CONCAT44(local_148._4_4_,7), (*puVar3 >> 7 & 1) == 0))
          goto LAB_017eac08;
          cVar4 = *(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5d);
          lVar18 = *(long *)puVar7;
          if ((lVar18 == 0) || (*(long *)(lVar18 + 0x330) == 0)) {
LAB_017eacac:
            bVar9 = true;
          }
          else {
            puVar16 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
            iVar11 = FUN_006bd550(*puVar16,0);
            if ((iVar11 != 0x758f7eaf) ||
               ((*(long *)puVar7 == 0 || (lVar18 = *(long *)(*(long *)puVar7 + 0x330), lVar18 == 0))
               )) goto LAB_017eacac;
            bVar9 = *(int *)(lVar18 + 0x248) == 0;
          }
          if (cVar4 == '\0') {
            if (!bVar9) goto LAB_017eaccc;
            goto LAB_017eac7c;
          }
          if (bVar9) {
            pcStack_140 = "RoomMdlStairsNmlUp";
          }
          else {
LAB_017eaccc:
            pcStack_140 = "RoomMdlStairsDown";
          }
        }
        local_148 = PTR_DAT_04bb2020 + 0x10;
        FUN_017e8780(0,&local_148,&local_154,1);
        goto LAB_017eaabc;
      }
    }
  }
  lVar20 = *(long *)puVar2;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "RoomMdlStairsNml";
  lVar18 = FUN_00947800(uVar15,&local_88);
  if (lVar18 != 0) {
    local_138 = 0;
    pcStack_140 = PTR_DAT_04bb2010 + 0x10;
    local_148 = PTR_DAT_04bbc1a0 + 0x10;
    uStack_128 = 0;
    local_a8 = (undefined *)
               CONCAT44(((int)((float)(int)fVar21 / 10.0) - (uint)(fVar21 < 0.0)) * 2,0x20);
    local_130 = pcStack_140;
    local_b0 = pcStack_140;
    uVar15 = FUN_0096cca0(0,0,*(undefined8 *)(lVar20 + 0xa8),lVar18,&local_b0,&local_148,1);
    if ((uVar15 & 1) != 0) {
      FUN_0096e9e0(*(undefined8 *)(lVar20 + 0xa8),&local_148);
    }
  }
LAB_017eaabc:
  FUN_0180e530(2,(long)param_1 + 8,0);
  FUN_0180e530(3,(long)param_1 + 0x30,0);
  FUN_0180e530(0,(long)param_1 + 0x58,0);
  FUN_0180e530(1,(long)param_1 + 0x80,0);
  return;
}

