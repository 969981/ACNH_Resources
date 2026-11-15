
void FUN_020b44c0(long param_1,undefined4 *param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 ***pppuVar15;
  undefined8 ***pppuVar16;
  undefined1 **ppuVar17;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined4 local_1f0;
  undefined8 ***local_1e8;
  undefined8 ***pppuStack_1e0;
  undefined4 local_1d8;
  undefined8 ***local_1d0 [4];
  undefined8 ***local_1b0 [4];
  undefined8 **local_190 [4];
  undefined8 *local_170 [4];
  undefined8 local_150 [4];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 ***local_120;
  undefined8 ***local_118;
  undefined4 local_110;
  undefined8 ***local_108;
  undefined4 *puStack_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  int local_e8;
  undefined8 ***local_e0;
  undefined8 ***local_d8;
  undefined8 ***apppuStack_d0 [4];
  undefined8 **local_b0 [4];
  undefined8 *local_90 [4];
  undefined8 local_70 [4];
  
  uVar4 = *param_2;
  if ((param_3 & 1) == 0) {
    piVar7 = (int *)(**(code **)(*(long *)(param_1 + 0x1e78) + 0xf0))(param_1 + 0x1e78);
    iVar5 = *piVar7;
    piVar7 = (int *)(**(code **)(*(long *)(param_1 + 0x1ea8) + 0xf0))(param_1 + 0x1ea8);
    iVar6 = *piVar7;
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar3 = puVar8[3];
    uVar2 = *puVar8 ^ *puVar8 << 0xb;
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
    puVar8[2] = uVar3;
    puVar8[3] = uVar2;
    local_e8 = iVar5 + (int)((ulong)uVar2 * (ulong)((iVar6 - iVar5) + 1) >> 0x20);
  }
  else {
    local_e8 = 3;
  }
  apppuStack_d0[0] = local_b0;
  local_b0[0] = local_90;
  puStack_100 = &local_f0;
  local_120 = &local_e0;
  local_90[0] = local_70;
  local_108 = apppuStack_d0;
  local_1d0[0] = local_1b0;
  local_1b0[0] = local_190;
  pppuVar16 = &local_118;
  ppuVar17 = &local_1f8;
  local_110 = 1;
  local_1e8 = local_1d0;
  local_190[0] = local_170;
  local_170[0] = local_150;
  local_70[0] = 0;
  local_f8 = 5;
  uStack_ec = 0;
  local_1f0 = 0;
  local_150[0] = 0;
  local_1d8 = 5;
  local_200 = (undefined1 *)&local_200;
  local_1f8 = (undefined1 *)&local_200;
  pppuStack_1e0 = local_1e8;
  local_118 = local_120;
  local_f0 = uVar4;
  local_e0 = &local_120;
  local_d8 = &local_120;
  FUN_020bda50(&local_200,&local_120);
  local_130 = 0;
  uStack_128 = 0;
  if (*(int *)(param_1 + 0x2f58) < *(int *)(param_1 + 0x2f70)) {
    puVar9 = *(undefined8 **)(param_1 + 0x2f60);
    plVar1 = (long *)(param_1 + 0x2f48);
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x2f60) = *puVar9;
    }
    *(undefined4 *)(puVar9 + 2) = 0;
    puVar9[0x16] = 0;
    puVar9[0x12] = puVar9 + 0x16;
    *(undefined4 *)(puVar9 + 5) = 5;
    puVar9[0xe] = puVar9 + 0x12;
    *puVar9 = puVar9;
    puVar9[1] = puVar9;
    puVar9[10] = puVar9 + 0xe;
    puVar12 = puVar9 + 6;
    *puVar12 = puVar9 + 10;
    puVar9[3] = puVar12;
    puVar9[4] = puVar12;
    lVar10 = FUN_020bda50(puVar9,&local_200);
    plVar11 = (long *)(lVar10 + 0xe0);
    *plVar11 = 0;
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    *(undefined8 *)(lVar10 + 0xd0) = local_130;
    *(undefined8 *)(lVar10 + 0xd8) = uStack_128;
    lVar13 = *plVar1;
    *plVar1 = (long)plVar11;
    *plVar11 = lVar13;
    *(long **)(lVar10 + 0xe8) = plVar1;
    if (lVar13 != 0) {
      *(long **)(lVar13 + 8) = plVar11;
    }
    *(int *)(param_1 + 0x2f58) = *(int *)(param_1 + 0x2f58) + 1;
  }
  do {
    puVar14 = *ppuVar17;
    ppuVar17 = (undefined1 **)(puVar14 + 8);
  } while ((undefined1 **)puVar14 != &local_200);
  do {
    pppuVar15 = (undefined8 ***)*pppuVar16;
    pppuVar16 = pppuVar15 + 1;
  } while ((undefined8 ****)pppuVar15 != &local_120);
  return;
}

