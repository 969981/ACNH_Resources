
/* WARNING: Removing unreachable block (ram,0x03287fc0) */
/* WARNING: Removing unreachable block (ram,0x03287b70) */
/* WARNING: Removing unreachable block (ram,0x032881b0) */
/* WARNING: Removing unreachable block (ram,0x03287a64) */
/* WARNING: Removing unreachable block (ram,0x03287ae4) */

void FUN_032873d0(undefined **param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined **ppuVar14;
  byte *pbVar15;
  byte bVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  char *pcVar20;
  undefined **ppuVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 local_c0;
  undefined ***local_b8;
  undefined **local_b0;
  undefined **ppuStack_a8;
  code *local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 *puStack_88;
  undefined **local_80;
  undefined8 *puStack_78;
  undefined **local_70;
  char *pcStack_68;
  undefined **local_60;
  undefined ***local_58;
  
  *(undefined1 *)((long)param_1 + 0x57c) = 0xff;
  local_c0 = (undefined **)CONCAT44(local_c0._4_4_,4);
  *(ushort *)(param_1 + 0xaf) = *(ushort *)(param_1 + 0xaf) | 0x30;
  puVar2 = PTR_DAT_04bc8e68;
  puVar12 = (undefined8 *)param_2[2];
  if (puVar12 != (undefined8 *)0x0) {
    if ((char *)*puVar12 == "Inherit") {
LAB_03287494:
      local_c0 = (undefined **)(PTR_DAT_04bc8e68 + 0x10);
      local_60 = *(undefined ***)(param_2[1] + 0x18);
      local_b8 = (undefined ***)0x40eb669;
      lVar11 = FUN_032cbb30(&local_60,puVar12,&local_c0);
      lVar11 = *(long *)(lVar11 + 0xe8);
      param_2[1] = lVar11;
      puVar8 = *(undefined **)(lVar11 + 0x30);
      lVar11 = *(long *)(param_2[3] + 8);
      puVar7 = PTR_DAT_04bb2120;
      if (puVar8 != (undefined *)0x0) {
        puVar7 = puVar8;
      }
      for (; lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
        while (*(undefined **)(lVar11 + 0x20) <= puVar7) {
          if (puVar7 <= *(undefined **)(lVar11 + 0x20)) {
            lVar11 = lVar11 + 0x28;
            goto LAB_03287528;
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if (lVar11 == 0) goto LAB_0328751c;
        }
      }
LAB_0328751c:
      lVar11 = 0;
LAB_03287528:
      param_2[2] = lVar11;
    }
    else {
      uVar17 = 0;
      bVar5 = true;
      do {
        cVar3 = ((char *)*puVar12)[uVar17];
        if (cVar3 != "Inherit"[uVar17]) break;
        if (cVar3 == '\0') {
          if (bVar5) goto LAB_03287494;
          break;
        }
        bVar5 = uVar17 < 0x80000;
        uVar17 = uVar17 + 1;
      } while (uVar17 != 0x80001);
    }
  }
  param_1[4] = (undefined *)param_2[1];
  param_1[5] = (undefined *)param_2[2];
  if ((long *)param_1[0x9d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x9d] + 8))();
  }
  plVar6 = (long *)param_2[7];
  puVar7 = (undefined *)0x0;
  if (plVar6 != (long *)0x0) {
    puVar7 = (undefined *)(**(code **)(*plVar6 + 0x18))(plVar6,param_1 + 0x9e);
  }
  param_1[0x9d] = puVar7;
  iVar13 = (int)param_2[0xf];
  if (iVar13 == 0) {
    uVar17 = FUN_032866f0(param_1[5]);
    if ((uVar17 & 0xff) == 0) {
      iVar13 = 1;
    }
    else {
      iVar13 = (int)(uVar17 >> 0x20);
    }
  }
  *(char *)((long)param_1 + 0x57c) = (char)iVar13;
  local_c0 = (undefined **)(puVar2 + 0x10);
  local_60 = *(undefined ***)(param_2[1] + 0x18);
  local_b8 = (undefined ***)&DAT_040b10ce;
  puVar8 = (undefined *)FUN_0328b570(&local_60,param_2[2],&local_c0);
  puVar7 = PTR_DAT_04bc8e60;
  local_a0 = (code *)&LAB_03288a9c;
  uStack_98 = 0;
  plVar6 = (long *)param_1[100];
  ppuVar21 = &PTR_LAB_04b17a08;
  param_1[0x44] = puVar8;
  local_b8 = &local_b0;
  local_c0 = (undefined **)(puVar7 + 0x10);
  local_b0 = &PTR_LAB_04b17a08;
  ppuStack_a8 = param_1;
  if (plVar6 == (long *)0x0) {
    ppuVar14 = &PTR_LAB_04b17a08;
LAB_0328761c:
    puVar8 = (undefined *)(*(code *)ppuVar14[3])(local_b8,param_1 + 0x65);
    param_1[100] = puVar8;
    if (local_b8 != (undefined ***)0x0) {
      (*(code *)(*local_b8)[1])();
    }
  }
  else {
    (**(code **)(*plVar6 + 8))(plVar6);
    if (local_b8 != (undefined ***)0x0) {
      ppuVar14 = *local_b8;
      goto LAB_0328761c;
    }
    param_1[100] = (undefined *)0x0;
  }
  local_c0 = (undefined **)(puVar7 + 0x10);
  local_b8 = &local_b0;
  local_a0 = (code *)&LAB_03288b60;
  uStack_98 = 0;
  plVar6 = (long *)param_1[0x58];
  local_b0 = &PTR_LAB_04b17a08;
  if (plVar6 == (long *)0x0) {
    ppuVar14 = &PTR_LAB_04b17a08;
    ppuStack_a8 = param_1;
LAB_03287698:
    puVar8 = (undefined *)(*(code *)ppuVar14[3])(local_b8,param_1 + 0x59);
    param_1[0x58] = puVar8;
    if (local_b8 != (undefined ***)0x0) {
      (*(code *)(*local_b8)[1])();
    }
  }
  else {
    ppuStack_a8 = param_1;
    (**(code **)(*plVar6 + 8))(plVar6);
    if (local_b8 != (undefined ***)0x0) {
      ppuVar14 = *local_b8;
      goto LAB_03287698;
    }
    param_1[0x58] = (undefined *)0x0;
  }
  local_c0 = (undefined **)(puVar7 + 0x10);
  local_b8 = &local_b0;
  local_b0 = &PTR_LAB_04b17a08;
  local_a0 = (code *)&LAB_03288e50;
  uStack_98 = 0;
  plVar6 = (long *)param_1[0x5e];
  ppuStack_a8 = param_1;
  if (plVar6 == (long *)0x0) {
LAB_03287710:
    puVar8 = (undefined *)(*(code *)ppuVar21[3])(local_b8,param_1 + 0x5f);
    param_1[0x5e] = puVar8;
    if (local_b8 != (undefined ***)0x0) {
      (*(code *)(*local_b8)[1])();
    }
  }
  else {
    (**(code **)(*plVar6 + 8))(plVar6);
    if (local_b8 != (undefined ***)0x0) {
      ppuVar21 = *local_b8;
      goto LAB_03287710;
    }
    param_1[0x5e] = (undefined *)0x0;
  }
  local_b8 = &local_b0;
  plVar6 = (long *)param_1[0x70];
  ppuVar21 = &PTR_LAB_04b17a90;
  local_b0 = &PTR_LAB_04b17a90;
  local_a0 = (code *)&LAB_032891cc;
  uStack_98 = 0;
  local_c0 = &PTR_LAB_04b17db8;
  ppuStack_a8 = param_1;
  if (plVar6 == (long *)0x0) {
LAB_03287790:
    puVar8 = (undefined *)(*(code *)ppuVar21[3])(local_b8,param_1 + 0x71);
    param_1[0x70] = puVar8;
    if (local_b8 != (undefined ***)0x0) {
      (*(code *)(*local_b8)[1])();
    }
  }
  else {
    (**(code **)(*plVar6 + 8))(plVar6);
    if (local_b8 != (undefined ***)0x0) {
      ppuVar21 = *local_b8;
      goto LAB_03287790;
    }
    param_1[0x70] = (undefined *)0x0;
  }
  FUN_032c32a0(param_1 + 0x40,param_2[4]);
  uVar4 = *(ushort *)(param_1 + 0xaf);
  if ((uVar4 >> 7 & 1) == 0) {
    local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
    if ((uVar4 >> 4 & 1) == 0) {
      *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xfffe;
      FUN_032c2100(param_1 + 0x40);
      uVar4 = *(ushort *)(param_1 + 0xaf);
    }
    else {
      *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) | 1;
    }
    plVar6 = (long *)param_1[0xa9];
    *(ushort *)(param_1 + 0xaf) = uVar4 | 0x80;
    if (plVar6 != (long *)0x0) {
      local_b8 = (undefined ***)CONCAT35(local_b8._5_3_,0x100000007);
      local_c0 = param_1;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_c0);
    }
  }
  ppuVar21 = param_1 + 6;
  puVar18 = *ppuVar21;
  *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) | 1;
  puVar8 = (undefined *)param_2[5];
  if (puVar18 == (undefined *)0x0) {
    puVar18 = param_1[8];
    if (puVar18 != (undefined *)0x0) {
      puVar19 = param_1[9];
      goto LAB_032878d0;
    }
LAB_032878d4:
    if (param_1[9] != (undefined *)0x0) {
      *(undefined **)(param_1[9] + 0x10) = param_1[8];
    }
  }
  else {
    puVar19 = param_1[9];
    if (*(undefined ***)(puVar18 + 8) != ppuVar21) {
      puVar18 = param_1[8];
LAB_032878d0:
      *(undefined **)(puVar18 + 0x18) = puVar19;
      goto LAB_032878d4;
    }
    if (puVar19 == (undefined *)0x0) {
      *(undefined8 *)(puVar18 + 8) = 0;
    }
    else {
      *(undefined **)(puVar18 + 8) = puVar19;
      *(undefined8 *)(param_1[9] + 0x10) = 0;
    }
  }
  param_1[8] = (undefined *)0x0;
  param_1[6] = (undefined *)0x0;
  param_1[9] = (undefined *)0x0;
  if (puVar8 != (undefined *)0x0) {
    *ppuVar21 = puVar8;
    puVar18 = *(undefined **)(puVar8 + 8);
    if (*(undefined **)(puVar8 + 8) == (undefined *)0x0) {
      *(undefined ***)(puVar8 + 8) = ppuVar21;
    }
    else {
      do {
        puVar8 = puVar18;
        puVar18 = *(undefined **)(puVar8 + 0x18);
      } while (*(undefined **)(puVar8 + 0x18) != (undefined *)0x0);
      *(undefined ***)(puVar8 + 0x18) = ppuVar21;
      param_1[8] = puVar8;
    }
  }
  ppuVar21 = &PTR_LAB_04b17b18;
  *(int *)(param_1 + 0xd) = (int)param_2[0xe];
  plVar6 = (long *)param_1[0x10];
  local_b8 = &local_b0;
  local_b0 = &PTR_LAB_04b17b18;
  local_a0 = FUN_03289424;
  uStack_98 = 0;
  local_c0 = &PTR_LAB_04b17d70;
  if (plVar6 == (long *)0x0) {
    ppuVar14 = &PTR_LAB_04b17b18;
    ppuStack_a8 = param_1;
LAB_0328799c:
    puVar8 = (undefined *)(*(code *)ppuVar14[3])(local_b8,param_1 + 0x11);
    param_1[0x10] = puVar8;
    if (local_b8 != (undefined ***)0x0) {
      (*(code *)(*local_b8)[1])();
    }
  }
  else {
    ppuStack_a8 = param_1;
    (**(code **)(*plVar6 + 8))(plVar6);
    if (local_b8 != (undefined ***)0x0) {
      ppuVar14 = *local_b8;
      goto LAB_0328799c;
    }
    param_1[0x10] = (undefined *)0x0;
  }
  local_b0 = &PTR_LAB_04b17b18;
  local_b8 = &local_b0;
  local_a0 = FUN_03289440;
  uStack_98 = 0;
  plVar6 = (long *)param_1[0x22];
  local_c0 = &PTR_LAB_04b17d70;
  ppuStack_a8 = param_1;
  if (plVar6 == (long *)0x0) {
LAB_03287a0c:
    puVar8 = (undefined *)(*(code *)ppuVar21[3])(local_b8,param_1 + 0x23);
    param_1[0x22] = puVar8;
    if (local_b8 != (undefined ***)0x0) {
      (*(code *)(*local_b8)[1])();
    }
    iVar13 = *(int *)((long)param_2 + 0x74);
    puVar8 = PTR_DAT_04bc8fe8;
  }
  else {
    (**(code **)(*plVar6 + 8))(plVar6);
    if (local_b8 != (undefined ***)0x0) {
      ppuVar21 = *local_b8;
      goto LAB_03287a0c;
    }
    param_1[0x22] = (undefined *)0x0;
    iVar13 = *(int *)((long)param_2 + 0x74);
    puVar8 = PTR_DAT_04bc8fe8;
  }
  PTR_DAT_04bc8fe8 = puVar8;
  if (iVar13 == 0) goto LAB_03287ea8;
  local_c0._4_4_ = (uint)((ulong)local_c0 >> 0x20);
  if ((int)param_2[0x10] < 0) {
    local_c0 = (undefined **)((ulong)local_c0._4_4_ << 0x20);
    plVar6 = *(long **)*param_2;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x78,8);
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar6[7] = 0;
    *(undefined4 *)(plVar6 + 0xc) = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = (long)(puVar8 + 0x10);
    *(undefined1 *)(plVar6 + 0xc) = 1;
    *plVar6 = (long)(PTR_DAT_04bc9020 + 0x10);
  }
  else {
    local_c0 = (undefined **)((ulong)local_c0._4_4_ << 0x20);
    plVar6 = *(long **)*param_2;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x80,8);
    lVar11 = param_2[0x10];
    plVar6[7] = 0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *(undefined4 *)(plVar6 + 0xc) = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = (long)(puVar8 + 0x10);
    *(int *)(plVar6 + 0xf) = (int)lVar11;
    *(undefined1 *)(plVar6 + 0xc) = 1;
    *plVar6 = (long)&PTR_LAB_04b17ba0;
  }
  local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar9 = (long *)param_1[0x85];
  param_1[0x85] = (undefined *)plVar6;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
  puVar8 = (undefined *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x150,8);
  memset(puVar8,0,0x150);
  *(undefined ***)(puVar8 + 0x28) = &PTR_LAB_04b17be8;
  *(undefined ***)(puVar8 + 0x58) = &PTR_LAB_04b17be8;
  *(undefined ***)(puVar8 + 0x88) = &PTR_LAB_04b17c00;
  *(undefined ***)(puVar8 + 0xb8) = &PTR_LAB_04b17c00;
  *(undefined ***)(puVar8 + 0xe8) = &PTR_LAB_04b17c00;
  *(undefined ***)(puVar8 + 0x118) = &PTR_LAB_04b17c18;
  puVar18 = param_1[0x84];
  param_1[0x84] = puVar8;
  if (puVar18 != (undefined *)0x0) {
    FUN_0328b958();
  }
  FUN_0328e300(param_1[0x85],param_2[1],param_2[2]);
  puVar8 = param_1[0x84];
  FUN_0328eb70(puVar8);
  ppuVar21 = &PTR_LAB_04b17c30;
  local_b8 = &local_b0;
  *(undefined4 *)(puVar8 + 0x24) = *(undefined4 *)((long)param_2 + 0x74);
  local_c0 = &PTR_LAB_04b17be8;
  *(undefined **)(puVar8 + 0x18) = param_1[0x85];
  local_b0 = &PTR_LAB_04b17c30;
  local_a0 = FUN_0328945c;
  uStack_98 = 0;
  plVar6 = *(long **)(puVar8 + 0x30);
  ppuStack_a8 = param_1;
  if (plVar6 == (long *)0x0) {
LAB_03287c44:
    uVar10 = (*(code *)ppuVar21[3])(local_b8,puVar8 + 0x38);
    *(undefined8 *)(puVar8 + 0x30) = uVar10;
    if (local_b8 != (undefined ***)0x0) {
      (*(code *)(*local_b8)[1])();
    }
  }
  else {
    (**(code **)(*plVar6 + 8))(plVar6);
    if (local_b8 != (undefined ***)0x0) {
      ppuVar21 = *local_b8;
      goto LAB_03287c44;
    }
    *(undefined8 *)(puVar8 + 0x30) = 0;
  }
  ppuVar21 = &PTR_LAB_04b17cb8;
  local_b8 = &local_b0;
  local_b0 = &PTR_LAB_04b17cb8;
  local_a0 = FUN_032894c0;
  uStack_98 = 0;
  plVar6 = *(long **)(puVar8 + 0x90);
  local_c0 = &PTR_LAB_04b17c00;
  if (plVar6 == (long *)0x0) {
    ppuVar14 = &PTR_LAB_04b17cb8;
    ppuStack_a8 = param_1;
LAB_03287cc4:
    uVar10 = (*(code *)ppuVar14[3])(local_b8,puVar8 + 0x98);
    *(undefined8 *)(puVar8 + 0x90) = uVar10;
    if (local_b8 != (undefined ***)0x0) {
      (*(code *)(*local_b8)[1])();
    }
  }
  else {
    ppuStack_a8 = param_1;
    (**(code **)(*plVar6 + 8))(plVar6);
    if (local_b8 != (undefined ***)0x0) {
      ppuVar14 = *local_b8;
      goto LAB_03287cc4;
    }
    *(undefined8 *)(puVar8 + 0x90) = 0;
  }
  local_b0 = &PTR_LAB_04b17cb8;
  local_b8 = &local_b0;
  local_a0 = FUN_03289690;
  uStack_98 = 0;
  plVar6 = *(long **)(puVar8 + 0xc0);
  local_c0 = &PTR_LAB_04b17c00;
  ppuStack_a8 = param_1;
  if (plVar6 == (long *)0x0) {
LAB_03287d34:
    uVar10 = (*(code *)ppuVar21[3])(local_b8,puVar8 + 200);
    *(undefined8 *)(puVar8 + 0xc0) = uVar10;
    if (local_b8 != (undefined ***)0x0) {
      (*(code *)(*local_b8)[1])();
    }
  }
  else {
    (**(code **)(*plVar6 + 8))(plVar6);
    if (local_b8 != (undefined ***)0x0) {
      ppuVar21 = *local_b8;
      goto LAB_03287d34;
    }
    *(undefined8 *)(puVar8 + 0xc0) = 0;
  }
  local_c0 = (undefined **)CONCAT44(local_c0._4_4_,6);
  uVar4 = *(ushort *)(param_1 + 0xaf);
  if ((uVar4 >> 6 & 1) == 0) {
    puVar8 = param_1[0x84];
    puVar1 = (undefined1 *)0x0;
    if (puVar8 != (undefined *)0x0) {
      puVar1 = &LAB_0328c4c0;
    }
    if (puVar1 != (undefined1 *)0x0) {
      local_c0 = (undefined **)CONCAT44(local_c0._4_4_,2);
      if ((uVar4 >> 4 & 1) == 0) {
        puVar8[0x148] = puVar8[0x148] & 0xfb;
        if (*(long *)(puVar8 + 0x18) != 0) {
          pbVar15 = (byte *)(*(long *)(puVar8 + 0x18) + 0x60);
          bVar16 = *pbVar15 & 0xfe;
          goto LAB_03287e18;
        }
      }
      else {
        puVar8[0x148] = puVar8[0x148] | 4;
        if (*(long *)(puVar8 + 0x18) != 0) {
          pbVar15 = (byte *)(*(long *)(puVar8 + 0x18) + 0x60);
          bVar16 = *pbVar15 | 1;
LAB_03287e18:
          local_c0 = (undefined **)((ulong)local_c0._4_4_ << 0x20);
          *pbVar15 = bVar16;
        }
      }
      uVar4 = *(ushort *)(param_1 + 0xaf);
    }
    local_c0 = (undefined **)CONCAT44(local_c0._4_4_,6);
    plVar6 = (long *)param_1[0xa9];
    *(ushort *)(param_1 + 0xaf) = uVar4 | 0x40;
    if (plVar6 != (long *)0x0) {
      local_b8 = (undefined ***)CONCAT35(local_b8._5_3_,0x100000006);
      local_c0 = param_1;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_c0);
    }
  }
  plVar6 = (long *)param_1[0x84];
  if ((plVar6 != (long *)0x0) && (*plVar6 == 0)) {
    plVar9 = *(long **)PTR_DAT_04bc8fe0;
    puVar12 = (undefined8 *)*plVar9;
    if ((undefined8 *)*plVar9 == (undefined8 *)0x0) {
      *plVar9 = (long)plVar6;
    }
    else {
      do {
        puVar23 = puVar12;
        puVar12 = (undefined8 *)puVar23[2];
      } while ((undefined8 *)puVar23[2] != (undefined8 *)0x0);
      puVar23[2] = plVar6;
      plVar6[1] = (long)puVar23;
      plVar9 = (long *)*puVar23;
    }
    *plVar6 = (long)plVar9;
  }
