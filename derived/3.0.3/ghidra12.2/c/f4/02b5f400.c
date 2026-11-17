
undefined8 FUN_02b5f400(uint *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  uint uVar16;
  undefined *local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 auStack_94 [31];
  undefined1 local_75;
  uint local_64;
  
  if (param_1 != (uint *)0x0) {
    puVar1 = PTR_DAT_04bb2a08 + 0x10;
    puVar2 = PTR_DAT_04bc4730 + 0x10;
    uVar16 = 0;
    do {
      lVar8 = *(long *)PTR_DAT_04bb2720;
      local_64 = uVar16;
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x330) == 0)) {
        plVar15 = &DAT_055c04a0;
      }
      else {
        puVar7 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
        iVar6 = FUN_006bd550(*puVar7,0);
        plVar15 = (long *)PTR_DAT_04bc3a80;
        if (iVar6 != 0x758f7eaf) {
          plVar15 = &DAT_055c04a0;
        }
      }
      local_75 = 0;
      local_98 = 0x20;
      local_a8 = puVar1;
      local_a0 = auStack_94;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      if (auStack_94 != (undefined1 *)plVar15[1]) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      uVar9 = 0x26;
      if ((int)plVar15[7] != -0x24a26848) {
        uVar9 = local_64;
        if (7 < local_64) {
          uVar9 = 0;
        }
        uVar9 = (&DAT_05636e10)[(int)uVar9];
      }
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar9);
      if (uVar9 != 0) {
        lVar8 = *(long *)PTR_DAT_04bb5008;
        if ((int)*(uint *)(lVar8 + 0x1e0) < 1) {
          if ((((*(long *)(lVar8 + 0xd0) != 0) &&
               (puVar10 = *(uint **)(*(long *)(lVar8 + 0xd0) + 8), puVar10 != (uint *)0x0)) &&
              ((*(uint *)(lVar8 + 0xe8) <= uVar9 ||
               (*(char *)(*(long *)(lVar8 + 0xf0) + (long)(int)uVar9) != '\0')))) &&
             (((uVar9 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
            iVar6 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              iVar6 = 0x1c;
            }
            puVar10 = (uint *)((ulong)(puVar10[1] * uVar9 + (uint)(ushort)puVar10[2] * 8 + iVar6) +
                              (long)puVar10);
            goto joined_r0x02b5f6fc;
          }
        }
        else if (uVar9 < *(uint *)(lVar8 + 0x1e0)) {
          if (*(uint *)(lVar8 + 0x1d0) <= uVar9) {
            uVar9 = 0;
          }
          puVar10 = *(uint **)(*(long *)(lVar8 + 0x1d8) + (ulong)uVar9 * 8);
joined_r0x02b5f6fc:
          if ((puVar10 != (uint *)0x0) && (uVar9 = *puVar10, uVar9 != 0)) {
            cVar11 = *PTR_DAT_04bc4690;
            do {
              if (cVar11 == '\0') {
                cVar11 = '\x01';
                *PTR_DAT_04bc4690 = 1;
                puVar5 = PTR_DAT_04bc4698;
                *(undefined8 *)PTR_DAT_04bc4698 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
                uVar9 = *puVar10;
              }
              else {
                uVar4 = *(uint *)(PTR_DAT_04bc4698 + 0x14);
                if (-1 < (int)uVar4) {
                  if ((((ushort *)((ulong)uVar4 + (long)puVar10) != (ushort *)0x0) &&
                      (uVar9 = (uint)*(ushort *)((ulong)uVar4 + (long)puVar10), local_a8 = puVar2,
                      uVar9 != 0)) &&
                     ((*(long *)(lVar8 + 0x2a8) != 0 &&
                      ((((*(long *)(*(long *)(lVar8 + 0x2a8) + 8) != 0 &&
                         (uVar9 = uVar9 - *(ushort *)(lVar8 + 0x3f0),
                         uVar9 < *(uint *)(lVar8 + 0x3d0))) &&
                        (local_a0 = *(undefined1 **)
                                     (*(long *)(lVar8 + 0x3d8) + (long)(int)uVar9 * 8),
                        local_a0 != (undefined1 *)0x0)) &&
                       (uVar12 = FUN_02acce10(&local_a8,param_2), (uVar12 & 1) != 0)))))) {
                    *param_1 = uVar16;
                    return 1;
                  }
                  break;
                }
                if (uVar4 != 0xffffffff) break;
              }
              if (((ulong)uVar9 == 0) || (lVar13 = (long)puVar10 - (ulong)uVar9, lVar13 == 0))
              break;
              lVar3 = 0xc;
              if (*(char *)(lVar13 + 10) != '\0') {
                lVar3 = 0x1c;
              }
              if (lVar3 + lVar13 == 0) break;
              uVar12 = (ulong)*(ushort *)(lVar13 + 8);
              *(undefined4 *)(PTR_DAT_04bc4698 + 0x14) = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar14 = (int *)(lVar3 + lVar13 + 4);
              while (piVar14[-1] != 0xd664b5c) {
                piVar14 = piVar14 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_02b5f480;
              }
              iVar6 = 0;
              if (*piVar14 != -1) {
                iVar6 = *piVar14;
              }
              *(int *)(PTR_DAT_04bc4698 + 0x14) = iVar6;
              uVar9 = *puVar10;
              if (uVar9 == 0) break;
            } while( true );
          }
        }
      }
LAB_02b5f480:
      uVar9 = 8;
      if ((int)uVar16 < 8) {
        uVar9 = uVar16 + 1;
      }
      uVar16 = uVar9;
    } while (uVar9 != 8);
  }
  return 0;
}

