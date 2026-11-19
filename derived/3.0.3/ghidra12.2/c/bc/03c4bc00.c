
void FUN_03c4bc00(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  byte *pbVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  undefined *local_190;
  undefined1 *local_188;
  int local_180;
  undefined1 local_17c [255];
  undefined1 local_7d;
  undefined *local_78;
  byte *local_70;
  
  local_7d = 0;
  local_180 = 0x100;
  local_17c[0] = 0;
  local_188 = local_17c;
  local_190 = PTR_DAT_04bb21f8 + 0x10;
  nn::os::LockMutex((MutexType *)(param_1 + 400));
  if (*(long *)(param_1 + 0x1d8) != param_1 + 0x1d0) {
    lVar10 = (long)*(int *)(param_1 + 0x1e4);
    plVar13 = (long *)(*(long *)(param_1 + 0x1d8) - lVar10);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    lVar17 = (long)plVar13 + lVar10;
    do {
      lVar17 = *(long *)(lVar17 + 8);
      if ((int)plVar13[5] == 0) {
        plVar14 = (long *)((long)plVar13 + (long)*(int *)(param_1 + 0x1e4));
        if (*plVar14 != 0) {
          *(long *)(*plVar14 + 8) = plVar14[1];
        }
        if ((long *)plVar14[1] != (long *)0x0) {
          *(long *)plVar14[1] = *plVar14;
        }
        *plVar14 = 0;
        plVar14[1] = 0;
        *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + -1;
        if (plVar13[3] == 0) {
          ppuVar7 = &PTR_PTR_04c4b980;
        }
        else {
          ppuVar7 = *(undefined ***)(plVar13[3] + 0x18);
        }
        pbVar15 = ppuVar7[1];
        local_78 = puVar1;
        local_70 = pbVar15;
        for (lVar16 = *(long *)(param_1 + 0x1b0); lVar16 != 0; lVar16 = *(long *)(lVar16 + 0x10)) {
          while( true ) {
            (**(code **)(local_78 + 0x18))(&local_78);
            (**(code **)(local_78 + 0x18))(&local_78);
            pbVar12 = local_70;
            plVar14 = (long *)(lVar16 + 0x20);
            (**(code **)(*plVar14 + 0x18))(plVar14);
            if (pbVar12 == *(byte **)(lVar16 + 0x28)) break;
            pbVar12 = *(byte **)(lVar16 + 0x28);
            pbVar8 = local_70;
            lVar11 = 0x7ffff;
            while( true ) {
              bVar5 = *pbVar8;
              if (bVar5 != *pbVar12) break;
              if ((bVar5 == 0) ||
                 (bVar3 = lVar11 == 0, pbVar12 = pbVar12 + 1, pbVar8 = pbVar8 + 1,
                 lVar11 = lVar11 + -1, bVar3)) goto LAB_03c4bdb0;
            }
            if (*pbVar12 <= bVar5) break;
            lVar16 = *(long *)(lVar16 + 8);
            if (lVar16 == 0) goto LAB_03c4be6c;
          }
LAB_03c4bdb0:
          (**(code **)(*(long *)(lVar16 + 0x20) + 0x18))(plVar14);
          (**(code **)(*(long *)(lVar16 + 0x20) + 0x18))(plVar14);
          pbVar12 = *(byte **)(lVar16 + 0x28);
          (**(code **)(local_78 + 0x18))(&local_78);
          if (pbVar12 == local_70) {
LAB_03c4be40:
            local_78 = PTR_DAT_04bb2020 + 0x10;
            local_70 = pbVar15;
            lVar16 = FUN_03c4d220(*(undefined8 *)(param_1 + 0x1b0),&local_78);
            *(long *)(param_1 + 0x1b0) = lVar16;
            if (lVar16 != 0) {
              *(undefined8 *)(lVar16 + 0x18) = 1;
            }
            break;
          }
          pbVar12 = local_70;
          pbVar8 = *(byte **)(lVar16 + 0x28);
          lVar11 = 0x7ffff;
          while( true ) {
            bVar5 = *pbVar8;
            if (bVar5 != *pbVar12) break;
            if ((bVar5 == 0) ||
               (bVar3 = lVar11 == 0, pbVar12 = pbVar12 + 1, pbVar8 = pbVar8 + 1,
               lVar11 = lVar11 + -1, bVar3)) goto LAB_03c4be40;
          }
          if (*pbVar12 <= bVar5) goto LAB_03c4be40;
        }
LAB_03c4be6c:
        puVar6 = local_188;
        *local_188 = 0;
        (**(code **)(local_190 + 0x18))(&local_190);
        lVar16 = 0;
        do {
          if (local_188[lVar16] == '\0') goto LAB_03c4becc;
          if (local_188[lVar16 + 1] == '\0') {
            lVar16 = lVar16 + 1;
            goto LAB_03c4becc;
          }
          if (local_188[lVar16 + 2] == '\0') {
            lVar16 = lVar16 + 2;
            goto LAB_03c4becc;
          }
          lVar16 = lVar16 + 3;
        } while (lVar16 != 0x80001);
        lVar16 = 0;
LAB_03c4becc:
        uVar2 = (uint)lVar16 & ((int)(uint)lVar16 >> 0x1f ^ 0xffffffffU);
        (**(code **)(PTR_PTR_04c4c1b8 + 0x18))(&PTR_PTR_04c4c1b8);
        lVar16 = 0;
        do {
          if (PTR_s_Sound_Resource__04c4c1c0[lVar16] == '\0') goto LAB_03c4bf2c;
          if (PTR_s_Sound_Resource__04c4c1c0[lVar16 + 1] == '\0') {
            lVar16 = lVar16 + 1;
            goto LAB_03c4bf2c;
          }
          if (PTR_s_Sound_Resource__04c4c1c0[lVar16 + 2] == '\0') {
            lVar16 = lVar16 + 2;
            goto LAB_03c4bf2c;
          }
          lVar16 = lVar16 + 3;
        } while (lVar16 != 0x80001);
        lVar16 = 0;
LAB_03c4bf2c:
        uVar4 = (uint)lVar16;
        if ((int)(local_180 - uVar2) <= (int)(uint)lVar16) {
          uVar4 = local_180 + ~uVar2;
        }
        if (0 < (int)uVar4) {
          (**(code **)(PTR_PTR_04c4c1b8 + 0x18))(&PTR_PTR_04c4c1b8);
          memcpy(puVar6 + uVar2,PTR_s_Sound_Resource__04c4c1c0,(ulong)uVar4);
          puVar6[(int)(uVar4 + uVar2)] = 0;
        }
        puVar6 = local_188;
        if (plVar13[3] == 0) {
          ppuVar7 = &PTR_PTR_04c4b980;
        }
        else {
          ppuVar7 = *(undefined ***)(plVar13[3] + 0x18);
        }
        (**(code **)(local_190 + 0x18))(&local_190);
        lVar16 = 0;
        do {
          if (local_188[lVar16] == '\0') goto LAB_03c4bfec;
          if (local_188[lVar16 + 1] == '\0') {
            lVar16 = lVar16 + 1;
            goto LAB_03c4bfec;
          }
          if (local_188[lVar16 + 2] == '\0') {
            lVar16 = lVar16 + 2;
            goto LAB_03c4bfec;
          }
          lVar16 = lVar16 + 3;
        } while (lVar16 != 0x80001);
        lVar16 = 0;
LAB_03c4bfec:
        uVar2 = (uint)lVar16 & ((int)(uint)lVar16 >> 0x1f ^ 0xffffffffU);
        (**(code **)(*ppuVar7 + 0x18))(ppuVar7);
        puVar9 = ppuVar7[1];
        lVar16 = 0;
        do {
          if (puVar9[lVar16] == '\0') goto LAB_03c4c04c;
          if (puVar9[lVar16 + 1] == '\0') {
            lVar16 = lVar16 + 1;
            goto LAB_03c4c04c;
          }
          if (puVar9[lVar16 + 2] == '\0') {
            lVar16 = lVar16 + 2;
            goto LAB_03c4c04c;
          }
          lVar16 = lVar16 + 3;
        } while (lVar16 != 0x80001);
        lVar16 = 0;
LAB_03c4c04c:
        uVar4 = (uint)lVar16;
        if ((int)(local_180 - uVar2) <= (int)(uint)lVar16) {
          uVar4 = local_180 + ~uVar2;
        }
        if (0 < (int)uVar4) {
          (**(code **)(*ppuVar7 + 0x18))(ppuVar7);
          memcpy(puVar6 + uVar2,ppuVar7[1],(ulong)uVar4);
          puVar6[(int)(uVar4 + uVar2)] = 0;
        }
        FUN_03c2d910(*(undefined8 *)PTR_DAT_04bb2660,0,&local_190,*(undefined8 *)(param_1 + 0x100));
        if ((long *)plVar13[3] != (long *)0x0) {
          (**(code **)(*(long *)plVar13[3] + 0x10))();
        }
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      else {
        *(int *)(plVar13 + 5) = (int)plVar13[5] + -1;
      }
      plVar13 = (long *)(lVar17 - lVar10);
    } while (plVar13 != (long *)((param_1 + 0x1d0) - lVar10));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 400));
  return;
}

