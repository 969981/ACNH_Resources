
uint FUN_022c96d8(byte *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 ulong param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  byte local_ac [4];
  byte local_a8 [4];
  byte local_a4 [4];
  byte local_a0 [4];
  byte local_9c [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [4];
  uint local_8c;
  undefined8 local_88;
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined8 uStack_70;
  byte local_68 [4];
  uint local_64;
  undefined *local_60;
  char *pcStack_58;
  
  bVar3 = *param_1;
  FUN_0252d8f0(&local_98);
  bVar6 = 7 < bVar3;
  if (bVar6) {
    bVar3 = 0xff;
  }
  puVar1 = (undefined4 *)(&DAT_0547bacc + ((long)(char)bVar3 & 0xffffffffU) * 4);
  if (bVar6) {
    puVar1 = (undefined4 *)&DAT_0547bacc;
  }
  *puVar1 = local_98;
  puVar1[1] = uStack_94;
  local_78 = PTR_DAT_04bb2010 + 0x10;
  uStack_70 = 0;
  if ((param_5 & 1) != 0) {
    FUN_01a5033c(auStack_80,param_6,0,param_3,&local_78);
    FUN_0124c030(&local_98,auStack_80);
    iVar7 = FUN_0123db50(auStack_90,local_88);
    puVar5 = PTR_DAT_04bb27d0;
    if ((iVar7 == 0x2e) &&
       (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2 &&
        *(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848)) {
      local_9c[0] = *param_1;
      if (7 < local_9c[0]) {
        local_9c[0] = 0xff;
      }
      uVar9 = FUN_01251760(&local_98,local_9c,&local_78,1);
      if ((uVar9 & 1) == 0) {
        bVar3 = *param_1;
        iVar7 = FUN_0123db50(auStack_90,local_88);
        if (iVar7 == 0x2e) {
          local_68[0] = bVar3;
          if (7 < bVar3) {
            local_68[0] = 0xff;
          }
          local_64 = FUN_02582fe0(local_68);
          puVar4 = PTR_DAT_04bb2020;
          if (local_64 == 0xffffffff) goto LAB_022c9944;
          local_60 = PTR_DAT_04bb2020 + 0x10;
          pcStack_58 = "TodayFortune";
          iVar7 = FUN_0274ce10(&local_64,&local_60);
          if ((iVar7 == 2) || (((byte)local_8c >> (ulong)(local_64 & 0x1f) & 1) == 0))
          goto LAB_022c9944;
          local_a0[0] = *param_1;
          if (7 < local_a0[0]) {
            local_a0[0] = 0xff;
          }
          uVar9 = FUN_01251510(&local_98,local_a0,1);
          if ((uVar9 & 1) != 0) goto LAB_022c97f0;
          local_a4[0] = *param_1;
          if (7 < local_a4[0]) {
            local_a4[0] = 0xff;
          }
          uVar9 = FUN_01251510(&local_98,local_a4,0);
          if ((uVar9 & 1) == 0) {
            uVar9 = FUN_022bc790(&local_78);
            if ((uVar9 & 1) == 0) goto LAB_022c97f0;
            uVar9 = FUN_0122449c(param_1,0);
            if ((uVar9 & 1) != 0) {
              local_60 = puVar4 + 0x10;
              pcStack_58 = "StrikeRock";
              FUN_00ad4d80(*(undefined8 *)PTR_DAT_04bb64a0,&local_60);
            }
            local_a8[0] = *param_1;
            if (7 < local_a8[0]) {
              local_a8[0] = 0xff;
            }
            FUN_01251910(&local_98,local_a8,0);
            uVar13 = 1;
            goto LAB_022c99f0;
          }
LAB_022c996c:
          uVar9 = FUN_011e32f0(&local_78);
          if ((uVar9 & 1) != 0) goto LAB_022c97f0;
        }
        else {
LAB_022c9944:
          local_ac[0] = *param_1;
          if (7 < local_ac[0]) {
            local_ac[0] = 0xff;
          }
          uVar9 = FUN_01251510(&local_98,local_ac,0);
          if ((uVar9 & 1) != 0) goto LAB_022c996c;
          uVar9 = FUN_022bc790(&local_78);
          if ((uVar9 & 1) == 0) goto LAB_022c97f0;
          uVar9 = FUN_0122449c(param_1,0);
          if ((uVar9 & 1) != 0) {
            local_60 = PTR_DAT_04bb2020 + 0x10;
            pcStack_58 = "StrikeRock";
            FUN_00ad4d80(*(undefined8 *)PTR_DAT_04bb64a0,&local_60);
          }
          iVar7 = FUN_0123db50(auStack_90,local_88);
          if (iVar7 == 0x2e) {
            uVar13 = 0;
            local_8c = local_8c | 0x200;
          }
          else {
            uVar13 = 0;
          }
LAB_022c99f0:
          FUN_011f3390(param_6,0,auStack_90,&local_78);
          FUN_011e2ef0(param_1,&local_78,uVar13);
        }
        lVar10 = **(long **)puVar5;
        bVar3 = *(byte *)(lVar10 + 0x473);
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          pbVar2 = (byte *)(lVar10 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
          if (7 < bVar3) {
            pbVar2 = (byte *)(lVar10 + 0x48);
          }
          if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar10 + 0x472) != bVar3)) {
            uVar8 = 1;
            goto LAB_022c97f4;
          }
        }
        bVar3 = *param_1;
        uVar8 = (uint)bVar3;
        bVar6 = 7 < uVar8;
        if (bVar6) {
          uVar8 = 0xffffffff;
        }
        uVar12 = (uint)bVar3;
        if (bVar6) {
          uVar12 = 0xff;
        }
        puVar11 = &DAT_0547b068 + (ulong)uVar8 * 0xc;
        if (bVar6) {
          uVar12 = 0xffffffff;
        }
        if (7 < uVar8) {
          puVar11 = &DAT_0547b068;
        }
        *(uint *)((long)puVar11 + 0xc) = uVar12;
        if (bVar3 < 8) {
          *(byte *)(puVar11 + 2) = bVar3;
        }
        *(undefined1 *)((long)puVar11 + 0x11) = 1;
        uVar8 = FUN_022b9360(puVar11,0xd,0,param_2,&local_78,param_4,1);
        goto LAB_022c97f4;
      }
    }
  }
LAB_022c97f0:
  uVar8 = 0;
LAB_022c97f4:
  return uVar8 & 1;
}

