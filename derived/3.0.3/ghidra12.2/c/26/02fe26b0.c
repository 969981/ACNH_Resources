
/* WARNING: Removing unreachable block (ram,0x02fe2e0c) */
/* WARNING: Removing unreachable block (ram,0x02fe2c18) */
/* WARNING: Removing unreachable block (ram,0x02fe2be4) */
/* WARNING: Removing unreachable block (ram,0x02fe2b84) */
/* WARNING: Removing unreachable block (ram,0x02fe2aec) */
/* WARNING: Removing unreachable block (ram,0x02fe2a54) */
/* WARNING: Removing unreachable block (ram,0x02fe29bc) */
/* WARNING: Removing unreachable block (ram,0x02fe2924) */
/* WARNING: Removing unreachable block (ram,0x02fe2864) */
/* WARNING: Removing unreachable block (ram,0x02fe26fc) */
/* WARNING: Removing unreachable block (ram,0x02fe2808) */
/* WARNING: Removing unreachable block (ram,0x02fe28bc) */
/* WARNING: Removing unreachable block (ram,0x02fe2970) */
/* WARNING: Removing unreachable block (ram,0x02fe2a08) */
/* WARNING: Removing unreachable block (ram,0x02fe2aa0) */
/* WARNING: Removing unreachable block (ram,0x02fe2b38) */
/* WARNING: Removing unreachable block (ram,0x02fe2bc4) */
/* WARNING: Removing unreachable block (ram,0x02fe2c04) */
/* WARNING: Removing unreachable block (ram,0x02fe2dcc) */
/* WARNING: Removing unreachable block (ram,0x02fe2e28) */

void FUN_02fe26b0(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined *local_70;
  undefined4 local_68;
  
  local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
  if (param_3 == 0) {
    uVar7 = 0;
    if (param_2 == 0) goto LAB_02fe2724;
LAB_02fe2708:
    lVar9 = *(long *)(param_2 + 0x230);
    plVar15 = *(long **)(param_2 + 0x350);
    lVar16 = *(long *)(param_2 + 0x238);
    plVar14 = *(long **)(param_2 + 0x358);
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x220);
    if (param_2 != 0) goto LAB_02fe2708;
LAB_02fe2724:
    lVar16 = 0;
    lVar9 = 0;
    plVar15 = (long *)0x0;
    plVar14 = (long *)0x0;
  }
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  *(long *)(param_1 + 0xc0) = lVar9;
  *(long **)(param_1 + 200) = plVar15;
  puVar1 = PTR_DAT_04bc0cb8;
  *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
  if ((lVar9 != 0) && (plVar15 != (long *)0x0)) {
    local_70 = puVar1 + 0x10;
    local_68 = 0xb;
    (**(code **)(*plVar15 + 0x20))(plVar15,&local_70);
    puVar2 = (undefined4 *)(**(code **)(plVar15[3] + 0xd0))(plVar15[1]);
    *(undefined4 *)(param_1 + 0xd4) = *puVar2;
    *(undefined4 *)(param_1 + 0xd8) = puVar2[1];
  }
  *(long *)(param_1 + 0xe0) = lVar16;
  *(long **)(param_1 + 0xe8) = plVar14;
  *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
  if ((lVar16 != 0) && (plVar14 != (long *)0x0)) {
    local_70 = puVar1 + 0x10;
    local_68 = 0xb;
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_70);
    puVar2 = (undefined4 *)(**(code **)(plVar14[3] + 0xd0))(plVar14[1]);
    *(undefined4 *)(param_1 + 0xf4) = *puVar2;
    *(undefined4 *)(param_1 + 0xf8) = puVar2[1];
  }
  local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
  if (param_3 == 0) {
    uVar7 = 0;
    if (param_2 == 0) goto LAB_02fe2830;
LAB_02fe2814:
    uVar3 = *(undefined8 *)(param_2 + 0x230);
    uVar4 = *(undefined8 *)(param_2 + 0x350);
    uVar5 = *(undefined8 *)(param_2 + 0x238);
    uVar6 = *(undefined8 *)(param_2 + 0x358);
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x220);
    if (param_2 != 0) goto LAB_02fe2814;
