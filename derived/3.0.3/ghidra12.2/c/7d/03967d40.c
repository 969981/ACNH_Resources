
void FUN_03967d40(int *param_1,undefined4 *param_2,int param_3,long *param_4)

{
  long lVar1;
  undefined *puVar2;
  uint *puVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  undefined *puVar10;
  bool bVar11;
  uint uVar12;
  long *plVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  uint *puVar17;
  ulong *puVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  undefined4 uVar23;
  uint local_3f0 [186];
  undefined4 local_108;
  undefined2 local_104;
  undefined2 local_102;
  undefined4 local_100;
  undefined8 local_fc;
  long lStack_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  
  memset(local_3f0,0,0x2e8);
  uVar22 = 0;
  lVar19 = 1;
  do {
    lVar1 = lVar19 * 0x10;
    local_100 = 0x10100;
    local_108 = 0x800080;
    uVar9 = (undefined2)(&DAT_041b3598)[lVar19];
    local_fc = 0;
    uVar5 = (undefined1)*(undefined4 *)(&DAT_041b2884 + lVar1);
    uVar6 = (undefined1)*(undefined4 *)(&DAT_041b2888 + lVar1);
    lStack_f4 = (ulong)CONCAT11(uVar6,uVar5) << 0x30;
    uVar7 = (undefined1)*(undefined4 *)(&DAT_041b288c + lVar1);
    uVar8 = (undefined1)*(undefined4 *)(&DAT_041b2890 + lVar1);
    local_ec = (uint)CONCAT11(uVar8,uVar7);
    local_104 = 1;
    local_102 = uVar9;
    FUN_038f8f90(&local_108,&local_e8);
    uVar12 = (**(code **)PTR_DAT_04bcf770)(&local_e8);
    (**(code **)PTR_DAT_04bcf740)(&local_e8);
    (**(code **)PTR_DAT_04bcf0b0)(&local_e8);
    if ((*(byte *)(DAT_05ae78f0 + 800) & 1) != 0) {
      (**(code **)PTR_DAT_04bcf780)(&local_e8);
    }
    uVar21 = (uint)uVar22;
    if (0 < (int)uVar21) {
      uVar16 = 0;
      puVar17 = local_3f0;
      do {
        puVar3 = puVar17;
        if (0x5c < uVar16) {
          puVar3 = local_3f0;
        }
        if (*puVar3 == (uVar12 & 0xffff)) goto LAB_03967ecc;
        uVar16 = uVar16 + 1;
        puVar17 = puVar17 + 2;
      } while (uVar22 != uVar16);
    }
    lVar1 = uVar22 * 2;
    uVar22 = (ulong)(uVar21 + 1);
    puVar17 = local_3f0 + lVar1;
    if (0x5c < uVar21) {
      puVar17 = local_3f0;
    }
    *puVar17 = uVar12 & 0xffff;
LAB_03967ecc:
    local_100 = 0x10100;
    local_108 = 0x800080;
    local_ec = CONCAT22(2,CONCAT11(uVar8,uVar7));
    local_104 = 1;
    local_fc = 0;
    lStack_f4 = (ulong)CONCAT11(uVar6,uVar5) << 0x30;
    local_102 = uVar9;
    FUN_038f8f90(&local_108,&local_e8);
    uVar12 = (**(code **)PTR_DAT_04bcf770)(&local_e8);
    (**(code **)PTR_DAT_04bcf740)(&local_e8);
    (**(code **)PTR_DAT_04bcf0b0)(&local_e8);
    if ((*(byte *)(DAT_05ae78f0 + 800) & 1) != 0) {
      (**(code **)PTR_DAT_04bcf780)(&local_e8);
    }
    uVar21 = (uint)uVar22;
    if (0 < (int)uVar21) {
      uVar16 = 0;
      puVar17 = local_3f0;
      do {
        puVar3 = puVar17;
        if (0x5c < uVar16) {
          puVar3 = local_3f0;
        }
        if (*puVar3 == (uVar12 & 0xffff)) goto LAB_03967fd8;
        uVar16 = uVar16 + 1;
        puVar17 = puVar17 + 2;
      } while (uVar22 != uVar16);
    }
    lVar1 = uVar22 * 2;
    uVar22 = (ulong)(uVar21 + 1);
    puVar17 = local_3f0 + lVar1;
    if (0x5c < uVar21) {
      puVar17 = local_3f0;
    }
    *puVar17 = uVar12 & 0xffff;
LAB_03967fd8:
    if (0x29 < lVar19 - 0x2fU) {
      local_100 = 0x10100;
      local_fc = 0;
      lStack_f4 = (ulong)CONCAT11(uVar6,uVar5) << 0x30;
      local_ec = (uint)CONCAT12(1,CONCAT11(uVar8,uVar7));
      local_108 = 0x800080;
      local_104 = 1;
      local_102 = uVar9;
      FUN_038f8f90(&local_108,&local_e8);
      uVar12 = (**(code **)PTR_DAT_04bcf770)(&local_e8);
      (**(code **)PTR_DAT_04bcf740)(&local_e8);
      (**(code **)PTR_DAT_04bcf0b0)(&local_e8);
      if ((*(byte *)(DAT_05ae78f0 + 800) & 1) != 0) {
        (**(code **)PTR_DAT_04bcf780)(&local_e8);
      }
      uVar21 = (uint)uVar22;
      if (0 < (int)uVar21) {
        uVar16 = 0;
        puVar17 = local_3f0;
        do {
          puVar3 = puVar17;
          if (0x5c < uVar16) {
            puVar3 = local_3f0;
          }
          if (*puVar3 == (uVar12 & 0xffff)) goto LAB_03967da4;
          uVar16 = uVar16 + 1;
          puVar17 = puVar17 + 2;
        } while (uVar22 != uVar16);
      }
      lVar1 = uVar22 * 2;
      uVar22 = (ulong)(uVar21 + 1);
      puVar17 = local_3f0 + lVar1;
      if (0x5c < uVar21) {
        puVar17 = local_3f0;
      }
      *puVar17 = uVar12 & 0xffff;
    }
LAB_03967da4:
    lVar1 = DAT_05ae7600;
    iVar20 = (int)uVar22;
    lVar19 = lVar19 + 1;
  } while (lVar19 != 0x5d);
  if (iVar20 == 0) {
    return;
  }
  if (0 < iVar20) {
    uVar16 = uVar22 << 6 | 8;
    if (DAT_05ae7600 == 0) {
      puVar14 = malloc(uVar16);
    }
    else {
      plVar13 = param_4;
      if (param_4 == (long *)0x0) {
        lVar19 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar13 = (long *)(lVar1 + 8);
        if (lVar19 != 0) {
          plVar13 = (long *)(lVar19 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_0396820c;
      }
      puVar14 = (ulong *)(**(code **)(*plVar13 + 0x30))(plVar13,uVar16,8);
    }
    if (puVar14 != (ulong *)0x0) {
      puVar18 = puVar14 + 1;
      *puVar14 = uVar22;
      puVar10 = PTR_DAT_04bb2cc8;
      puVar15 = puVar18;
      if ((uVar22 & 1) != 0) {
        puVar2 = PTR_DAT_04bb2cc8 + 0x10;
        puVar15 = puVar14 + 9;
        puVar14[7] = 0;
        *(undefined2 *)((long)puVar14 + 0x32) = 0;
        puVar14[5] = 0;
        *(undefined1 *)(puVar14 + 6) = 0;
        puVar14[3] = 0;
        puVar14[4] = 0;
        puVar14[1] = (ulong)puVar2;
        puVar14[2] = 0;
      }
      if ((uVar22 - 1 & 0x3ffffffffffffff) != 0) {
        do {
          puVar15[6] = 0;
          *(undefined2 *)((long)puVar15 + 0x2a) = 0;
          puVar15[4] = 0;
          *(undefined1 *)(puVar15 + 5) = 0;
          puVar15[0xe] = 0;
          *(undefined2 *)((long)puVar15 + 0x6a) = 0;
          puVar15[0xc] = 0;
          *(undefined1 *)(puVar15 + 0xd) = 0;
          puVar15[2] = 0;
          puVar15[3] = 0;
          *puVar15 = (ulong)(puVar10 + 0x10);
          puVar15[1] = 0;
          puVar15[10] = 0;
          puVar15[0xb] = 0;
          puVar15[8] = (ulong)(puVar10 + 0x10);
          puVar15[9] = 0;
          puVar15 = puVar15 + 0x10;
        } while (puVar15 != puVar18 + uVar22 * 8);
      }
      *param_1 = iVar20;
      *(ulong **)(param_1 + 2) = puVar18;
      goto joined_r0x03968218;
    }
  }
LAB_0396820c:
  iVar20 = *param_1;
  puVar18 = *(ulong **)(param_1 + 2);
joined_r0x03968218:
  if (iVar20 != 0) {
    uVar22 = 0;
    uVar16 = 0;
    do {
      puVar17 = local_3f0 + uVar16 * 2;
      bVar11 = 0x5c < (uint)uVar22;
      puVar3 = puVar17;
      if (bVar11) {
        puVar3 = local_3f0;
      }
      lVar19 = (long)puVar18 + ((long)(uVar16 << 0x20) >> 0x1a);
      if (bVar11) {
        puVar17 = local_3f0;
      }
      cVar4 = *(char *)((ulong)puVar17 | 4);
      *(uint *)(lVar19 + 0x38) = *puVar3;
      uVar23 = 4;
      if (cVar4 != '\0') {
        uVar23 = 0x104;
      }
      local_e8 = *param_2;
      uStack_e4 = param_2[1];
      local_e0 = *(undefined8 *)(param_2 + 2);
      uStack_d8 = *(undefined8 *)(param_2 + 4);
      FUN_038f4c34(lVar19,(long)param_3,param_4,uVar23,&local_e8);
      uVar22 = uVar16 + 1;
      uVar16 = uVar22 & 0xffffffff;
    } while (iVar20 != (int)uVar22);
  }
  return;
}

