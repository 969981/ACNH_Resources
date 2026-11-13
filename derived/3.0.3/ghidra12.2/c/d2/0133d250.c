
/* WARNING: Removing unreachable block (ram,0x0133d290) */
/* WARNING: Removing unreachable block (ram,0x0133d2a0) */
/* WARNING: Removing unreachable block (ram,0x0133d2ac) */

void FUN_0133d250(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  int *piVar16;
  ulong uVar17;
  char cVar18;
  long lVar19;
  long lVar20;
  uint *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  byte local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  undefined *local_78;
  int local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
  if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) &&
     (uVar6 = *(uint *)(param_3 + 0x138), 0 < (int)uVar6)) {
    lVar1 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 200;
    uVar22 = 0;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    puVar3 = PTR_DAT_04bbfe68 + 0x10;
    puVar4 = PTR_DAT_04bc0510 + 0x10;
    puVar5 = PTR_DAT_04bb3140 + 0x10;
    do {
      if (uVar22 < *(uint *)(param_3 + 0x118)) {
        lVar20 = *(long *)(*(long *)(param_3 + 0x120) + uVar22 * 8);
      }
      else {
        lVar20 = 0;
      }
      pbVar14 = (byte *)(**(code **)(*(long *)(lVar20 + 0xf8) + 0xf0))();
      bVar8 = *pbVar14;
      uVar13 = (uint)bVar8;
      local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar13);
      lVar19 = lVar1 + (ulong)uVar13 * 0x10;
      if (7 < uVar13) {
        lVar19 = lVar1;
      }
      lVar19 = *(long *)(lVar19 + 8);
      if (lVar19 != 0) {
        puVar15 = (undefined8 *)(**(code **)(*(long *)(lVar20 + 0x60) + 0xf0))();
        uVar23 = *puVar15;
        local_64 = 0;
        local_68 = (uint)(ushort)uVar23;
        FUN_0277d4ac(&local_68);
        local_68 = CONCAT13((char)((ulong)uVar23 >> 0x18),
                            CONCAT12((char)((ulong)uVar23 >> 0x10),(undefined2)local_68));
        local_64 = (undefined4)((ulong)uVar23 >> 0x20);
        piVar16 = (int *)(**(code **)(*(long *)(lVar20 + 0x98) + 0xf0))();
        iVar12 = *(int *)(lVar19 + 0x10) + *piVar16;
        piVar16 = (int *)(**(code **)(*(long *)(lVar20 + 200) + 0xf0))((long *)(lVar20 + 200));
        local_88 = 0;
        iStack_6c = *(int *)(lVar19 + 0x14) + *piVar16;
        lVar20 = *(long *)PTR_DAT_04bb2720;
        local_90 = puVar3;
        local_78 = puVar2;
        local_70 = iVar12;
        if ((lVar20 == 0) || (*(long *)(lVar20 + 0x330) == 0)) {
          puVar15 = &DAT_055c04a0;
        }
        else {
          puVar15 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
          iVar12 = FUN_006bd550(*puVar15,0);
          puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar12 != 0x758f7eaf) {
            puVar15 = &DAT_055c04a0;
          }
        }
        local_84 = *(undefined4 *)(puVar15 + 7);
        local_80 = FUN_017baf44();
        local_80 = local_80 & 1;
        FUN_01a50970(&local_90,bVar8,&local_68,&local_78);
        uVar17 = FUN_0277e294(&local_68);
        puVar10 = PTR_DAT_04bb43c0;
        if (((uVar17 & 1) != 0) && (*(int *)(param_2 + 0xc) == 1)) {
          local_98 = (uint *)0x0;
          local_a0 = local_68;
          uStack_9c = local_64;
          lVar20 = *(long *)PTR_DAT_04bb43c0;
          local_a8 = puVar4;
          uVar13 = FUN_0277d6c4(&local_a0);
          if (*(long *)puVar10 == 0) {
LAB_0133d570:
            puVar21 = (uint *)0x0;
          }
          else {
            lVar20 = *(long *)(lVar20 + 0x57e58);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if ((*(uint *)(lVar20 + 0x1d8) <= uVar13) ||
               (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar13 * 8) == 0))
            goto LAB_0133d570;
            lVar20 = *(long *)PTR_DAT_04bc0428;
            uVar13 = FUN_0277d6c4(&local_68);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if (*(uint *)(lVar20 + 0x1d8) <= uVar13) goto LAB_0133d570;
            puVar21 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar13 * 8);
            if (puVar21 != (uint *)0x0) {
              local_98 = puVar21;
            }
          }
          local_b8 = 0;
          local_c0 = PTR_DAT_04bbfe68 + 0x10;
          lVar20 = *(long *)PTR_DAT_04bb2720;
          if ((lVar20 == 0) || (*(long *)(lVar20 + 0x330) == 0)) {
            puVar15 = &DAT_055c04a0;
          }
          else {
            puVar15 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
            iVar12 = FUN_006bd550(*puVar15,0);
            puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar12 != 0x758f7eaf) {
              puVar15 = &DAT_055c04a0;
            }
          }
          local_b4 = *(undefined4 *)(puVar15 + 7);
          local_b0 = FUN_017baf44();
          local_b0 = local_b0 & 1;
          local_c0 = puVar5;
          if ((puVar21 != (uint *)0x0) && (uVar13 = *puVar21, uVar13 != 0)) {
            cVar18 = *PTR_DAT_04bbfe88;
            do {
              if (cVar18 == '\0') {
                cVar18 = '\x01';
                *PTR_DAT_04bbfe88 = 1;
                memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                uVar13 = *puVar21;
              }
              else {
                uVar7 = *(uint *)(PTR_DAT_04bbfe90 + 400);
                if (-1 < (int)uVar7) {
                  if ((char *)((ulong)uVar7 + (long)puVar21) == (char *)0x0) break;
                  bVar11 = *(char *)((ulong)uVar7 + (long)puVar21) != '\0';
                  goto LAB_0133d324;
                }
                if (uVar7 != 0xffffffff) break;
              }
              puVar9 = (uint *)(ulong)uVar13;
              bVar11 = false;
              if ((puVar9 == (uint *)0x0) || (bVar11 = false, puVar21 == puVar9)) goto LAB_0133d324;
              lVar20 = 0xc;
              if (*(char *)((long)puVar21 + (10 - (long)puVar9)) != '\0') {
                lVar20 = 0x1c;
              }
              lVar20 = (long)puVar21 + (lVar20 - (long)puVar9);
              if (lVar20 == 0) break;
              uVar17 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar9));
              *(undefined4 *)(PTR_DAT_04bbfe90 + 400) = 0xfffffffe;
              if (uVar17 == 0) break;
              piVar16 = (int *)(lVar20 + 4);
              while (piVar16[-1] != -0x214c0724) {
                piVar16 = piVar16 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_0133d320;
              }
              bVar11 = false;
              iVar12 = 0;
              if (*piVar16 != -1) {
                iVar12 = *piVar16;
              }
              *(int *)(PTR_DAT_04bbfe90 + 400) = iVar12;
              uVar13 = *puVar21;
              if (uVar13 == 0) goto LAB_0133d324;
            } while( true );
          }
LAB_0133d320:
          bVar11 = false;
LAB_0133d324:
          FUN_014fd424(&local_c0,bVar11,&local_78,bVar8);
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar6);
  }
  return;
}

