
/* WARNING: Removing unreachable block (ram,0x02b0dd4c) */
/* WARNING: Removing unreachable block (ram,0x02b0dd1c) */
/* WARNING: Removing unreachable block (ram,0x02b0dd2c) */
/* WARNING: Removing unreachable block (ram,0x02b0dd5c) */

void FUN_02b0d7f4(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long local_70;
  undefined4 local_68;
  
  puVar6 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    plVar12 = malloc(0x728);
  }
  else {
    plVar12 = (long *)*param_2;
    if (plVar12 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar14 + 8);
      if (lVar13 != 0) {
        plVar12 = (long *)(lVar13 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)0x0;
        goto LAB_02b0d884;
      }
    }
    plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x728,8);
  }
LAB_02b0d884:
  puVar1 = PTR_DAT_04bc4958;
  puVar10 = PTR_DAT_04bc4568;
  puVar8 = PTR_DAT_04bb3238;
  *(undefined4 *)(plVar12 + 4) = 0;
  uVar7 = *(undefined4 *)puVar8;
  *plVar12 = (long)(puVar1 + 0x10);
  plVar12[2] = (long)(puVar10 + 0x10);
  plVar12[3] = 0;
  puVar5 = PTR_DAT_04bbc1a0;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  plVar12[5] = (long)puVar1;
  plVar12[6] = (long)puVar2;
  puVar9 = PTR_DAT_04bbc5d8;
  plVar12[7] = 0;
  plVar12[8] = (long)puVar2;
  *(undefined4 *)(plVar12 + 1) = uVar7;
  *(undefined4 *)((long)plVar12 + 0xc) = 0;
  plVar12[9] = 0;
  plVar12[10] = (long)(puVar9 + 0x10);
  puVar4 = PTR_DAT_04bb2018;
  plVar12[0xf] = (long)puVar1;
  plVar12[0x10] = (long)puVar2;
  plVar12[0x11] = 0;
  plVar12[0x12] = (long)puVar2;
  plVar12[0x13] = 0;
  plVar12[0x14] = (long)puVar1;
  plVar12[0x15] = (long)puVar2;
  plVar12[0x16] = 0;
  plVar12[0x17] = (long)puVar2;
  plVar12[0x18] = 0;
  plVar12[0xb] = (long)(puVar4 + 0x10);
  plVar12[0xc] = 0;
  plVar12[0xd] = (long)(puVar4 + 0x10);
  plVar12[0xe] = 0;
  FUN_02ad636c(plVar12 + 0x19);
  *(long **)(param_1 + 0x20) = plVar12;
  lVar14 = *(long *)puVar6;
  if (lVar14 == 0) {
    plVar12 = malloc(0x730);
  }
  else {
    plVar12 = (long *)*param_2;
    if (plVar12 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar14 + 8);
      if (lVar13 != 0) {
        plVar12 = (long *)(lVar13 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)0x0;
        goto LAB_02b0d97c;
      }
    }
    plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x730,8);
  }
LAB_02b0d97c:
  *(undefined4 *)(plVar12 + 4) = 0;
  puVar3 = PTR_DAT_04bc4970;
  plVar12[2] = (long)(puVar10 + 0x10);
  plVar12[3] = 0;
  puVar2 = PTR_DAT_04bb2010;
  puVar1 = puVar5 + 0x10;
  *(undefined4 *)(plVar12 + 1) = *(undefined4 *)puVar8;
  *(undefined4 *)((long)plVar12 + 0xc) = 0;
  plVar12[0x13] = 0;
  plVar12[0x14] = (long)puVar1;
  puVar2 = puVar2 + 0x10;
  *plVar12 = (long)(puVar3 + 0x10);
  plVar12[9] = 0;
  plVar12[10] = (long)(puVar9 + 0x10);
  plVar12[5] = (long)puVar1;
  plVar12[6] = (long)puVar2;
  plVar12[7] = 0;
  plVar12[8] = (long)puVar2;
  plVar12[0xb] = (long)(puVar4 + 0x10);
  plVar12[0xc] = 0;
  plVar12[0xd] = (long)(puVar4 + 0x10);
  plVar12[0xe] = 0;
  plVar12[0xf] = (long)puVar1;
  plVar12[0x10] = (long)puVar2;
  plVar12[0x11] = 0;
  plVar12[0x12] = (long)puVar2;
  plVar12[0x15] = (long)puVar2;
  plVar12[0x16] = 0;
  plVar12[0x17] = (long)puVar2;
  plVar12[0x18] = 0;
  FUN_02ad636c(plVar12 + 0x19);
  *(undefined4 *)(plVar12 + 0xe5) = *(undefined4 *)puVar8;
  *(long **)(param_1 + 0x10) = plVar12;
  lVar14 = *(long *)puVar6;
  if (lVar14 == 0) {
    plVar12 = malloc(0x738);
  }
  else {
    plVar12 = (long *)*param_2;
    if (plVar12 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar14 + 8);
      if (lVar13 != 0) {
        plVar12 = (long *)(lVar13 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)0x0;
        goto LAB_02b0da54;
      }
    }
    plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x738,8);
  }
