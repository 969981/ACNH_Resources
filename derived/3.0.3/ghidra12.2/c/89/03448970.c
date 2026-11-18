
void FUN_03448970(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined ***pppuVar8;
  int iVar9;
  undefined ***pppuVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined **local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined *local_100;
  bool local_f8;
  undefined ***local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  bool local_c8;
  undefined ***local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  bool local_98;
  uint local_8c;
  undefined *local_88;
  undefined4 local_80;
  
  FUN_034490c0(*param_2,param_1);
  FUN_034490c0(param_2[1],param_1 + 0x10);
  FUN_034490c0(param_2[2],param_1 + 0x20);
  FUN_03449244(param_2[3],param_1);
  FUN_03449244(param_2[4],param_1 + 0x10);
  FUN_03449244(param_2[5],param_1 + 0x20);
  puVar5 = PTR_DAT_04bd3ef8;
  puVar1 = PTR_DAT_04bd3ef0;
  puVar2 = PTR_DAT_04bd3ee0;
  local_110 = 0;
  uStack_108 = 0;
  pppuVar8 = (undefined ***)param_2[6];
  local_100 = (undefined *)0x0;
  local_118 = (undefined **)(PTR_DAT_04bd3ee0 + 0x10);
  if (((*PTR_DAT_04bd3ef8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd3ef8), iVar7 != 0))
  {
    FUN_03c7fd94(puVar1);
    puVar3 = PTR_LAB_04bd3ed0;
    *(undefined **)(puVar1 + 0x650) = PTR_LAB_04bd3ec8;
    *(undefined **)(puVar1 + 0x658) = puVar3;
    *(undefined **)(puVar1 + 0x660) = PTR_LAB_04bd3ed8;
    __cxa_guard_release(PTR_DAT_04bd3ef8);
  }
  if (local_100 != (undefined *)0x0) {
    (**(code **)((long)local_100 + 8))(local_110);
  }
  puVar3 = PTR_DAT_04bd3ee8;
  local_e8 = (undefined **)(puVar2 + 0x10);
  local_100 = puVar1;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = (undefined *)0x0;
  local_118 = (undefined **)(PTR_DAT_04bd3ee8 + 0x10);
  local_110 = 0;
  local_f8 = *(char *)(param_1 + 0x40) != '\0' && *(char *)(param_2 + 9) == '\0';
  local_f0 = (undefined ***)param_2[7];
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd3ef8), iVar7 != 0)) {
    FUN_03c7fd94(puVar1);
    puVar4 = PTR_LAB_04bd3ed0;
    *(undefined **)(puVar1 + 0x650) = PTR_LAB_04bd3ec8;
    *(undefined **)(puVar1 + 0x658) = puVar4;
    *(undefined **)(puVar1 + 0x660) = PTR_LAB_04bd3ed8;
    __cxa_guard_release(PTR_DAT_04bd3ef8);
  }
  if (local_d0 != (undefined *)0x0) {
    (**(code **)((long)local_d0 + 8))(local_e0);
  }
  local_b8 = (undefined **)(puVar2 + 0x10);
  local_d0 = puVar1;
  local_e8 = (undefined **)(puVar3 + 0x10);
  local_e0 = 0;
  local_a0 = (undefined *)0x0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c8 = *(char *)(param_1 + 0x40) != '\0' && *(char *)((long)param_2 + 0x49) == '\0';
  local_c0 = (undefined ***)param_2[8];
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd3ef8), iVar7 != 0)) {
    FUN_03c7fd94(puVar1);
    puVar2 = PTR_LAB_04bd3ed0;
    *(undefined **)(puVar1 + 0x650) = PTR_LAB_04bd3ec8;
    *(undefined **)(puVar1 + 0x658) = puVar2;
    *(undefined **)(puVar1 + 0x660) = PTR_LAB_04bd3ed8;
    __cxa_guard_release(PTR_DAT_04bd3ef8);
  }
  if (local_a0 != (undefined *)0x0) {
    (**(code **)((long)local_a0 + 8))(local_b0);
  }
  bVar6 = local_f8;
  puVar2 = PTR_DAT_04bc0cb8;
  pppuVar10 = &local_118;
  local_a0 = puVar1;
  local_b8 = (undefined **)(puVar3 + 0x10);
  local_b0 = 0;
  local_98 = *(char *)(param_1 + 0x40) != '\0' && *(char *)((long)param_2 + 0x4a) == '\0';
  if ((pppuVar8 != (undefined ***)0x0) && (pppuVar8[1] != (undefined **)0x0)) {
    pppuVar10 = pppuVar8;
  }
  local_80 = 7;
  puVar1 = PTR_DAT_04bc0cb8 + 0x10;
  local_88 = puVar1;
  (*(code *)(*pppuVar10)[3])(pppuVar10,&local_88);
  (*(code *)pppuVar10[3][0x11])(pppuVar10[1],bVar6);
  if (bVar6 != false) {
    local_88 = puVar1;
    local_80 = 0x19;
    (*(code *)(*pppuVar10)[4])(pppuVar10,&local_88);
    iVar7 = (*(code *)pppuVar10[3][0x36])(pppuVar10[1]);
    if (iVar7 != 0) {
      iVar9 = 0;
      do {
        local_88 = puVar2 + 0x10;
        local_80 = 0x1a;
        fVar12 = *(float *)(param_1 + 0x30);
        fVar13 = *(float *)(param_1 + 0x34);
        fVar11 = 255.0;
        if (fVar12 <= 1.0) {
          fVar11 = fVar12 * 255.0;
        }
        fVar15 = 0.0;
        if (0.0 <= fVar12) {
          fVar15 = fVar11;
        }
        fVar11 = 255.0;
        if (fVar13 <= 1.0) {
          fVar11 = fVar13 * 255.0;
        }
        fVar14 = *(float *)(param_1 + 0x38);
        fVar16 = *(float *)(param_1 + 0x3c);
        fVar12 = 0.0;
        if (0.0 <= fVar13) {
          fVar12 = fVar11;
        }
        fVar11 = 255.0;
        if (fVar14 <= 1.0) {
          fVar11 = fVar14 * 255.0;
        }
        fVar13 = 0.0;
        if (0.0 <= fVar14) {
          fVar13 = fVar11;
        }
        fVar11 = 255.0;
        if (fVar16 <= 1.0) {
          fVar11 = fVar16 * 255.0;
        }
        fVar14 = 0.0;
        if (0.0 <= fVar16) {
          fVar14 = fVar11;
        }
        local_8c = (int)fVar15 << 0x18 | (int)fVar12 << 0x10 | (int)fVar13 << 8 | (int)fVar14;
        (*(code *)(*pppuVar10)[3])(pppuVar10,&local_88);
        (*(code *)pppuVar10[3][0x37])(pppuVar10[1],iVar9,1,0,&local_8c);
        iVar9 = iVar9 + 1;
      } while (iVar7 != iVar9);
    }
  }
  bVar6 = local_c8;
  pppuVar8 = &local_e8;
  if ((local_f0 != (undefined ***)0x0) && (local_f0[1] != (undefined **)0x0)) {
    pppuVar8 = local_f0;
  }
  local_88 = puVar2 + 0x10;
  local_80 = 7;
  (*(code *)(*pppuVar8)[3])(pppuVar8,&local_88);
  (*(code *)pppuVar8[3][0x11])(pppuVar8[1],bVar6);
  if (bVar6 != false) {
    local_88 = puVar2 + 0x10;
    local_80 = 0x19;
    (*(code *)(*pppuVar8)[4])(pppuVar8,&local_88);
    iVar7 = (*(code *)pppuVar8[3][0x36])(pppuVar8[1]);
    if (iVar7 != 0) {
      iVar9 = 0;
      do {
        local_88 = puVar2 + 0x10;
        local_80 = 0x1a;
        fVar12 = *(float *)(param_1 + 0x30);
        fVar13 = *(float *)(param_1 + 0x34);
        fVar11 = 255.0;
        if (fVar12 <= 1.0) {
          fVar11 = fVar12 * 255.0;
        }
        fVar15 = 0.0;
        if (0.0 <= fVar12) {
          fVar15 = fVar11;
        }
        fVar11 = 255.0;
        if (fVar13 <= 1.0) {
          fVar11 = fVar13 * 255.0;
        }
        fVar14 = *(float *)(param_1 + 0x38);
        fVar16 = *(float *)(param_1 + 0x3c);
        fVar12 = 0.0;
        if (0.0 <= fVar13) {
          fVar12 = fVar11;
        }
        fVar11 = 255.0;
        if (fVar14 <= 1.0) {
          fVar11 = fVar14 * 255.0;
        }
        fVar13 = 0.0;
        if (0.0 <= fVar14) {
          fVar13 = fVar11;
        }
        fVar11 = 255.0;
        if (fVar16 <= 1.0) {
          fVar11 = fVar16 * 255.0;
        }
        fVar14 = 0.0;
        if (0.0 <= fVar16) {
          fVar14 = fVar11;
        }
        local_8c = (int)fVar15 << 0x18 | (int)fVar12 << 0x10 | (int)fVar13 << 8 | (int)fVar14;
        (*(code *)(*pppuVar8)[3])(pppuVar8,&local_88);
        (*(code *)pppuVar8[3][0x37])(pppuVar8[1],iVar9,1,0,&local_8c);
        iVar9 = iVar9 + 1;
      } while (iVar7 != iVar9);
    }
  }
  bVar6 = local_98;
  pppuVar8 = &local_b8;
  if ((local_c0 != (undefined ***)0x0) && (local_c0[1] != (undefined **)0x0)) {
    pppuVar8 = local_c0;
  }
  local_88 = puVar2 + 0x10;
  local_80 = 7;
  (*(code *)(*pppuVar8)[3])(pppuVar8,&local_88);
  (*(code *)pppuVar8[3][0x11])(pppuVar8[1],bVar6);
  if (bVar6 != false) {
    local_88 = puVar2 + 0x10;
    local_80 = 0x19;
    (*(code *)(*pppuVar8)[4])(pppuVar8,&local_88);
    iVar7 = (*(code *)pppuVar8[3][0x36])(pppuVar8[1]);
    if (iVar7 != 0) {
      iVar9 = 0;
      do {
        local_88 = puVar2 + 0x10;
        local_80 = 0x1a;
        fVar12 = *(float *)(param_1 + 0x30);
        fVar13 = *(float *)(param_1 + 0x34);
        fVar11 = 255.0;
        if (fVar12 <= 1.0) {
          fVar11 = fVar12 * 255.0;
        }
        fVar15 = 0.0;
        if (0.0 <= fVar12) {
          fVar15 = fVar11;
        }
        fVar11 = 255.0;
        if (fVar13 <= 1.0) {
          fVar11 = fVar13 * 255.0;
        }
        fVar14 = *(float *)(param_1 + 0x38);
        fVar16 = *(float *)(param_1 + 0x3c);
        fVar12 = 0.0;
        if (0.0 <= fVar13) {
          fVar12 = fVar11;
        }
        fVar11 = 255.0;
        if (fVar14 <= 1.0) {
          fVar11 = fVar14 * 255.0;
        }
        fVar13 = 0.0;
        if (0.0 <= fVar14) {
          fVar13 = fVar11;
        }
        fVar11 = 255.0;
        if (fVar16 <= 1.0) {
          fVar11 = fVar16 * 255.0;
        }
        fVar14 = 0.0;
        if (0.0 <= fVar16) {
          fVar14 = fVar11;
        }
        local_8c = (int)fVar15 << 0x18 | (int)fVar12 << 0x10 | (int)fVar13 << 8 | (int)fVar14;
        (*(code *)(*pppuVar8)[3])(pppuVar8,&local_88);
        (*(code *)pppuVar8[3][0x37])(pppuVar8[1],iVar9,1,0,&local_8c);
        iVar9 = iVar9 + 1;
      } while (iVar7 != iVar9);
    }
  }
  local_b8 = &PTR_LAB_04b2ac68;
  if (local_a0 != (undefined *)0x0) {
    (**(code **)(local_a0 + 8))(local_b0);
  }
  local_e8 = &PTR_LAB_04b2ac68;
  if (local_d0 != (undefined *)0x0) {
    (**(code **)(local_d0 + 8))(local_e0);
  }
  local_118 = &PTR_LAB_04b2ac68;
  if (local_100 != (undefined *)0x0) {
    (**(code **)(local_100 + 8))(local_110);
  }
  return;
}

