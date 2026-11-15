
void FUN_01feab40(long param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  char *pcVar9;
  char cVar10;
  char *pcVar11;
  uint *puVar12;
  int *piVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  undefined *local_68;
  char *local_60;
  uint local_54;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  lVar17 = *(long *)(*(long *)(param_1 + 8) + 8);
  uVar16 = *param_2;
  if ((((uVar16 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                            ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar16)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar16 = 1;
      goto joined_r0x01feac10;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01feac10;
    }
  }
  uVar16 = 0;
joined_r0x01feac10:
  if (plVar14 != (long *)0x0) {
    lVar7 = plVar14[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb37d0);
    uVar18 = 0;
    if ((int)lVar7 == 1) {
      uVar18 = uVar16;
    }
    if (((uVar6 & 1) != 0) && (uVar18 != 0)) {
      (**(code **)(plVar14[0x7c] + 0x18))(plVar14 + 0x7c);
      (**(code **)(plVar14[0x7c] + 0x18))(plVar14 + 0x7c);
      lVar7 = plVar14[0x7d];
      (**(code **)(*(long *)(lVar17 + 0x3e0) + 0x18))(lVar17 + 0x3e0);
      if (lVar7 != *(long *)(lVar17 + 1000)) {
        uVar6 = 0;
        bVar3 = true;
        do {
          if (*(char *)(plVar14[0x7d] + uVar6) != *(char *)(*(long *)(lVar17 + 1000) + uVar6))
          break;
          if (*(char *)(plVar14[0x7d] + uVar6) == '\0') {
            if (bVar3) {
              return;
            }
            break;
          }
          bVar3 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
        puVar15 = (undefined8 *)plVar14[0x77];
        if (((*PTR_DAT_04bb7480 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb7480), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb7478 = PTR_DAT_04bb6d20 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb7480);
        }
        if (((puVar15 != (undefined8 *)0x0) &&
            (uVar6 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bb7478), puVar2 = PTR_DAT_04bc23c8,
            puVar1 = PTR_DAT_04bc23c0, (uVar6 & 1) != 0)) &&
           ((*(ushort *)((long)puVar15 + 0x1242c) & 1) != 0)) {
          puVar8 = *(uint **)(param_1 + 0x10);
          if (*puVar8 != 0) {
            cVar10 = *PTR_DAT_04bc23c0;
            do {
              if (cVar10 == '\0') {
                cVar10 = '\x01';
                *(undefined8 *)puVar2 = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                *puVar1 = 1;
                *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
              }
              else {
                uVar16 = *(uint *)(puVar2 + 0x3c);
                if (-1 < (int)uVar16) {
                  pcVar11 = (char *)((ulong)uVar16 + (long)puVar8);
                  goto LAB_01feae18;
                }
                if (uVar16 != 0xffffffff) break;
              }
              puVar12 = (uint *)(ulong)*puVar8;
              pcVar11 = (char *)0x0;
              if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_01feae18;
              lVar7 = 0xc;
              if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
                lVar7 = 0x1c;
              }
              lVar7 = (long)puVar8 + (lVar7 - (long)puVar12);
              if (lVar7 == 0) break;
              uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
              *(undefined4 *)(puVar2 + 0x3c) = 0xfffffffe;
              pcVar11 = (char *)0x0;
              if (uVar6 == 0) goto LAB_01feae18;
              piVar13 = (int *)(lVar7 + 4);
              while (piVar13[-1] != 0x630f2b53) {
                piVar13 = piVar13 + 2;
                uVar6 = uVar6 - 1;
                if (uVar6 == 0) {
                  pcVar11 = (char *)0x0;
                  goto LAB_01feae18;
                }
              }
              iVar4 = 0;
              if (*piVar13 != -1) {
                iVar4 = *piVar13;
              }
              *(int *)(puVar2 + 0x3c) = iVar4;
            } while (*puVar8 != 0);
          }
          pcVar11 = (char *)0x0;
LAB_01feae18:
          puVar1 = PTR_DAT_04bc23b8;
          local_54 = 0;
          local_60 = "";
          if (pcVar11 != (char *)0x0) {
            local_60 = pcVar11;
          }
          local_68 = PTR_DAT_04bb2020 + 0x10;
          uVar16 = 0;
          do {
            pcVar11 = "";
            if (uVar16 < 0x3d) {
              pcVar11 = *(char **)(puVar1 + (ulong)uVar16 * 8 + 0x938);
            }
            (**(code **)(local_68 + 0x18))(&local_68);
            if (pcVar11 == local_60) {
LAB_01feaefc:
              local_54 = uVar16;
              break;
            }
            if (*pcVar11 == *local_60) {
              if (*pcVar11 == '\0') goto LAB_01feaefc;
              lVar7 = 0x7fffe;
              pcVar9 = local_60;
              while( true ) {
                if (pcVar11[1] != pcVar9[1]) break;
                if (pcVar11[1] == '\0') goto LAB_01feaefc;
                if (pcVar11[2] != pcVar9[2]) break;
                if (pcVar11[2] == '\0') goto LAB_01feaefc;
                if ((lVar7 == 0) || (cVar10 = pcVar11[3], cVar10 != pcVar9[3])) break;
                lVar7 = lVar7 + -3;
                pcVar9 = pcVar9 + 3;
                pcVar11 = pcVar11 + 3;
                if (cVar10 == '\0') goto LAB_01feaefc;
              }
            }
            uVar18 = 0x3d;
            if ((int)uVar16 < 0x3d) {
              uVar18 = uVar16 + 1;
            }
            uVar16 = uVar18;
          } while (uVar18 != 0x3d);
          if (*(uint *)((long)puVar15 + 0x123bc) == local_54) {
            FUN_01fe5990(*(undefined8 *)(param_1 + 0x18),puVar15);
          }
        }
      }
    }
  }
  return;
}

