
/* WARNING: Removing unreachable block (ram,0x021f4fe4) */
/* WARNING: Removing unreachable block (ram,0x021f4fd4) */
/* WARNING: Removing unreachable block (ram,0x021f5064) */

undefined1 FUN_021f4f90(float *param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *__s;
  uint uVar5;
  short *psVar6;
  ulong uVar7;
  ushort uVar8;
  long lVar9;
  uint *puVar10;
  int *piVar11;
  uint *puVar12;
  bool bVar13;
  char cVar14;
  undefined4 uVar15;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  int local_78;
  int iStack_74;
  
  local_90 = PTR_DAT_04bb2010 + 0x10;
  local_88 = 0;
  local_78 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_74 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  lVar9 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xd0);
  local_80 = local_90;
  if (lVar9 == 0) {
    psVar6 = (short *)PTR_DAT_04bb37e0;
  }
  else {
    lVar2 = lVar9 + 0x130 + (ulong)*(uint *)(lVar9 + 0x198) * 0x30;
    if (1 < *(uint *)(lVar9 + 0x198)) {
      lVar2 = lVar9 + 0x130;
    }
    psVar6 = (short *)FUN_012eb21c(lVar2,&local_80,&local_90);
  }
  puVar4 = PTR_DAT_04bb43c0;
  if ((ushort)(*psVar6 + 3U) < 2) {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(psVar6);
  if (*(long *)puVar4 == 0) {
    return 0;
  }
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar5) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return 0;
  }
  uVar7 = FUN_0277e158(psVar6);
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  lVar9 = *(long *)puVar4;
  local_a0 = *(undefined4 *)psVar6;
  local_9c = *(undefined4 *)(psVar6 + 2);
  local_98 = 0;
  uVar5 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar4 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(psVar6);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar12 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar12 != (uint *)0x0)) {
        uVar5 = *puVar12;
        uVar8 = 0;
        if ((uVar5 != 0) && (puVar12 != (uint *)(ulong)uVar5)) {
          puVar10 = (uint *)((long)puVar12 - (long)(ulong)uVar5);
          uVar8 = 0;
          if (*puVar10 != 0) {
            uVar5 = puVar10[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar10 + lVar9 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar9 != 0) {
                uVar3 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar12 - lVar9) / (ulong)uVar5);
                }
                if (*puVar10 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if (uVar3 < *(uint *)PTR_DAT_04bc0048) {
                  uVar8 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2);
                  if (0x51 < uVar8) {
                    bVar13 = false;
                    uVar8 = 0;
                    goto LAB_021f5288;
                  }
                  goto LAB_021f53b8;
                }
              }
            }
            uVar8 = 0;
          }
        }
LAB_021f53b8:
        bVar13 = false;
        goto LAB_021f5288;
      }
    }
  }
  uVar8 = 0;
  puVar12 = (uint *)0x0;
  bVar13 = true;
LAB_021f5288:
  if ((uVar8 & 0xfffe) != 10) {
    return 0;
  }
  if (param_2 != 0) {
    FUN_0277f02c(psVar6,param_2);
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + (int)local_88;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + local_88._4_4_;
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + (int)local_88;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + local_88._4_4_;
  }
  __s = PTR_DAT_04bbfe90;
  puVar4 = PTR_DAT_04bbfe88;
  if (param_3 == (undefined4 *)0x0) {
    return 1;
  }
  uVar15 = 0;
  if ((bVar13) || (uVar5 = *puVar12, uVar5 == 0)) {
LAB_021f53cc:
    *param_3 = uVar15;
    return 1;
  }
  cVar14 = *PTR_DAT_04bbfe88;
  do {
    if (cVar14 == '\0') {
      cVar14 = '\x01';
      *puVar4 = 1;
      memset(__s,0xff,0x1ac);
      uVar5 = *puVar12;
    }
    else {
      uVar3 = *(uint *)(__s + 0xf0);
      if (-1 < (int)uVar3) {
        if ((undefined4 *)((ulong)uVar3 + (long)puVar12) != (undefined4 *)0x0) {
          uVar15 = *(undefined4 *)((ulong)uVar3 + (long)puVar12);
        }
        goto LAB_021f53cc;
      }
      if (uVar3 != 0xffffffff) goto LAB_021f53cc;
    }
    lVar9 = (long)puVar12 - (ulong)uVar5;
    if (((ulong)uVar5 == 0) || (lVar9 == 0)) goto LAB_021f53cc;
    lVar2 = 0xc;
    if (*(char *)(lVar9 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar9 == 0) goto LAB_021f53cc;
    uVar7 = (ulong)*(ushort *)(lVar9 + 8);
    *(undefined4 *)(__s + 0xf0) = 0xfffffffe;
    if (uVar7 == 0) goto LAB_021f53cc;
    piVar11 = (int *)(lVar2 + lVar9 + 4);
    while (piVar11[-1] != -0x499d99d4) {
      piVar11 = piVar11 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) goto LAB_021f53cc;
    }
    iVar1 = 0;
    if (*piVar11 != -1) {
      iVar1 = *piVar11;
    }
    *(int *)(__s + 0xf0) = iVar1;
    uVar5 = *puVar12;
    if (uVar5 == 0) goto LAB_021f53cc;
  } while( true );
}

