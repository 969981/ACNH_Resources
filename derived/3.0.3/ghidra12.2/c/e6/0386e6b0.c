
undefined8 * FUN_0386e6b0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  char *pcVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  undefined *local_320;
  undefined1 *local_318;
  long *local_310;
  uint local_308;
  undefined *local_300;
  undefined1 *local_2f8;
  undefined *local_2f0;
  undefined1 *local_2e8;
  int local_2e0;
  undefined1 local_2dc [255];
  undefined1 local_1dd;
  undefined *local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  char local_1c4 [63];
  undefined1 local_185;
  undefined *local_180;
  char *local_178;
  undefined4 local_170;
  char local_16c [255];
  undefined1 local_6d;
  
  puVar10 = param_1;
  if (param_1 != (undefined8 *)0x0) {
    if (*(char *)param_2[1] == '\0') {
LAB_0386eddc:
      puVar10 = (undefined8 *)0x0;
    }
    else {
      local_6d = 0;
      local_170 = 0x100;
      local_178 = local_16c;
      local_16c[0] = '\0';
      puVar1 = PTR_DAT_04bb21f8 + 0x10;
      local_180 = puVar1;
      if (param_1[6] != 0) {
        (**(code **)(param_1[3] + 0x18))(param_1 + 3);
        FUN_038d1270(&local_180,&DAT_0409e973,param_1[4]);
      }
      puVar5 = PTR_DAT_04bb2020;
      local_185 = 0;
      local_1c4[0] = '\0';
      local_1d0 = local_1c4;
      local_2e0 = 0x100;
      local_1c8 = 0x40;
      local_2e8 = local_2dc;
      local_1dd = 0;
      local_1d8 = PTR_DAT_04bb2bc0 + 0x10;
      local_2dc[0] = 0;
      local_300 = PTR_DAT_04bb2020 + 0x10;
      local_308 = 0;
      local_2f8 = &DAT_04079e84;
      local_310 = param_2;
      local_2f0 = puVar1;
      (**(code **)(*param_2 + 0x18))(param_2);
      puVar7 = local_2e8;
      lVar11 = 0;
      do {
        if (*(char *)(param_2[1] + lVar11) == '\0') {
LAB_0386e80c:
          uVar18 = (int)lVar11 + 1;
          goto LAB_0386e810;
        }
        lVar2 = param_2[1] + lVar11;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0386e80c;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_0386e80c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      uVar18 = 1;
LAB_0386e810:
      if (*local_178 != '\0') {
        (**(code **)(local_2f0 + 0x18))(&local_2f0);
        lVar11 = 0;
        do {
          if (local_2e8[lVar11] == '\0') goto LAB_0386e870;
          if (local_2e8[lVar11 + 1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_0386e870;
          }
          if (local_2e8[lVar11 + 2] == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_0386e870;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_0386e870:
        uVar15 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
        (**(code **)(local_180 + 0x18))(&local_180);
        lVar11 = 0;
        do {
          if (local_178[lVar11] == '\0') goto LAB_0386e8cc;
          if (local_178[lVar11 + 1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_0386e8cc;
          }
          if (local_178[lVar11 + 2] == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_0386e8cc;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_0386e8cc:
        uVar3 = (uint)lVar11;
        if ((int)(local_2e0 - uVar15) <= (int)(uint)lVar11) {
          uVar3 = local_2e0 + ~uVar15;
        }
        if (0 < (int)uVar3) {
          (**(code **)(local_180 + 0x18))(&local_180);
          memcpy(puVar7 + uVar15,local_178,(ulong)uVar3);
          puVar7[(int)(uVar3 + uVar15)] = 0;
        }
      }
      puVar9 = param_1;
      if ((local_310 != param_2) || (local_308 != uVar18)) {
        puVar1 = PTR_DAT_04bb2000 + 0x10;
        do {
          FUN_0076e020(&local_310,&local_1d8);
          puVar7 = local_2e8;
          if (*local_1d0 == '\0') {
            plVar16 = local_310;
            uVar15 = local_308;
            if ((local_310 == param_2) && (local_308 == uVar18)) goto LAB_0386e9b4;
          }
          else {
LAB_0386e9b4:
            if ((local_310 == param_2) && (local_308 == uVar18)) {
              plVar16 = param_2;
              uVar15 = uVar18;
            }
            else {
              local_318 = &DAT_04079e84;
              local_320 = puVar5 + 0x10;
              (**(code **)(local_2f0 + 0x18))(&local_2f0);
              lVar11 = 0;
              do {
                if (local_2e8[lVar11] == '\0') goto LAB_0386ea3c;
                if (local_2e8[lVar11 + 1] == '\0') {
                  lVar11 = lVar11 + 1;
                  goto LAB_0386ea3c;
                }
                if (local_2e8[lVar11 + 2] == '\0') {
                  lVar11 = lVar11 + 2;
                  goto LAB_0386ea3c;
                }
                lVar11 = lVar11 + 3;
              } while (lVar11 != 0x80001);
              lVar11 = 0;
LAB_0386ea3c:
              uVar15 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
              (**(code **)(local_320 + 0x18))(&local_320);
              lVar11 = 0;
              do {
                if (local_318[lVar11] == '\0') goto LAB_0386ea9c;
                if (local_318[lVar11 + 1] == '\0') {
                  lVar11 = lVar11 + 1;
                  goto LAB_0386ea9c;
                }
                if (local_318[lVar11 + 2] == '\0') {
                  lVar11 = lVar11 + 2;
                  goto LAB_0386ea9c;
                }
                lVar11 = lVar11 + 3;
              } while (lVar11 != 0x80001);
              lVar11 = 0;
LAB_0386ea9c:
              uVar3 = (uint)lVar11;
              if ((int)(local_2e0 - uVar15) <= (int)(uint)lVar11) {
                uVar3 = local_2e0 + ~uVar15;
              }
              if (0 < (int)uVar3) {
                (**(code **)(local_320 + 0x18))(&local_320);
                memcpy(puVar7 + uVar15,local_318,(ulong)uVar3);
                puVar7[(int)(uVar3 + uVar15)] = 0;
              }
              puVar7 = local_2e8;
              (**(code **)(local_2f0 + 0x18))(&local_2f0);
              lVar11 = 0;
              do {
                if (local_2e8[lVar11] == '\0') goto LAB_0386eb3c;
                if (local_2e8[lVar11 + 1] == '\0') {
                  lVar11 = lVar11 + 1;
                  goto LAB_0386eb3c;
                }
                if (local_2e8[lVar11 + 2] == '\0') {
                  lVar11 = lVar11 + 2;
                  goto LAB_0386eb3c;
                }
                lVar11 = lVar11 + 3;
              } while (lVar11 != 0x80001);
              lVar11 = 0;
LAB_0386eb3c:
              uVar15 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
              (**(code **)(local_1d8 + 0x18))(&local_1d8);
              lVar11 = 0;
              do {
                if (local_1d0[lVar11] == '\0') goto LAB_0386eb9c;
                if (local_1d0[lVar11 + 1] == '\0') {
                  lVar11 = lVar11 + 1;
                  goto LAB_0386eb9c;
                }
                if (local_1d0[lVar11 + 2] == '\0') {
                  lVar11 = lVar11 + 2;
                  goto LAB_0386eb9c;
                }
                lVar11 = lVar11 + 3;
              } while (lVar11 != 0x80001);
              lVar11 = 0;
LAB_0386eb9c:
              uVar3 = (uint)lVar11;
              if ((int)(local_2e0 - uVar15) <= (int)(uint)lVar11) {
                uVar3 = local_2e0 + ~uVar15;
              }
              if (0 < (int)uVar3) {
                (**(code **)(local_1d8 + 0x18))(&local_1d8);
                memcpy(puVar7 + uVar15,local_1d0,(ulong)uVar3);
                puVar7[(int)(uVar3 + uVar15)] = 0;
              }
              if (((DAT_05643220 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(&DAT_05643220), iVar12 != 0)) {
                *(undefined **)PTR_DAT_04bc4d58 = puVar1;
                __cxa_guard_release(&DAT_05643220);
              }
              puVar6 = PTR_DAT_04bc4d58;
              puVar9 = (undefined8 *)FUN_03c5e080(puVar9 + 7,PTR_DAT_04bc4d58,&local_2f0);
              if (puVar9 == (undefined8 *)0x0) {
                return (undefined8 *)0x0;
              }
              if (((DAT_05643220 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(&DAT_05643220), iVar12 != 0)) {
                *(undefined **)puVar6 = PTR_DAT_04bb2000 + 0x10;
                __cxa_guard_release(&DAT_05643220);
              }
              uVar17 = (**(code **)*puVar9)(puVar9,puVar6);
              if ((uVar17 & 1) == 0) goto LAB_0386eddc;
              plVar16 = local_310;
              uVar15 = local_308;
            }
          }
          (**(code **)(*plVar16 + 0x18))(plVar16);
          lVar11 = 0;
          do {
            if (*(char *)(plVar16[1] + lVar11) == '\0') {
LAB_0386eca4:
              iVar12 = (int)lVar11;
              goto joined_r0x0386ecd8;
            }
            lVar2 = plVar16[1] + lVar11;
            if (*(char *)(lVar2 + 1) == '\0') {
              lVar11 = lVar11 + 1;
              goto LAB_0386eca4;
            }
            if (*(char *)(lVar2 + 2) == '\0') {
              iVar12 = (int)lVar11 + 2;
              goto joined_r0x0386ecd8;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          iVar12 = 0;
joined_r0x0386ecd8:
          if ((-1 < (int)uVar15) && ((int)uVar15 <= iVar12)) {
            uVar17 = (ulong)uVar15;
            pcVar14 = (char *)(local_310[1] + uVar17);
            if (*pcVar14 != '\0') {
              do {
                (**(code **)(local_300 + 0x18))(&local_300);
                uVar13 = 0;
                bVar8 = true;
                cVar4 = *pcVar14;
                do {
                  if (local_2f8[uVar13] == '\0') break;
                  if (local_2f8[uVar13] == cVar4) {
                    if (bVar8) goto LAB_0386ed74;
                    break;
                  }
                  if (local_2f8[uVar13 + 1] == '\0') break;
                  if (local_2f8[uVar13 + 1] == cVar4) goto LAB_0386ed74;
                  if (local_2f8[uVar13 + 2] == '\0') break;
                  if (local_2f8[uVar13 + 2] == cVar4) goto LAB_0386ed74;
                  bVar8 = uVar13 < 0x7fffe;
                  uVar13 = uVar13 + 3;
                } while (uVar13 != 0x80001);
                uVar17 = uVar17 + 1;
                pcVar14 = (char *)(local_310[1] + uVar17);
              } while (*pcVar14 != '\0');
LAB_0386ed74:
              uVar15 = (uint)uVar17;
            }
            local_308 = uVar15 + 1;
          }
        } while ((local_310 != param_2) || (local_308 != uVar18));
      }
      puVar10 = (undefined8 *)0x0;
      if (puVar9 != param_1) {
        puVar10 = puVar9;
      }
    }
  }
  return puVar10;
}

