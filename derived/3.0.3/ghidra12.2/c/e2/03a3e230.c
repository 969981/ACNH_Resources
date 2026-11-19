
void FUN_03a3e230(long param_1,long param_2,uint param_3,long *param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_e8;
  float fStack_e4;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined8 local_c4;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  float local_68;
  float fStack_64;
  
  uVar2 = param_3;
  if (*(uint *)(param_1 + 0xa30) <= param_3) {
    uVar2 = 0;
  }
  if ((char)param_4[6] == '\0') {
    FUN_03a3e8a0(param_1,param_2,param_3,param_4);
    return;
  }
  lVar13 = *param_4;
  lVar3 = param_4[1];
  lVar14 = *(long *)(param_1 + 0xa38);
  fVar16 = *(float *)(lVar3 + 0x14) - *(float *)(lVar3 + 0xc);
  fVar15 = *(float *)(lVar3 + 0x10) - *(float *)(lVar3 + 8);
  fVar19 = fVar16;
  if (1 < *(int *)(lVar3 + 0x18) - 1U) {
    fVar19 = fVar15;
    fVar15 = fVar16;
  }
  fVar16 = (fVar19 / *(float *)(lVar13 + 8)) *
           (*(float *)(lVar13 + 0x18) - *(float *)(lVar13 + 0x10));
  fVar19 = (fVar15 / *(float *)(lVar13 + 0xc)) *
           (*(float *)(lVar13 + 0x1c) - *(float *)(lVar13 + 0x14));
  local_68 = fVar16;
  fStack_64 = fVar19;
  if (*(int *)(param_1 + 0x730) == 2) {
    lVar13 = 0;
  }
  else {
    lVar13 = FUN_03a3e640(param_1,param_3,0,*(undefined2 *)(*(long *)(lVar13 + 0x20) + 0xa0),
                          &local_68);
  }
  lStack_88 = param_4[6];
  local_80 = param_4[7];
  lStack_78 = param_4[8];
  local_70 = param_4[9];
  local_a8 = param_4[2];
  lStack_a0 = param_4[3];
  local_98 = param_4[4];
  local_b8 = *param_4;
  lStack_b0 = param_4[1];
  local_90 = lVar13;
  FUN_03a3e8a0(param_1,param_2,param_3,&local_b8);
  if (lVar13 != 0) {
    lVar14 = lVar14 + (long)(int)uVar2 * 0xab8;
    FUN_01560750(lVar14 + 0x70,lVar13 + 0xe0,*(undefined1 *)(lVar14 + 0x12e),
                 *(undefined2 *)(lVar14 + 300));
    plVar12 = (long *)(lVar14 + 8);
    *(float *)(lVar14 + 0x10) = fVar16;
    *(float *)(lVar14 + 0x14) = fVar19;
    *(undefined8 *)(lVar14 + 0x60) = 0;
    *(undefined8 *)(lVar14 + 0x68) = 0;
    fVar18 = fVar16;
    fVar15 = 0.0;
    if (fVar16 <= 0.0) {
      fVar18 = 0.0;
      fVar15 = fVar16;
    }
    *(undefined8 *)(lVar14 + 0x50) = 0;
    *(undefined8 *)(lVar14 + 0x58) = 0;
    fVar16 = 0.0;
    if (fVar19 <= 0.0) {
      fVar16 = fVar19;
    }
    *(undefined8 *)(lVar14 + 0x40) = 0;
    *(undefined8 *)(lVar14 + 0x48) = 0;
    *(long *)(lVar14 + 0x28) = lVar14 + 0x70;
    *(float *)(lVar14 + 0x18) = fVar15;
    *(float *)(lVar14 + 0x1c) = fVar16;
    *(float *)(lVar14 + 0x20) = fVar18;
    *(float *)(lVar14 + 0x24) = fVar19;
    *(undefined8 *)(lVar14 + 0x30) = 0;
    *(undefined8 *)(lVar14 + 0x38) = 0;
    (**(code **)(*plVar12 + 0x38))(plVar12,param_2);
    lVar13 = *(long *)(*param_4 + 0x20);
    *(undefined4 *)(lVar14 + 0x230) = *(undefined4 *)(lVar13 + 8);
    *(undefined4 *)(lVar14 + 0x234) = *(undefined4 *)(lVar13 + 0xc);
    *(undefined8 *)(lVar14 + 0x238) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar14 + 0x240) = *(undefined8 *)(lVar13 + 0x18);
    *(undefined4 *)(lVar14 + 0x248) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(lVar14 + 0x24c) = *(undefined4 *)(lVar13 + 0x24);
    *(undefined8 *)(lVar14 + 0x250) = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)(lVar14 + 600) = *(undefined8 *)(lVar13 + 0x30);
    uVar11 = *(undefined8 *)(lVar13 + 0x38);
    uVar4 = *(undefined8 *)(lVar13 + 0x40);
    uVar10 = *(undefined8 *)(lVar13 + 0x48);
    *(undefined8 *)(lVar14 + 0x277) = *(undefined8 *)(lVar13 + 0x4f);
    *(undefined8 *)(lVar14 + 0x270) = uVar10;
    *(undefined8 *)(lVar14 + 0x268) = uVar4;
    *(undefined8 *)(lVar14 + 0x260) = uVar11;
    FUN_038fd1e0(lVar14 + 0x280);
    FUN_038fd2f0(lVar14 + 0x280,lVar13 + 0x58);
    uVar9 = *(undefined4 *)(lVar13 + 0xa0);
    *(undefined8 *)(lVar14 + 0x2c0) = *(undefined8 *)(lVar13 + 0x98);
    puVar1 = (uint *)(lVar14 + 0x304);
    *(undefined4 *)(lVar14 + 0x2c8) = uVar9;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_d0 = 0xff7fffffff7fffff;
    local_e0 = PTR_DAT_04bd0f08 + 0x10;
    local_d8 = 0x7f7fffff7f7fffff;
    local_c8 = *(uint *)PTR_DAT_04bd0ea8;
    local_c4 = 0x3f80000000000000;
    if (local_c8 < 6) {
      if ((1 << (ulong)(local_c8 & 0x1f) & 0x39U) == 0) {
        fVar15 = *(float *)(lVar14 + 0x10);
        fVar19 = *(float *)(lVar14 + 0x14);
      }
      else {
        fVar19 = *(float *)(lVar14 + 0x10);
        fVar15 = *(float *)(lVar14 + 0x14);
      }
      fVar18 = fVar19;
      fVar16 = 0.0;
      if (fVar19 <= 0.0) {
        fVar18 = 0.0;
        fVar16 = fVar19;
      }
      fVar17 = fVar15;
      fVar19 = 0.0;
      if (fVar15 <= 0.0) {
        fVar17 = 0.0;
        fVar19 = fVar15;
      }
      local_d8 = CONCAT44(fVar19,fVar16);
      local_d0 = CONCAT44(fVar17,fVar18);
    }
    FUN_038e77e4(&local_e0,param_2,plVar12);
    fStack_e4 = -*(float *)(param_4[1] + 0xc);
    local_e8 = -*(float *)(param_4[1] + 8);
    uVar11 = *(undefined8 *)
              (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) + 0x18);
    FUN_03907810(uVar11,param_2);
    FUN_03949e90(param_2,uVar11,lVar14 + 0x230,&local_e0,PTR_DAT_04bbdc38,&local_e8);
    uVar2 = *(uint *)(lVar14 + 200);
    if (uVar2 != 0xffffffff) {
      lVar13 = *(long *)PTR_DAT_04bc1010;
      if ((*(uint *)(lVar13 + 0x5c8) >> 3 & 1) == 0) {
        uVar7 = uVar2 - *(ushort *)(lVar13 + 0x3da);
        if (*(uint *)(lVar13 + 0x368) <= uVar7) {
          uVar7 = 0;
        }
        if ((*(uint *)(*(long *)(lVar13 + 0x370) + (long)(int)uVar7 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar2 & 0x3f);
          return;
        }
      }
      if ((*(uint *)(lVar13 + 0x5c8) >> 5 & 1) == 0) {
        uVar8 = 0x112;
        uVar9 = 0x12;
      }
      else {
        uVar8 = 0x111;
        uVar9 = 0x11;
      }
      if ((*(uint *)(lVar13 + 800) & 2) != 0) {
        uVar9 = uVar8;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar9);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
  return;
}

