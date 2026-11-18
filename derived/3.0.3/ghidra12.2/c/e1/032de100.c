
/* WARNING: Removing unreachable block (ram,0x032de4ec) */
/* WARNING: Removing unreachable block (ram,0x032de1b0) */
/* WARNING: Removing unreachable block (ram,0x032de180) */
/* WARNING: Removing unreachable block (ram,0x032de19c) */
/* WARNING: Removing unreachable block (ram,0x032de244) */
/* WARNING: Removing unreachable block (ram,0x032de5bc) */
/* WARNING: Removing unreachable block (ram,0x032de33c) */
/* WARNING: Removing unreachable block (ram,0x032de36c) */

void FUN_032de100(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined *puVar16;
  int iVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined *local_158;
  char *local_150;
  undefined4 local_148;
  undefined1 local_144 [127];
  undefined1 local_c5;
  undefined *local_c0;
  undefined1 *local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  long *local_98;
  undefined1 local_70;
  undefined2 local_6f;
  
  puVar1 = PTR_DAT_04bb2020;
  if (param_2[3] == 0) {
    uVar6 = *(undefined8 *)*param_2;
    *(undefined8 *)(param_1 + 0x430) = ((undefined8 *)*param_2)[1];
    *(undefined8 *)(param_1 + 0x428) = uVar6;
  }
  else {
    *(long *)(param_1 + 0x438) = param_2[3];
    local_158 = puVar1 + 0x10;
    local_150 = "Message";
    auVar19 = FUN_032dd474(*param_2,&local_158,param_2[3],1,1);
    *(undefined1 (*) [16])(param_1 + 0x428) = auVar19;
    local_158 = (undefined *)CONCAT44(local_158._4_4_,1);
    if (*(long *)(*param_2 + 8) != 0) {
      local_158 = (undefined *)CONCAT44(local_158._4_4_,1);
      *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(*param_2 + 8);
    }
  }
  if (0 < (int)param_2[2]) {
    iVar17 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bc95f0 + 0x10;
    puVar3 = PTR_DAT_04bc8e60 + 0x10;
    puVar4 = PTR_DAT_04bc8e68 + 0x10;
    puVar5 = PTR_DAT_04bc9600 + 0x10;
    do {
      iVar7 = *(int *)(param_1 + 0x88);
      if (iVar7 < 0x10) {
        *(int *)(param_1 + 0x88) = iVar7 + 1;
        *(undefined8 *)(param_1 + 8 + (long)iVar7 * 8) = 0;
      }
      iVar7 = *(int *)(param_1 + 0x410);
      if (iVar7 < 0x10) {
        *(int *)(param_1 + 0x410) = iVar7 + 1;
        puVar13 = (undefined8 *)(param_1 + 0x90 + (long)iVar7 * 0x38);
        puVar13[2] = 0;
        puVar13[3] = 0;
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[6] = PTR_DAT_04bb2120;
        puVar16 = PTR_DAT_04bc8e68 + 0x10;
        puVar13[4] = 0;
        puVar13[5] = puVar16;
      }
      local_158 = (undefined *)((ulong)local_158 & 0xffffffff00000000);
      plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x428) + 0x30))
                                 (*(long **)(param_1 + 0x428),0x110,8);
      *plVar9 = (long)puVar2;
      plVar9[1] = (long)puVar1;
      puVar16 = PTR_DAT_04bb2120;
      plVar9[6] = 0;
      *(undefined1 *)((long)plVar9 + 0x5a) = 0;
      plVar9[2] = (long)puVar16;
      plVar9[3] = 0;
      plVar9[4] = 0x20;
      plVar9[5] = (long)puVar3;
      *(undefined2 *)(plVar9 + 0xb) = 0x101;
      local_150 = "";
      local_158 = puVar4;
      FUN_032e24f4(plVar9 + 0xc,&local_158);
      plVar9[0xc] = (long)puVar5;
      iVar17 = iVar17 + 1;
      plVar9[0x21] = 0;
      plVar9[0x1b] = (long)puVar3;
      plVar9[0x1c] = 0;
      *(long **)(param_1 + 8 + (long)*(int *)(param_1 + 0x88) * 8 + -8) = plVar9;
    } while (iVar17 < (int)param_2[2]);
  }
  plVar9 = (long *)(param_1 + 0x428);
  if (*plVar9 == 0) {
    lVar18 = ((long *)*param_2)[1];
    *plVar9 = *(long *)*param_2;
    *(long *)(param_1 + 0x430) = lVar18;
  }
  local_158 = (undefined *)((ulong)local_158 & 0xffffffff00000000);
  plVar10 = (long *)(**(code **)(*(long *)*plVar9 + 0x30))((long *)*plVar9,0x110,8);
  *plVar10 = 0;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *(undefined1 *)(plVar10 + 3) = 0;
  FUN_003532e0();
  *(undefined1 **)((long)plVar10 + 0xc) = &DAT_3f8000003f800000;
  puVar1 = PTR_DAT_04bc9648;
  *(undefined2 *)(plVar10 + 1) = 0;
  *(undefined4 *)((long)plVar10 + 0x14) = 0;
  *(undefined1 *)(plVar10 + 3) = 0;
  *(undefined4 *)((long)plVar10 + 0x1c) = 0;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 7) = 0;
  *(undefined4 *)((long)plVar10 + 0x4c) = 0;
  *(undefined4 *)(plVar10 + 0xc) = 0;
  *(undefined4 *)((long)plVar10 + 0x74) = 0;
  *(undefined4 *)(plVar10 + 0x13) = 0;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[0x14] = 0;
  plVar10[0x15] = 0;
  plVar10[0x16] = 0;
  plVar10[0x17] = 0;
  plVar10[0x18] = 0;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x1e] = 0;
  plVar10[0x1f] = 0;
  plVar10[0x20] = 0;
  *(undefined8 *)((long)plVar10 + 0x106) = 0;
  plVar11 = *(long **)(param_1 + 0x420);
  *(long **)(param_1 + 0x420) = plVar10;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x10))();
  }
  puVar1 = PTR_DAT_04bd0f80;
  if (0 < (int)param_2[2]) {
    lVar18 = 0;
    puVar13 = (undefined8 *)(param_1 + 0x418);
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    puVar3 = PTR_DAT_04bc8e60 + 0x10;
    puVar4 = PTR_DAT_04bb2d88 + 0x10;
    do {
      plVar10 = (long *)(param_1 + 0x90 + lVar18 * 0x38);
      plVar11 = *(long **)(param_1 + 8 + lVar18 * 8);
      puVar16 = *(undefined **)(param_2[1] + lVar18 * 8);
      puVar5 = PTR_DAT_04bb2120;
      if (puVar16 != (undefined *)0x0) {
        puVar5 = puVar16;
      }
      plVar10[6] = (long)puVar5;
      local_98 = (long *)0x0;
      local_c5 = 0;
      local_144[0] = 0;
      lVar15 = *plVar9;
      local_a8 = 0x20;
      local_6f = 1;
      local_148 = 0x80;
      local_158 = puVar4;
      local_150 = local_144;
      local_c0 = puVar2;
      puStack_a0 = puVar3;
      uVar8 = (**(code **)(**(long **)PTR_DAT_04bc92f0 + 0x18))();
      puVar12 = &DAT_0407ebb1;
      if (uVar8 < 0xf) {
        puVar12 = (undefined8 *)(&PTR_DAT_04b1c008)[uVar8];
      }
      FUN_038d1270(&local_158,"Swkbd/message/%s/%s.msbt.szs",puVar12,puVar16);
      local_70 = 0;
      local_b8 = local_150;
      lStack_b0 = lVar15;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_c0);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 8))();
      }
      (**(code **)(*plVar11 + 0x28))(plVar11);
      local_158 = (undefined *)((ulong)local_158 & 0xffffffff00000000);
      *(long *)puVar1 = *plVar9;
      DAT_05ae78a0 = PTR_FUN_04bd0f70;
      DAT_05ae78a8 = (code *)PTR_FUN_04bd0f78;
      lVar15 = FUN_038f3e70();
      *plVar10 = lVar15;
      if (*(int *)(lVar15 + 0x24) == -1) {
        if (*(long *)(lVar15 + 0x18) != 0) goto LAB_032de624;
LAB_032de62c:
        (*DAT_05ae78a8)(lVar15);
        iVar17 = 0;
        *plVar10 = 0;
      }
      else {
        iVar17 = **(int **)(*(long *)(lVar15 + 0x18) + (long)*(int *)(lVar15 + 0x24) * 0x18);
        if (iVar17 < 0) {
LAB_032de624:
          (*DAT_05ae78a8)();
          goto LAB_032de62c;
        }
      }
      *(int *)(plVar10 + 1) = iVar17;
      plVar11 = plVar10 + 2;
      puVar12 = (undefined8 *)*puVar13;
      DAT_05ae78a0 = (undefined *)0x0;
      DAT_05ae78a8 = (code *)0x0;
      *(undefined8 *)puVar1 = 0;
      if (puVar12 == (undefined8 *)0x0) {
        *puVar13 = plVar11;
        puVar12 = puVar13;
      }
      else {
        do {
          puVar14 = puVar12;
          puVar12 = (undefined8 *)puVar14[2];
        } while ((undefined8 *)puVar14[2] != (undefined8 *)0x0);
        puVar14[2] = plVar11;
        plVar10[3] = (long)puVar14;
        puVar12 = (undefined8 *)*puVar14;
      }
      *plVar11 = (long)puVar12;
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)param_2[2]);
  }
  return;
}

