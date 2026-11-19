
void FUN_03c49640(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 *__dest;
  int iVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined *local_2d8;
  char *local_2d0;
  int local_2c8;
  char local_2c4 [255];
  undefined1 local_1c5;
  undefined *local_1c0;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [255];
  undefined1 local_ad;
  char local_a8;
  undefined *local_a0;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar14 = PTR_DAT_04bb2818;
  local_78 = 0;
  uStack_70 = 0;
  local_90 = (long *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_a0 = PTR_DAT_04bb2818 + 0x10;
  local_98 = (long *)0x0;
  local_1c0 = (undefined *)((ulong)local_1c0 & 0xffffffffffffff00);
  plVar9 = *(long **)(DAT_05aecb40 + 0x100);
  if ((char)plVar9[0xf] == '\0') {
    return;
  }
  (**(code **)(*plVar9 + 200))(plVar9,&local_1c0,&PTR_PTR_04c4c198);
  puVar3 = PTR_DAT_04bb21f8;
  if ((char)local_1c0 == '\0') {
    return;
  }
  local_1b0 = 0x100;
  local_1b8 = local_1ac;
  local_ad = 0;
  local_1c0 = PTR_DAT_04bb21f8 + 0x10;
  local_a8 = '\0';
  local_1ac[0] = 0;
  if (((char)plVar9[0xf] != '\0') &&
     (plVar4 = (long *)(**(code **)(*plVar9 + 0xd0))(plVar9,&local_a0,&PTR_PTR_04c4c198),
     local_98 = plVar4, plVar4 != (long *)0x0)) {
    iVar11 = 0;
    local_90 = plVar9;
LAB_03c49750:
    do {
      if (((char)plVar4[0xf] == '\0') ||
         (uVar5 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_a0), (uVar5 & 1) == 0))
      goto LAB_03c498f8;
      local_2d8 = (undefined *)((ulong)local_2d8 & 0xffffffff00000000);
      uVar5 = (**(code **)(*plVar4 + 0xe0))(plVar4,&local_2d8,&local_a0,&local_1c0,1);
      if (((uVar5 & 1) == 0) || ((int)local_2d8 != 1)) goto LAB_03c498f8;
      if (local_a8 == '\0') {
        (**(code **)(local_1c0 + 0x18))(&local_1c0);
        lVar13 = 0;
        do {
          if (local_1b8[lVar13] == '\0') goto LAB_03c49800;
          if (local_1b8[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_03c49800;
          }
          if (local_1b8[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_03c49800;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_03c49800:
        (**(code **)(PTR_PTR_04c4c1a8 + 0x18))(&PTR_PTR_04c4c1a8);
        lVar7 = 0;
        do {
          iVar12 = (int)lVar13;
          if (PTR_s__fxparam_04c4c1b0[lVar7] == '\0') {
LAB_03c49854:
            uVar2 = iVar12 - (int)lVar7;
            if ((int)uVar2 < 0) goto LAB_03c49750;
LAB_03c4986c:
            uVar5 = (ulong)uVar2;
            if ((int)lVar7 < 1) goto LAB_03c498e0;
            goto LAB_03c49878;
          }
          if (PTR_s__fxparam_04c4c1b0[lVar7 + 1] == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_03c49854;
          }
          if (PTR_s__fxparam_04c4c1b0[lVar7 + 2] == '\0') {
            lVar7 = lVar7 + 2;
            uVar2 = iVar12 - (int)lVar7;
            if (-1 < (int)uVar2) goto LAB_03c4986c;
            goto LAB_03c49750;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        if (-1 < iVar12) {
LAB_03c498e0:
          (**(code **)(PTR_PTR_04c4c1a8 + 0x18))(&PTR_PTR_04c4c1a8);
LAB_03c498f0:
          iVar11 = iVar11 + 1;
        }
      }
    } while( true );
  }
  goto LAB_03c49f04;
  while( true ) {
    pcVar8 = PTR_s__fxparam_04c4c1b0;
    lVar13 = lVar7;
    while( true ) {
      lVar13 = lVar13 + -1;
      if (puVar10[uVar5] != *pcVar8) break;
      if ((puVar10[uVar5] == '\0') || (puVar10 = puVar10 + 1, pcVar8 = pcVar8 + 1, lVar13 == 0))
      goto LAB_03c49b80;
    }
    uVar5 = uVar5 - 1;
    if (iVar11 < 1) break;
LAB_03c49b00:
    puVar10 = local_1b8;
    puVar14 = local_1b8 + uVar5;
    (**(code **)(PTR_PTR_04c4c1a8 + 0x18))(&PTR_PTR_04c4c1a8);
    iVar11 = (int)uVar5;
    if (puVar14 == PTR_s__fxparam_04c4c1b0) {
LAB_03c49b80:
      if (-1 < iVar11) goto LAB_03c49b88;
      break;
    }
  }
LAB_03c499e0:
  if ((char)plVar4[0xf] == '\0') goto LAB_03c49ec4;
  goto LAB_03c499e8;
  while( true ) {
    pcVar8 = PTR_s__fxparam_04c4c1b0;
    lVar13 = lVar7;
    while( true ) {
      lVar13 = lVar13 + -1;
      if (puVar10[uVar5] != *pcVar8) break;
      if ((puVar10[uVar5] == '\0') || (puVar10 = puVar10 + 1, pcVar8 = pcVar8 + 1, lVar13 == 0))
      goto LAB_03c49748;
    }
    uVar5 = uVar5 - 1;
    if (iVar12 < 1) break;
LAB_03c49878:
    puVar10 = local_1b8;
    puVar14 = local_1b8 + uVar5;
    (**(code **)(PTR_PTR_04c4c1a8 + 0x18))(&PTR_PTR_04c4c1a8);
    iVar12 = (int)uVar5;
    if (puVar14 == PTR_s__fxparam_04c4c1b0) {
LAB_03c49748:
      if (-1 < iVar12) goto LAB_03c498f0;
      break;
    }
  }
  goto LAB_03c49750;
LAB_03c498f8:
  if ((((char)plVar9[0xf] != '\0') &&
      (uVar5 = (**(code **)(*plVar9 + 0x48))(plVar9,&local_a0), (uVar5 & 1) != 0)) &&
     (uVar5 = (**(code **)(*plVar9 + 0xd8))(plVar9,&local_a0), (uVar5 & 1) != 0)) {
    local_98 = (long *)0x0;
    local_90 = (long *)0x0;
  }
  puVar14 = &DAT_048fa050;
  if (((iVar11 != 0) && ((char)plVar9[0xf] != '\0')) &&
     (plVar4 = (long *)(**(code **)(*plVar9 + 0xd0))(plVar9,&local_a0,&PTR_PTR_04c4c198),
     local_98 = plVar4, plVar4 != (long *)0x0)) {
    local_90 = plVar9;
    if ((char)plVar4[0xf] != '\0') {
LAB_03c499e8:
      uVar5 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_a0);
      if ((uVar5 & 1) != 0) {
        local_2d8 = (undefined *)((ulong)local_2d8 & 0xffffffff00000000);
        uVar5 = (**(code **)(*plVar4 + 0xe0))(plVar4,&local_2d8,&local_a0,&local_1c0,1);
        if (((uVar5 & 1) != 0) && ((int)local_2d8 == 1)) {
          if (local_a8 == '\0') {
            (**(code **)(local_1c0 + 0x18))(&local_1c0);
            lVar13 = 0;
            do {
              if (local_1b8[lVar13] == '\0') goto LAB_03c49a90;
              if (local_1b8[lVar13 + 1] == '\0') {
                lVar13 = lVar13 + 1;
                goto LAB_03c49a90;
              }
              if (local_1b8[lVar13 + 2] == '\0') {
                lVar13 = lVar13 + 2;
                goto LAB_03c49a90;
              }
              lVar13 = lVar13 + 3;
            } while (lVar13 != 0x80001);
            lVar13 = 0;
LAB_03c49a90:
            (**(code **)(PTR_PTR_04c4c1a8 + 0x18))(&PTR_PTR_04c4c1a8);
            lVar7 = 0;
            do {
              if (PTR_s__fxparam_04c4c1b0[lVar7] == '\0') {
LAB_03c49aec:
                uVar2 = (int)lVar13 - (int)lVar7;
                uVar5 = (ulong)uVar2;
                if ((int)uVar2 < 0) goto LAB_03c499e0;
                if ((int)lVar7 < 1) goto LAB_03c49b6c;
                goto LAB_03c49b00;
              }
              if (PTR_s__fxparam_04c4c1b0[lVar7 + 1] == '\0') {
                lVar7 = lVar7 + 1;
                goto LAB_03c49aec;
              }
              if (PTR_s__fxparam_04c4c1b0[lVar7 + 2] == '\0') {
                lVar7 = lVar7 + 2;
                goto LAB_03c49aec;
              }
              lVar7 = lVar7 + 3;
            } while (lVar7 != 0x80001);
            if (-1 < (int)lVar13) {
LAB_03c49b6c:
              (**(code **)(PTR_PTR_04c4c1a8 + 0x18))(&PTR_PTR_04c4c1a8);
LAB_03c49b88:
              lVar13 = 0;
              local_2c8 = 0x100;
              local_2c4[0] = '\0';
              local_1c5 = 0;
              do {
                if (local_2c4[lVar13] == '\0') goto LAB_03c49bec;
                if (local_2c4[lVar13 + 1] == '\0') {
                  lVar13 = lVar13 + 1;
                  goto LAB_03c49bec;
                }
                if (local_2c4[lVar13 + 2] == '\0') {
                  lVar13 = lVar13 + 2;
                  goto LAB_03c49bec;
                }
                lVar13 = lVar13 + 3;
              } while (lVar13 != 0x80001);
              lVar13 = 0;
LAB_03c49bec:
              uVar2 = (uint)lVar13 & ((int)(uint)lVar13 >> 0x1f ^ 0xffffffffU);
              local_2d8 = puVar3 + 0x10;
              local_2d0 = local_2c4;
              (**(code **)(PTR_PTR_04c4c198 + 0x18))(&PTR_PTR_04c4c198);
              lVar13 = 0;
              do {
                if (PTR_s_Sound_FxParam__04c4c1a0[lVar13] == '\0') goto LAB_03c49c4c;
                if (PTR_s_Sound_FxParam__04c4c1a0[lVar13 + 1] == '\0') {
                  lVar13 = lVar13 + 1;
                  goto LAB_03c49c4c;
                }
                if (PTR_s_Sound_FxParam__04c4c1a0[lVar13 + 2] == '\0') {
                  lVar13 = lVar13 + 2;
                  goto LAB_03c49c4c;
                }
                lVar13 = lVar13 + 3;
              } while (lVar13 != 0x80001);
              lVar13 = 0;
LAB_03c49c4c:
              uVar1 = (uint)lVar13;
              if ((int)(local_2c8 - uVar2) <= (int)(uint)lVar13) {
                uVar1 = local_2c8 + ~uVar2;
              }
              if (0 < (int)uVar1) {
                (**(code **)(PTR_PTR_04c4c198 + 0x18))(&PTR_PTR_04c4c198);
                memcpy(local_2c4 + uVar2,PTR_s_Sound_FxParam__04c4c1a0,(ulong)uVar1);
                local_2c4[(int)(uVar1 + uVar2)] = '\0';
              }
              pcVar8 = local_2d0;
              (**(code **)(local_2d8 + 0x18))(&local_2d8);
              lVar13 = 0;
              do {
                if (local_2d0[lVar13] == '\0') goto LAB_03c49cf0;
                if (local_2d0[lVar13 + 1] == '\0') {
                  lVar13 = lVar13 + 1;
                  goto LAB_03c49cf0;
                }
                if (local_2d0[lVar13 + 2] == '\0') {
                  lVar13 = lVar13 + 2;
                  goto LAB_03c49cf0;
                }
                lVar13 = lVar13 + 3;
              } while (lVar13 != 0x80001);
              lVar13 = 0;
LAB_03c49cf0:
              uVar2 = (uint)lVar13 & ((int)(uint)lVar13 >> 0x1f ^ 0xffffffffU);
              (**(code **)(local_1c0 + 0x18))(&local_1c0);
              lVar13 = 0;
              do {
                if (local_1b8[lVar13] == '\0') goto LAB_03c49d4c;
                if (local_1b8[lVar13 + 1] == '\0') {
                  lVar13 = lVar13 + 1;
                  goto LAB_03c49d4c;
                }
                if (local_1b8[lVar13 + 2] == '\0') {
                  lVar13 = lVar13 + 2;
                  goto LAB_03c49d4c;
                }
                lVar13 = lVar13 + 3;
              } while (lVar13 != 0x80001);
              lVar13 = 0;
LAB_03c49d4c:
              uVar1 = (uint)lVar13;
              if ((int)(local_2c8 - uVar2) <= (int)(uint)lVar13) {
                uVar1 = local_2c8 + ~uVar2;
              }
              if (0 < (int)uVar1) {
                (**(code **)(local_1c0 + 0x18))(&local_1c0);
                memcpy(pcVar8 + uVar2,local_1b8,(ulong)uVar1);
                pcVar8[(int)(uVar1 + uVar2)] = '\0';
              }
              uVar6 = FUN_03eba090(&local_2d8,param_2,0x1000,0,1,0);
              lVar13 = DAT_05aed8a8;
              if (*(char *)(DAT_05aed8a8 + 0x208) != '\0') {
                if (*(int *)(DAT_05aed8a8 + 0x1e8) < *(int *)(DAT_05aed8a8 + 0x1ec)) {
                  puVar15 = *(undefined8 **)(DAT_05aed8a8 + 0x1f8);
                  if (puVar15 != (undefined8 *)0x0) {
                    *(undefined8 *)(DAT_05aed8a8 + 0x1f8) = *puVar15;
                  }
                  puVar15[1] = 0;
                  puVar15[2] = 0;
                  puVar15[2] = (long)puVar15 + 0x1c;
                  puVar15[3] = 0;
                  *(undefined4 *)(puVar15 + 3) = 0x80;
                  puVar15[0x12] = 0;
                  puVar15[0x13] = 0;
                  puVar15[0x10] = 0;
                  puVar15[0x11] = 0;
                  puVar15[0xe] = 0;
                  puVar15[0xf] = 0;
                  puVar15[0xc] = 0;
                  puVar15[0xd] = 0;
                  puVar15[10] = 0;
                  puVar15[0xb] = 0;
                  puVar15[8] = 0;
                  puVar15[9] = 0;
                  puVar15[6] = 0;
                  puVar15[7] = 0;
                  puVar15[4] = 0;
                  puVar15[5] = 0;
                  *puVar15 = 0;
                  puVar15[1] = &DAT_048fc708;
                  if (*(int *)(lVar13 + 0x1e8) < *(int *)(lVar13 + 0x1ec)) {
                    *(undefined8 **)(*(long *)(lVar13 + 0x1f0) + (long)*(int *)(lVar13 + 0x1e8) * 8)
                         = puVar15;
                    *(int *)(lVar13 + 0x1e8) = *(int *)(lVar13 + 0x1e8) + 1;
                  }
                }
                else {
                  puVar15 = (undefined8 *)0x0;
                }
                *puVar15 = uVar6;
                __dest = (undefined1 *)puVar15[2];
                (**(code **)(local_1c0 + 0x18))(&local_1c0);
                puVar10 = local_1b8;
                if (__dest != local_1b8) {
                  (**(code **)(local_1c0 + 0x18))(&local_1c0);
                  lVar13 = 0;
                  do {
                    if (local_1b8[lVar13] == '\0') goto LAB_03c499ac;
                    if (local_1b8[lVar13 + 1] == '\0') {
                      lVar13 = lVar13 + 1;
                      goto LAB_03c499ac;
                    }
                    if (local_1b8[lVar13 + 2] == '\0') {
                      lVar13 = lVar13 + 2;
                      goto LAB_03c499ac;
                    }
                    lVar13 = lVar13 + 3;
                  } while (lVar13 != 0x80001);
                  lVar13 = 0;
LAB_03c499ac:
                  iVar11 = (int)lVar13;
                  if (*(int *)(puVar15 + 3) <= (int)lVar13) {
                    iVar11 = *(int *)(puVar15 + 3) + -1;
                  }
                  memcpy(__dest,puVar10,(long)iVar11);
                  __dest[iVar11] = 0;
                }
              }
            }
          }
          goto LAB_03c499e0;
        }
      }
    }
LAB_03c49ec4:
    puVar14 = &DAT_048fa050;
    if ((((char)plVar9[0xf] != '\0') &&
        (uVar5 = (**(code **)(*plVar9 + 0x48))(plVar9,&local_a0), (uVar5 & 1) != 0)) &&
       (uVar5 = (**(code **)(*plVar9 + 0xd8))(plVar9,&local_a0), (uVar5 & 1) != 0)) {
      local_98 = (long *)0x0;
      local_90 = (long *)0x0;
    }
  }
LAB_03c49f04:
  plVar9 = local_90;
  local_a0 = puVar14 + 0x10;
  if (((local_90 != (long *)0x0) && ((char)local_90[0xf] != '\0')) &&
     (uVar5 = (**(code **)(*local_90 + 0x48))(local_90,&local_a0), (uVar5 & 1) != 0)) {
    (**(code **)(*plVar9 + 0xd8))(plVar9,&local_a0);
  }
  return;
}

