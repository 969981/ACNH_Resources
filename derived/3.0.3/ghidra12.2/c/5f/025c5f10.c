
void FUN_025c5f10(long param_1,long *param_2)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint *puVar20;
  char cVar21;
  long lVar22;
  uint local_bc;
  int local_b8;
  uint local_9c;
  undefined *local_90;
  undefined *local_88;
  undefined **local_80;
  uint local_78;
  undefined4 uStack_74;
  uint *local_70;
  uint local_68;
  undefined4 local_64;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  lVar17 = *param_2;
  if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar12 == (undefined8 *)0x0)) {
    local_9c = 0;
  }
  else {
    local_9c = (**(code **)*puVar12)();
  }
  puVar8 = PTR_DAT_04bb43c0;
  iVar7 = *(int *)((long)param_2 + 0x14) * 1000 + 1000;
  lVar3 = *(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8);
  iVar5 = (int)param_2[1];
  if (iVar7 <= (int)param_2[1]) {
    iVar5 = iVar7;
  }
  if (*(int *)((long)param_2 + 0x14) < 1) {
    local_bc = 0;
    local_b8 = 0;
    lVar18 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
LAB_025c62c0:
    local_68 = (uint)(ushort)lVar18;
    local_64 = 0;
    FUN_0277d4ac(&local_68);
    lVar22 = *(long *)puVar8;
    uVar11 = FUN_0277d6c4(&local_68);
    lVar19 = *(long *)puVar8;
    if (lVar19 != 0) {
      lVar22 = *(long *)(lVar22 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if ((uVar11 < *(uint *)(lVar22 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
        local_70 = (uint *)0x0;
        local_80 = &PTR_FUN_04a36b50;
        local_78 = local_68;
        uStack_74 = local_64;
        uVar11 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar8 == 0) {
LAB_025c639c:
          puVar20 = (uint *)0x0;
        }
        else {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((*(uint *)(lVar19 + 0x1d8) <= uVar11) ||
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_025c639c;
          lVar19 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(&local_68);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if (*(uint *)(lVar19 + 0x1d8) <= uVar11) goto LAB_025c639c;
          puVar20 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8);
          if (puVar20 != (uint *)0x0) {
            local_70 = puVar20;
          }
        }
        bVar9 = FUN_01ad7260(&local_80);
        if (((bVar9 != 0) && (puVar20 != (uint *)0x0)) && (uVar11 = *puVar20, uVar11 != 0)) {
          cVar21 = DAT_05326940;
          do {
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *PTR_DAT_04bbfe88 = 1;
              memset(PTR_DAT_04bbfe90,0xff,0x1ac);
              uVar11 = *puVar20;
            }
            else {
              if (-1 < (int)DAT_05326a64) {
                if ((short *)((ulong)DAT_05326a64 + (long)puVar20) != (short *)0x0) {
                  sVar6 = *(short *)((ulong)DAT_05326a64 + (long)puVar20);
                  if ((long)sVar6 != -1) {
                    uVar15 = 0;
                    goto LAB_025c64fc;
                  }
                }
                break;
              }
              if (DAT_05326a64 != 0xffffffff) break;
            }
            if (((ulong)uVar11 == 0) || (lVar19 = (long)puVar20 - (ulong)uVar11, lVar19 == 0))
            break;
            lVar22 = 0xc;
            if (*(char *)(lVar19 + 10) != '\0') {
              lVar22 = 0x1c;
            }
            if (lVar22 + lVar19 == 0) break;
            uVar15 = (ulong)*(ushort *)(lVar19 + 8);
            *(undefined4 *)(PTR_DAT_04bbfe90 + 0x120) = 0xfffffffe;
            if (uVar15 == 0) break;
            piVar16 = (int *)(lVar22 + lVar19 + 4);
            while (piVar16[-1] != -0x34a14cc1) {
              piVar16 = piVar16 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) goto LAB_025c62b4;
            }
            iVar7 = 0;
            if (*piVar16 != -1) {
              iVar7 = *piVar16;
            }
            *(int *)(PTR_DAT_04bbfe90 + 0x120) = iVar7;
            uVar11 = *puVar20;
            if (uVar11 == 0) break;
          } while( true );
        }
      }
    }
    goto LAB_025c62b4;
  }
  uVar11 = 0;
  iVar7 = 0;
  do {
    local_68 = uVar11 & 0xffff;
    local_64 = 0;
    FUN_0277d4ac(&local_68);
    lVar19 = *(long *)puVar8;
    uVar10 = FUN_0277d6c4(&local_68);
    lVar18 = *(long *)puVar8;
    if (lVar18 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        local_80 = &PTR_FUN_04a36b50;
        local_70 = (uint *)0x0;
        local_78 = local_68;
        uStack_74 = local_64;
        uVar10 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar8 == 0) {
LAB_025c60c4:
          puVar20 = (uint *)0x0;
        }
        else {
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_025c60c4;
          lVar18 = *(long *)PTR_DAT_04bc0428;
          uVar10 = FUN_0277d6c4(&local_68);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if (*(uint *)(lVar18 + 0x1d8) <= uVar10) goto LAB_025c60c4;
          puVar20 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8);
          if (puVar20 != (uint *)0x0) {
            local_70 = puVar20;
          }
        }
        bVar9 = FUN_01ad7260(&local_80);
        uVar10 = (uint)bVar9;
        if (((bVar9 != 0) && (puVar20 != (uint *)0x0)) && (uVar14 = *puVar20, uVar14 != 0)) {
          cVar21 = DAT_05326940;
          do {
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *PTR_DAT_04bbfe88 = 1;
              memset(PTR_DAT_04bbfe90,0xff,0x1ac);
              uVar14 = *puVar20;
            }
            else {
              if (-1 < (int)DAT_05326a64) {
                if (((short *)((ulong)DAT_05326a64 + (long)puVar20) != (short *)0x0) &&
                   (iVar13 = (int)*(short *)((ulong)DAT_05326a64 + (long)puVar20), iVar13 != -1)) {
                  uVar14 = iVar13 << 3;
                  goto LAB_025c61fc;
                }
                break;
              }
              if (DAT_05326a64 != 0xffffffff) break;
            }
            if (((ulong)uVar14 == 0) || (lVar18 = (long)puVar20 - (ulong)uVar14, lVar18 == 0))
            break;
            lVar19 = 0xc;
            if (*(char *)(lVar18 + 10) != '\0') {
              lVar19 = 0x1c;
            }
            if (lVar19 + lVar18 == 0) break;
            uVar15 = (ulong)*(ushort *)(lVar18 + 8);
            *(undefined4 *)(PTR_DAT_04bbfe90 + 0x120) = 0xfffffffe;
            if (uVar15 == 0) break;
            piVar16 = (int *)(lVar19 + lVar18 + 4);
            while (piVar16[-1] != -0x34a14cc1) {
              piVar16 = piVar16 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) goto LAB_025c5fe0;
            }
            iVar13 = 0;
            if (*piVar16 != -1) {
              iVar13 = *piVar16;
            }
            *(int *)(PTR_DAT_04bbfe90 + 0x120) = iVar13;
            uVar14 = *puVar20;
            if (uVar14 == 0) break;
          } while( true );
        }
      }
    }