LAB_02fe2830:
    uVar5 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
  }
  FUN_02fe04b4(0x40000000,param_1 + 0x100,uVar7,uVar3,uVar4,uVar5,uVar6);
  local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
  if (param_3 == 0) {
    uVar7 = 0;
    if (param_2 == 0) goto LAB_02fe288c;
LAB_02fe2870:
    uVar3 = *(undefined8 *)(param_2 + 0x230);
    uVar4 = *(undefined8 *)(param_2 + 0x350);
    uVar5 = *(undefined8 *)(param_2 + 0x238);
    uVar6 = *(undefined8 *)(param_2 + 0x358);
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x220);
    if (param_2 != 0) goto LAB_02fe2870;
LAB_02fe288c:
    uVar5 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
  }
  FUN_02fe04b4(0x40400000,param_1 + 0x158,uVar7,uVar3,uVar4,uVar5,uVar6);
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    if (param_4 == 0) goto LAB_02fe28e0;
LAB_02fe28cc:
    uVar7 = *(undefined8 *)(param_4 + 0x1d0);
  }
  else {
    *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_3 + 0x220);
    if (param_4 != 0) goto LAB_02fe28cc;
LAB_02fe28e0:
    uVar7 = 0;
  }
  *(undefined8 *)(param_1 + 0x1c8) = uVar7;
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_4 + 0x208);
  if (param_5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_5 + 0x1d0);
  }
  *(undefined8 *)(param_1 + 0x1e0) = uVar7;
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_5 + 0x208);
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x220);
  }
  *(undefined8 *)(param_1 + 0x210) = uVar7;
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_4 + 0x1d0);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_4 + 0x208);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_5 + 0x1d0);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_5 + 0x208);
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x220);
  }
  *(undefined8 *)(param_1 + 0x260) = uVar7;
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_4 + 0x1d0);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_4 + 0x208);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_5 + 0x1d0);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_5 + 0x208);
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x220);
  }
  *(undefined8 *)(param_1 + 0x2b0) = uVar7;
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_4 + 0x1d0);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_4 + 0x208);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_5 + 0x1d0);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_5 + 0x208);
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x220);
  }
  *(undefined8 *)(param_1 + 0x300) = uVar7;
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_4 + 0x1d0);
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_4 + 0x208);
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_5 + 0x1d0);
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_5 + 0x208);
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x220);
  }
  *(undefined8 *)(param_1 + 0x350) = uVar7;
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_4 + 0x1d0);
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_4 + 0x208);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_5 + 0x1d0);
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_5 + 0x208);
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x220);
  }
  *(undefined8 *)(param_1 + 0x3a0) = uVar7;
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_4 + 0x1d0);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_4 + 0x208);
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_5 + 0x1d0);
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_5 + 0x208);
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x220);
  }
  *(undefined8 *)(param_1 + 0x3f0) = uVar7;
  *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_4 + 0x1d0);
  *(undefined8 *)(param_1 + 0x400) = *(undefined8 *)(param_4 + 0x208);
  *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(param_5 + 0x1d0);
  *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(param_5 + 0x208);
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x220);
  }
  *(undefined8 *)(param_1 + 0x440) = uVar7;
  *(undefined8 *)(param_1 + 0x448) = *(undefined8 *)(param_4 + 0x1d0);
  *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_4 + 0x208);
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_5 + 0x1d0);
  *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(param_5 + 0x208);
  if (param_3 == 0) {
    uVar7 = 0;
    if (param_2 == 0) goto LAB_02fe2ba0;
LAB_02fe2b90:
    uVar3 = *(undefined8 *)(param_2 + 0x230);
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x220);
    if (param_2 != 0) goto LAB_02fe2b90;
