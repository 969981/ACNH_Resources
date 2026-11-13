
uint FUN_01395dd4(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  byte bVar12;
  undefined1 uVar13;
  undefined2 uVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  undefined4 uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  float fVar25;
  undefined *local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined *puStack_498;
  undefined *local_490;
  undefined8 local_488;
  undefined *local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined *puStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined5 local_450;
  undefined3 uStack_44b;
  undefined5 uStack_448;
  undefined8 local_440;
  undefined4 local_438;
  undefined8 local_434;
  undefined8 local_42c;
  undefined8 local_424;
  undefined4 local_41c;
  undefined1 auStack_418 [360];
  undefined1 local_2b0;
  undefined *local_2a8;
  undefined *local_2a0;
  undefined8 local_298;
  undefined *local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined1 local_27c;
  undefined *local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined5 uStack_260;
  undefined3 local_25b;
  undefined5 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 auStack_238 [360];
  undefined4 local_d0;
  undefined1 local_cc;
  undefined4 local_c8;
  undefined2 local_c0 [2];
  uint local_bc;
  undefined *local_b8;
  undefined *puStack_b0;
  int local_a8;
  int iStack_a4;
  undefined *local_a0;
  int local_98;
  int iStack_94;
  undefined4 local_90;
  byte local_8c;
  undefined1 local_8b;
  byte local_8a;
  byte local_89;
  float local_88;
  byte local_84;
  byte local_83;
  undefined2 local_82;
  undefined1 local_80;
  undefined1 local_7f;
  
  local_bc = (uint)*(byte *)(param_2 + 10);
  local_4c0 = (undefined *)CONCAT44(local_4c0._4_4_,local_bc);
  if (local_bc == 0) {
LAB_0139613c:
    uVar20 = 1;
  }
  else {
    if (((param_3 & 1) != 0) || (*(long *)(param_1 + 0x118) == 0 && *(long *)(param_1 + 0x110) == 0)
       ) {
      local_90 = 0;
      bVar12 = *(byte *)(param_2 + 8);
      pbVar23 = (byte *)(param_2 + 0x17);
      local_8c = bVar12 & 1;
      uVar14 = *(undefined2 *)(param_2 + 0x14);
      uVar13 = *(undefined1 *)(param_2 + 0x22);
      local_8a = bVar12 >> 2 & 1;
      local_b8 = PTR_DAT_04bbc1a0 + 0x10;
      local_89 = bVar12 >> 3 & 1;
      fVar25 = (float)(int)*(short *)(param_2 + 0x20);
      local_84 = bVar12 >> 4 & 1;
      sVar15 = *(short *)(param_2 + 0xc);
      sVar16 = *(short *)(param_2 + 0xe);
      lVar24 = *(long *)PTR_DAT_04bbc218;
      local_83 = bVar12 >> 6 & 1;
      puStack_b0 = PTR_DAT_04bb2010 + 0x10;
      sVar17 = *(short *)(param_2 + 0x10);
      sVar18 = *(short *)(param_2 + 0x12);
      iVar5 = (int)sVar15;
      if (sVar17 <= sVar15) {
        iVar5 = (int)sVar17;
      }
      iVar6 = (int)sVar15;
      if (sVar15 <= sVar17) {
        iVar6 = (int)sVar17;
      }
      iVar7 = (int)sVar16;
      if (sVar18 <= sVar16) {
        iVar7 = (int)sVar18;
      }
      iVar8 = (int)sVar16;
      if (sVar16 <= sVar18) {
        iVar8 = (int)sVar18;
      }
      if ((ulong)*pbVar23 < 8) {
        puVar9 = (undefined4 *)PTR_DAT_04bb3238;
        if (*(long *)PTR_DAT_04bb4718 != 0) {
          puVar9 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)*pbVar23 * 4 + 0xde8);
        }
        local_90 = *puVar9;
      }
      uVar19 = local_90;
      local_7f = *(undefined1 *)(param_2 + 0x23);
      local_82 = *(undefined2 *)(param_2 + 0x24);
      local_80 = *(undefined1 *)(param_2 + 0x26);
      local_c0[0] = uVar14;
      local_a8 = iVar5;
      iStack_a4 = iVar7;
      local_a0 = puStack_b0;
      local_98 = iVar6;
      iStack_94 = iVar8;
      local_8b = uVar13;
      local_88 = fVar25;
      if ((param_3 & 1) != 0) {
        iVar10 = *(int *)(param_1 + 0x10);
        local_4b0 = 0;
        local_4a8 = 0;
        puVar1 = PTR_DAT_04bb2010 + 0x10;
        uVar11 = *(undefined4 *)(param_1 + 0x14);
        puVar2 = PTR_DAT_04bbc1a0 + 0x10;
        local_450 = 0;
        local_4a0 = 0xff00ffff00000000;
        uStack_44b = 0;
        uStack_448 = 0;
        local_488 = 0;
        local_4c0 = PTR_DAT_04bbc618 + 0x10;
        local_478 = 0;
        local_460 = 0;
        uStack_458 = 0;
        uStack_4b8 = 0;
        puStack_468 = PTR_DAT_04bb5cb0 + 0x10;
        local_440 = 0x40a0000040a00000;
        local_438 = 0x40a00000;
        local_41c = 0;
        local_424 = 0;
        local_42c = 0;
        local_434 = 0;
        local_470 = 0;
        puStack_498 = puVar2;
        local_490 = puVar1;
        local_480 = puVar1;
        FUN_0094f034(auStack_418);
        local_2b0 = 0;
        local_298 = 0;
        local_288 = 0;
        local_280 = 0;
        local_27c = 0;
        uStack_258 = 0;
        local_270 = 0;
        local_268 = 0;
        uStack_260 = 0;
        local_25b = 0;
        local_278 = PTR_DAT_04bb5cc0 + 0x10;
        local_250 = 0;
        local_248 = 0;
        local_240 = 0;
        local_2a8 = puVar2;
        local_2a0 = puVar1;
        local_290 = puVar1;
        FUN_0094f034(auStack_238);
        local_d0 = 0;
        local_cc = 0;
        local_c8 = 0xff000000;
        FUN_0138dd70(&local_4c0);
        local_488 = CONCAT44(iVar7,iVar5);
        local_478 = CONCAT44(iVar8,iVar6);
        local_470 = CONCAT44(fVar25,uVar19);
        local_4a8 = CONCAT44(iVar10,(uint)local_4a8 & 0xffffffe0 | (uint)local_8a |
                                    (uint)local_8c << 1 | (uint)local_84 << 3 | (uint)local_83 << 4
                                    | (uint)local_89 << 2);
        local_4a0 = CONCAT17(uVar13,CONCAT16((char)local_bc,CONCAT24(uVar14,uVar11)));
        local_c8 = CONCAT13(local_7f,(undefined3)local_c8);
        if (iVar10 - 0x1aU < 3) {
          local_c8 = CONCAT22(local_c8._2_2_,local_82);
        }
        else if (iVar10 == 0x13) {
          local_c8._0_3_ = CONCAT12(local_80,local_82);
          local_c8 = CONCAT13(local_7f,(undefined3)local_c8);
        }
        uVar20 = FUN_0138f8c0(lVar24 + 0x200,&local_4c0,pbVar23,*(undefined8 *)(param_2 + 0x18));
        FUN_0138de8c(&local_4c0);
        goto LAB_01396188;
      }
      lVar3 = param_1 + 0x108;
      FUN_0138dfc8(lVar3,local_c0);
      uVar21 = FUN_0138f8c0(lVar24 + 0x200,lVar3,pbVar23,*(undefined8 *)(param_2 + 0x18));
      if ((uVar21 & 1) != 0) {
        plVar4 = (long *)(*(int *)(lVar24 + 0x21c) + lVar3);
        lVar22 = *(long *)(lVar24 + 0x208);
        *(long **)(lVar24 + 0x208) = plVar4;
        *plVar4 = lVar22;
        plVar4[1] = lVar24 + 0x208;
        if (lVar22 != 0) {
          *(long **)(lVar22 + 8) = plVar4;
        }
        *(int *)(lVar24 + 0x218) = *(int *)(lVar24 + 0x218) + 1;
        if (((*(byte *)(param_1 + 0x120) & 1) != 0) &&
           (*(short *)PTR_DAT_04bb6298 == *(short *)(param_1 + 300))) {
          FUN_0138e1e0(lVar3);
        }
        goto LAB_0139613c;
      }
    }
    uVar20 = 0;
  }
LAB_01396188:
  return uVar20 & 1;
}