LAB_02b0da54:
  *(undefined1 *)((long)plVar12 + 0xc) = 0;
  puVar3 = PTR_DAT_04bc4968;
  uVar7 = *(undefined4 *)puVar8;
  *(undefined4 *)(plVar12 + 2) = 0;
  *(undefined4 *)(plVar12 + 5) = 0;
  puVar1 = puVar5 + 0x10;
  *(undefined4 *)(plVar12 + 1) = uVar7;
  puVar2 = PTR_DAT_04bb2010;
  *plVar12 = (long)(puVar3 + 0x10);
  plVar12[3] = (long)(puVar10 + 0x10);
  plVar12[4] = 0;
  puVar2 = puVar2 + 0x10;
  plVar12[10] = 0;
  plVar12[0xb] = (long)(puVar9 + 0x10);
  plVar12[0xc] = (long)(puVar4 + 0x10);
  plVar12[0xd] = 0;
  plVar12[0xe] = (long)(puVar4 + 0x10);
  plVar12[0xf] = 0;
  plVar12[0x14] = 0;
  plVar12[0x15] = (long)puVar1;
  plVar12[6] = (long)puVar1;
  plVar12[7] = (long)puVar2;
  plVar12[8] = 0;
  plVar12[9] = (long)puVar2;
  plVar12[0x10] = (long)puVar1;
  plVar12[0x11] = (long)puVar2;
  plVar12[0x12] = 0;
  plVar12[0x13] = (long)puVar2;
  plVar12[0x16] = (long)puVar2;
  plVar12[0x17] = 0;
  plVar12[0x18] = (long)puVar2;
  plVar12[0x19] = 0;
  FUN_02ad636c(plVar12 + 0x1a);
  lVar14 = *(long *)puVar6;
  *(undefined4 *)(plVar12 + 0xe6) = 0;
  *(long **)(param_1 + 0x18) = plVar12;
  if (lVar14 == 0) {
    plVar12 = malloc(0x750);
  }
  else {
    plVar12 = (long *)*param_2;
    if (plVar12 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar14 + 8);
      if (lVar13 != 0) {
        plVar12 = (long *)(lVar13 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)0x0;
        goto LAB_02b0db34;
      }
    }
    plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x750,8);
  }
