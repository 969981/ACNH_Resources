
/* WARNING: Removing unreachable block (ram,0x021f2f28) */
/* WARNING: Removing unreachable block (ram,0x021f2f18) */
/* WARNING: Removing unreachable block (ram,0x021f2fa0) */

bool FUN_021f2ed0(float *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *__s;
  bool bVar4;
  uint uVar5;
  short *psVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  int *piVar11;
  uint *puVar12;
  char cVar13;
  undefined4 uVar14;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined *local_80;
  int local_78;
  int iStack_74;
  
  local_90 = PTR_DAT_04bb2010 + 0x10;
  uStack_88 = 0;
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
  puVar3 = PTR_DAT_04bb43c0;
  if ((ushort)(*psVar6 + 3U) < 2) {
    return false;
  }
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(psVar6);
  if (*(long *)puVar3 == 0) {
LAB_021f304c:
    uVar7 = FUN_016d948c(psVar6);
    if ((uVar7 & 1) == 0) {
      return false;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0x40a00000;
    }
    return true;
  }
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (((*(uint *)(lVar9 + 0x1d8) <= uVar5) ||
      (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) ||
     (uVar7 = FUN_0277e158(psVar6), (uVar7 & 1) != 0)) goto LAB_021f304c;
  lVar9 = *(long *)puVar3;
  local_a0 = *(undefined4 *)psVar6;
  local_9c = *(undefined4 *)(psVar6 + 2);
  local_98 = 0;
  uVar5 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(psVar6);
      __s = PTR_DAT_04bbfe90;
      puVar3 = PTR_DAT_04bbfe88;
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
                uVar8 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar8 = (uint)((ulong)((long)puVar12 - lVar9) / (ulong)uVar5);
                }
                if (*puVar10 <= uVar8) {
                  uVar8 = 0xffffffff;
                }
                if ((uVar8 < *(uint *)PTR_DAT_04bc0048) &&
                   (uVar8 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar8 * 2),
                   uVar8 < 0x52)) goto LAB_021f31c8;
              }
            }
            uVar8 = 0;
          }
        }
LAB_021f31c8:
        bVar4 = uVar8 - 1 < 9;
        if (param_2 == (undefined4 *)0x0) {
          return bVar4;
        }
        uVar5 = *puVar12;
        uVar14 = 0;
        if (uVar5 != 0) {
          cVar13 = *PTR_DAT_04bbfe88;
          do {
            if (cVar13 == '\0') {
              cVar13 = '\x01';
              *puVar3 = 1;
              memset(__s,0xff,0x1ac);
              uVar5 = *puVar12;
            }
            else {
              uVar8 = *(uint *)(__s + 0xf0);
              if (-1 < (int)uVar8) {
                if ((undefined4 *)((ulong)uVar8 + (long)puVar12) != (undefined4 *)0x0) {
                  uVar14 = *(undefined4 *)((ulong)uVar8 + (long)puVar12);
                }
                break;
              }
              if (uVar8 != 0xffffffff) break;
            }
            puVar10 = (uint *)(ulong)uVar5;
            if ((puVar10 == (uint *)0x0) || (puVar12 == puVar10)) break;
            lVar9 = 0xc;
            if (*(char *)((long)puVar12 + (10 - (long)puVar10)) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar12 + (lVar9 - (long)puVar10);
            if (lVar9 == 0) break;
            uVar7 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar10));
            *(undefined4 *)(__s + 0xf0) = 0xfffffffe;
            if (uVar7 == 0) break;
            piVar11 = (int *)(lVar9 + 4);
            while (piVar11[-1] != -0x499d99d4) {
              piVar11 = piVar11 + 2;
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) goto LAB_021f32d8;
            }
            iVar1 = 0;
            if (*piVar11 != -1) {
              iVar1 = *piVar11;
            }
            *(int *)(__s + 0xf0) = iVar1;
            uVar5 = *puVar12;
            if (uVar5 == 0) break;
          } while( true );
        }
        goto LAB_021f32d8;
      }
    }
  }
  uVar14 = 0;
  bVar4 = false;
  if (param_2 == (undefined4 *)0x0) {
    return false;
  }
LAB_021f32d8:
  *param_2 = uVar14;
  return bVar4;
}

