
void FUN_00790c80(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  ushort uVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  long lVar16;
  char cVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint *local_98;
  
  puVar5 = PTR_DAT_04bb43c0;
  local_a0 = *(undefined4 *)(param_1 + 0x57c);
  local_98 = (uint *)0x0;
  local_a8 = PTR_DAT_04bc0510 + 0x10;
  uStack_9c = *(undefined4 *)(param_1 + 0x580);
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar5 == 0) {
LAB_00790de4:
    uVar11 = 0;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_00790de4;
    lVar16 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(param_1 + 0x57c);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar7) ||
       ((puVar13 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8),
        puVar13 == (uint *)0x0 ||
        (uVar7 = *puVar13, local_98 = puVar13, uVar7 == 0 || puVar13 == (uint *)(ulong)uVar7))))
    goto LAB_00790de4;
    puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar7);
    if ((*puVar15 == 0) || ((uVar7 = puVar15[1], uVar7 == 0 || ((ulong)(ushort)puVar15[2] == 0))))
    goto LAB_00790de4;
    lVar16 = 0xc;
    if (*(char *)((long)puVar15 + 10) != '\0') {
      lVar16 = 0x1c;
    }
    lVar16 = (long)puVar15 + lVar16 + (ulong)(ushort)puVar15[2] * 8;
    if (lVar16 == 0) goto LAB_00790de4;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)puVar13 - lVar16) / (ulong)uVar7);
    }
    if (*puVar15 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc0048 <= uVar12) ||
       (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar12 * 2), 0x51 < uVar11
       )) goto LAB_00790de4;
  }
  if ((uVar11 & 0xfffe) == 0x12) {
    piVar14 = (int *)(*(long *)PTR_DAT_04bb26a8 + 0x2e80);
    do {
      cVar17 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar2) {
        *piVar14 = *piVar14 + 1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    *(undefined1 *)(param_1 + 0x57a) = 1;
  }
  local_d8 = PTR_DAT_04bbc1a0;
  *(undefined4 *)(param_1 + 0x5d8) = 0x3dcccccd;
  local_c8 = 0;
  local_d8 = local_d8 + 0x10;
  local_d0 = PTR_DAT_04bb2010 + 0x10;
  local_b8 = 0;
  local_c0 = local_d0;
  FUN_01afb7fc(&local_a8,&local_d8,0);
  puVar13 = local_98;
  puVar6 = PTR_DAT_04bbfe90;
  puVar5 = PTR_DAT_04bbfe88;
  fVar21 = 0.0;
  iVar3 = (int)local_b8 - (int)local_c8;
  iVar4 = local_b8._4_4_ - local_c8._4_4_;
  if ((local_98 != (uint *)0x0) && (uVar7 = *local_98, uVar7 != 0)) {
    cVar17 = *PTR_DAT_04bbfe88;
    do {
      if (cVar17 == '\0') {
        cVar17 = '\x01';
        *puVar5 = 1;
        memset(puVar6,0xff,0x1ac);
        uVar7 = *puVar13;
      }
      else {
        uVar12 = *(uint *)(puVar6 + 0x28);
        if (-1 < (int)uVar12) {
          fVar21 = 0.0;
          if ((float *)((ulong)uVar12 + (long)puVar13) != (float *)0x0) {
            fVar21 = *(float *)((ulong)uVar12 + (long)puVar13) * 0.5;
          }
          break;
        }
        if (uVar12 != 0xffffffff) goto LAB_00790f88;
      }
      puVar15 = (uint *)(ulong)uVar7;
      if ((puVar15 == (uint *)0x0) || (puVar13 == puVar15)) goto LAB_00790f88;
      lVar16 = 0xc;
      if (*(char *)((long)puVar13 + (10 - (long)puVar15)) != '\0') {
        lVar16 = 0x1c;
      }
      lVar16 = (long)puVar13 + (lVar16 - (long)puVar15);
      if (lVar16 == 0) goto LAB_00790f88;
      uVar8 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar15));
      *(undefined4 *)(puVar6 + 0x28) = 0xfffffffe;
      if (uVar8 == 0) goto LAB_00790f88;
      piVar14 = (int *)(lVar16 + 4);
      while (piVar14[-1] != -0x3e783aea) {
        piVar14 = piVar14 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) goto LAB_00790f88;
      }
      iVar1 = 0;
      if (*piVar14 != -1) {
        iVar1 = *piVar14;
      }
      *(int *)(puVar6 + 0x28) = iVar1;
      uVar7 = *puVar13;
      if (uVar7 == 0) goto LAB_00790f88;
    } while( true );
  }
  goto LAB_00790f8c;
