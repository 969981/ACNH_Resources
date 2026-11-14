
undefined8 FUN_01d7c750(long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  void *__dest;
  long lVar14;
  ulong uVar15;
  undefined *local_80;
  void *local_78;
  undefined8 local_70;
  short local_68 [18];
  undefined2 local_44;
  
  plVar8 = *(long **)(param_1 + 8);
  if (*plVar8 == *param_2 && plVar8[1] == param_2[1]) {
    lVar9 = param_3[1];
    plVar8 = (long *)(param_1 + 0x10);
    *plVar8 = *param_3;
    *(long *)(param_1 + 0x18) = lVar9;
    lVar9 = param_3[2];
    lVar14 = param_3[3];
    lVar11 = param_3[5];
    *(long *)(param_1 + 0x30) = param_3[4];
    *(long *)(param_1 + 0x38) = lVar11;
    *(long *)(param_1 + 0x20) = lVar9;
    *(long *)(param_1 + 0x28) = lVar14;
    lVar9 = param_3[6];
    lVar14 = param_3[7];
    lVar11 = param_3[9];
    *(long *)(param_1 + 0x50) = param_3[8];
    *(long *)(param_1 + 0x58) = lVar11;
    *(long *)(param_1 + 0x40) = lVar9;
    *(long *)(param_1 + 0x48) = lVar14;
    *(long *)(*(long *)PTR_DAT_04bc10b0 + 0xa0) = *plVar8;
    lVar9 = *(long *)(*(long *)PTR_DAT_04bb21c8 + 0x120);
    if (*plVar8 == 0) {
      *(undefined8 *)(lVar9 + 0x48) = 0;
      *(undefined8 *)(lVar9 + 0x50) = 0;
      *(undefined8 *)(lVar9 + 0x38) = 0;
      *(undefined8 *)(lVar9 + 0x40) = 0;
      *(undefined8 *)(lVar9 + 0x28) = 0;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(undefined8 *)(lVar9 + 0x20) = 0;
      *(long *)(lVar9 + 8) = 0;
      *(undefined8 *)(lVar9 + 0x10) = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      *(long *)(lVar9 + 8) = *plVar8;
      *(undefined8 *)(lVar9 + 0x10) = uVar1;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(lVar9 + 0x30) = uVar4;
      *(undefined8 *)(lVar9 + 0x18) = uVar1;
      *(undefined8 *)(lVar9 + 0x20) = uVar3;
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(lVar9 + 0x50) = uVar4;
      *(undefined8 *)(lVar9 + 0x38) = uVar1;
      *(undefined8 *)(lVar9 + 0x40) = uVar3;
    }
    *(undefined1 *)(lVar9 + 0xa8) = 0;
    lVar9 = *(long *)PTR_DAT_04bb8930;
    uVar7 = *(uint *)(lVar9 + 0x18);
    if (uVar7 == 0xffffffff) {
      return 1;
    }
    lVar14 = *(long *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 8) <= uVar7) {
      uVar7 = 0;
    }
    plVar12 = (long *)(lVar14 + (long)(int)uVar7 * 0x58 + 0x18);
    if (*plVar12 == *plVar8) {
      return 1;
    }
    *plVar12 = *plVar8;
    *(undefined4 *)(lVar14 + (long)(int)uVar7 * 0x58 + 0x50) = 0x1e;
    *(undefined1 *)(lVar9 + 0xf5) = 1;
    return 1;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb21d0 + 0xf78) != '\0') {
    return 0;
  }
  lVar14 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x18);
  lVar9 = param_2[1];
  *plVar8 = *param_2;
  plVar8[1] = lVar9;
  if (*(long *)PTR_DAT_04bb4410 != 0) {
    FUN_007b3b6c(*(long *)PTR_DAT_04bb4410,&local_80,**(undefined8 **)(param_1 + 8),
                 (*(undefined8 **)(param_1 + 8))[1]);
  }
  puVar5 = PTR_DAT_04bb21c8;
  lVar10 = *(long *)PTR_DAT_04bb21c8;
  lVar9 = *(long *)(lVar10 + 0x118);
  *(undefined **)(lVar9 + 8) = local_80;
  *(void **)(lVar9 + 0x10) = local_78;
  *(undefined8 *)(lVar9 + 0x18) = local_70;
  *(undefined1 *)(lVar9 + 0xc1f) = 0;
  *(undefined1 *)(lVar9 + 0x20) = 0;
  *(undefined8 *)(lVar9 + 0xc20) = 0;
  uVar1 = (*(undefined8 **)(param_1 + 8))[1];
  *(undefined8 *)(lVar14 + 0x228) = **(undefined8 **)(param_1 + 8);
  *(undefined8 *)(lVar14 + 0x230) = uVar1;
  lVar9 = param_3[1];
  plVar8 = (long *)(param_1 + 0x10);
  *plVar8 = *param_3;
  *(long *)(param_1 + 0x18) = lVar9;
  lVar9 = param_3[2];
  lVar11 = param_3[3];
  lVar2 = param_3[5];
  *(long *)(param_1 + 0x30) = param_3[4];
  *(long *)(param_1 + 0x38) = lVar2;
  *(long *)(param_1 + 0x20) = lVar9;
  *(long *)(param_1 + 0x28) = lVar11;
  lVar9 = param_3[6];
  lVar11 = param_3[7];
  lVar2 = param_3[9];
  *(long *)(param_1 + 0x50) = param_3[8];
  *(long *)(param_1 + 0x58) = lVar2;
  *(long *)(param_1 + 0x40) = lVar9;
  *(long *)(param_1 + 0x48) = lVar11;
  *(long *)(*(long *)PTR_DAT_04bc10b0 + 0xa0) = *plVar8;
  lVar9 = *(long *)(lVar10 + 0x120);
  if (*plVar8 == 0) {
    *(undefined8 *)(lVar9 + 0x48) = 0;
    *(undefined8 *)(lVar9 + 0x50) = 0;
    *(undefined8 *)(lVar9 + 0x38) = 0;
    *(undefined8 *)(lVar9 + 0x40) = 0;
    *(undefined8 *)(lVar9 + 0x28) = 0;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    *(undefined8 *)(lVar9 + 0x20) = 0;
    *(long *)(lVar9 + 8) = 0;
    *(undefined8 *)(lVar9 + 0x10) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(lVar9 + 8) = *plVar8;
    *(undefined8 *)(lVar9 + 0x10) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(lVar9 + 0x30) = uVar4;
    *(undefined8 *)(lVar9 + 0x18) = uVar1;
    *(undefined8 *)(lVar9 + 0x20) = uVar3;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(lVar9 + 0x50) = uVar4;
    *(undefined8 *)(lVar9 + 0x38) = uVar1;
    *(undefined8 *)(lVar9 + 0x40) = uVar3;
  }
  *(undefined1 *)(lVar9 + 0xa8) = 0;
  puVar6 = PTR_DAT_04bb8930;
  lVar9 = *(long *)PTR_DAT_04bb8930;
  uVar7 = *(uint *)(lVar9 + 0x18);
  if (uVar7 != 0xffffffff) {
    lVar11 = *(long *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 8) <= uVar7) {
      uVar7 = 0;
    }
    plVar12 = (long *)(lVar11 + (long)(int)uVar7 * 0x58 + 0x18);
    if (*plVar12 != *plVar8) {
      *plVar12 = *plVar8;
      *(undefined4 *)(lVar11 + (long)(int)uVar7 * 0x58 + 0x50) = 0x1e;
      *(undefined1 *)(lVar9 + 0xf5) = 1;
    }
  }
  __dest = *(void **)(lVar14 + 0x130);
  local_78 = (void *)((long)&local_70 + 4);
  local_70 = CONCAT26(local_70._6_2_,0x15);
  local_80 = &DAT_04a5a568;
  local_44 = 0;
  if (__dest != local_78) {
    lVar9 = 0;
    local_44 = 0;
    do {
      if (local_68[lVar9 + -2] == 0) goto LAB_01d7ca8c;
      if (local_68[lVar9 + -1] == 0) {
        lVar9 = lVar9 + 1;
        goto LAB_01d7ca8c;
      }
      if (local_68[lVar9] == 0) {
        lVar9 = lVar9 + 2;
        goto LAB_01d7ca8c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_01d7ca8c:
    uVar7 = (uint)lVar9;
    if (*(int *)(lVar14 + 0x138) <= (int)(uint)lVar9) {
      uVar7 = *(int *)(lVar14 + 0x138) - 1;
    }
    uVar15 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar7 << 1;
    memcpy(__dest,local_78,uVar15);
    *(undefined2 *)((long)__dest + uVar15) = 0;
  }
  (**(code **)(*(long *)(lVar14 + 0x128) + 0x18))((long *)(lVar14 + 0x128));
  if (**(long **)(param_1 + 8) == 0 && (*(long **)(param_1 + 8))[1] == 0) goto LAB_01d7cbc4;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    lVar9 = 0;
    plVar8 = plRam0000000000000290;
    if (plRam0000000000000290 != (long *)0x0) goto LAB_01d7cb1c;
LAB_01d7cb38:
    uVar7 = 1;
  }
  else {
    lVar14 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x38))();
    lVar9 = 0;
    if (lVar14 != 0) {
      lVar9 = lVar14 + 0x276cb0;
    }
    plVar8 = *(long **)(lVar9 + 0x290);
    if (*(long **)(lVar9 + 0x290) == (long *)0x0) goto LAB_01d7cb38;
