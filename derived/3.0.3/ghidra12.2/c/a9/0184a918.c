
void FUN_0184a918(long param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  long lVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *puVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  uint *local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  int local_38;
  int iStack_34;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  
  sVar2 = *(short *)(param_1 + 0x40a) + -1;
  *(short *)(param_1 + 0x40a) = sVar2;
  if (sVar2 < 1) {
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x40c) = 0;
    if ((*(char *)(param_1 + 0x432) == '\0') && (lVar9 = *(long *)(param_1 + 0x3d0), lVar9 != 0)) {
      (**(code **)(*(long *)(lVar9 + 0x2d8) + 0x28))(lVar9 + 0x2d8);
      plVar15 = *(long **)PTR_DAT_04bb27d0;
      uVar12 = FUN_01d3e29c(*plVar15 + 8);
      if (((uVar12 & 1) != 0) && (uVar12 = FUN_01d692e8(plVar15[2]), (uVar12 & 1) == 0)) {
        if (*(long *)(param_1 + 0x3d0) == 0) {
          return;
        }
        FUN_01947900();
        return;
      }
    }
    if (*(long *)(param_1 + 0x3d0) != 0) {
      FUN_006fb3d0();
      return;
    }
  }
  else {
    if (*(float *)(param_1 + 0x308) < 0.0) {
      *(undefined4 *)(param_1 + 0x308) = 0;
      *(undefined4 *)(param_1 + 0x318) = 0;
    }
    local_50 = PTR_DAT_04bb2010 + 0x10;
    local_68 = PTR_DAT_04bbfe68 + 0x10;
    local_60 = 0;
    local_48 = 0;
    local_38 = (int)((float)(int)*(float *)(param_1 + 0x334) / 5.0) -
               (uint)(*(float *)(param_1 + 0x334) < 0.0);
    iStack_34 = (int)((float)(int)*(float *)(param_1 + 0x33c) / 5.0) -
                (uint)(*(float *)(param_1 + 0x33c) < 0.0);
    lVar9 = *(long *)PTR_DAT_04bb2720;
    local_40 = local_50;
    if (lVar9 == 0) {
      puVar14 = &DAT_055c04a0;
    }
    else {
      puVar14 = &DAT_055c04a0;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        iVar6 = FUN_006bd550(*puVar14,0);
        puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar6 != 0x758f7eaf) {
          puVar14 = &DAT_055c04a0;
        }
      }
    }
    local_5c = *(undefined4 *)(puVar14 + 7);
    local_58 = FUN_017baf44();
    local_58 = local_58 & 1;
    puVar8 = (undefined2 *)FUN_01a5190c(&local_68,0,&local_40,&local_50);
    local_28 = *puVar8;
    local_26 = *(undefined1 *)(puVar8 + 1);
    local_25 = *(undefined1 *)((long)puVar8 + 3);
    local_24 = *(undefined4 *)(puVar8 + 2);
    lVar9 = *(long *)PTR_DAT_04bbbc68;
    if (((((lVar9 != 0) && (*(long *)(lVar9 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar9 + 0xb0) + 8) != 0)) &&
        ((*(long *)(lVar9 + 0x488) != 0 && (*(long *)(*(long *)(lVar9 + 0x488) + 8) != 0)))) &&
       ((*(long *)(lVar9 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar9 + 0x2b0) + 8) != 0)))) {
      uVar7 = FUN_0277d6c4(&local_28);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        FUN_0124c030(auStack_80,&local_28);
        iVar6 = FUN_0123db50(auStack_78,local_70);
        if (iVar6 == 0x2e) {
LAB_0184ab40:
          fVar16 = ((float)(int)local_48 * 5.0 + 5.0) -
                   *(float *)(*(long *)(param_1 + 0x300) + 0x278);
          fVar18 = ((float)local_48._4_4_ * 5.0 + 5.0) -
                   *(float *)(*(long *)(param_1 + 0x300) + 0x280);
          if (fVar18 * fVar18 + fVar16 * fVar16 < 25.0) {
            return;
          }
        }
        else {
          iVar6 = FUN_0123db50(auStack_78,local_70);
          puVar5 = PTR_DAT_04bbbc78;
          puVar4 = PTR_DAT_04bbbc70;
          if (((iVar6 - 0xbU < 7) && (local_70 != (uint *)0x0)) && (uVar7 = *local_70, uVar7 != 0))
          {
            cVar10 = *PTR_DAT_04bbbc70;
            do {
              if (cVar10 == '\0') {
                cVar10 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar4 = 1;
                *(undefined4 *)(puVar5 + 0x60) = 0xffffffff;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                uVar7 = *local_70;
              }
              else {
                uVar1 = *(uint *)(puVar5 + 0x4c);
                if (-1 < (int)uVar1) {
                  if (((byte *)((ulong)uVar1 + (long)local_70) != (byte *)0x0) &&
                     (1 < *(byte *)((ulong)uVar1 + (long)local_70))) goto LAB_0184ab40;
                  break;
                }
                if (uVar1 != 0xffffffff) break;
              }
              puVar11 = (uint *)(ulong)uVar7;
              if ((puVar11 == (uint *)0x0) || (local_70 == puVar11)) break;
              lVar9 = 0xc;
              if (*(char *)((long)local_70 + (10 - (long)puVar11)) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)local_70 + (lVar9 - (long)puVar11);
              if (lVar9 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)local_70 + (8 - (long)puVar11));
              *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar13 = (int *)(lVar9 + 4);
              while (piVar13[-1] != -0xa58ccc9) {
                piVar13 = piVar13 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_0184acf8;
              }
              iVar6 = 0;
              if (*piVar13 != -1) {
                iVar6 = *piVar13;
              }
              *(int *)(puVar5 + 0x4c) = iVar6;
              uVar7 = *local_70;
              if (uVar7 == 0) break;
            } while( true );
          }
        }
      }
    }
LAB_0184acf8:
    if (*(char *)(param_1 + 0x3c8) == '\0') {
      fVar18 = *(float *)(param_1 + 0x318) + *(float *)(param_1 + 0x308);
      fVar16 = *(float *)(param_1 + 0x40c);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x50c);
      *(undefined4 *)(param_1 + 0x318) = 0;
      iVar3 = 10 - iVar6;
      if (8 < iVar6) {
        iVar6 = 9;
      }
      *(int *)(param_1 + 0x50c) = iVar6 + 1;
      fVar16 = (float)iVar3 * 1.406 * 0.08;
      fVar18 = 0.0;
    }
    *(float *)(param_1 + 0x308) = fVar18;
    fVar17 = -1.563;
    if (-1.563 <= fVar16 + -0.1563) {
      fVar17 = fVar16 + -0.1563;
    }
    *(float *)(param_1 + 0x40c) = fVar17;
    *(float *)(param_1 + 0x338) = *(float *)(param_1 + 0x338) + fVar17;
    if (fVar18 < 0.0) {
      *(undefined4 *)(param_1 + 0x308) = 0;
      *(undefined4 *)(param_1 + 0x318) = 0;
    }
  }
  return;
}