LAB_03287ea8:
  pcVar20 = (char *)param_2[0xd];
  if (*pcVar20 != '\0') {
    ppuVar21 = (undefined **)(puVar2 + 0x10);
    local_60 = *(undefined ***)(param_1[4] + 0x18);
    local_b8 = (undefined ***)&DAT_040c1e5f;
    local_c0 = ppuVar21;
    local_90 = (undefined *)FUN_0328b6d0(&local_60,&local_c0,0);
    plVar6 = *(long **)PTR_DAT_04bc9198;
    if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
      plVar6 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
    }
    puStack_78 = *(undefined8 **)(PTR_PTR_04bb2238 + 8);
    local_80 = ppuVar21;
    local_70 = ppuVar21;
    pcStack_68 = pcVar20;
    (**(code **)(*plVar6 + 0x18))(&local_60,plVar6,&local_70,&local_80);
    local_c0 = (undefined **)(PTR_DAT_04bb8610 + 0x10);
    local_b8 = local_58;
    FUN_032d67f0(&local_90,&local_c0);
  }
  param_1[0x8b] = (undefined *)param_2[1];
  param_1[0x89] = (undefined *)*param_2;
  FUN_032c6b2c(param_1 + 0x86,5);
  local_90 = puVar2 + 0x10;
  puStack_88 = &DAT_0407ebb1;
  FUN_032c7570(param_1 + 0x86,param_2[2],&local_90);
  lVar11 = FUN_00369da0(param_2[1],&DAT_040a4215);
  if (lVar11 != 0) {
    local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
    plVar6 = (long *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x60,8);
    puVar8 = PTR_DAT_04bc9400;
    plVar6[8] = 0;
    *(undefined4 *)(plVar6 + 9) = 0;
    plVar6[10] = 0;
    *(undefined1 *)(plVar6 + 0xb) = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[6] = 0;
    *(undefined4 *)(plVar6 + 7) = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    *plVar6 = (long)(puVar8 + 0x10);
    plVar6[1] = 0;
    plVar9 = (long *)param_1[0xae];
    param_1[0xae] = (undefined *)plVar6;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))(plVar9);
      plVar6 = (long *)param_1[0xae];
    }
    local_b8 = (undefined ***)*param_2;
    local_c0 = (undefined **)param_2[1];
    FUN_032c6024(plVar6,&local_c0);
  }
  FUN_0328a0b0(param_1,6,1,1);
  *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xfdff;
  local_c0 = (undefined **)CONCAT44(local_c0._4_4_,(int)*(char *)((long)param_1 + 0x57c));
  if (*(char *)((long)param_1 + 0x57c) == 2) {
    local_c0 = (undefined **)((ulong)local_c0._4_4_ << 0x20);
    plVar6 = (long *)param_1[0xa9];
    *(ushort *)(param_1 + 0xaf) = *(ushort *)(param_1 + 0xaf) & 0xfffe;
    if (plVar6 != (long *)0x0) {
      local_b8 = (undefined ***)((ulong)local_b8 & 0xffffff0000000000);
      local_c0 = param_1;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_c0);
    }
    FUN_0328a0b0(param_1,8,1,0);
  }
  FUN_03289a60(param_1,0,1);
  lVar22 = param_2[1];
  lVar11 = FUN_0036ab80(lVar22,"UF_Cursor");
  if (((lVar11 != 0) && (puVar8 = *(undefined **)(lVar11 + 0xe8), puVar8 != (undefined *)0x0)) ||
     ((lVar11 = FUN_0036ab80(lVar22,"L_Cursor"), lVar11 != 0 &&
      ((puVar8 = *(undefined **)(lVar11 + 0xe8), puVar8 != (undefined *)0x0 &&
       (lVar11 = FUN_00369da0(puVar8,&DAT_040ba9de), lVar11 != 0)))))) {
    param_1[0x96] = puVar8;
    param_1[0x94] = (undefined *)*param_2;
    FUN_032c6ccc(param_1 + 0x91);
    local_c0 = (undefined **)(puVar2 + 0x10);
    local_b8 = (undefined ***)&DAT_040ba9de;
    local_58 = (undefined ***)&DAT_040ba9de;
    pcStack_68 = "";
    puStack_78 = &DAT_0407ebb1;
    local_80 = local_c0;
    local_70 = local_c0;
    local_60 = local_c0;
    FUN_032c7320(param_1 + 0x91,&local_c0,&local_60,&local_70,&local_80);
  }
  lVar11 = FUN_00369da0(param_2[1],&DAT_040fcedb);
  if (lVar11 != 0) {
    local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
    puVar12 = (undefined8 *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x58,8);
    puVar12[7] = 0;
    *(undefined4 *)(puVar12 + 8) = 0;
    puVar12[9] = 0;
    *(undefined1 *)(puVar12 + 10) = 0;
    *(undefined4 *)(puVar12 + 6) = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar23 = (undefined8 *)param_1[0xb1];
    param_1[0xb1] = (undefined *)puVar12;
    if (puVar23 != (undefined8 *)0x0) {
      FUN_032c6840(puVar23);
      plVar6 = (long *)*puVar23;
      puVar23[4] = 0;
      puVar23[5] = 0;
      puVar23[3] = 0;
      if (plVar6 != (long *)0x0) {
        lVar11 = puVar23[1];
        lVar22 = puVar23[2];
        puVar23[2] = 0;
        *puVar23 = 0;
        puVar23[1] = 0;
        if ((undefined8 *)*plVar6 == puVar23) {
          *plVar6 = lVar22;
        }
        if (lVar22 != 0) {
          *(long *)(lVar22 + 8) = lVar11;
        }
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x10) = lVar22;
        }
      }
      puVar23[1] = 0;
      puVar23[2] = 0;
      *puVar23 = 0;
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(puVar23);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,puVar23);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,puVar23);
        }
      }
      puVar12 = (undefined8 *)param_1[0xb1];
    }
    puVar12[5] = param_2[1];
    *(long *)(param_1[0xb1] + 0x18) = *param_2;
    puVar8 = param_1[0xb1];
    FUN_032c6ccc(puVar8);
    local_c0 = (undefined **)(puVar2 + 0x10);
    local_b8 = (undefined ***)&DAT_040fcedb;
    local_58 = (undefined ***)&DAT_040fcedb;
    pcStack_68 = "";
    puStack_78 = &DAT_0407ebb1;
    local_80 = local_c0;
    local_70 = local_c0;
    local_60 = local_c0;
    FUN_032c7320(puVar8,&local_c0,&local_60,&local_70,&local_80);
  }
  if (*(char *)((long)param_2 + 0x7c) != '\0') {
    ppuVar21 = param_1 + 1;
    if (*ppuVar21 == (undefined *)0x0) {
      puVar23 = *(undefined8 **)PTR_DAT_04bc8f70;
      puVar12 = (undefined8 *)*puVar23;
      if ((undefined8 *)*puVar23 == (undefined8 *)0x0) {
        *puVar23 = ppuVar21;
      }
      else {
        do {
          puVar23 = puVar12;
          puVar12 = (undefined8 *)puVar23[2];
        } while ((undefined8 *)puVar23[2] != (undefined8 *)0x0);
        puVar23[2] = ppuVar21;
        param_1[2] = (undefined *)puVar23;
        puVar23 = (undefined8 *)*puVar23;
      }
      *ppuVar21 = (undefined *)puVar23;
    }
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  puVar1 = (undefined1 *)0x0;
  if (param_1[0xae] != (undefined *)0x0) {
    puVar1 = &LAB_0328ba6c;
  }
  if (puVar1 != (undefined1 *)0x0) {
    FUN_032883c0(param_1,0);
  }
  puVar2 = (undefined *)0x0;
  if (param_1[0xb1] != (undefined *)0x0) {
    puVar2 = PTR_LAB_04bc8ef8;
  }
  if (puVar2 != (undefined *)0x0) {
    local_c0 = (undefined **)(puVar7 + 0x10);
    local_b8 = (undefined ***)0x0;
    FUN_032c7c30(param_1[0xb1],0,0,&local_c0,0,0);
    if (local_b8 != (undefined ***)0x0) {
      (*(code *)(*local_b8)[1])();
    }
  }
  FUN_03288880(param_1);
  return;
}

