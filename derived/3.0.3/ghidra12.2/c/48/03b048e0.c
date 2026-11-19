
void FUN_03b048e0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined *local_80;
  char *pcStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  uVar11 = *(uint *)(param_1 + 0x468);
  uVar9 = *(undefined8 *)(param_1 + 0x498);
  if (((uVar11 ^ 0xffffffff) & 0x80004) != 0) {
    uVar9 = 0;
  }
  *(undefined8 *)(param_1 + 0x4b0) = uVar9;
  puVar5 = PTR_DAT_04bd16d0;
  lVar10 = *(long *)PTR_DAT_04bd16d0;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "UpdateGPU";
  if (*(char *)(lVar10 + 0x94) != '\0' && *(int *)(lVar10 + 0x90) != 0) {
    bVar4 = *(byte *)(lVar10 + 0x78);
    *(byte *)(lVar10 + 0x78) = '\x01' - bVar4;
    lVar12 = (ulong)bVar4 * 0x10;
    local_70 = *(undefined8 *)(&DAT_04c4bd38 + lVar12);
    uStack_68 = *(ulong *)(&DAT_04c4bd40 + lVar12);
    if (*(long *)(lVar10 + 0x70) != 0) {
      uStack_68 = uStack_68 & 0xffffffff;
    }
    (**(code **)(**(long **)(lVar10 + 0x98) + 0x10))(*(long **)(lVar10 + 0x98),&local_80,&local_70);
    uVar11 = *(uint *)(param_1 + 0x468);
  }
  plVar1 = (long *)(param_1 + 0x4b0);
  if ((((uVar11 >> 8 & 1) != 0) &&
      (puVar7 = *(undefined8 **)(param_1 + 0x4a8), puVar7 != (undefined8 *)0x0)) &&
     ((*(byte *)(param_1 + 0x472) >> 1 & 1) == 0)) {
    (**(code **)*puVar7)(puVar7,0xc,plVar1);
  }
  lVar10 = *plVar1;
  lVar12 = *(long *)PTR_DAT_04bbdb78;
  bVar4 = *(byte *)(lVar12 + 0x53a);
  uVar11 = 0;
  if (bVar4 != 0) {
    uVar11 = (uint)*(byte *)(lVar12 + 0x539) / (uint)bVar4;
  }
  if ((((uint)*(byte *)(lVar12 + 0x539) == uVar11 * bVar4) && (lVar10 == 0)) &&
     (*(char *)(lVar12 + 0x194) == '\x01')) {
    iVar6 = *(int *)(lVar12 + 0x10);
    if (iVar6 == 0) goto LAB_03b04a3c;
    lVar10 = *(long *)(lVar12 + 0x18);
    uVar15 = 0;
    do {
      lVar13 = *(long *)(lVar10 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3));
      if (*(int *)(lVar13 + 0x6b8) != 0) {
        lVar16 = (long)*(int *)(lVar13 + 0x6b8) << 3;
        plVar14 = *(long **)(lVar13 + 0x6c0);
        do {
          plVar8 = *(long **)(*plVar14 + 0xd8);
          *(undefined4 *)(plVar8 + 6) = *(undefined4 *)(*plVar14 + 0x98);
          plVar8[5] = lVar13;
          (**(code **)(*plVar8 + 0x10))();
          lVar16 = lVar16 + -8;
          plVar14 = plVar14 + 1;
        } while (lVar16 != 0);
      }
      uVar2 = uVar15 + 1;
      uVar15 = uVar2 & 0xffffffff;
    } while (iVar6 != (int)uVar2);
    lVar10 = *plVar1;
  }
  if (lVar10 != 0) {
    plVar14 = (long *)(lVar12 + 0x400);
    uVar3 = *(undefined4 *)PTR_DAT_04bd0f30;
    iVar6 = (**(code **)(*plVar14 + 0x10))(plVar14);
    if (iVar6 != 0) {
      FUN_03a0cd90(lVar10,"RenderDisplay::calcGPU",plVar14,uVar3,0,0);
    }
  }
LAB_03b04a3c:
  lVar10 = *(long *)PTR_DAT_04bbdcb8;
  if (lVar10 != 0) {
    lVar12 = *plVar1;
    if (((*(uint *)(lVar10 + 8) ^ 0xffffffff) & 0x21) != 0) {
      lVar12 = 0;
    }
    if (*(int *)(lVar10 + 0x30) != 0) {
      plVar14 = *(long **)(lVar10 + 0x38);
      lVar10 = (long)*(int *)(lVar10 + 0x30) << 3;
      do {
        lVar13 = *plVar14;
        FUN_03a04c80(lVar13,lVar12,4,7,0);
        plVar8 = *(long **)(lVar13 + 0x5590);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x68))(plVar8,lVar13);
        }
        plVar14 = plVar14 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
  }
  if ((((*(byte *)(param_1 + 0x469) & 1) != 0) &&
      (puVar7 = *(undefined8 **)(param_1 + 0x4a8), puVar7 != (undefined8 *)0x0)) &&
     ((*(byte *)(param_1 + 0x472) >> 1 & 1) == 0)) {
    (**(code **)*puVar7)(puVar7,0xd,plVar1);
  }
  lVar10 = *plVar1;
  if (lVar10 != 0) {
    FUN_03a0d010(lVar10);
    FUN_03a0d2b0(lVar10);
  }
  lVar10 = *(long *)puVar5;
  if (*(char *)(lVar10 + 0x94) != '\0' && *(int *)(lVar10 + 0x90) != 0) {
    (**(code **)(**(long **)(lVar10 + 0x98) + 0x18))();
  }
  return;
}

