
void FUN_0097fde0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  int *piVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined *local_100;
  char *pcStack_f8;
  undefined4 local_f0;
  char local_ec [8];
  char local_e4 [4];
  undefined1 local_e0;
  undefined1 local_6d;
  undefined4 local_68;
  
  local_100 = PTR_DAT_04bb2020 + 0x10;
  pcStack_f8 = &DAT_040f3f38;
  uVar7 = FUN_038c6d48(0x2000,&local_100,param_2,8,1,0);
  puVar1 = PTR_DAT_04bb2d88;
  uVar4 = s_invalid_name_040e8f53._8_4_;
  uVar2 = s_invalid_name_040e8f53._0_8_;
  local_6d = 0;
  local_e0 = 0;
  *(undefined8 *)(param_1 + 0x628) = uVar7;
  uVar5 = s_invalid_name_040e8f53._8_4_;
  uVar3 = s_invalid_name_040e8f53._0_8_;
  local_f0 = 0x80;
  pcStack_f8 = local_ec;
  local_100 = puVar1 + 0x10;
  plVar9 = (long *)(param_1 + 8);
  s_invalid_name_040e8f53[0] = (char)uVar2;
  s_invalid_name_040e8f53[1] = SUB81(uVar2,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar2,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar2,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar2,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar2,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar2,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar2,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar4;
  s_invalid_name_040e8f53[9] = SUB41(uVar4,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar4,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar4,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._0_8_ = uVar3;
  s_invalid_name_040e8f53._8_4_ = uVar5;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar8 = FUN_03853d00(plVar9,&local_100);
  if ((uVar8 & 1) != 0) {
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_100,uVar7);
  }
  puVar6 = PTR_DAT_04bb2698;
  iVar12 = *(int *)(param_1 + 0x1c8);
  if (iVar12 < 1) {
    if ((*(long *)(param_1 + 0xb8) != 0) &&
       (piVar13 = *(int **)(*(long *)(param_1 + 0xb8) + 8), piVar13 != (int *)0x0)) {
      iVar12 = *piVar13;
      goto LAB_0097fed0;
    }
    uVar8 = 3;
LAB_0097fefc:
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 == 0) {
      puVar11 = malloc(uVar8 << 4);
    }
    else {
      plVar9 = *(long **)(param_1 + 0x628);
      if (plVar9 == (long *)0x0) {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar9 = (long *)(lVar15 + 8);
        if (lVar10 != 0) {
          plVar9 = (long *)(lVar10 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_0097ffac;
      }
      puVar11 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar8 << 4,8);
    }
    if (puVar11 != (undefined8 *)0x0) {
      puVar14 = puVar11;
      if ((uVar8 & 1) != 0) {
        *puVar11 = 0;
        puVar11[1] = 0x3f80000000000000;
        puVar14 = puVar11 + 2;
      }
      if ((uVar8 - 1 & 0xfffffffffffffff) != 0) {
        do {
          *puVar14 = 0;
          puVar14[1] = 0x3f80000000000000;
          puVar14[2] = 0;
          puVar14[3] = 0x3f80000000000000;
          puVar14 = puVar14 + 4;
        } while (puVar14 != puVar11 + uVar8 * 2);
      }
      *(int *)(param_1 + 0x608) = (int)uVar8;
      *(undefined8 **)(param_1 + 0x610) = puVar11;
    }
  }
  else {
LAB_0097fed0:
    uVar8 = (ulong)(iVar12 + 3U);
    if (0 < (int)(iVar12 + 3U)) goto LAB_0097fefc;
  }
LAB_0097ffac:
  iVar12 = *(int *)(param_1 + 0x1c8);
  if (iVar12 < 1) {
    if ((*(long *)(param_1 + 0xb8) != 0) &&
       (piVar13 = *(int **)(*(long *)(param_1 + 0xb8) + 8), piVar13 != (int *)0x0)) {
      iVar12 = *piVar13;
      goto LAB_0097ffb8;
    }
    uVar8 = 3;
  }
  else {
LAB_0097ffb8:
    uVar8 = (ulong)(iVar12 + 3U);
    if ((int)(iVar12 + 3U) < 1) goto LAB_0098009c;
  }
  lVar15 = *(long *)puVar6;
  if (lVar15 == 0) {
    puVar11 = malloc(uVar8 << 4);
  }
  else {
    plVar9 = *(long **)(param_1 + 0x628);
    if (plVar9 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar15 + 8);
      if (lVar10 != 0) {
        plVar9 = (long *)(lVar10 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) goto LAB_0098009c;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar8 << 4,8);
  }
  if (puVar11 != (undefined8 *)0x0) {
    puVar14 = puVar11;
    if ((uVar8 & 1) != 0) {
      *puVar11 = 0;
      puVar11[1] = 0x3f80000000000000;
      puVar14 = puVar11 + 2;
    }
    if ((uVar8 - 1 & 0xfffffffffffffff) != 0) {
      do {
        *puVar14 = 0;
        puVar14[1] = 0x3f80000000000000;
        puVar14[2] = 0;
        puVar14[3] = 0x3f80000000000000;
        puVar14 = puVar14 + 4;
      } while (puVar14 != puVar11 + uVar8 * 2);
    }
    *(int *)(param_1 + 0x618) = (int)uVar8;
    *(undefined8 **)(param_1 + 0x620) = puVar11;
  }
LAB_0098009c:
  FUN_00980190(param_1);
  uVar5 = s_invalid_name_040e8f53._8_4_;
  uVar3 = s_invalid_name_040e8f53._0_8_;
  uVar7 = *(undefined8 *)(param_1 + 0x628);
  puVar1 = puVar1 + 0x10;
  local_f0 = 0x80;
  local_6d = 0;
  plVar9 = (long *)(param_1 + 0x208);
  s_invalid_name_040e8f53[0] = (char)uVar2;
  s_invalid_name_040e8f53[1] = SUB81(uVar2,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar2,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar2,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar2,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar2,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar2,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar2,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar4;
  s_invalid_name_040e8f53[9] = SUB41(uVar4,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar4,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar4,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  local_e0 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar3;
  s_invalid_name_040e8f53._8_4_ = uVar5;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar8 = FUN_03853d00(plVar9,&local_100);
  if ((uVar8 & 1) != 0) {
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_100,uVar7);
  }
  uVar5 = s_invalid_name_040e8f53._8_4_;
  uVar3 = s_invalid_name_040e8f53._0_8_;
  plVar9 = (long *)(param_1 + 0x408);
  uVar7 = *(undefined8 *)(param_1 + 0x628);
  local_f0 = 0x80;
  local_6d = 0;
  s_invalid_name_040e8f53[0] = (char)uVar2;
  s_invalid_name_040e8f53[1] = SUB81(uVar2,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar2,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar2,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar2,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar2,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar2,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar2,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar4;
  s_invalid_name_040e8f53[9] = SUB41(uVar4,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar4,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar4,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  local_e0 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar3;
  s_invalid_name_040e8f53._8_4_ = uVar5;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar8 = FUN_03853d00(plVar9,&local_100);
  if ((uVar8 & 1) != 0) {
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_100,uVar7);
  }
  return;
}

