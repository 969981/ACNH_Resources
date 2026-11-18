
/* WARNING: Removing unreachable block (ram,0x032aa418) */
/* WARNING: Removing unreachable block (ram,0x032aa798) */
/* WARNING: Removing unreachable block (ram,0x032aa64c) */

void FUN_032aa3d8(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  void *__ptr;
  undefined8 local_b0;
  undefined ***local_a8;
  undefined **local_a0;
  long *plStack_98;
  undefined *local_80;
  undefined8 *puStack_78;
  undefined *local_70;
  char *pcStack_68;
  
  local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
  plVar6 = (long *)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0x590,8);
  puVar1 = PTR_DAT_04bc8f08;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  *plVar6 = (long)(puVar1 + 0x10);
  plVar6[1] = 0;
  FUN_032ae014(plVar6 + 6);
  plVar6[0x48] = 0;
  *(undefined8 *)((long)plVar6 + 0x24d) = 0;
  plVar6[0x49] = 0;
  plVar6[0x47] = 0;
  plVar6[0x46] = 0;
  plVar6[0x45] = 0;
  plVar6[0x44] = 0;
  plVar6[0x43] = 0;
  plVar6[0x42] = 0;
  plVar6[0x41] = 0;
  plVar6[0x40] = 0;
  puVar4 = PTR_DAT_04bc8e60;
  puVar1 = PTR_DAT_04bc8e60 + 0x10;
  plVar6[0x4c] = 0;
  plVar6[0x52] = 0;
  plVar6[0x4b] = (long)puVar1;
  plVar6[0x51] = (long)puVar1;
  plVar6[0x57] = (long)puVar1;
  plVar6[0x58] = 0;
  plVar6[0x5d] = (long)puVar1;
  plVar6[0x5e] = 0;
  plVar6[99] = (long)puVar1;
  plVar6[100] = 0;
  puVar5 = PTR_DAT_04bc8f88;
  puVar1 = PTR_DAT_04bc8f88 + 0x10;
  plVar6[0x6a] = 0;
  plVar6[0x70] = 0;
  plVar6[0x76] = 0;
  plVar6[0x7c] = 0;
  plVar6[0x81] = 0;
  plVar6[0x69] = (long)puVar1;
  plVar6[0x6f] = (long)puVar1;
  plVar6[0x75] = (long)puVar1;
  plVar6[0x7b] = (long)puVar1;
  *(undefined8 *)((long)plVar6 + 0x417) = 0;
  plVar6[0x82] = 0;
  local_b0._4_4_ = (uint)((ulong)local_b0 >> 0x20);
  local_b0._0_4_ = 6;
  plVar6[0x8d] = 0;
  *(undefined4 *)(plVar6 + 0x8e) = 0;
  plVar6[0x8f] = 0;
  *(undefined1 *)(plVar6 + 0x90) = 0;
  plVar6[0x98] = 0;
  *(undefined4 *)(plVar6 + 0x99) = 0;
  plVar6[0x9a] = 0;
  *(undefined1 *)(plVar6 + 0x9b) = 0;
  plVar6[0x91] = 0;
  plVar6[0x92] = 0;
  plVar6[0x93] = 0;
  plVar6[0x94] = 0;
  plVar6[0x95] = 0;
  plVar6[0x96] = 0;
  *(undefined4 *)(plVar6 + 0x97) = 0;
  plVar6[0x84] = 0;
  plVar6[0x85] = 0;
  plVar6[0x86] = 0;
  plVar6[0x87] = 0;
  *(undefined2 *)(plVar6 + 0x4a) = 0x41;
  plVar6[0x88] = 0;
  *(undefined2 *)((long)plVar6 + 0x253) = 0x50f;
  plVar6[0x89] = 0;
  plVar6[0x8a] = 0;
  plVar6[0x8b] = 0;
  *(undefined4 *)(plVar6 + 0x8c) = 0;
  puVar1 = PTR_DAT_04bc8e70 + 0x10;
  plVar6[0x9d] = 0;
  plVar6[0x9c] = (long)puVar1;
  plVar6[0xa2] = (long)(PTR_DAT_04bc8f78 + 0x10);
  puVar1 = PTR_DAT_04bc8f80 + 0x10;
  plVar6[0xa3] = 0;
  plVar6[0xa9] = 0;
  plVar6[0xb1] = 0;
  plVar6[0xae] = 0;
  plVar6[0xaf] = 0;
  *(undefined4 *)(plVar6 + 0xb0) = 0;
  plVar6[0xa8] = (long)puVar1;
  puVar1 = PTR_DAT_04bb2698;
  __ptr = (void *)*param_1;
  *param_1 = (long)plVar6;
  if (__ptr != (void *)0x0) {
    FUN_03286c9c(__ptr);
    if (*(long *)puVar1 == 0) {
      free(__ptr);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      }
    }
  }
  *(undefined4 *)(param_3 + 0x78) = 1;
  param_1[10] = param_4;
  FUN_032873d0(*param_1,param_3);
  local_b0 = (undefined *)((ulong)local_b0._4_4_ << 0x20);
  puVar7 = (undefined8 *)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0x58,8);
  puVar7[7] = 0;
  *(undefined4 *)(puVar7 + 8) = 0;
  puVar7[9] = 0;
  *(undefined1 *)(puVar7 + 10) = 0;
  *(undefined4 *)(puVar7 + 6) = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar9 = (undefined8 *)param_1[1];
  param_1[1] = (long)puVar7;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_032c6840(puVar9);
    plVar6 = (long *)*puVar9;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[3] = 0;
    if (plVar6 != (long *)0x0) {
      lVar10 = puVar9[1];
      lVar3 = puVar9[2];
      puVar9[2] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      if ((undefined8 *)*plVar6 == puVar9) {
        *plVar6 = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar10;
      }
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x10) = lVar3;
      }
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    if (*(long *)puVar1 == 0) {
      free(puVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,puVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,puVar9);
      }
    }
  }
  *(undefined8 **)(param_1[1] + 0x18) = param_2;
  *(undefined8 *)(param_1[1] + 0x28) = *(undefined8 *)(param_3 + 8);
  lVar10 = param_1[1];
  uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0x28) + 0x18);
  FUN_032c6ccc(lVar10);
  puVar2 = PTR_DAT_04bc8e68 + 0x10;
  puStack_78 = &DAT_0407ebb1;
  local_a8 = (undefined ***)PTR_DAT_04bb2120;
  if (PTR_s_TextColor_04c4a048 != (undefined *)0x0) {
    local_a8 = (undefined ***)PTR_s_TextColor_04c4a048;
  }
  local_b0 = puVar2;
  local_80 = puVar2;
  local_70 = puVar2;
  pcStack_68 = (char *)local_a8;
  FUN_032c6e30(lVar10,uVar11,&local_b0,&local_70,1,&local_80);
  local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
  puVar7 = (undefined8 *)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0x58,8);
  puVar7[7] = 0;
  *(undefined4 *)(puVar7 + 8) = 0;
  puVar7[9] = 0;
  *(undefined1 *)(puVar7 + 10) = 0;
  *(undefined4 *)(puVar7 + 6) = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar9 = (undefined8 *)param_1[2];
  param_1[2] = (long)puVar7;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_032c6840(puVar9);
    plVar6 = (long *)*puVar9;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[3] = 0;
    if (plVar6 != (long *)0x0) {
      lVar10 = puVar9[1];
      lVar3 = puVar9[2];
      puVar9[2] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      if ((undefined8 *)*plVar6 == puVar9) {
        *plVar6 = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar10;
      }
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x10) = lVar3;
      }
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    if (*(long *)puVar1 == 0) {
      free(puVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,puVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,puVar9);
      }
    }
  }
  *(undefined8 **)(param_1[2] + 0x18) = param_2;
  *(undefined8 *)(param_1[2] + 0x28) = *(undefined8 *)(param_3 + 8);
  lVar10 = param_1[2];
  uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0x28) + 0x18);
  FUN_032c6ccc(lVar10);
  local_a8 = (undefined ***)0x40ad21d;
  pcStack_68 = "ChangeBtn";
  puStack_78 = &DAT_0407ebb1;
  local_b0 = puVar2;
  local_80 = puVar2;
  local_70 = puVar2;
  FUN_032c6e30(lVar10,uVar11,&local_b0,&local_70,1,&local_80);
  local_a8 = (undefined ***)&DAT_040c1e5f;
  local_70 = *(undefined **)(*(long *)(*param_1 + 0x20) + 0x18);
  local_b0 = puVar2;
  plVar6 = (long *)FUN_0328b6d0(&local_70,&local_b0,0);
  puVar1 = PTR_DAT_04bc6338;
  (**(code **)(*plVar6 + 0xf0))(plVar6,*(undefined8 *)(*(long *)PTR_DAT_04bc6338 + 0x68),0x40,0x40);
  (**(code **)(*plVar6 + 0x100))(plVar6,&DAT_04169358,0);
  local_a8 = (undefined ***)0x40791e2;
  local_70 = *(undefined **)(*(long *)(*param_1 + 0x20) + 0x18);
  local_b0 = puVar2;
  plVar6 = (long *)FUN_0328b6d0(&local_70,&local_b0,0);
  (**(code **)(*plVar6 + 0xf0))(plVar6,*(undefined8 *)(*(long *)puVar1 + 0x68),5,5);
  (**(code **)(*plVar6 + 0x100))(plVar6,&DAT_04169358,0);
  lVar10 = *(long *)(*(long *)(*param_1 + 0x20) + 0x18);
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
  FUN_032883c0(*param_1,0);
  lVar10 = *param_1;
  local_b0 = puVar4 + 0x10;
  local_a8 = &local_a0;
  ppuVar8 = &PTR_LAB_04b19dc8;
  local_a0 = &PTR_LAB_04b19dc8;
  plVar6 = *(long **)(lVar10 + 0x260);
  plStack_98 = param_1;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
    if (local_a8 == (undefined ***)0x0) {
      *(undefined8 *)(lVar10 + 0x260) = 0;
      goto LAB_032aaa20;
    }
    ppuVar8 = *local_a8;
  }
  uVar11 = (*(code *)ppuVar8[3])(local_a8,lVar10 + 0x268);
  *(undefined8 *)(lVar10 + 0x260) = uVar11;
  if (local_a8 != (undefined ***)0x0) {
    (*(code *)(*local_a8)[1])();
  }