LAB_02fe2ba0:
    uVar3 = 0;
  }
  *(undefined8 *)(param_1 + 0x490) = uVar7;
  *(undefined8 *)(param_1 + 0x498) = uVar3;
  if (param_3 == 0) {
    uVar3 = 0;
    uVar7 = 0;
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    uVar4 = 0;
    if (param_2 == 0) goto LAB_02fe2c4c;
LAB_02fe2c24:
    lVar9 = *(long *)(param_2 + 0x230);
    plVar15 = *(long **)(param_2 + 0x350);
    lVar16 = *(long *)(param_2 + 0x238);
    plVar14 = *(long **)(param_2 + 0x358);
  }
  else {
    *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_3 + 0x220);
    uVar7 = *(undefined8 *)(param_3 + 0x228);
    uVar3 = *(undefined8 *)(param_3 + 0x230);
    uVar4 = *(undefined8 *)(param_3 + 0x220);
    if (param_2 != 0) goto LAB_02fe2c24;
LAB_02fe2c4c:
    lVar16 = 0;
    lVar9 = 0;
    plVar15 = (long *)0x0;
    plVar14 = (long *)0x0;
  }
  *(undefined8 *)(param_1 + 0x4c8) = uVar7;
  *(undefined8 *)(param_1 + 0x4d0) = uVar3;
  *(undefined8 *)(param_1 + 0x4d8) = uVar4;
  *(long *)(param_1 + 0x4e0) = lVar9;
  *(long **)(param_1 + 0x4e8) = plVar15;
  *(undefined4 *)(param_1 + 0x4f0) = 0x3f800000;
  if ((lVar9 != 0) && (plVar15 != (long *)0x0)) {
    local_70 = puVar1 + 0x10;
    local_68 = 0xb;
    (**(code **)(*plVar15 + 0x20))(plVar15,&local_70);
    puVar2 = (undefined4 *)(**(code **)(plVar15[3] + 0xd0))(plVar15[1]);
    *(undefined4 *)(param_1 + 0x4f4) = *puVar2;
    *(undefined4 *)(param_1 + 0x4f8) = puVar2[1];
  }
  *(long *)(param_1 + 0x500) = lVar16;
  *(long **)(param_1 + 0x508) = plVar14;
  *(undefined4 *)(param_1 + 0x510) = 0x3f800000;
  if ((lVar16 != 0) && (plVar14 != (long *)0x0)) {
    local_70 = puVar1 + 0x10;
    local_68 = 0xb;
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_70);
    puVar2 = (undefined4 *)(**(code **)(plVar14[3] + 0xd0))(plVar14[1]);
    *(undefined4 *)(param_1 + 0x514) = *puVar2;
    *(undefined4 *)(param_1 + 0x518) = puVar2[1];
  }
  plVar14 = *(long **)(param_1 + 0x4c8);
  if (plVar14 != (long *)0x0) {
    local_68 = 8;
    local_70 = puVar1 + 0x10;
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_70);
    puVar2 = (undefined4 *)(**(code **)(plVar14[3] + 0xa0))(plVar14[1]);
    *(undefined4 *)(param_1 + 0x538) = *puVar2;
    plVar14 = *(long **)(param_1 + 0x4e0);
    *(undefined4 *)(param_1 + 0x53c) = puVar2[1];
    *(undefined4 *)(param_1 + 0x540) = puVar2[2];
    if (plVar14 != (long *)0x0) {
      local_68 = 10;
      local_70 = puVar1 + 0x10;
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_70);
      puVar2 = (undefined4 *)(**(code **)(plVar14[3] + 0xc0))(plVar14[1]);
      *(undefined4 *)(param_1 + 0x544) = *puVar2;
      *(undefined4 *)(param_1 + 0x548) = puVar2[1];
    }
  }
  if (param_3 == 0) {
    uVar7 = 0;
    if (param_2 == 0) goto LAB_02fe2de8;
LAB_02fe2dd8:
    uVar3 = *(undefined8 *)(param_2 + 0x230);
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x220);
    if (param_2 != 0) goto LAB_02fe2dd8;
LAB_02fe2de8:
    uVar3 = 0;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x1d0);
  if (param_3 == 0) {
    uVar6 = 0;
    uVar5 = 0;
    if (param_2 == 0) goto LAB_02fe2e48;
LAB_02fe2e34:
    uVar10 = *(undefined8 *)(param_2 + 0x238);
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 0x228);
    uVar5 = *(undefined8 *)(param_3 + 0x230);
    if (param_2 != 0) goto LAB_02fe2e34;
