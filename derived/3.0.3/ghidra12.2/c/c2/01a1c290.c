
float FUN_01a1c290(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  ulong uVar8;
  uint *puVar9;
  int *piVar10;
  long lVar11;
  uint *puVar12;
  char cVar13;
  float fVar14;
  float fVar15;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  
  psVar6 = (short *)FUN_01a5190c(param_1,0,param_2,0);
  psVar7 = (short *)FUN_01a5190c(param_1,1,param_2,0);
  if (*psVar6 == -2) {
    fVar14 = 0.0;
  }
  else {
    iVar4 = FUN_0277ebd0(psVar6);
    local_88 = (undefined *)CONCAT44(local_88._4_4_,iVar4);
    fVar14 = 0.0;
    if (iVar4 != 0) {
      lVar11 = *(long *)PTR_DAT_04bbbc68;
      if (((((lVar11 != 0) && (*(long *)(lVar11 + 0xb0) != 0)) &&
           (*(long *)(*(long *)(lVar11 + 0xb0) + 8) != 0)) &&
          ((*(long *)(lVar11 + 0x488) != 0 && (*(long *)(*(long *)(lVar11 + 0x488) + 8) != 0)))) &&
         ((*(long *)(lVar11 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar11 + 0x2b0) + 8) != 0)))) {
        uVar5 = FUN_0277d6c4(psVar6);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          FUN_0124c030(&local_88,psVar6);
          fVar14 = (float)FUN_0124e270(&local_88,1);
          goto LAB_01a1c538;
        }
      }
      uVar8 = FUN_0277e294(psVar6);
      puVar2 = PTR_DAT_04bb43c0;
      if ((uVar8 & 1) != 0) {
        local_88 = PTR_DAT_04bc0510 + 0x10;
        local_80 = *(undefined4 *)psVar6;
        local_7c = *(undefined4 *)(psVar6 + 2);
        local_78 = 0;
        lVar11 = *(long *)PTR_DAT_04bb43c0;
        uVar5 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar2 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(psVar6);
            puVar3 = PTR_DAT_04bbfe90;
            puVar2 = PTR_DAT_04bbfe88;
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
               ((puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
                puVar12 != (uint *)0x0 && (uVar5 = *puVar12, uVar5 != 0)))) {
              cVar13 = *PTR_DAT_04bbfe88;
              do {
                if (cVar13 == '\0') {
                  cVar13 = '\x01';
                  *puVar2 = 1;
                  memset(puVar3,0xff,0x1ac);
                  uVar5 = *puVar12;
                }
                else {
                  uVar1 = *(uint *)(puVar3 + 0x28);
                  if (-1 < (int)uVar1) {
                    if ((float *)((ulong)uVar1 + (long)puVar12) != (float *)0x0) {
                      fVar14 = *(float *)((ulong)uVar1 + (long)puVar12);
                    }
                    break;
                  }
                  if (uVar1 != 0xffffffff) break;
                }
                puVar9 = (uint *)(ulong)uVar5;
                if ((puVar9 == (uint *)0x0) || (puVar12 == puVar9)) break;
                lVar11 = 0xc;
                if (*(char *)((long)puVar12 + (10 - (long)puVar9)) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar12 + (lVar11 - (long)puVar9);
                if (lVar11 == 0) break;
                uVar8 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar9));
                *(undefined4 *)(puVar3 + 0x28) = 0xfffffffe;
                if (uVar8 == 0) break;
                piVar10 = (int *)(lVar11 + 4);
                while (piVar10[-1] != -0x3e783aea) {
                  piVar10 = piVar10 + 2;
                  uVar8 = uVar8 - 1;
                  if (uVar8 == 0) goto LAB_01a1c538;
                }
                iVar4 = 0;
                if (*piVar10 != -1) {
                  iVar4 = *piVar10;
                }
                *(int *)(puVar3 + 0x28) = iVar4;
                uVar5 = *puVar12;
                if (uVar5 == 0) break;
              } while( true );
            }
          }
        }
      }
    }
  }
LAB_01a1c538:
  if (*psVar7 == -2) {
    fVar15 = 0.0;
  }
  else {
    iVar4 = FUN_0277ebd0(psVar7);
    local_88 = (undefined *)CONCAT44(local_88._4_4_,iVar4);
    fVar15 = 0.0;
    if (iVar4 != 0) {
      lVar11 = *(long *)PTR_DAT_04bbbc68;
      if ((((lVar11 != 0) && (*(long *)(lVar11 + 0xb0) != 0)) &&
          (*(long *)(*(long *)(lVar11 + 0xb0) + 8) != 0)) &&
         (((*(long *)(lVar11 + 0x488) != 0 && (*(long *)(*(long *)(lVar11 + 0x488) + 8) != 0)) &&
          ((*(long *)(lVar11 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar11 + 0x2b0) + 8) != 0)))))) {
        uVar5 = FUN_0277d6c4(psVar7);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          FUN_0124c030(&local_88,psVar7);
          fVar15 = (float)FUN_0124e270(&local_88,1);
          goto LAB_01a1c788;
        }
      }
      uVar8 = FUN_0277e294(psVar7);
      puVar2 = PTR_DAT_04bb43c0;
      if ((uVar8 & 1) != 0) {
        local_88 = PTR_DAT_04bc0510 + 0x10;
        local_80 = *(undefined4 *)psVar7;
        local_7c = *(undefined4 *)(psVar7 + 2);
        local_78 = 0;
        lVar11 = *(long *)PTR_DAT_04bb43c0;
        uVar5 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar2 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(psVar7);
            puVar3 = PTR_DAT_04bbfe90;
            puVar2 = PTR_DAT_04bbfe88;
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
               ((puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
                puVar12 != (uint *)0x0 && (uVar5 = *puVar12, uVar5 != 0)))) {
              cVar13 = *PTR_DAT_04bbfe88;
              do {
                if (cVar13 == '\0') {
                  cVar13 = '\x01';
                  *puVar2 = 1;
                  memset(puVar3,0xff,0x1ac);
                  uVar5 = *puVar12;
                }
                else {
                  uVar1 = *(uint *)(puVar3 + 0x28);
                  if (-1 < (int)uVar1) {
                    if ((float *)((ulong)uVar1 + (long)puVar12) != (float *)0x0) {
                      fVar15 = *(float *)((ulong)uVar1 + (long)puVar12);
                    }
                    break;
                  }
                  if (uVar1 != 0xffffffff) break;
                }
                puVar9 = (uint *)(ulong)uVar5;
                if ((puVar9 == (uint *)0x0) || (puVar12 == puVar9)) break;
                lVar11 = 0xc;
                if (*(char *)((long)puVar12 + (10 - (long)puVar9)) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar12 + (lVar11 - (long)puVar9);
                if (lVar11 == 0) break;
                uVar8 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar9));
                *(undefined4 *)(puVar3 + 0x28) = 0xfffffffe;
                if (uVar8 == 0) break;
                piVar10 = (int *)(lVar11 + 4);
                while (piVar10[-1] != -0x3e783aea) {
                  piVar10 = piVar10 + 2;
                  uVar8 = uVar8 - 1;
                  if (uVar8 == 0) goto LAB_01a1c788;
                }
                iVar4 = 0;
                if (*piVar10 != -1) {
                  iVar4 = *piVar10;
                }
                *(int *)(puVar3 + 0x28) = iVar4;
                uVar5 = *puVar12;
                if (uVar5 == 0) break;
              } while( true );
            }
          }
        }
      }
    }
  }
LAB_01a1c788:
  return fVar14 + fVar15;
}

