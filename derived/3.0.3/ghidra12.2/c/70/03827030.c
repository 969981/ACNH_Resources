
/* WARNING: Removing unreachable block (ram,0x038272ec) */
/* WARNING: Removing unreachable block (ram,0x038272f4) */

void FUN_03827030(long param_1,char *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  uint *puVar11;
  char cVar12;
  ulong uVar13;
  int iVar14;
  undefined8 *puVar15;
  uint *local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined *local_90;
  uint local_88;
  uint local_7c;
  undefined **local_78;
  undefined **ppuStack_70;
  uint **local_68;
  undefined **local_58;
  undefined **local_50;
  uint **local_48;
  undefined ***pppuStack_40;
  
  if (*param_2 == '\0') {
    return;
  }
  local_7c = 0;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar7 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_b8 = &local_7c;
  local_50 = &local_90;
  local_48 = &local_b8;
  local_90 = (undefined *)((ulong)local_90 & 0xffffffffffffff00);
  local_58 = &PTR_FUN_04aa4ce0;
  local_78 = (undefined **)CONCAT44(local_78._4_4_,*(undefined4 *)(puVar15 + 7));
  pppuStack_40 = &local_78;
  FUN_02b2b1c0(&local_58);
  puVar5 = PTR_DAT_04bc4698;
  puVar4 = PTR_DAT_04bc4690;
  if (((char)local_90 != '\0') && (local_7c != 0)) {
    lVar10 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar10 + 0x1e0) < 1) {
      if ((((*(long *)(lVar10 + 0xd0) == 0) ||
           (puVar11 = *(uint **)(*(long *)(lVar10 + 0xd0) + 8), puVar11 == (uint *)0x0)) ||
          ((local_7c < *(uint *)(lVar10 + 0xe8) &&
           (*(char *)(*(long *)(lVar10 + 0xf0) + (long)(int)local_7c) == '\0')))) ||
         (((*puVar11 <= local_7c || (puVar11[1] == 0)) || ((ushort)puVar11[2] == 0))))
      goto LAB_03827284;
      iVar7 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        iVar7 = 0x1c;
      }
      puVar11 = (uint *)((ulong)(puVar11[1] * local_7c + (uint)(ushort)puVar11[2] * 8 + iVar7) +
                        (long)puVar11);
    }
    else {
      if (*(uint *)(lVar10 + 0x1e0) <= local_7c) goto LAB_03827284;
      uVar1 = local_7c;
      if (*(uint *)(lVar10 + 0x1d0) <= local_7c) {
        uVar1 = 0;
      }
      puVar11 = *(uint **)(*(long *)(lVar10 + 0x1d8) + (ulong)uVar1 * 8);
    }
    if ((puVar11 != (uint *)0x0) && (uVar1 = *puVar11, uVar1 != 0)) {
      cVar12 = *PTR_DAT_04bc4690;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
          uVar1 = *puVar11;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar3) {
            if (((int *)((ulong)uVar3 + (long)puVar11) != (int *)0x0) &&
               (iVar7 = *(int *)((ulong)uVar3 + (long)puVar11), *(int *)(param_1 + 8) = iVar7,
               iVar7 == 0x6622bd46)) {
              local_58 = (undefined **)CONCAT44(local_58._4_4_,1);
              local_88 = local_7c;
              local_90 = PTR_DAT_04bc43f8 + 0x10;
              local_b8 = (uint *)(PTR_DAT_04bc4608 + 0x10);
              local_b0 = PTR_DAT_04bbc570[8];
              local_ac = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
              uStack_a0 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
              local_a8 = PTR_DAT_04bb2010 + 0x10;
              local_98 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
              local_94 = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
              if (local_7c == 0) goto LAB_038273f0;
              ppuStack_70 = &local_90;
              local_78 = &PTR_FUN_04a9b150;
              local_68 = &local_b8;
              puVar15 = &DAT_05636dd8;
              if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
                puVar15 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
              }
              if (puVar15[1] == 0) goto LAB_038273f0;
              plVar9 = (long *)(*(code *)**(undefined8 **)(puVar15[1] + 0x10))();
              iVar7 = (**(code **)(*plVar9 + 0x18))();
              if (iVar7 < 1) goto LAB_038273f0;
              iVar14 = 0;
              goto LAB_038273bc;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        lVar10 = (long)puVar11 - (ulong)uVar1;
        if (((ulong)uVar1 == 0) || (lVar10 == 0)) break;
        lVar2 = 0xc;
        if (*(char *)(lVar10 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        if (lVar2 + lVar10 == 0) break;
        uVar13 = (ulong)*(ushort *)(lVar10 + 8);
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar8 = (int *)(lVar2 + lVar10 + 4);
        while (piVar8[-1] != -0x13cab75) {
          piVar8 = piVar8 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_03827284;
        }
        iVar7 = 0;
        if (*piVar8 != -1) {
          iVar7 = *piVar8;
        }
        *(int *)(puVar5 + 8) = iVar7;
        uVar1 = *puVar11;
        if (uVar1 == 0) break;
      } while( true );
    }
  }
LAB_03827284:
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  return;
  while (bVar6 = iVar7 + -1 != iVar14, iVar14 = iVar14 + 1, bVar6) {
LAB_038273bc:
    FUN_01360490(&local_58,puVar15[1],iVar14);
    uVar13 = (*(code *)*local_78)(&local_78,&local_58);
    if ((uVar13 & 1) != 0) break;
  }
LAB_038273f0:
  local_58 = (undefined **)0x0;
  local_50 = (undefined **)((ulong)local_50 & 0xffffffff00000000);
  FUN_02a8f1dc(&local_b8,&local_58);
  *(undefined4 *)(param_1 + 0xc) = local_58._0_4_;
  *(undefined4 *)(param_1 + 0x10) = local_50._0_4_;
  return;
}

