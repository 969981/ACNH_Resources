
/* WARNING: Removing unreachable block (ram,0x03384a98) */
/* WARNING: Removing unreachable block (ram,0x033847d0) */
/* WARNING: Removing unreachable block (ram,0x03384d28) */

void FUN_03384690(long param_1,long *param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined *puVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  uint uVar20;
  ulong uVar21;
  undefined *local_318;
  char *local_310;
  undefined *local_308;
  undefined *local_300;
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined4 local_2f3;
  undefined4 local_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined *local_2b0;
  char *local_2a8;
  undefined *local_2a0;
  char *pcStack_298;
  undefined *local_290;
  char *local_288;
  undefined *local_280;
  char *local_278;
  undefined8 local_270;
  undefined *puStack_268;
  undefined4 local_260;
  undefined1 local_25c;
  undefined4 local_25b;
  undefined4 local_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined *puStack_218;
  undefined *local_210;
  undefined1 local_16d;
  
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    puVar9 = malloc(0x60);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar17 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x60,8);
  }
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined8 **)(param_1 + 8) = puVar9;
  FUN_033940c8(puVar9,param_2);
  local_25c = 0;
  local_25b = 0x1010101;
  local_278 = (char *)CONCAT44(local_278._4_4_,1);
  local_250 = 0;
  uStack_248 = 0;
  local_318 = PTR_DAT_04bb2020 + 0x10;
  local_240 = 0;
  local_280 = PTR_DAT_04bdf0b0 + 0x10;
  puStack_268 = PTR_DAT_04bb2120;
  local_210 = PTR_DAT_04bb2120;
  local_260 = 0x1010100;
  local_254 = 0x2000;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  local_238 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x58);
  local_310 = "Font/Fcpx.szs";
  local_288 = "Font/FontInfo.szs";
  pcStack_298 = "Font/ScalableFont.szs";
  local_2a0 = local_318;
  local_290 = local_318;
  local_270 = local_318;
  puStack_218 = local_318;
  FUN_0081ac00(param_1 + 0x1c8,&local_318,&local_280);
  FUN_0081ac00(param_1 + 0x200,&local_290,&local_280);
  FUN_0081ac00(param_1 + 0x238,&local_2a0,&local_280);
  puVar3 = PTR_DAT_04bc9510;
  puVar18 = PTR_DAT_04bb2120;
  uVar5 = *(uint *)PTR_DAT_04bc9510;
  uVar21 = (ulong)uVar5;
  if ((int)uVar5 < 1) {
LAB_033849a0:
    puVar18 = PTR_DAT_04bb2120;
    if (uVar5 != 0) goto LAB_033849ac;
  }
  else {
    sVar1 = (ulong)uVar5 * 0x38 + 8;
    lVar17 = *(long *)PTR_DAT_04bb2698;
    if (lVar17 == 0) {
      puVar10 = malloc(sVar1);
LAB_033848bc:
      puVar18 = PTR_DAT_04bb2120;
      if (puVar10 != (ulong *)0x0) {
        uVar16 = uVar21 * 0x38 - 0x38;
        puVar11 = puVar10 + 1;
        *puVar10 = uVar21;
        puVar15 = puVar11;
        if ((uVar16 / 0x38 & 1) == 0) {
          *(undefined4 *)((long)puVar10 + 0x14) = 0;
          puVar18 = PTR_DAT_04bdf0c8;
          *(undefined1 *)(puVar10 + 2) = 1;
          puVar10[1] = (ulong)(puVar18 + 0x10);
          puVar18 = PTR_DAT_04bdf1d8;
          puVar10[5] = 0;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[3] = 0;
          puVar10[4] = (ulong)(puVar18 + 0x10);
          puVar15 = puVar10 + 8;
        }
        if (0x37 < uVar16) {
          puVar18 = PTR_DAT_04bdf0c8 + 0x10;
          puVar14 = PTR_DAT_04bdf1d8 + 0x10;
          do {
            *puVar15 = (ulong)puVar18;
            *(undefined1 *)(puVar15 + 1) = 1;
            *(undefined4 *)((long)puVar15 + 0xc) = 0;
            *(undefined1 *)(puVar15 + 8) = 1;
            *(undefined4 *)((long)puVar15 + 0x44) = 0;
            puVar15[0xd] = 0;
            puVar15[2] = 0;
            puVar15[3] = (ulong)puVar14;
            puVar15[4] = 0;
            puVar15[5] = 0;
            puVar15[6] = 0;
            puVar15[7] = (ulong)puVar18;
            puVar15[9] = 0;
            puVar15[10] = (ulong)puVar14;
            puVar15[0xb] = 0;
            puVar15[0xc] = 0;
            puVar15 = puVar15 + 0xe;
          } while (puVar15 != puVar11 + uVar21 * 7);
        }
        *(uint *)(param_1 + 0x1a8) = uVar5;
        *(ulong **)(param_1 + 0x1b0) = puVar11;
        goto LAB_033849a0;
      }
    }
    else {
      plVar8 = param_2;
      if (param_2 != (long *)0x0) {
LAB_03384894:
        puVar10 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,sVar1,8);
        goto LAB_033848bc;
      }
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar17 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) goto LAB_03384894;
    }
