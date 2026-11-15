
void FUN_020b7a90(long param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  char *__dest;
  long *plVar13;
  undefined8 *puVar14;
  uint uVar15;
  char *pcVar16;
  undefined *local_78;
  char *local_70;
  int local_68;
  char local_64 [31];
  undefined1 local_45;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  if (lVar12 == 0) {
    uVar8 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_020b7b20;
LAB_020b7b8c:
    if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_020b7ba0;
    puVar10 = (uint *)(*(long *)PTR_DAT_04bb4718 + uVar8 * 4 + 0xde8);
  }
  else {
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar12 + 0x158);
    }
    uVar8 = (ulong)*pbVar9;
    if ((*pbVar9 < 8) ||
       (((*(int *)(lVar12 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar3 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar8 = (ulong)bVar3, bVar3 < 8))))
    goto LAB_020b7b8c;
LAB_020b7b20:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar12 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar12 + 0x473);
      pbVar9 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar10 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar10 = (uint *)(lVar12 + 0x48);
        }
        if ((*puVar10 & 8) != 0) {
          pbVar9 = (byte *)(lVar12 + 0x471);
        }
      }
      uVar8 = (ulong)*pbVar9;
      if (*pbVar9 < 8) goto LAB_020b7b8c;
    }
    uVar8 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_020b7b8c;
LAB_020b7ba0:
    puVar10 = (uint *)PTR_DAT_04bb3238;
  }
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return;
  }
  uVar15 = *puVar10;
  if (((uVar15 == 0) ||
      (plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                           ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
     (((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar13 + 0x46) != uVar15)))) {
    plVar13 = (long *)0x0;
  }
  if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar4;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar15 = 1;
      goto joined_r0x020b7c60;
    }
    if (*(uint *)(lVar12 + 0x5e8) < 5) {
      uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020b7c60;
    }
  }
  uVar15 = 0;
joined_r0x020b7c60:
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0x2a];
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar8 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb3770);
    uVar2 = 0;
    if ((int)lVar12 == 1) {
      uVar2 = uVar15;
    }
    if (((uVar8 & 1) != 0) && (uVar2 != 0)) {
      puVar14 = (undefined8 *)plVar13[0xc];
      if (puVar14 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          puVar14 = &DAT_05240280;
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar14 = &DAT_05240280;
        }
      }
      if (puVar14[0x227] == 0) {
        plVar13 = &DAT_04c931a0;
      }
      else {
        plVar13 = (long *)(*(long *)(puVar14[0x227] + 0x88) + 0x60);
      }
      local_68 = 0x20;
      local_45 = 0;
      local_78 = PTR_DAT_04bb2a08 + 0x10;
      local_70 = local_64;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      pcVar16 = (char *)plVar13[1];
      if (local_64 != pcVar16) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
        lVar12 = 0;
        do {
          if (*(char *)(plVar13[1] + lVar12) == '\0') goto LAB_020b7dac;
          lVar1 = plVar13[1] + lVar12;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_020b7dac;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_020b7dac;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_020b7dac:
        iVar6 = (int)lVar12;
        if (local_68 <= (int)lVar12) {
          iVar6 = local_68 + -1;
        }
        memcpy(local_64,pcVar16,(long)iVar6);
        local_64[iVar6] = '\0';
      }
      puVar4 = PTR_DAT_04bb2028;
      local_78 = PTR_DAT_04bb2028 + 0x10;
      local_70[(long)local_68 + -1] = '\0';
      (**(code **)(puVar4 + 0x28))(&local_78);
      if (local_70 != "PlayerKKFesRhythmLower") {
        uVar8 = 0;
        bVar5 = true;
        do {
          if (local_70[uVar8] != "PlayerKKFesRhythmLower"[uVar8]) break;
          if (local_70[uVar8] == '\0') {
            if (bVar5) goto LAB_020b7fa8;
            break;
          }
          bVar5 = uVar8 < 0x80000;
          uVar8 = uVar8 + 1;
        } while (uVar8 != 0x80001);
        (**(code **)(local_78 + 0x18))(&local_78);
        (**(code **)(local_78 + 0x18))(&local_78);
        if (local_70 != "PlayerKKFesRhythmRight") {
          uVar8 = 0;
          bVar5 = true;
          do {
            if (local_70[uVar8] != "PlayerKKFesRhythmRight"[uVar8]) break;
            if (local_70[uVar8] == '\0') {
              if (bVar5) goto LAB_020b7fa8;
              break;
            }
            bVar5 = uVar8 < 0x80000;
            uVar8 = uVar8 + 1;
          } while (uVar8 != 0x80001);
          (**(code **)(local_78 + 0x18))(&local_78);
          (**(code **)(local_78 + 0x18))(&local_78);
          if (local_70 != "PlayerKKFesRhythmUpper") {
            uVar8 = 0;
            bVar5 = true;
            do {
              if (local_70[uVar8] != "PlayerKKFesRhythmUpper"[uVar8]) break;
              if (local_70[uVar8] == '\0') {
                if (bVar5) goto LAB_020b7fa8;
                break;
              }
              bVar5 = uVar8 < 0x80000;
              uVar8 = uVar8 + 1;
            } while (uVar8 != 0x80001);
            (**(code **)(local_78 + 0x18))(&local_78);
            (**(code **)(local_78 + 0x18))(&local_78);
            if (local_70 != "PlayerKKFesRhythmLeft") {
              if (*local_70 != 'P') {
                return;
              }
              uVar8 = 0;
              do {
                uVar11 = uVar8;
                if (uVar11 == 0x80000) {
                  return;
                }
                if (local_70[uVar11 + 1] != "PlayerKKFesRhythmLeft"[uVar11 + 1]) {
                  return;
                }
                uVar8 = uVar11 + 1;
              } while (local_70[uVar11 + 1] != '\0');
              if (uVar11 >> 0x13 != 0) {
                return;
              }
            }
          }
        }
      }
LAB_020b7fa8:
      __dest = *(char **)(param_1 + 0x19688);
      (**(code **)(local_78 + 0x18))(&local_78);
      pcVar16 = local_70;
      if (__dest != local_70) {
        (**(code **)(local_78 + 0x18))(&local_78);
        lVar12 = 0;
        do {
          if (local_70[lVar12] == '\0') goto LAB_020b802c;
          if (local_70[lVar12 + 1] == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_020b802c;
          }
          if (local_70[lVar12 + 2] == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_020b802c;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_020b802c:
        iVar6 = (int)lVar12;
        if (*(int *)(param_1 + 0x19690) <= (int)lVar12) {
          iVar6 = *(int *)(param_1 + 0x19690) + -1;
        }
        memcpy(__dest,pcVar16,(long)iVar6);
        __dest[iVar6] = '\0';
      }
      *(undefined4 *)(param_1 + 0x1967c) = 0;
      *(undefined1 *)(param_1 + 0x19678) = 1;
    }
  }
  return;
}