LAB_0079113c:
  if (-1 < (int)uVar7) {
    if (((char *)((long)puVar13 + (ulong)uVar7) != (char *)0x0) &&
       (*(char *)((long)puVar13 + (ulong)uVar7) != '\0')) {
      uVar18 = FUN_01b0df90(&local_a8);
      *(undefined4 *)(param_1 + 0x5dc) = uVar18;
    }
    goto LAB_007911c8;
  }
  if ((uVar7 != 0xffffffff) || (lVar16 = (long)puVar13 - (long)puVar15, lVar16 == 0))
  goto LAB_007911c8;
  lVar9 = 0xc;
  if (*(char *)(lVar16 + 10) != '\0') {
    lVar9 = 0x1c;
  }
  if (lVar9 + lVar16 == 0) goto LAB_007911c8;
  uVar8 = (ulong)*(ushort *)(lVar16 + 8);
  *(undefined4 *)(puVar6 + 0x178) = 0xfffffffe;
  if (uVar8 == 0) goto LAB_007911c8;
  puVar15 = (uint *)(lVar9 + lVar16 + 4);
  while (puVar15[-1] != 0x6b0589c4) {
    puVar15 = puVar15 + 2;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) goto LAB_007911c8;
  }
  uVar7 = 0;
  if (*puVar15 != 0xffffffff) {
    uVar7 = *puVar15;
  }
  *(uint *)(puVar6 + 0x178) = uVar7;
  puVar15 = (uint *)(ulong)*puVar13;
  if (*puVar13 == 0) goto LAB_007911c8;
  goto LAB_0079113c;
LAB_00790f88:
  fVar21 = 0.0;