LAB_033849ac:
    uVar20 = 0;
    puVar14 = PTR_DAT_04bb2020 + 0x10;
    puVar19 = PTR_DAT_04bb21f8 + 0x10;
    puVar2 = PTR_DAT_04bdf0b0 + 0x10;
    do {
      local_16d = 0;
      local_270 = (undefined *)CONCAT35(local_270._5_3_,0x100);
      uVar4 = uVar20;
      if (*(uint *)puVar3 <= uVar20) {
        uVar4 = 0;
      }
      local_280 = puVar19;
      local_278 = (char *)((long)&local_270 + 4);
      FUN_038d1270(&local_280,"Layout/%s.Nin_NX_NVN.zs",
                   *(undefined8 *)(*(long *)(puVar3 + 8) + (long)(int)uVar4 * 8));
      local_310 = (char *)CONCAT44(local_310._4_4_,1);
      local_2f4 = 0;
      local_2b8 = 0;
      uStack_2b4 = 0;
      local_2ec = 0x2000;
      local_290 = (undefined *)CONCAT44(local_290._4_4_,1);
      local_2f8 = 0x1010100;
      local_2f3 = 0x1010101;
      uStack_2e8 = 0;
      uStack_2e4 = 0;
      uStack_2e0 = 0;
      uStack_2dc = 0;
      local_2d8 = 0;
      uStack_2d4 = 0;
      local_2c8 = 0;
      uStack_2c4 = 0;
      uStack_2c0 = 0;
      uStack_2bc = 0;
      lVar17 = *(long *)(param_1 + 0x1b0);
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x48);
      uVar4 = uVar20;
      if (*(uint *)(param_1 + 0x1a8) <= uVar20) {
        uVar4 = 0;
      }
      local_2d0 = (undefined4)uVar12;
      uStack_2cc = (undefined4)((ulong)uVar12 >> 0x20);
      local_2a8 = local_278;
      local_318 = puVar2;
      local_308 = puVar14;
      local_300 = puVar18;
      local_2b0 = puVar14;
      (**(code **)(local_280 + 0x18))(&local_280);
      local_288 = local_278;
      local_290 = puVar14;
      FUN_0081a630(lVar17 + (long)(int)uVar4 * 0x38,&local_290,&local_318,0);
      uVar20 = uVar20 + 1;
    } while (uVar5 != uVar20);
  }
  uVar5 = *(uint *)PTR_DAT_04bc97c0;
  uVar21 = (ulong)uVar5;
  if (0 < (int)uVar5) {
    sVar1 = (ulong)uVar5 * 0x38 + 8;
    lVar17 = *(long *)PTR_DAT_04bb2698;
    if (lVar17 == 0) {
      puVar10 = malloc(sVar1);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        param_2 = (long *)(lVar17 + 8);
        if (lVar7 != 0) {
          param_2 = (long *)(lVar7 + 0xa8);
        }
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) goto LAB_03384c58;
      }
      puVar10 = (ulong *)(**(code **)(*param_2 + 0x30))(param_2,sVar1,8);
    }
    if (puVar10 == (ulong *)0x0) goto LAB_03384c58;
    uVar16 = uVar21 * 0x38 - 0x38;
    puVar11 = puVar10 + 1;
    *puVar10 = uVar21;
    puVar15 = puVar11;
    if ((uVar16 / 0x38 & 1) == 0) {
      *(undefined4 *)((long)puVar10 + 0x14) = 0;
      puVar18 = PTR_DAT_04bdf0c8;
      *(undefined1 *)(puVar10 + 2) = 1;
      puVar10[1] = (ulong)(puVar18 + 0x10);
      puVar18 = PTR_DAT_04bdf1d8;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[3] = 0;
      puVar10[4] = (ulong)(puVar18 + 0x10);
      puVar15 = puVar10 + 8;
    }
    if (0x37 < uVar16) {
      puVar18 = PTR_DAT_04bdf0c8 + 0x10;
      puVar3 = PTR_DAT_04bdf1d8 + 0x10;
      do {
        *puVar15 = (ulong)puVar18;
        *(undefined1 *)(puVar15 + 1) = 1;
        *(undefined4 *)((long)puVar15 + 0xc) = 0;
        *(undefined1 *)(puVar15 + 8) = 1;
        *(undefined4 *)((long)puVar15 + 0x44) = 0;
        puVar15[0xd] = 0;
        puVar15[2] = 0;
        puVar15[3] = (ulong)puVar3;
        puVar15[4] = 0;
        puVar15[5] = 0;
        puVar15[6] = 0;
        puVar15[7] = (ulong)puVar18;
        puVar15[9] = 0;
        puVar15[10] = (ulong)puVar3;
        puVar15[0xb] = 0;
        puVar15[0xc] = 0;
        puVar15 = puVar15 + 0xe;
      } while (puVar15 != puVar11 + uVar21 * 7);
    }
    *(uint *)(param_1 + 0x1b8) = uVar5;
    *(ulong **)(param_1 + 0x1c0) = puVar11;
  }
  if (uVar5 == 0) {
    return;
  }