LAB_02b0db34:
  uVar7 = *(undefined4 *)puVar8;
  *(undefined8 *)((long)plVar12 + 0xc) = 0;
  *(undefined4 *)(plVar12 + 5) = 0;
  puVar11 = PTR_DAT_04bc4948;
  puVar1 = puVar5 + 0x10;
  puVar2 = puVar4 + 0x10;
  *(undefined4 *)(plVar12 + 1) = uVar7;
  puVar3 = PTR_DAT_04bb2010;
  plVar12[3] = (long)(puVar10 + 0x10);
  plVar12[4] = 0;
  plVar12[0xc] = (long)puVar2;
  plVar12[0xd] = 0;
  puVar3 = puVar3 + 0x10;
  *plVar12 = (long)(puVar11 + 0x10);
  plVar12[10] = 0;
  plVar12[0xb] = (long)(puVar9 + 0x10);
  plVar12[0xe] = (long)puVar2;
  plVar12[0xf] = 0;
  plVar12[0x14] = 0;
  plVar12[0x15] = (long)puVar1;
  plVar12[6] = (long)puVar1;
  plVar12[7] = (long)puVar3;
  plVar12[8] = 0;
  plVar12[9] = (long)puVar3;
  plVar12[0x10] = (long)puVar1;
  plVar12[0x11] = (long)puVar3;
  plVar12[0x12] = 0;
  plVar12[0x13] = (long)puVar3;
  plVar12[0x16] = (long)puVar3;
  plVar12[0x17] = 0;
  plVar12[0x18] = (long)puVar3;
  plVar12[0x19] = 0;
  FUN_02ad636c(plVar12 + 0x1a);
  plVar12[0xe6] = (long)puVar2;
  lVar14 = *(long *)puVar6;
  plVar12[0xe7] = 0;
  *(undefined4 *)(plVar12 + 0xe8) = 0;
  *(undefined2 *)((long)plVar12 + 0x744) = 0;
  plVar12[0xe9] = 0;
  *(long **)(param_1 + 0x28) = plVar12;
  if (lVar14 == 0) {
    plVar12 = malloc(0x760);
  }
  else {
    plVar12 = (long *)*param_2;
    if (plVar12 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar14 + 8);
      if (lVar13 != 0) {
        plVar12 = (long *)(lVar13 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)0x0;
        goto LAB_02b0dc1c;
      }
    }
    plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x760,8);
  }
LAB_02b0dc1c:
  puVar4 = puVar4 + 0x10;
  uVar7 = *(undefined4 *)puVar8;
  plVar12[2] = (long)puVar4;
  plVar12[3] = 0;
  puVar6 = PTR_DAT_04bc4988;
  *(undefined4 *)(plVar12 + 6) = 0;
  plVar12[4] = (long)(puVar10 + 0x10);
  plVar12[5] = 0;
  *(undefined4 *)(plVar12 + 1) = uVar7;
  *(undefined4 *)((long)plVar12 + 0xc) = 2;
  *plVar12 = (long)(puVar6 + 0x10);
  puVar6 = PTR_DAT_04bb2010;
  puVar5 = puVar5 + 0x10;
  plVar12[0xb] = 0;
  plVar12[0xc] = (long)(puVar9 + 0x10);
  puVar6 = puVar6 + 0x10;
  plVar12[0xd] = (long)puVar4;
  plVar12[0xe] = 0;
  plVar12[0xf] = (long)puVar4;
  plVar12[0x10] = 0;
  plVar12[0x15] = 0;
  plVar12[0x16] = (long)puVar5;
  plVar12[7] = (long)puVar5;
  plVar12[8] = (long)puVar6;
  plVar12[9] = 0;
  plVar12[10] = (long)puVar6;
  plVar12[0x11] = (long)puVar5;
  plVar12[0x12] = (long)puVar6;
  plVar12[0x13] = 0;
  plVar12[0x14] = (long)puVar6;
  plVar12[0x17] = (long)puVar6;
  plVar12[0x18] = 0;
  plVar12[0x19] = (long)puVar6;
  plVar12[0x1a] = 0;
  FUN_02ad636c(plVar12 + 0x1b);
  plVar12[0xe7] = 0x400000000;
  *(undefined4 *)(plVar12 + 0xeb) = 4;
  plVar12[0xe8] = 0x400000004;
  plVar12[0xe9] = 0x400000004;
  plVar12[0xea] = 0x400000004;
  *(long **)(param_1 + 0x30) = plVar12;
  *(undefined1 *)(param_1 + 0x44) = 0;
  local_70 = *param_2;
  local_68 = 400;
  FUN_0131f190(param_1 + 0x50,&local_70);
  local_70 = *param_2;
  local_68 = 0x1e4;
  FUN_012f10d0(param_1 + 0x80,&local_70);
  local_70 = *param_2;
  FUN_0130f8f8(param_1 + 0xb0,&local_70);
  lVar14 = *(long *)PTR_DAT_04bb27a8;
  lVar13 = *(long *)(lVar14 + 0x1f8);
  if (lVar13 != 0) {
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar13 + 0xc0);
  }
  lVar14 = *(long *)(lVar14 + 0x1f8);
  if (lVar14 != 0) {
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar14 + 0xa8);
  }
  return;
}