LAB_02fe2e48:
    uVar10 = 0;
  }
  iVar12 = *(int *)(param_1 + 0x98);
  if (*(int *)(param_1 + 0x9c) <= iVar12) goto LAB_02fe2ec0;
  uVar8 = *(undefined8 *)(param_5 + 0x1d0);
  *(undefined8 *)(*(long *)(param_1 + 0xa0) + (long)iVar12 * 8) = uVar7;
  iVar11 = *(int *)(param_1 + 0x9c);
  lVar9 = (long)*(int *)(param_1 + 0x98) + 1;
  iVar12 = (int)lVar9;
  *(int *)(param_1 + 0x98) = iVar12;
  if (iVar12 < iVar11) {
    *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar9 * 8) = uVar3;
    iVar11 = *(int *)(param_1 + 0x9c);
    iVar12 = *(int *)(param_1 + 0x98) + 1;
    *(int *)(param_1 + 0x98) = iVar12;
    if (iVar12 < iVar11) goto LAB_02fe2f64;
LAB_02fe2e8c:
    if (iVar11 <= iVar12) goto LAB_02fe2e94;
LAB_02fe2f80:
    *(undefined8 *)(*(long *)(param_1 + 0xa0) + (long)iVar12 * 8) = uVar6;
    iVar11 = *(int *)(param_1 + 0x9c);
    iVar12 = *(int *)(param_1 + 0x98) + 1;
    *(int *)(param_1 + 0x98) = iVar12;
    if (iVar12 < iVar11) goto LAB_02fe2f9c;
LAB_02fe2e9c:
    if (iVar11 <= iVar12) goto LAB_02fe2ea4;
LAB_02fe2fb8:
    *(undefined8 *)(*(long *)(param_1 + 0xa0) + (long)iVar12 * 8) = uVar10;
    iVar12 = *(int *)(param_1 + 0x98) + 1;
    *(int *)(param_1 + 0x98) = iVar12;
    if (*(int *)(param_1 + 0x9c) <= iVar12) goto LAB_02fe2ec0;
  }
  else {
    if (iVar11 <= iVar12) goto LAB_02fe2e8c;
LAB_02fe2f64:
    *(undefined8 *)(*(long *)(param_1 + 0xa0) + (long)iVar12 * 8) = uVar4;
    iVar11 = *(int *)(param_1 + 0x9c);
    iVar12 = *(int *)(param_1 + 0x98) + 1;
    *(int *)(param_1 + 0x98) = iVar12;
    if (iVar12 < iVar11) goto LAB_02fe2f80;
LAB_02fe2e94:
    if (iVar11 <= iVar12) goto LAB_02fe2e9c;
LAB_02fe2f9c:
    *(undefined8 *)(*(long *)(param_1 + 0xa0) + (long)iVar12 * 8) = uVar5;
    iVar11 = *(int *)(param_1 + 0x9c);
    iVar12 = *(int *)(param_1 + 0x98) + 1;
    *(int *)(param_1 + 0x98) = iVar12;
    if (iVar12 < iVar11) goto LAB_02fe2fb8;
LAB_02fe2ea4:
    if (iVar11 <= iVar12) goto LAB_02fe2ec0;
  }
  *(undefined8 *)(*(long *)(param_1 + 0xa0) + (long)iVar12 * 8) = uVar8;
  iVar12 = *(int *)(param_1 + 0x98) + 1;
  *(int *)(param_1 + 0x98) = iVar12;
LAB_02fe2ec0:
  if (iVar12 != 0) {
    puVar13 = *(undefined8 **)(param_1 + 0xa0);
    lVar9 = (long)iVar12 << 3;
    do {
      plVar14 = (long *)*puVar13;
      if (plVar14 != (long *)0x0) {
        local_68 = 7;
        local_70 = puVar1 + 0x10;
        (**(code **)(*plVar14 + 0x18))(plVar14,&local_70);
        (**(code **)(plVar14[3] + 0x88))(plVar14[1],0);
      }
      puVar13 = puVar13 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  return;
}

