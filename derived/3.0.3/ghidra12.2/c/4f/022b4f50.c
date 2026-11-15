
undefined8 FUN_022b4f50(undefined8 param_1,long param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  short *psVar15;
  char cVar16;
  uint *puVar17;
  int *piVar18;
  undefined8 *puVar19;
  byte bVar20;
  undefined4 local_a4;
  undefined4 uStack_a0;
  float local_9c;
  undefined4 local_98;
  float local_94;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  uint *local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined4 local_48;
  undefined4 local_44;
  
  FUN_022b4af4(&local_48);
  local_70 = 0;
  local_78 = PTR_DAT_04bbfe68 + 0x10;
  lVar13 = *(long *)PTR_DAT_04bb2720;
  if (lVar13 == 0) {
    puVar19 = &DAT_055c04a0;
  }
  else {
    puVar19 = &DAT_055c04a0;
    if (*(long *)(lVar13 + 0x330) != 0) {
      puVar19 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar10 = FUN_006bd550(*puVar19,0);
      puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar10 != 0x758f7eaf) {
        puVar19 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar19 + 7);
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  local_78 = PTR_DAT_04bb6268 + 0x10;
  FUN_011f3880(&local_78,0,&local_48,param_2);
  uVar9 = local_44;
  if ((param_3 & 1) == 0) {
    FUN_011db844(param_2);
    return 1;
  }
  sVar6 = (short)local_48;
  uVar7 = local_48._2_1_;
  uVar8 = local_48._3_1_;
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
LAB_022b50bc:
    if (7 < *pbVar14) {
LAB_022b50c8:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar13 = **(long **)PTR_DAT_04bb27d0;
        bVar20 = *(byte *)(lVar13 + 0x473);
        pbVar14 = PTR_DAT_04bb5038;
        if ((long)(char)bVar20 != 0xffffffffffffffff) {
          puVar17 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
          if (7 < bVar20) {
            puVar17 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar17 & 8) != 0) {
            pbVar14 = (byte *)(lVar13 + 0x471);
          }
        }
        bVar20 = *pbVar14;
        if (bVar20 < 8) goto LAB_022b5138;
      }
      pbVar14 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_022b50bc;
      }
      goto LAB_022b50c8;
    }
  }
  bVar20 = *pbVar14;
  if (7 < bVar20) {
    bVar20 = 0xff;
  }
