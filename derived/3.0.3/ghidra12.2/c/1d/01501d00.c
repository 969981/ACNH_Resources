
void FUN_01501d00(undefined8 param_1,float *param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  uint *puVar15;
  char cVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_b0;
  float local_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined *local_98;
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  
  if (param_2 == (float *)0x0) {
    return;
  }
  fVar18 = 0.0;
  if ((param_4 & 1) != 0) {
    local_90 = (float)*(int *)(param_3 + 0xc) * 5.0 + 2.5;
    local_98 = (undefined *)CONCAT44(local_98._4_4_,(float)*(int *)(param_3 + 8) * 5.0 + 2.5);
    lVar11 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar11 == 0) || (*(long *)(lVar11 + 0xa8) == 0)) || (*(char *)(lVar11 + 0x11c8) != '\0'))
    {
      fVar18 = -500.0;
    }
    else {
      fVar18 = (float)FUN_0093a950(lVar11 + 0x28,&local_98,0);
    }
  }
  pfVar7 = (float *)FUN_01a5190c(param_1,1,param_3,0);
  puVar5 = PTR_DAT_04bb43c0;
  local_78 = *pfVar7;
  local_74 = pfVar7[1];
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar5 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      pfVar7 = (float *)FUN_01a5190c(param_1,0,param_3,0);
      local_80 = *pfVar7;
      local_7c = pfVar7[1];
      uVar8 = FUN_0277e294(&local_78);
      uVar9 = FUN_0277e294(&local_80);
      if ((uVar8 & 1) == 0) {
        if ((uVar9 & 1) != 0) {
          lVar11 = *(long *)puVar5;
          local_88 = 0;
          local_98 = PTR_DAT_04bc0510 + 0x10;
          local_90 = local_80;
          fStack_8c = local_7c;
          uVar6 = FUN_0277d6c4(&local_90);
          fVar19 = 0.0;
          if (*(long *)puVar5 != 0) {
            lVar11 = *(long *)(lVar11 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              lVar11 = *(long *)PTR_DAT_04bc0428;
              uVar6 = FUN_0277d6c4(&local_80);
              puVar1 = PTR_DAT_04bbfe90;
              puVar5 = PTR_DAT_04bbfe88;
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                 ((puVar14 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
                  puVar14 != (uint *)0x0 && (uVar6 = *puVar14, uVar6 != 0)))) {
                cVar16 = *PTR_DAT_04bbfe88;
                do {
                  if (cVar16 == '\0') {
                    cVar16 = '\x01';
                    *puVar5 = 1;
                    memset(puVar1,0xff,0x1ac);
                    uVar6 = *puVar14;
                  }
                  else {
                    uVar4 = *(uint *)(puVar1 + 0x28);
                    uVar8 = (ulong)uVar4;
                    if (-1 < (int)uVar4) goto LAB_01502498;
                    if (uVar4 != 0xffffffff) break;
                  }
                  puVar15 = (uint *)(ulong)uVar6;
                  if ((puVar15 == (uint *)0x0) || (puVar14 == puVar15)) break;
                  lVar11 = 0xc;
                  if (*(char *)((long)puVar14 + (10 - (long)puVar15)) != '\0') {
                    lVar11 = 0x1c;
                  }
                  lVar11 = (long)puVar14 + (lVar11 - (long)puVar15);
                  if (lVar11 == 0) break;
                  uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar15));
                  *(undefined4 *)(puVar1 + 0x28) = 0xfffffffe;
                  if (uVar8 == 0) break;
                  piVar13 = (int *)(lVar11 + 4);
                  while (piVar13[-1] != -0x3e783aea) {
                    piVar13 = piVar13 + 2;
                    uVar8 = uVar8 - 1;
                    if (uVar8 == 0) goto LAB_015024a4;
                  }
                  iVar2 = 0;
                  if (*piVar13 != -1) {
                    iVar2 = *piVar13;
                  }
                  *(int *)(puVar1 + 0x28) = iVar2;
                  uVar6 = *puVar14;
                  if (uVar6 == 0) break;
                } while( true );
              }
            }
          }
          goto LAB_015024a4;
        }
        goto LAB_01502224;
      }
      if ((uVar9 & 1) == 0) goto LAB_01502224;
      lVar11 = *(long *)puVar5;
      local_88 = 0;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      local_90 = local_78;
      fStack_8c = local_74;
      local_98 = puVar1;
      uVar6 = FUN_0277d6c4(&local_90);
      if (*(long *)puVar5 == 0) {
LAB_01502244:
        puVar14 = (uint *)0x0;
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_01502244;
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(&local_78);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if (*(uint *)(lVar11 + 0x1d8) <= uVar6) goto LAB_01502244;
        puVar14 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8);
      }
      lVar11 = *(long *)puVar5;
      local_a0 = 0;
      local_a8 = local_80;
      fStack_a4 = local_7c;
      local_b0 = puVar1;
      uVar6 = FUN_0277d6c4(&local_a8);
      fVar19 = 0.0;
      fVar17 = 0.0;
      if (*(long *)puVar5 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(&local_80);
          puVar1 = PTR_DAT_04bbfe90;
          puVar5 = PTR_DAT_04bbfe88;
          fVar17 = 0.0;
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
             ((puVar15 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
              puVar15 != (uint *)0x0 && (uVar6 = *puVar15, uVar6 != 0)))) {
            cVar16 = *PTR_DAT_04bbfe88;
            do {
              if (cVar16 == '\0') {
                cVar16 = '\x01';
                *puVar5 = 1;
                memset(puVar1,0xff,0x1ac);
                uVar6 = *puVar15;
              }
              else {
                uVar4 = *(uint *)(puVar1 + 0xf0);
                if (-1 < (int)uVar4) {
                  fVar17 = 0.0;
                  if ((float *)((ulong)uVar4 + (long)puVar15) != (float *)0x0) {
                    fVar17 = *(float *)((ulong)uVar4 + (long)puVar15);
                  }
                  break;
                }
                if (uVar4 != 0xffffffff) goto LAB_015023b8;
              }
              puVar12 = (uint *)(ulong)uVar6;
              if ((puVar12 == (uint *)0x0) || (puVar15 == puVar12)) goto LAB_015023b8;
              lVar11 = 0xc;
              if (*(char *)((long)puVar15 + (10 - (long)puVar12)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar15 + (lVar11 - (long)puVar12);
              if (lVar11 == 0) goto LAB_015023b8;
              uVar8 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar12));
              *(undefined4 *)(puVar1 + 0xf0) = 0xfffffffe;
              if (uVar8 == 0) goto LAB_015023b8;
              piVar13 = (int *)(lVar11 + 4);
              while (piVar13[-1] != -0x499d99d4) {
                piVar13 = piVar13 + 2;
                uVar8 = uVar8 - 1;
                if (uVar8 == 0) goto LAB_015023b8;
              }
              iVar2 = 0;
              if (*piVar13 != -1) {
                iVar2 = *piVar13;
              }
              *(int *)(puVar1 + 0xf0) = iVar2;
              uVar6 = *puVar15;
              if (uVar6 == 0) goto LAB_015023b8;
            } while( true );
          }
        }
      }
      goto LAB_015023bc;
    }
  }
  puVar10 = (undefined8 *)FUN_01a5190c(param_1,0,param_3,0);
  local_b0 = (undefined *)*puVar10;
  uVar8 = FUN_0277e294(&local_b0);
  if ((uVar8 & 1) == 0) {
LAB_01502224:
    *param_2 = fVar18;
    return;
  }
  lVar11 = *(long *)puVar5;
  local_88 = 0;
  local_98 = PTR_DAT_04bc0510 + 0x10;
  local_90 = (float)local_b0;
  fStack_8c = (float)local_b0._4_4_;
  uVar6 = FUN_0277d6c4(&local_90);
  fVar19 = 0.0;
  if (*(long *)puVar5 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(&local_b0);
      puVar1 = PTR_DAT_04bbfe90;
      puVar5 = PTR_DAT_04bbfe88;
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
         ((puVar14 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
          puVar14 != (uint *)0x0 && (uVar6 = *puVar14, uVar6 != 0)))) {
        cVar16 = *PTR_DAT_04bbfe88;
        do {
          if (cVar16 == '\0') {
            cVar16 = '\x01';
            *puVar5 = 1;
            memset(puVar1,0xff,0x1ac);
            uVar6 = *puVar14;
          }
          else {
            uVar4 = *(uint *)(puVar1 + 0x28);
            uVar8 = (ulong)uVar4;
            if (-1 < (int)uVar4) goto LAB_01502498;
            if (uVar4 != 0xffffffff) break;
          }
          puVar15 = (uint *)(ulong)uVar6;
          if ((puVar15 == (uint *)0x0) || (puVar14 == puVar15)) break;
          lVar11 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar15)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar14 + (lVar11 - (long)puVar15);
          if (lVar11 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar15));
          *(undefined4 *)(puVar1 + 0x28) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar13 = (int *)(lVar11 + 4);
          while (piVar13[-1] != -0x3e783aea) {
            piVar13 = piVar13 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_015024a4;
          }
          iVar2 = 0;
          if (*piVar13 != -1) {
            iVar2 = *piVar13;
          }
          *(int *)(puVar1 + 0x28) = iVar2;
          uVar6 = *puVar14;
          if (uVar6 == 0) break;
        } while( true );
      }
    }
  }
