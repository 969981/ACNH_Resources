
void FUN_01fc81d0(long param_1,uint *param_2)

{
  undefined *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined1 local_180 [8];
  undefined *local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [63];
  undefined1 local_125;
  undefined4 local_120;
  undefined2 local_11c;
  undefined1 local_11a;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined *local_110;
  char *pcStack_108;
  int local_100;
  char local_fc [63];
  undefined1 local_bd;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined *local_a8;
  char *local_a0;
  undefined4 local_98;
  char local_94;
  undefined6 uStack_93;
  undefined4 uStack_8d;
  undefined1 local_89;
  undefined1 local_75;
  undefined4 local_6c [3];
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return;
  }
  lVar16 = *(long *)(param_1 + 8);
  uVar15 = *param_2;
  if ((((uVar15 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar15)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar1;
    iVar7 = (**(code **)(*plVar9 + 0x60))();
    if (iVar7 < 0x11) {
      uVar15 = 1;
      goto joined_r0x01fc829c;
    }
    if (*(uint *)(lVar12 + 0x5e8) < 5) {
      uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01fc829c;
    }
  }
  uVar15 = 0;
joined_r0x01fc829c:
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar10 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb37d0);
    uVar4 = 0;
    if ((int)lVar12 == 1) {
      uVar4 = uVar15;
    }
    if (((uVar10 & 1) != 0) && (uVar4 != 0)) {
      lVar17 = *(long *)(lVar16 + 8);
      local_6c[0] = *(undefined4 *)(lVar17 + 0x230);
      (**(code **)(plVar13[0x7c] + 0x18))(plVar13 + 0x7c);
      (**(code **)(plVar13[0x7c] + 0x18))(plVar13 + 0x7c);
      lVar12 = plVar13[0x7d];
      (**(code **)(*(long *)(lVar17 + 0x3e0) + 0x18))(lVar17 + 0x3e0);
      puVar1 = PTR_DAT_04bb6710;
      if (lVar12 != *(long *)(lVar17 + 1000)) {
        uVar10 = 0;
        bVar6 = true;
        do {
          if (*(char *)(plVar13[0x7d] + uVar10) != *(char *)(*(long *)(lVar17 + 1000) + uVar10))
          break;
          if (*(char *)(plVar13[0x7d] + uVar10) == '\0') {
            if (bVar6) {
              return;
            }
            break;
          }
          bVar6 = uVar10 < 0x80000;
          uVar10 = uVar10 + 1;
        } while (uVar10 != 0x80001);
        plVar9 = (long *)plVar13[0x77];
        if (((*PTR_DAT_04bb6710 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar7 != 0)) {
          *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb6710);
        }
        puVar5 = PTR_DAT_04bb6708;
        if ((((plVar9 != (long *)0x0) &&
             (uVar10 = (**(code **)*plVar9)(plVar9,PTR_DAT_04bb6708), (uVar10 & 1) != 0)) &&
            (*(int *)((long)plVar9 + 0x1204c) < 0)) &&
           (((*PTR_DAT_04bb59e0 != '\0' && (*(int *)(plVar9[1] + 0x750) != 3)) &&
            ((uVar10 = FUN_0212ef10(plVar9 + 0x154a), (uVar10 & 1) == 0 &&
             (uVar10 = (**(code **)(*plVar9 + 0x560))(plVar9,0), (uVar10 & 1) != 0)))))) {
          lVar12 = *(long *)(lVar16 + 8);
          uVar3 = *(uint *)(lVar12 + 0x294);
          uVar4 = *(uint *)(lVar12 + 0x28c);
          uVar8 = *(undefined4 *)(lVar12 + 0x290);
          uVar15 = *(uint *)(lVar12 + 0x288) ^ *(uint *)(lVar12 + 0x288) << 0xb;
          *(uint *)(lVar12 + 0x288) = uVar4;
          *(undefined4 *)(lVar12 + 0x28c) = uVar8;
          *(uint *)(lVar12 + 0x290) = uVar3;
          uVar15 = uVar15 >> 8 ^ uVar3 >> 0x13 ^ uVar15 ^ uVar3;
          *(uint *)(lVar12 + 0x294) = uVar15;
          uVar11 = (uint)((ulong)uVar15 * 100 >> 0x20);
          if (9 < uVar11) {
            local_75 = 0;
            local_94 = '\0';
            local_98 = 0x20;
            local_a8 = PTR_DAT_04bb2028 + 0x10;
            local_a0 = &local_94;
            if (uVar11 < 0x37) {
              local_89 = 0;
              local_94 = s_NpcGreeting_040f5055[0];
              uStack_93 = s_NpcGreeting_040f5055._1_6_;
              uStack_8d = CONCAT31(0x676e69,s_NpcGreeting_040f5055[7]);
              uVar8 = FUN_03738270(*(undefined8 *)PTR_DAT_04bb4e28);
            }
            else {
              uVar4 = uVar4 ^ uVar4 << 0xb;
              *(undefined4 *)(lVar12 + 0x288) = uVar8;
              *(uint *)(lVar12 + 0x28c) = uVar3;
              lVar16 = 0;
              *(uint *)(lVar12 + 0x290) = uVar15;
              uVar15 = uVar4 >> 8 ^ uVar15 >> 0x13 ^ uVar4 ^ uVar15;
              *(uint *)(lVar12 + 0x294) = uVar15;
              pcVar2 = "";
              if ((uVar15 & 2) != 0) {
                pcVar2 = "MaReSmiling";
              }
              do {
                if (pcVar2[lVar16] == '\0') {
LAB_01fc8544:
                  iVar7 = (int)lVar16;
                  if (0x1f < iVar7) {
                    iVar7 = 0x1f;
                  }
                  goto LAB_01fc8550;
                }
                if (pcVar2[lVar16 + 1] == '\0') {
                  lVar16 = lVar16 + 1;
                  goto LAB_01fc8544;
                }
                if (pcVar2[lVar16 + 2] == '\0') {
                  lVar16 = lVar16 + 2;
                  goto LAB_01fc8544;
                }
                lVar16 = lVar16 + 3;
              } while (lVar16 != 0x80001);
              iVar7 = 0;
LAB_01fc8550:
              memcpy(&local_94,pcVar2,(long)iVar7);
              (&local_94)[iVar7] = '\0';
              uVar8 = local_6c[0];
            }
            puVar14 = (undefined8 *)plVar13[0x77];
            if (((*puVar1 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar7 != 0))
            {
              *(undefined **)puVar5 = PTR_DAT_04bb6718 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb6710);
            }
            if ((puVar14 != (undefined8 *)0x0) &&
               (uVar10 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bb6708), (uVar10 & 1) != 0)) {
              local_bd = 0;
              *(undefined4 *)((long)puVar14 + 0x1204c) = 0x708;
              puVar5 = PTR_DAT_04bb3238;
              local_100 = 0x40;
              local_fc[0] = '\0';
              local_b8 = 0;
              local_b4 = 1;
              local_b2 = 0;
              puVar1 = PTR_DAT_04bb2bc0 + 0x10;
              local_ac = *(undefined4 *)PTR_DAT_04bb3238;
              local_b0 = 0xffffffff;
              local_110 = puVar1;
              pcStack_108 = local_fc;
              (**(code **)(local_a8 + 0x18))(&local_a8);
              pcVar2 = local_a0;
              if (local_fc != local_a0) {
                (**(code **)(local_a8 + 0x18))(&local_a8);
                lVar12 = 0;
                do {
                  if (local_a0[lVar12] == '\0') goto LAB_01fc8660;
                  if (local_a0[lVar12 + 1] == '\0') {
                    lVar12 = lVar12 + 1;
                    goto LAB_01fc8660;
                  }
                  if (local_a0[lVar12 + 2] == '\0') {
                    lVar12 = lVar12 + 2;
                    goto LAB_01fc8660;
                  }
                  lVar12 = lVar12 + 3;
                } while (lVar12 != 0x80001);
                lVar12 = 0;
LAB_01fc8660:
                iVar7 = (int)lVar12;
                if (local_100 <= (int)lVar12) {
                  iVar7 = local_100 + -1;
                }
                memcpy(local_fc,pcVar2,(long)iVar7);
                local_fc[iVar7] = '\0';
              }
              local_b4 = CONCAT11(1,(undefined1)local_b4);
              puStack_170 = local_164;
              uStack_114 = *(undefined4 *)puVar5;
              local_168 = 0x40;
              local_125 = 0;
              local_164[0] = 0;
              local_120 = 0;
              local_11c = 1;
              local_11a = 0;
              local_180[0] = 0;
              local_118 = 0xffffffff;
              local_178 = puVar1;
              local_ac = uVar8;
              FUN_01fa36d0(puVar14,local_6c,&local_110,local_180);
            }
          }
        }
      }
    }
  }
  return;
}