LAB_01d7cb1c:
    if ((undefined8 *)*plVar8 == (undefined8 *)0x0) goto LAB_01d7cb38;
    uVar7 = (*(code *)**(undefined8 **)*plVar8)();
    uVar7 = uVar7 ^ 1;
  }
  plVar8 = (long *)(*(long *)(lVar9 + 0x278) + *(long *)(lVar9 + 0x270));
  lVar11 = plVar8[5];
  lVar14 = plVar8[2];
  lVar2 = plVar8[3];
  *(long *)(param_1 + 0x80) = plVar8[4];
  *(long *)(param_1 + 0x88) = lVar11;
  *(long *)(param_1 + 0x70) = lVar14;
  *(long *)(param_1 + 0x78) = lVar2;
  lVar11 = plVar8[9];
  lVar14 = plVar8[6];
  lVar2 = plVar8[7];
  *(long *)(param_1 + 0xa0) = plVar8[8];
  *(long *)(param_1 + 0xa8) = lVar11;
  *(long *)(param_1 + 0x90) = lVar14;
  *(long *)(param_1 + 0x98) = lVar2;
  lVar14 = *plVar8;
  lVar11 = plVar8[1];
  *(long *)(param_1 + 0x60) = lVar14;
  *(long *)(param_1 + 0x68) = lVar11;
  lVar11 = *(long *)(*(long *)puVar5 + 0x120);
  if (lVar14 == 0) {
    *(undefined8 *)(lVar11 + 0x98) = 0;
    *(undefined8 *)(lVar11 + 0xa0) = 0;
    *(undefined8 *)(lVar11 + 0x88) = 0;
    *(undefined8 *)(lVar11 + 0x90) = 0;
    *(undefined8 *)(lVar11 + 0x78) = 0;
    *(undefined8 *)(lVar11 + 0x80) = 0;
    *(undefined8 *)(lVar11 + 0x68) = 0;
    *(undefined8 *)(lVar11 + 0x70) = 0;
    *(undefined8 *)(lVar11 + 0x58) = 0;
    *(undefined8 *)(lVar11 + 0x60) = 0;
  }
  else {
    memmove((undefined8 *)(lVar11 + 0x58),plVar8,0x50);
  }
  if ((((uVar7 & 1) == 0) && (*(long *)(lVar9 + 0x290) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar9 + 0x290) + 8), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
LAB_01d7cbc4:
  FUN_01da5550(*(undefined8 *)PTR_DAT_04bb49f8);
  FUN_01c92200(*(undefined8 *)puVar6);
  lVar9 = DAT_053719b8;
  puVar13 = *(undefined8 **)PTR_DAT_04bb4a00;
  *(undefined1 *)((long)puVar13 + 0x11) = 0;
  puVar5 = PTR_DAT_04bc1140;
  if (**(long **)(lVar9 + 8) != 0 || (*(long **)(lVar9 + 8))[1] != 0) {
    uVar15 = FUN_03bf8a30(*(undefined8 *)PTR_DAT_04bc1140);
    if ((uVar15 & 1) != 0) {
      *(undefined1 *)(puVar13 + 2) = 1;
      return 1;
    }
    local_68[0] = 0;
    local_68[1] = 0;
    local_68[2] = 100;
    local_68[3] = 0;
    local_80 = (undefined *)*puVar13;
    local_78 = (void *)**(undefined8 **)(DAT_053719b8 + 8);
    local_70 = (*(undefined8 **)(DAT_053719b8 + 8))[1];
    FUN_03bf8770(*(undefined8 *)puVar5,&local_80);
  }
  return 1;
}

