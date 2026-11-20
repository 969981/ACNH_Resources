
void FUN_03ed7320(float param_1,long param_2,long param_3,long param_4,uint *param_5,
                 undefined2 param_6,ulong param_7,undefined8 param_8,long param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_88;
  
  fVar13 = (float)FUN_03ebf3f0(*(undefined8 *)(param_3 + 8),*(long *)(param_2 + 0x18) + 4,
                               *(undefined8 *)(param_4 + 0x70),1,0,0);
  fVar14 = (float)FUN_03ebf3f0(*(undefined8 *)(param_3 + 8),*(long *)(param_2 + 0x18) + 0xc,
                               *(undefined8 *)(param_4 + 0x70),1,0,0);
  fVar15 = (float)FUN_03ebf3f0(*(undefined8 *)(param_3 + 8),*(long *)(param_2 + 0x18) + 0x14,
                               *(undefined8 *)(param_4 + 0x70),1,0,0);
  lVar7 = *(long *)(param_2 + 0x18);
  if ((int)*(uint *)(lVar7 + 0x18) < 0) {
    lVar11 = *(long *)(param_3 + 8);
    plVar5 = *(long **)(lVar11 + 0x18);
    uVar3 = (**(code **)(*plVar5 + 0x118))
                      (plVar5,*(undefined8 *)(*(long *)(param_4 + 0x70) + 0x10),
                       *(uint *)(lVar7 + 0x18) & 0xffff);
    plVar5 = *(long **)(lVar11 + 0x20);
    local_88 = (**(code **)(*plVar5 + 0x128))(plVar5,uVar3);
    lVar7 = *(long *)(param_2 + 0x18);
  }
  else {
    local_88 = *(undefined4 *)(lVar7 + 0x1c);
  }
  if ((int)*(uint *)(lVar7 + 0x30) < 0) {
    lVar11 = *(long *)(param_3 + 8);
    plVar5 = *(long **)(lVar11 + 0x18);
    uVar3 = (**(code **)(*plVar5 + 0x118))
                      (plVar5,*(undefined8 *)(*(long *)(param_4 + 0x70) + 0x10),
                       *(uint *)(lVar7 + 0x30) & 0xffff);
    plVar5 = *(long **)(lVar11 + 0x20);
    uVar1 = (**(code **)(*plVar5 + 0x128))(plVar5,uVar3);
    lVar7 = *(long *)(param_2 + 0x18);
    uVar9 = *(uint *)(lVar7 + 0x38);
    if ((int)uVar9 < 0) goto LAB_03ed7494;
LAB_03ed7448:
    iVar2 = *(int *)(lVar7 + 0x3c);
  }
  else {
    uVar1 = *(uint *)(lVar7 + 0x34);
    uVar9 = *(uint *)(lVar7 + 0x38);
    if (-1 < (int)uVar9) goto LAB_03ed7448;
LAB_03ed7494:
    lVar7 = *(long *)(param_3 + 8);
    plVar5 = *(long **)(lVar7 + 0x18);
    uVar3 = (**(code **)(*plVar5 + 0x118))
                      (plVar5,*(undefined8 *)(*(long *)(param_4 + 0x70) + 0x10),uVar9 & 0xffff);
    plVar5 = *(long **)(lVar7 + 0x20);
    iVar2 = (**(code **)(*plVar5 + 0x128))(plVar5,uVar3);
    lVar7 = *(long *)(param_2 + 0x18);
  }
  fVar16 = (float)FUN_03ebf3f0(*(undefined8 *)(param_3 + 8),lVar7 + 0x4c,
                               *(undefined8 *)(param_4 + 0x70),1,0,0);
  uVar9 = *(uint *)(*(long *)(param_2 + 0x18) + 0x28);
  if ((int)uVar9 < 0) {
    lVar7 = *(long *)(param_3 + 8);
    plVar5 = *(long **)(lVar7 + 0x18);
    uVar3 = (**(code **)(*plVar5 + 0x118))
                      (plVar5,*(undefined8 *)(*(long *)(param_4 + 0x70) + 0x10),uVar9 & 0xffff);
    plVar5 = *(long **)(lVar7 + 0x20);
    iVar4 = (**(code **)(*plVar5 + 0x128))(plVar5,uVar3);
  }
  else {
    iVar4 = *(int *)(*(long *)(param_2 + 0x18) + 0x2c);
  }
  fVar17 = param_1;
  if (0.0 <= fVar15) {
    fVar17 = fVar15;
  }
  uVar9 = uVar1;
  if ((int)uVar1 < 0) {
    uVar9 = 0xffffffff;
  }
  if (-1 < iVar2) {
    puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar12 = puVar6[3];
    uVar9 = *puVar6 ^ *puVar6 << 0xb;
    *puVar6 = puVar6[1];
    puVar6[1] = puVar6[2];
    uVar9 = uVar9 >> 8 ^ uVar12 >> 0x13 ^ uVar9 ^ uVar12;
    puVar6[2] = uVar12;
    puVar6[3] = uVar9;
    uVar9 = (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) +
            (int)((ulong)uVar9 * (ulong)(iVar2 + 1) >> 0x20);
  }
  uVar1 = 0;
  uVar10 = 1;
  switch(local_88) {
  case 2:
    uVar1 = 0;
    uVar8 = 0;
    uVar12 = 0;
    uVar10 = 0;
    break;
  case 3:
    uVar1 = 0x20;
  case 1:
    uVar8 = 0;
    uVar12 = 0;
    break;
  case 4:
    uVar8 = 0x40;
    uVar12 = 0x40;
    goto joined_r0x03ed75f4;
  default:
    uVar8 = 0;
    uVar12 = 0;
    uVar10 = param_7 & 0xffffffff;
joined_r0x03ed75f4:
    uVar1 = 0;
  }
  fVar15 = fVar14;
  if (param_9 != 0) {
    fVar15 = (float)FUN_03ed7a30(fVar14,fVar17,param_1,param_9,param_3,param_4,param_8,param_5);
    uVar12 = uVar8;
  }
  param_5[4] = (uint)fVar14;
  param_5[5] = (uint)fVar17;
  param_5[0xb] = 0xbf800000;
  param_5[1] = (uint)fVar15;
  fVar18 = 0.0;
  if ((uVar10 & 1) == 0) {
    fVar18 = fVar14;
  }
  *(undefined2 *)(param_5 + 0xc) = param_6;
  param_5[2] = (uint)(fVar15 - fVar13);
  param_5[3] = (uint)fVar13;
  param_5[6] = 0xbf800000;
  param_5[7] = 0xbf800000;
  param_5[8] = (uint)fVar18;
  param_5[9] = (uint)fVar15;
  if ((uVar10 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    if (0 < (int)uVar9) {
      uVar8 = 0;
      param_5[0xb] = (uint)fVar17;
      param_5[10] = (uint)(fVar17 * (float)(int)uVar9);
      goto LAB_03ed7698;
    }
    if (0.0 <= fVar16) {
      param_5[10] = (uint)fVar16;
      for (; fVar17 < fVar16; fVar16 = fVar16 - fVar17) {
      }
      uVar8 = 0;
      param_5[0xb] = (uint)fVar16;
      goto LAB_03ed7698;
    }
    uVar8 = 2;
  }
  param_5[10] = 0xbf800000;
LAB_03ed7698:
  uVar9 = 0x10;
  if (iVar4 != 0) {
    uVar9 = 0x14;
  }
  *param_5 = uVar1 | uVar12 | uVar9 | *param_5 & 0xffffff89 | uVar8;
  fVar13 = (float)FUN_03ebf3f0(*(undefined8 *)(param_3 + 8),*(long *)(param_2 + 0x18) + 0x54,
                               *(undefined8 *)(param_4 + 0x70),1,0,0);
  if (0.0 <= fVar13) {
    param_5[7] = (uint)fVar13;
  }
  return;
}