LAB_00790f8c:
  (**(code **)(**(long **)(*(long *)(param_1 + 0x48) + 0x68) + 400))(&local_d8);
  puVar13 = local_98;
  *(float *)(param_1 + 0x5c8) = (float)(iVar3 + 1) * 5.0 * 0.5;
  *(float *)(param_1 + 0x5d0) = (float)(iVar4 + 1) * 5.0 * 0.5;
  *(float *)(param_1 + 0x5cc) = fVar21;
  *(undefined4 *)(param_1 + 0x5b0) = local_d8._4_4_;
  *(undefined4 *)(param_1 + 0x5a4) = (undefined4)local_d8;
  *(int *)(param_1 + 0x5a8) = (int)local_c8;
  *(undefined4 *)(param_1 + 0x5bc) = local_d0._0_4_;
  *(int *)(param_1 + 0x5b8) = local_b8._4_4_;
  *(int *)(param_1 + 0x5ac) = (int)local_b8;
  *(undefined4 *)(param_1 + 0x5c0) = local_c0._0_4_;
  *(int *)(param_1 + 0x5b4) = local_c8._4_4_;
  *(undefined4 *)(param_1 + 0x5c4) = local_b0;
  lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x68);
  fVar19 = *(float *)(lVar16 + 0x27c);
  fVar20 = *(float *)(lVar16 + 0x280);
  *(float *)(param_1 + 0x598) = fVar21 * 0.0 + *(float *)(lVar16 + 0x278);
  *(float *)(param_1 + 0x59c) = fVar21 + fVar19;
  *(float *)(param_1 + 0x5a0) = fVar21 * 0.0 + fVar20;
  puVar6 = PTR_DAT_04bbfe90;
  puVar5 = PTR_DAT_04bbfe88;
  if ((local_98 != (uint *)0x0) && (uVar7 = *local_98, uVar7 != 0)) {
    cVar17 = *PTR_DAT_04bbfe88;
    do {
      puVar15 = (uint *)(ulong)uVar7;
      if (cVar17 == '\0') {
        cVar17 = '\x01';
        *puVar5 = 1;
        memset(puVar6,0xff,0x1ac);
        puVar15 = (uint *)(ulong)*puVar13;
      }
      else {
        uVar7 = *(uint *)(puVar6 + 0x17c);
        if (-1 < (int)uVar7) {
          if (((char *)((ulong)uVar7 + (long)puVar13) != (char *)0x0) &&
             (*(char *)((ulong)uVar7 + (long)puVar13) != '\0')) {
            uVar7 = *(uint *)(puVar6 + 0x178);
            goto LAB_0079113c;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      if ((puVar15 == (uint *)0x0) || (puVar13 == puVar15)) break;
      lVar16 = 0xc;
      if (*(char *)((long)puVar13 + (10 - (long)puVar15)) != '\0') {
        lVar16 = 0x1c;
      }
      lVar16 = (long)puVar13 + (lVar16 - (long)puVar15);
      if (lVar16 == 0) break;
      uVar8 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar15));
      *(undefined4 *)(puVar6 + 0x17c) = 0xfffffffe;
      if (uVar8 == 0) break;
      piVar14 = (int *)(lVar16 + 4);
      while (piVar14[-1] != -0x415c1748) {
        piVar14 = piVar14 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) goto LAB_007911c8;
      }
      iVar3 = 0;
      if (*piVar14 != -1) {
        iVar3 = *piVar14;
      }
      *(int *)(puVar6 + 0x17c) = iVar3;
      uVar7 = *puVar13;
      if (uVar7 == 0) break;
    } while( true );
  }
LAB_007911c8:
  uVar8 = FUN_01b0d774(&local_a8);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (local_98 != (uint *)0x0) {
    uVar7 = *local_98;
    uVar12 = 0;
    if ((uVar7 == 0) || (local_98 == (uint *)(ulong)uVar7)) goto LAB_00791268;
    puVar13 = (uint *)((long)local_98 - (long)(ulong)uVar7);
    uVar12 = 0;
    if (*puVar13 == 0) goto LAB_00791268;
    uVar7 = puVar13[1];
    if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
      lVar16 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        lVar16 = 0x1c;
      }
      lVar16 = (long)puVar13 + lVar16 + (ulong)(ushort)puVar13[2] * 8;
      if (lVar16 != 0) {
        uVar12 = 0;
        if ((ulong)uVar7 != 0) {
          uVar12 = (uint)((ulong)((long)local_98 - lVar16) / (ulong)uVar7);
        }
        if (*puVar13 <= uVar12) {
          uVar12 = 0xffffffff;
        }
        if ((uVar12 < *(uint *)PTR_DAT_04bc0058) &&
           (uVar12 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0058 + 8) + (long)(int)uVar12 * 2),
           uVar12 < 4)) goto LAB_00791268;
      }
    }
  }
  uVar12 = 0;
LAB_00791268:
  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar12);
  if ((uVar12 & 0xfffffffe) == 2) {
    lVar16 = *(long *)PTR_DAT_04bb2698;
    if (lVar16 == 0) {
      puVar10 = malloc(8);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        param_3 = (long *)(lVar16 + 8);
        if (lVar9 != 0) {
          param_3 = (long *)(lVar9 + 0xa8);
        }
        param_3 = (long *)*param_3;
      }
      puVar10 = (undefined4 *)(**(code **)(*param_3 + 0x30))(param_3,8,8);
    }
    *puVar10 = 0;
    *(undefined1 *)(puVar10 + 1) = 0;
    *(undefined4 **)(param_1 + 0x5e0) = puVar10;
  }
  return;
}