LAB_025c5fe0:
    uVar11 = uVar11 + 1;
    if (uVar11 == 0x3a8b) {
LAB_025c6234:
      if ((local_9c & 1) == 0) {
        return;
      }
      if (*(long *)(lVar17 + 0x28) == 0) {
        return;
      }
      puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8);
      if (puVar12 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar12)();
      return;
    }
  } while( true );
LAB_025c64fc:
  do {
    uVar4 = (uint)((int)sVar6 << 3) + uVar15;
    if ((((uint)(uVar4 >> 7) & 0x1ffffff) < 0x7d) &&
       ((*(uint *)(lVar3 + ((long)sVar6 * 8 + uVar15 >> 5 & 0x7ffffff) * 4) >>
         (ulong)((uint)uVar4 & 0x1f) & 1) != 0)) {
      if ((local_bc < *(uint *)(param_1 + 0x30)) &&
         (lVar19 = *(long *)(*(long *)(param_1 + 0x38) + (long)(int)local_bc * 8), lVar19 != 0)) {
        pcVar2 = (char *)(lVar19 + 8);
        local_88 = &DAT_040f7ef1;
        local_90 = puVar1;
        lVar19 = nn::prepo::Struct::GetBuffer();
        if (lVar19 != 0) {
          (**(code **)(local_90 + 0x18))(&local_90);
          nn::prepo::Struct::Add(pcVar2,(long)local_88);
        }
        local_90 = PTR_DAT_04bb2020 + 0x10;
        local_88 = &DAT_04084f46;
        lVar19 = nn::prepo::Struct::GetBuffer();
        if (lVar19 != 0) {
          (**(code **)(local_90 + 0x18))(&local_90);
          nn::prepo::Struct::Add(pcVar2,(long)local_88);
        }
        lVar22 = *(long *)(param_1 + 0x28);
        lVar19 = nn::prepo::Array::GetBuffer();
        if (lVar19 != 0) {
          nn::prepo::Array::Add((Struct *)(lVar22 + 8));
        }
        local_bc = local_bc + 1;
      }
      local_b8 = local_b8 + 1;
      if (iVar5 <= local_b8) goto LAB_025c6234;
    }
    uVar15 = uVar15 + 1;
  } while (bVar9 != uVar15);
LAB_025c62b4:
  lVar18 = lVar18 + 1;
  if (lVar18 == 0x3a8b) goto LAB_025c6234;
  goto LAB_025c62c0;
  while( true ) {
    uVar14 = uVar14 + 1;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) break;
LAB_025c61fc:
    if (((uVar14 >> 7 < 0x7d) &&
        ((*(uint *)(lVar3 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0)) &&
       (iVar7 = iVar7 + 1, iVar5 <= iVar7)) goto LAB_025c6234;
  }
  goto LAB_025c5fe0;
}

