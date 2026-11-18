
void FUN_037c7f90(long *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  char *__s2;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *local_120;
  undefined8 *puStack_118;
  undefined8 *local_110;
  undefined8 *puStack_108;
  undefined8 *local_100;
  undefined8 *puStack_f8;
  undefined8 *local_f0;
  undefined8 *puStack_e8;
  undefined8 *local_e0;
  undefined8 *puStack_d8;
  undefined8 *local_d0;
  undefined *puStack_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  undefined8 *local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  undefined4 local_78 [2];
  undefined8 **local_70;
  
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar6 = malloc(0x78);
  }
  else {
    plVar5 = param_1;
    if (param_1 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x78,8);
  }
  FUN_03be6580(pvVar6,&DAT_04079653,0x6b,param_1,0);
  puVar1 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
  uVar10 = 0;
  DAT_05acf1d0 = pvVar6;
  do {
    puStack_118 = &DAT_0407ebb1;
    if (uVar10 < 0x6b) {
      puStack_118 = *(undefined8 **)(PTR_DAT_04bb45b8 + (ulong)uVar10 * 8 + 0x388);
    }
    local_120 = puVar1;
    uVar2 = FUN_0170c240(&local_120);
    pvVar6 = DAT_05acf1d0;
    if ((int)uVar2 < 0) {
      puVar7 = (undefined8 *)(PTR_PTR_04bb2238 + 8);
LAB_037c80fc:
      __s2 = (char *)*puVar7;
    }
    else {
      __s2 = "";
      if (uVar2 < 0x75) {
        puVar7 = (undefined8 *)(PTR_DAT_04bbe030 + (ulong)uVar2 * 8 + 0x750);
        goto LAB_037c80fc;
      }
    }
    if (*__s2 != '\0') {
      local_120 = (undefined8 *)CONCAT44(local_120._4_4_,uVar10);
      uVar2 = *(uint *)((long)DAT_05acf1d0 + 0x68);
      uVar9 = (ulong)uVar2;
      puVar11 = *(undefined8 **)((long)DAT_05acf1d0 + 0x70);
      puVar7 = puVar11;
      if (0 < (int)uVar2) {
        do {
          iVar3 = strcmp((char *)*puVar7,__s2);
          if (iVar3 == 0) goto LAB_037c8088;
          uVar9 = uVar9 - 1;
          puVar7 = puVar7 + 2;
        } while (uVar9 != 0);
      }
      puVar11[(long)(int)uVar2 * 2] = __s2;
      *(uint *)(*(long *)((long)pvVar6 + 0x70) + (long)*(int *)((long)pvVar6 + 0x68) * 0x10 + 8) =
           uVar10;
      *(int *)((long)pvVar6 + 0x68) = *(int *)((long)pvVar6 + 0x68) + 1;
    }
LAB_037c8088:
    uVar2 = 0x6b;
    if ((int)uVar10 < 0x6b) {
      uVar2 = uVar10 + 1;
    }
    uVar10 = uVar2;
    if (uVar2 == 0x6b) {
      puVar1 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
      local_120 = &DAT_05acf180;
      local_110 = (undefined8 *)&DAT_04083b9a;
      puStack_108 = &DAT_05acf188;
      puStack_f8 = (undefined8 *)&DAT_04083bbf;
      local_78[0] = 2;
      puStack_118 = puVar1;
      local_100 = puVar1;
      local_70 = &local_120;
      FUN_0384d6c0(local_78,param_1);
      local_120 = &DAT_05acf140;
      local_110 = &DAT_040ad5e4;
      puStack_108 = &DAT_05acf148;
      puStack_f8 = &DAT_040c72c4;
      local_e0 = (undefined8 *)&DAT_0409e114;
      puStack_d8 = &DAT_05acf160;
      local_b0 = &DAT_040644a6;
      puStack_a8 = &DAT_05acf170;
      local_f0 = &DAT_05acf158;
      puStack_98 = &DAT_040b2a98;
      local_78[0] = 6;
      puStack_c8 = &DAT_040cc201;
      local_c0 = &DAT_05acf168;
      puStack_118 = puVar1;
      local_100 = puVar1;
      puStack_e8 = puVar1;
      local_d0 = puVar1;
      puStack_b8 = puVar1;
      local_a0 = puVar1;
      local_70 = &local_120;
      FUN_0384d240(local_78,param_1);
      puStack_118 = &DAT_040dc1d3;
      local_120 = puVar1;
      FUN_0384e1b0(&DAT_05acf178,&local_120,param_1);
      local_120 = &DAT_05acf150;
      local_110 = &DAT_040dc1ef;
      local_78[0] = 1;
      puStack_118 = puVar1;
      local_70 = &local_120;
      FUN_0384cc00(local_78,param_1);
      local_110 = &DAT_040b2ac6;
      puStack_108 = &DAT_05acf198;
      local_120 = &DAT_05acf190;
      local_c0 = &DAT_05acf1b0;
      puStack_f8 = &DAT_040d1747;
      local_b0 = (undefined8 *)&DAT_040cc201;
      puStack_a8 = &DAT_05acf1b8;
      local_e0 = &DAT_0408e940;
      puStack_d8 = &DAT_05acf1a8;
      puStack_98 = &DAT_040b7f3f;
      local_80 = &DAT_040ad609;
      local_78[0] = 7;
      local_f0 = &DAT_05acf1a0;
      puStack_c8 = &DAT_0405ee20;
      local_90 = &DAT_05acf1c0;
      puStack_118 = puVar1;
      local_100 = puVar1;
      puStack_e8 = puVar1;
      local_d0 = puVar1;
      puStack_b8 = puVar1;
      local_a0 = puVar1;
      puStack_88 = puVar1;
      local_70 = &local_120;
      FUN_0384cf20(local_78,param_1);
      puStack_118 = &DAT_040dc229;
      local_120 = puVar1;
      FUN_0384e390(&DAT_05acf1c8,&local_120,param_1);
      return;
    }
  } while( true );
}

