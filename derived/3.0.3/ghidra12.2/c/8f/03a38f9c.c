
void FUN_03a38f9c(long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *puStack_60;
  
  lVar6 = *(long *)(param_1 + 0x14b8);
  if (lVar6 == 0) {
    return;
  }
  if (*(char *)(*(long *)(param_1 + 8) + 0x730) == '\0') {
    return;
  }
  lVar8 = *(long *)(param_3 + 1000);
  if (lVar8 == 0) {
    return;
  }
  if (*(int *)(lVar8 + 0x3c) < 1) {
    return;
  }
  if ((*(uint *)(lVar8 + 0x1c) >> 2 & 1) == 0) {
    return;
  }
  if (*(int *)(lVar6 + 0x18) != 1) {
    return;
  }
  bVar1 = *(byte *)(param_3 + 8);
  uVar7 = (uint)bVar1;
  if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)bVar1) {
    uVar7 = 0;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (ulong)bVar1 * 8);
  lVar8 = *(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar7 * 0x23c0;
  fVar12 = *(float *)(lVar8 + 800) - *(float *)(lVar8 + 0x318);
  fVar13 = *(float *)(lVar8 + 0x324) - *(float *)(lVar8 + 0x31c);
  uVar11 = (uint)fVar12;
  uVar7 = (uint)fVar13;
  *(uint *)(lVar6 + 0x230) = uVar11;
  *(uint *)(lVar6 + 0x234) = uVar7;
  *(float *)(lVar6 + 0xf0) = (float)(int)fVar12;
  *(float *)(lVar6 + 0xf4) = (float)(int)fVar13;
  *(float *)(lVar6 + 0x100) = (float)(int)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU));
  *(float *)(lVar6 + 0xf8) = (float)(int)(uVar11 & (int)uVar11 >> 0x1f);
  *(float *)(lVar6 + 0xfc) = (float)(int)(uVar7 & (int)uVar7 >> 0x1f);
  *(float *)(lVar6 + 0x104) = (float)(int)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
  FUN_03aed840(*(undefined8 *)
                (*(long *)(*(long *)(param_1 + 0x14b8) + 0x10) + (ulong)*(byte *)(param_3 + 8) * 8))
  ;
  puVar3 = PTR_DAT_04bd1830;
  puVar2 = PTR_DAT_04bb2020;
  local_98 = *(undefined8 *)(param_3 + 1000);
  local_88 = 1;
  uStack_80 = 0xffff00000042;
  uStack_90 = 4;
  local_78 = 0x10000000f;
  uStack_70 = 0xffffffff00000000;
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_a0 = "Model(Outline/ZOnly)";
  puStack_60 = PTR_DAT_04bd1830 + 0x10;
  local_68 = 0xffffffff;
  FUN_039eec04(param_3,param_2,&local_a8);
  plVar4 = *(long **)(param_3 + 0x318);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
    FUN_038e77e4(*(undefined8 *)(param_3 + 800),param_2,*(undefined8 *)(param_3 + 0x318));
  }
  if (*(int *)(*(long *)(*(long *)(*(long *)(param_1 + 0x14b8) + 0x10) +
                        (ulong)*(byte *)(param_3 + 8) * 8) + 0x60) == -1) {
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
      uVar7 = 0;
      if (~(uint)*(ushort *)(DAT_05ae78f0 + 0x3da) < *(uint *)(DAT_05ae78f0 + 0x368)) {
        uVar7 = ~(uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
      }
      if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar7 * 0x20 + 4) >> 2 & 1) == 0)
      {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 0x8000000000000000;
        goto LAB_03a391dc;
      }
    }
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
      uVar5 = 0x112;
      uVar10 = 0x12;
    }
    else {
      uVar5 = 0x111;
      uVar10 = 0x11;
    }
    if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
      uVar10 = uVar5;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar10);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a391dc:
  if ((uint)*(byte *)(param_3 + 8) < *(uint *)(*(long *)(param_1 + 0x14b8) + 8)) {
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x14b8) + 0x10) +
                     (ulong)*(byte *)(param_3 + 8) * 8);
  }
  else {
    lVar6 = 0;
  }
  uVar9 = *(undefined8 *)(param_3 + 0xb0);
  *(long *)(param_3 + 0xb0) = lVar6 + 0x150;
  local_a8 = puVar2 + 0x10;
  pcStack_a0 = "Model(Outline/Opa+AlphaMask)";
  local_98 = *(undefined8 *)(param_3 + 1000);
  *(undefined8 *)(param_3 + 0x208) = uVar9;
  uStack_90 = 4;
  local_88 = 5;
  uStack_80 = 0xffff00000440;
  puStack_60 = puVar3 + 0x10;
  local_78 = 0x10000000f;
  uStack_70 = 0xffffffff00000000;
  local_68 = 0xffffffff;
  FUN_039eec04(param_3,param_2,&local_a8);
  FUN_039499cc(DAT_05ae90c0,
               **(undefined8 **)
                 (*(long *)(*(long *)(param_1 + 0x14b8) + 0x10) + (ulong)*(byte *)(param_3 + 8) * 8)
              );
  if (*(long *)(param_3 + 0x208) != 0) {
    *(long *)(param_3 + 0xb0) = *(long *)(param_3 + 0x208);
    *(undefined8 *)(param_3 + 0x208) = 0;
  }
  return;
}