LAB_03384c58:
  uVar20 = 0;
  puVar18 = PTR_DAT_04bb2020 + 0x10;
  puVar3 = PTR_DAT_04bdf0b0 + 0x10;
  do {
    local_310 = (char *)CONCAT44(local_310._4_4_,1);
    local_2f8 = 0x1010100;
    local_2f4 = 0;
    local_2f3 = 0x1010101;
    local_300 = PTR_DAT_04bb2120;
    uStack_2bc = 0;
    local_2b8 = 0;
    uStack_2b4 = 0;
    local_280 = (undefined *)CONCAT44(local_280._4_4_,1);
    local_2ec = 0;
    uStack_2e8 = 0;
    uStack_2e4 = 0;
    uStack_2e0 = 0;
    uStack_2dc = 0;
    local_2d8 = 0;
    uStack_2d4 = 0;
    local_2c8 = 0;
    uStack_2c4 = 0;
    uStack_2c0 = 0;
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x48);
    lVar17 = *(long *)(param_1 + 0x1c0);
    local_2d0 = (undefined4)uVar12;
    uStack_2cc = (undefined4)((ulong)uVar12 >> 0x20);
    uVar4 = uVar20;
    if (*(uint *)PTR_DAT_04bc97c0 <= uVar20) {
      uVar4 = 0;
    }
    uVar21 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
    local_2a8 = *(char **)(*(long *)(PTR_DAT_04bc97c0 + 8) + uVar21);
    local_288 = *(char **)(*(long *)(PTR_DAT_04bc97c0 + 8) + uVar21);
    uVar4 = uVar20;
    if (*(uint *)(param_1 + 0x1b8) <= uVar20) {
      uVar4 = 0;
    }
    pbVar13 = (byte *)(lVar17 + (long)(int)uVar4 * 0x38 + 8);
    bVar6 = *pbVar13;
    local_318 = puVar3;
    local_308 = puVar18;
    local_2b0 = puVar18;
    local_290 = puVar18;
    if ((bVar6 >> 1 & 1) == 0) {
      lVar17 = lVar17 + (long)(int)uVar4 * 0x38;
      *pbVar13 = bVar6 & 0xf0 | 2;
      *(undefined4 *)(lVar17 + 0xc) = 0;
      FUN_03f33f70(*(undefined8 *)PTR_DAT_04bb49b8,lVar17,&local_290,&local_318);
    }
    else {
      lVar7 = *(long *)(lVar17 + (long)(int)uVar4 * 0x38 + 0x10);
      if (lVar7 == 0) {
        puVar19 = &DAT_0406a300;
        puVar14 = PTR_DAT_04bb2020 + 0x10;
      }
      else {
        (**(code **)(*(long *)(lVar7 + 0x360) + 0x18))(lVar7 + 0x360);
        puVar19 = *(undefined **)(lVar7 + 0x368);
        puVar14 = local_290;
      }
      (**(code **)(puVar14 + 0x18))(&local_290);
      FUN_0156b428(&local_280,&DAT_0406f6e3,puVar19,local_288);
      *(undefined4 *)(lVar17 + (long)(int)uVar4 * 0x38 + 0xc) = 8;
    }
    uVar20 = uVar20 + 1;
  } while (uVar5 != uVar20);
  return;
}