LAB_022b5138:
  uVar11 = 0;
  iVar10 = 0;
  psVar15 = (short *)PTR_DAT_04bbbcc8;
  do {
    if (0x23 < *(int *)(PTR_DAT_04bbbcc8 + (long)iVar10 * 0x48 + 0x3c)) {
      if ((short)local_48 != -2) {
        if (0x27 < uVar11) {
          psVar15 = (short *)PTR_DAT_04bbbcc8;
        }
        *(undefined2 *)((long)psVar15 + 0x45) = 0xff00;
        psVar15[0] = -2;
        psVar15[1] = 0;
        psVar15[2] = 0;
        psVar15[3] = 0;
        FUN_0277d4ac(psVar15);
        psVar15[4] = 0;
        psVar15[5] = 0;
        psVar15[6] = 0;
        psVar15[7] = 0;
        psVar15[0x1c] = 0;
        psVar15[0x1d] = 0;
        psVar15[0x1e] = 4;
        psVar15[0x1f] = 0;
        if (7 < bVar20) {
          bVar20 = 0xff;
        }
        psVar15[8] = 0;
        psVar15[9] = 0;
        psVar15[0x10] = 0;
        psVar15[0x11] = 0;
        psVar15[0x12] = 0;
        psVar15[0x13] = 0;
        *psVar15 = sVar6;
        *(undefined1 *)(psVar15 + 1) = uVar7;
        *(undefined1 *)((long)psVar15 + 3) = uVar8;
        *(undefined4 *)(psVar15 + 2) = uVar9;
        *(undefined4 *)(psVar15 + 0x18) = uVar1;
        *(undefined4 *)(psVar15 + 0x1a) = uVar2;
        *(byte *)(psVar15 + 0x23) = bVar20;
        psVar15[0x20] = 0;
        psVar15[0x21] = 0;
        *(undefined1 *)(psVar15 + 0x22) = 0xff;
        *(undefined1 *)((long)psVar15 + 0x47) = 0;
      }
      break;
    }
    uVar11 = uVar11 + 1;
    iVar10 = iVar10 + 1;
    psVar15 = psVar15 + 0x24;
  } while (uVar11 != 0x28);
  lVar13 = *(long *)PTR_DAT_04bbbc68;
  if ((((lVar13 != 0) && (*(long *)(lVar13 + 0xb0) != 0)) &&
      (*(long *)(*(long *)(lVar13 + 0xb0) + 8) != 0)) &&
     (((*(long *)(lVar13 + 0x488) != 0 && (*(long *)(*(long *)(lVar13 + 0x488) + 8) != 0)) &&
      ((*(long *)(lVar13 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) != 0)))))) {
    uVar11 = FUN_0277d6c4(&local_48);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      FUN_0124c030(auStack_90,&local_48);
      uVar12 = FUN_0123d890(local_80,4);
      puVar5 = PTR_DAT_04bbbc78;
      puVar4 = PTR_DAT_04bbbc70;
      if (((uVar12 & 1) != 0) && ((local_80 != (uint *)0x0 && (uVar11 = *local_80, uVar11 != 0)))) {
        cVar16 = *PTR_DAT_04bbbc70;
        do {
          if (cVar16 == '\0') {
            cVar16 = '\x01';
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
            uVar11 = *local_80;
          }
          else {
            uVar3 = *(uint *)(puVar5 + 0x4c);
            if (-1 < (int)uVar3) {
              if (((char *)((ulong)uVar3 + (long)local_80) != (char *)0x0) &&
                 (*(char *)((ulong)uVar3 + (long)local_80) != '\0')) {
                return 1;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar17 = (uint *)(ulong)uVar11;
          if ((puVar17 == (uint *)0x0) || (local_80 == puVar17)) break;
          lVar13 = 0xc;
          if (*(char *)((long)local_80 + (10 - (long)puVar17)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)local_80 + (lVar13 - (long)puVar17);
          if (lVar13 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)local_80 + (8 - (long)puVar17));
          *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar18 = (int *)(lVar13 + 4);
          while (piVar18[-1] != -0xa58ccc9) {
            piVar18 = piVar18 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_022b536c;
          }
          iVar10 = 0;
          if (*piVar18 != -1) {
            iVar10 = *piVar18;
          }
          *(int *)(puVar5 + 0x4c) = iVar10;
          uVar11 = *local_80;
          if (uVar11 == 0) break;
        } while( true );
      }
LAB_022b536c:
      iVar10 = FUN_0123db50(auStack_88);
      if (((iVar10 != 0x21) && (iVar10 = FUN_0123db50(auStack_88,local_80), iVar10 != 0x22)) &&
         (iVar10 = FUN_0123db50(auStack_88,local_80), iVar10 != 0x2e)) {
        local_98 = 0;
        local_94 = (float)*(int *)(param_2 + 0xc) * 5.0 + 5.0;
        local_9c = (float)*(int *)(param_2 + 8) * 5.0 + 5.0;
        lVar13 = *(long *)PTR_DAT_04bb27c8;
        if (((lVar13 == 0) || (*(long *)(lVar13 + 0xa8) == 0)) ||
           (*(char *)(lVar13 + 0x11c8) != '\0')) {
          local_98 = 0xc3fa0000;
        }
        else {
          local_98 = FUN_0093a950(lVar13 + 0x28,&local_9c,0);
        }
        local_a4 = local_48;
        uStack_a0 = local_44;
        FUN_011ea660(&local_a4,&local_9c,&DAT_04061fa0);
      }
    }
  }
  return 1;
}