LAB_032aaa20:
  lVar10 = *param_1;
  local_b0 = puVar5 + 0x10;
  local_a8 = &local_a0;
  plVar6 = *(long **)(lVar10 + 0x350);
  local_a0 = &PTR_LAB_04b19e00;
  plStack_98 = param_1;
  if ((plVar6 == (long *)0x0) ||
     ((**(code **)(*plVar6 + 8))(plVar6), local_a8 != (undefined ***)0x0)) {
    uVar11 = (*(code *)(*local_a8)[3])(local_a8,lVar10 + 0x358);
    *(undefined8 *)(lVar10 + 0x350) = uVar11;
    if (local_a8 != (undefined ***)0x0) {
      (*(code *)(*local_a8)[1])();
    }
  }
  else {
    *(undefined8 *)(lVar10 + 0x350) = 0;
  }
  lVar10 = *param_1;
  local_b0 = puVar4 + 0x10;
  local_a8 = &local_a0;
  ppuVar8 = &PTR_LAB_04b19e38;
  plVar6 = *(long **)(lVar10 + 0x290);
  local_a0 = &PTR_LAB_04b19e38;
  plStack_98 = param_1;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
    if (local_a8 == (undefined ***)0x0) {
      *(undefined8 *)(lVar10 + 0x290) = 0;
      return;
    }
    ppuVar8 = *local_a8;
  }
  uVar11 = (*(code *)ppuVar8[3])(local_a8,lVar10 + 0x298);
  *(undefined8 *)(lVar10 + 0x290) = uVar11;
  if (local_a8 != (undefined ***)0x0) {
    (*(code *)(*local_a8)[1])();
  }
  return;
}