LAB_015024a4:
  *param_2 = fVar18 + fVar19;
  return;
LAB_015023b8:
  fVar17 = 0.0;
LAB_015023bc:
  puVar1 = PTR_DAT_04bbfe90;
  puVar5 = PTR_DAT_04bbfe88;
  fVar18 = fVar18 + fVar17;
  if ((puVar14 != (uint *)0x0) && (uVar6 = *puVar14, uVar6 != 0)) {
    cVar16 = *PTR_DAT_04bbfe88;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *puVar5 = 1;
        memset(puVar1,0xff,0x1ac);
        uVar6 = *puVar14;
      }
      else {
        uVar4 = *(uint *)(puVar1 + 0x28);
        uVar8 = (ulong)uVar4;
        if (-1 < (int)uVar4) goto LAB_01502498;
        if (uVar4 != 0xffffffff) break;
      }
      lVar11 = (long)puVar14 - (ulong)uVar6;
      if (((ulong)uVar6 == 0) || (lVar11 == 0)) break;
      lVar3 = 0xc;
      if (*(char *)(lVar11 + 10) != '\0') {
        lVar3 = 0x1c;
      }
      if (lVar3 + lVar11 == 0) break;
      uVar8 = (ulong)*(ushort *)(lVar11 + 8);
      *(undefined4 *)(puVar1 + 0x28) = 0xfffffffe;
      if (uVar8 == 0) break;
      piVar13 = (int *)(lVar3 + lVar11 + 4);
      while (piVar13[-1] != -0x3e783aea) {
        piVar13 = piVar13 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) goto LAB_015024a4;
      }
      iVar2 = 0;
      if (*piVar13 != -1) {
        iVar2 = *piVar13;
      }
      *(int *)(puVar1 + 0x28) = iVar2;
      uVar6 = *puVar14;
      if (uVar6 == 0) break;
    } while( true );
  }
  goto LAB_015024a4;
LAB_01502498:
  fVar19 = 0.0;
  if ((float *)(uVar8 + (long)puVar14) != (float *)0x0) {
    fVar19 = *(float *)(uVar8 + (long)puVar14);
  }
  goto LAB_015024a4;
}

