
void FUN_02059180(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  int iVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  undefined1 auVar9 [8];
  long **pplVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ushort *puVar14;
  long lVar15;
  undefined **ppuVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  ulong uVar23;
  undefined1 *__dest;
  void *pvVar24;
  long *plVar25;
  uint uVar26;
  undefined1 *__src;
  undefined8 *puVar27;
  undefined8 local_9258;
  undefined2 local_924c;
  undefined1 local_924a;
  undefined8 local_9248;
  long *local_9240;
  undefined1 local_9238 [8];
  long **local_9230;
  long *local_9228 [5];
  long alStack_9200 [2090];
  undefined8 local_50b0;
  undefined8 local_5088 [420];
  undefined1 *local_4368 [2];
  undefined4 local_4358;
  undefined1 local_4354 [7];
  undefined1 local_434d;
  undefined *local_4348;
  undefined1 *local_4340;
  undefined4 local_4338;
  undefined1 local_4334 [7];
  undefined1 local_432d;
  undefined *local_4328;
  undefined1 *local_4320;
  undefined4 local_4318;
  undefined1 local_4314 [7];
  undefined1 local_430d;
  undefined *local_4308;
  undefined1 *local_4300;
  undefined4 local_42f8;
  undefined1 local_42f4 [7];
  undefined1 local_42ed;
  undefined *local_42e8;
  undefined1 *local_42e0;
  undefined4 local_42d8;
  undefined1 local_42d4 [7];
  undefined1 local_42cd;
  undefined *local_42c8;
  undefined1 *local_42c0;
  undefined4 local_42b8;
  undefined1 local_42b4 [7];
  undefined1 local_42ad;
  undefined *local_42a8;
  undefined1 *local_42a0;
  undefined4 local_4298;
  undefined1 local_4294 [7];
  undefined1 local_428d;
  undefined *local_4288;
  undefined1 *local_4280;
  undefined4 local_4278;
  undefined1 local_4274 [7];
  undefined1 local_426d;
  undefined *local_4268;
  undefined1 *local_4260;
  undefined4 local_4258;
  undefined1 local_4254 [7];
  undefined1 local_424d;
  undefined *local_4248;
  undefined1 *local_4240;
  undefined4 local_4238;
  undefined1 local_4234 [7];
  undefined1 local_422d;
  undefined8 local_4228;
  undefined8 *local_4220;
  long **local_4218;
  long **local_4210;
  long *local_4208 [4];
  long alStack_41e8 [1672];
  undefined8 local_da8;
  undefined8 local_d88 [421];
  
  if (0 < *param_2) {
    lVar19 = 0;
    do {
      puVar21 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar19 * 8);
      (**(code **)*puVar21)(puVar21);
      lVar19 = lVar19 + 1;
      *puVar21 = *(undefined8 *)(param_2 + 4);
      *(undefined8 **)(param_2 + 4) = puVar21;
    } while (lVar19 < *param_2);
  }
  *param_2 = 0;
  local_4220 = (undefined8 *)0x0;
  local_4228 = 0;
  lVar19 = 0x1a2;
  local_4218 = local_4208;
  local_4208[0] = alStack_41e8;
  plVar17 = alStack_41e8;
  do {
    lVar19 = lVar19 + -2;
    *plVar17 = (long)(plVar17 + 4);
    plVar17[4] = (long)(plVar17 + 8);
    plVar17 = plVar17 + 8;
  } while (lVar19 != 0);
  local_4210 = local_4208;
  local_da8 = 0;
  if (local_d88 != (undefined8 *)0x0) {
    local_4220 = local_d88;
    local_4228 = 0x1a400000000;
  }
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  plVar17 = (long *)(PTR_DAT_04bb6a30 + 0x10);
  uVar11 = 0;
  do {
    local_4368[0] = (undefined1 *)CONCAT44(local_4368[0]._4_4_,uVar11);
    uVar12 = 0;
    lVar19 = param_1 + (ulong)uVar11 * 4;
    if (0x22 < uVar11) {
      lVar19 = param_1;
    }
    do {
      if ((*(uint *)(lVar19 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
        local_9258 = (long *)CONCAT53(local_9258._3_5_,0x80023);
        FUN_020fd218(&local_9258,(ulong)local_4368[0] & 0xffffffff,uVar12);
        uVar23 = (ulong)local_9258 & 0xff;
        if (((uVar23 < 0x23) && (local_9258._1_1_ <= (byte)(&DAT_053e6e93)[uVar23])) &&
           (uVar26 = (uint)local_9258._1_1_,
           ((uint)(&DAT_053e6eb8)[uVar23] >> (ulong)(uVar26 & 0x1f) & 1) != 0)) {
          local_9230._0_4_ = (uint)(uint3)local_9230;
          local_9238._0_5_ = 8;
          local_9248 = puVar1;
          local_9240 = (long *)(local_9238 + 4);
          FUN_038d1270(&local_9248,"-----");
          FUN_038d1270(&local_9248,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar23 * 8 + 0xb0),
                       uVar26);
          pplVar10 = local_4218;
          if ((int)local_4228 < local_4228._4_4_) {
            if (local_4218 != (long **)0x0) {
              local_4218 = (long **)*local_4218;
            }
            plVar22 = (long *)((long)pplVar10 + 0x14);
            *(undefined4 *)(pplVar10 + 2) = 8;
            *(undefined1 *)((long)pplVar10 + 0x1b) = 0;
            *pplVar10 = plVar17;
            pplVar10[1] = plVar22;
            (**(code **)(local_9248 + 0x18))(&local_9248);
            plVar3 = local_9240;
            if (plVar22 != local_9240) {
              (**(code **)(local_9248 + 0x18))(&local_9248);
              lVar15 = 0;
              do {
                if (*(char *)((long)local_9240 + lVar15) == '\0') goto LAB_0205943c;
                if (*(char *)((long)local_9240 + lVar15 + 1) == '\0') {
                  lVar15 = lVar15 + 1;
                  goto LAB_0205943c;
                }
                if (*(char *)((long)local_9240 + lVar15 + 2) == '\0') {
                  lVar15 = lVar15 + 2;
                  goto LAB_0205943c;
                }
                lVar15 = lVar15 + 3;
              } while (lVar15 != 0x80001);
              lVar15 = 0;
LAB_0205943c:
              iVar13 = (int)lVar15;
              if (*(int *)(pplVar10 + 2) <= (int)lVar15) {
                iVar13 = *(int *)(pplVar10 + 2) + -1;
              }
              memcpy(plVar22,plVar3,(long)iVar13);
              *(undefined1 *)((long)plVar22 + (long)iVar13) = 0;
            }
            *pplVar10 = (long *)(PTR_DAT_04bb3768 + 0x10);
            if ((int)local_4228 < local_4228._4_4_) {
              local_4220[(int)local_4228] = pplVar10;
              local_4228 = CONCAT44(local_4228._4_4_,(int)local_4228 + 1);
            }
          }
        }
      }
      uVar26 = 0x23;
      uVar12 = uVar12 + 1;
    } while (uVar12 != 0x20);
    if ((int)uVar11 < 0x23) {
      uVar26 = uVar11 + 1;
    }
    uVar11 = uVar26;
  } while (uVar26 != 0x23);
  if (DAT_05574040 != 0) {
    puVar21 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar15 = (**(code **)(*(long *)*puVar21 + 0x38))();
      lVar19 = 0;
      if (lVar15 != 0) {
        lVar19 = lVar15 + 0x70;
      }
      goto LAB_02059510;
    }
    if (puVar21 != (undefined8 *)0x0) {
      lVar19 = 0;
      if ((long *)puVar21[0x26] != (long *)0x0) {
        lVar19 = (**(code **)(*(long *)puVar21[0x26] + 0x38))();
      }
      goto LAB_02059510;
    }
  }
  lVar19 = 0;
LAB_02059510:
  lVar15 = 0;
  if (lVar19 != 0) {
    lVar15 = lVar19 + 0xa8;
  }
  if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
     (puVar21 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar21 == (undefined8 *)0x0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = (**(code **)*puVar21)();
  }
  local_434d = 0;
  local_4354[0] = 0;
  local_4368[1] = local_4354;
  local_4358 = 8;
  local_4340 = local_4334;
  local_4368[0] = PTR_DAT_04bb3768 + 0x10;
  local_4320 = local_4314;
  local_4338 = 8;
  local_4300 = local_42f4;
  local_4318 = 8;
  local_42e0 = local_42d4;
  local_42f8 = 8;
  local_42c0 = local_42b4;
  local_42d8 = 8;
  local_42a0 = local_4294;
  local_42b8 = 8;
  local_4298 = 8;
  local_4278 = 8;
  local_4234[0] = 0;
  local_4258 = 8;
  local_4238 = 8;
  local_4348 = local_4368[0];
  local_4328 = local_4368[0];
  local_4308 = local_4368[0];
  local_42e8 = local_4368[0];
  local_42c8 = local_4368[0];
  local_42a8 = local_4368[0];
  local_4288 = local_4368[0];
  local_4268 = local_4368[0];
  local_4254[0] = 0;
  local_4240 = local_4234;
  local_9238 = (undefined1  [8])local_9228;
  local_4248 = local_4368[0];
  lVar19 = 0x1a2;
  local_432d = 0;
  local_4334[0] = 0;
  local_430d = 0;
  local_4314[0] = 0;
  local_42ed = 0;
  local_42f4[0] = 0;
  local_42cd = 0;
  local_42d4[0] = 0;
  local_42ad = 0;
  local_42b4[0] = 0;
  local_428d = 0;
  local_4294[0] = 0;
  local_426d = 0;
  local_4274[0] = 0;
  local_4280 = local_4274;
  local_424d = 0;
  local_4260 = local_4254;
  local_422d = 0;
  local_9248 = (undefined *)0x0;
  local_9240 = (undefined8 *)0x0;
  local_9228[0] = alStack_9200;
  plVar17 = alStack_9200;
  do {
    lVar19 = lVar19 + -2;
    *plVar17 = (long)(plVar17 + 5);
    plVar17[5] = (long)(plVar17 + 10);
    plVar17 = plVar17 + 10;
  } while (lVar19 != 0);
  local_9230 = (long **)local_9238;
  local_50b0 = 0;
  if (local_5088 != (undefined8 *)0x0) {
    local_9248 = (undefined *)0x1a400000000;
    local_9240 = local_5088;
  }
  if ((int)local_4228 == 0) {
LAB_02059b44:
    uVar12 = 0;
    puVar1 = PTR_DAT_04bb6a30 + 0x10;
    do {
      lVar19 = (long)((ulong)uVar12 << 0x20) >> 0x1b;
      plVar17 = (long *)((long)local_4368 + lVar19);
      if ((**(char **)((long)local_4368 + lVar19 + 8) != '\0') && (*param_2 < param_2[1])) {
        plVar22 = *(long **)(param_2 + 4);
        if (plVar22 != (long *)0x0) {
          *(long *)(param_2 + 4) = *plVar22;
        }
        pvVar4 = (void *)((long)plVar22 + 0x14);
        *(undefined4 *)(plVar22 + 2) = 8;
        *(undefined1 *)((long)plVar22 + 0x1b) = 0;
        *plVar22 = (long)puVar1;
        plVar22[1] = (long)pvVar4;
        (**(code **)(*plVar17 + 0x18))(plVar17);
        pvVar24 = *(void **)((long)local_4368 + lVar19 + 8);
        if (pvVar4 != pvVar24) {
          (**(code **)(*plVar17 + 0x18))(plVar17);
          lVar18 = *(long *)((long)local_4368 + lVar19 + 8);
          lVar19 = 0;
          do {
            if (*(char *)(lVar18 + lVar19) == '\0') goto LAB_02059c34;
            lVar20 = lVar18 + lVar19;
            if (*(char *)(lVar20 + 1) == '\0') {
              lVar19 = lVar19 + 1;
              goto LAB_02059c34;
            }
            if (*(char *)(lVar20 + 2) == '\0') {
              lVar19 = lVar19 + 2;
              goto LAB_02059c34;
            }
            lVar19 = lVar19 + 3;
          } while (lVar19 != 0x80001);
          lVar19 = 0;
LAB_02059c34:
          iVar13 = (int)lVar19;
          if ((int)plVar22[2] <= (int)lVar19) {
            iVar13 = (int)plVar22[2] + -1;
          }
          memcpy(pvVar4,pvVar24,(long)iVar13);
          *(undefined1 *)((long)pvVar4 + (long)iVar13) = 0;
        }
        *plVar22 = (long)&PTR_LAB_04908da0;
        if (*param_2 < param_2[1]) {
          *(long **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = plVar22;
          *param_2 = *param_2 + 1;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 10);
    if (((int)local_9248 != 0) && (iVar13 = *param_2, iVar13 < param_2[1])) {
      puVar21 = local_9240 + (int)local_9248;
      plVar17 = local_9240;
      do {
        if (iVar13 < param_2[1]) {
          plVar22 = (long *)*plVar17;
          puVar27 = *(undefined8 **)(param_2 + 4);
          if (puVar27 != (undefined8 *)0x0) {
            *(undefined8 *)(param_2 + 4) = *puVar27;
          }
          pvVar4 = (void *)((long)puVar27 + 0x14);
          *(undefined4 *)(puVar27 + 2) = 8;
          *(undefined1 *)((long)puVar27 + 0x1b) = 0;
          *puVar27 = &PTR_LAB_04937050;
          puVar27[1] = pvVar4;
          (**(code **)(*plVar22 + 0x18))(plVar22);
          pvVar24 = (void *)plVar22[1];
          if (pvVar4 != pvVar24) {
            (**(code **)(*plVar22 + 0x18))(plVar22);
            lVar19 = 0;
            do {
              if (*(char *)(plVar22[1] + lVar19) == '\0') goto LAB_02059d78;
              lVar18 = plVar22[1] + lVar19;
              if (*(char *)(lVar18 + 1) == '\0') {
                lVar19 = lVar19 + 1;
                goto LAB_02059d78;
              }
              if (*(char *)(lVar18 + 2) == '\0') {
                lVar19 = lVar19 + 2;
                goto LAB_02059d78;
              }
              lVar19 = lVar19 + 3;
            } while (lVar19 != 0x80001);
            lVar19 = 0;
LAB_02059d78:
            iVar13 = (int)lVar19;
            if (*(int *)(puVar27 + 2) <= (int)lVar19) {
              iVar13 = *(int *)(puVar27 + 2) + -1;
            }
            memcpy(pvVar4,pvVar24,(long)iVar13);
            *(undefined1 *)((long)pvVar4 + (long)iVar13) = 0;
          }
          *puVar27 = &PTR_LAB_04908da0;
          iVar13 = *param_2;
          if (iVar13 < param_2[1]) {
            *(undefined8 **)(*(long *)(param_2 + 2) + (long)iVar13 * 8) = puVar27;
            iVar13 = *param_2 + 1;
            *param_2 = iVar13;
          }
        }
        plVar17 = plVar17 + 1;
      } while (plVar17 != puVar21);
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
       (puVar21 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar21 != (undefined8 *)0x0)) {
      (**(code **)*puVar21)();
    }
    if (0 < (int)local_4228) {
      lVar19 = 0;
      do {
        (*(code *)**(undefined8 **)local_4220[lVar19])();
        lVar19 = lVar19 + 1;
      } while (lVar19 < (int)local_4228);
    }
    return;
  }
  puVar27 = local_4220 + (int)local_4228;
  plVar17 = (long *)(PTR_DAT_04bb6a30 + 0x10);
  ppuVar2 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
  puVar21 = local_4220;
LAB_02059724:
  plVar22 = (long *)*puVar21;
  local_924c = 0x23;
  local_924a = 8;
  FUN_020fd3a0(&local_924c,plVar22);
  uVar12 = FUN_021d7d60(&local_924c);
  if (uVar12 == 0xffffffff) {
    iVar13 = FUN_0220ce00(*(undefined8 *)PTR_DAT_04bb4138,plVar22);
    if ((iVar13 < 0) ||
       (puVar14 = (ushort *)FUN_027e0560(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8),iVar13),
       puVar14 == (ushort *)0x0)) goto LAB_02059718;
    nn::time::IsValidDate((uint)*puVar14,(uint)(byte)puVar14[1],(uint)*(byte *)((long)puVar14 + 3));
    local_9258 = (long *)FUN_0272eca4(puVar14,1);
    if (0 < (int)local_9248) {
      lVar19 = 0;
      do {
        iVar13 = FUN_00a82474(local_9240[lVar19] + 0x20,&local_9258);
        auVar9 = local_9238;
        if (iVar13 < 0) {
          if (local_9240[lVar19] != 0) {
            if ((int)local_9248 < 1) goto LAB_02059718;
            lVar20 = 0;
            lVar18 = 8;
            goto LAB_020598a0;
          }
          break;
        }
        lVar19 = lVar19 + 1;
      } while (lVar19 < (int)local_9248);
    }
    auVar9 = local_9238;
    if (local_9248._4_4_ <= (int)local_9248) goto LAB_02059718;
    if (local_9238 != (undefined1  [8])0x0) {
      local_9238 = *(undefined1 (*) [8])local_9238;
    }
    *(undefined1 *)((long)auVar9 + 0x1b) = 0;
    plVar3 = (long *)((long)auVar9 + 0x14);
    *(undefined4 *)((long)auVar9 + 0x10) = 8;
    *(undefined **)auVar9 = PTR_DAT_04bb6a30 + 0x10;
    *(long **)((long)auVar9 + 8) = plVar3;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    plVar25 = (long *)plVar22[1];
    if (plVar3 != plVar25) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
      lVar19 = 0;
      do {
        if (*(char *)(plVar22[1] + lVar19) == '\0') goto LAB_02059a2c;
        lVar18 = plVar22[1] + lVar19;
        if (*(char *)(lVar18 + 1) == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_02059a2c;
        }
        if (*(char *)(lVar18 + 2) == '\0') {
          lVar19 = lVar19 + 2;
          goto LAB_02059a2c;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      lVar19 = 0;
LAB_02059a2c:
      iVar13 = (int)lVar19;
      if (*(int *)((long)auVar9 + 0x10) <= (int)lVar19) {
        iVar13 = *(int *)((long)auVar9 + 0x10) + -1;
      }
      memcpy(plVar3,plVar25,(long)iVar13);
      *(undefined1 *)((long)plVar3 + (long)iVar13) = 0;
    }
    *(undefined ***)auVar9 = &PTR_LAB_04908da0;
    *(long **)((long)auVar9 + 0x20) = local_9258;
    if (local_9248._4_4_ <= (int)local_9248) goto LAB_02059718;
    local_9240[(int)local_9248] = (long)auVar9;
    goto LAB_02059a84;
  }
  ppuVar7 = local_4368 + (ulong)uVar12 * 4;
  ppuVar8 = ppuVar7;
  if (9 < uVar12) {
    ppuVar8 = local_4368;
  }
  __dest = ppuVar8[1];
  (**(code **)(*plVar22 + 0x18))(plVar22);
  __src = (undefined1 *)plVar22[1];
  if (__dest != __src) {
    (**(code **)(*plVar22 + 0x18))(plVar22);
    lVar19 = 0;
    do {
      if (*(char *)(plVar22[1] + lVar19) == '\0') goto LAB_020596e8;
      lVar18 = plVar22[1] + lVar19;
      if (*(char *)(lVar18 + 1) == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_020596e8;
      }
      if (*(char *)(lVar18 + 2) == '\0') {
        lVar19 = lVar19 + 2;
        goto LAB_020596e8;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    lVar19 = 0;
LAB_020596e8:
    if (9 < uVar12) {
      ppuVar7 = local_4368;
    }
    iVar13 = (int)lVar19;
    if (*(int *)(ppuVar7 + 2) <= (int)lVar19) {
      iVar13 = *(int *)(ppuVar7 + 2) + -1;
    }
    memcpy(__dest,__src,(long)iVar13);
    __dest[iVar13] = 0;
  }
  goto LAB_02059718;
  while( true ) {
    lVar20 = lVar20 + -1;
    lVar18 = lVar18 + 8;
    if (((ulong)local_9248 & 0xffffffff) + lVar20 == 0) break;
LAB_020598a0:
    if (*(long *)((long)local_9240 + lVar18 + -8) == local_9240[lVar19]) {
      iVar13 = -(int)lVar20;
      if (((-1 < iVar13) && (iVar13 <= (int)local_9248)) && ((int)local_9248 < local_9248._4_4_)) {
        if (local_9238 != (undefined1  [8])0x0) {
          local_9238 = *(undefined1 (*) [8])local_9238;
        }
        plVar3 = (long *)((long)auVar9 + 0x14);
        *(undefined4 *)((long)auVar9 + 0x10) = 8;
        *(undefined1 *)((long)auVar9 + 0x1b) = 0;
        *(long **)auVar9 = plVar17;
        *(long **)((long)auVar9 + 8) = plVar3;
        (**(code **)(*plVar22 + 0x18))(plVar22);
        plVar25 = (long *)plVar22[1];
        if (plVar3 == plVar25) {
          ppuVar16 = ppuVar2;
          goto LAB_02059ae4;
        }
        (**(code **)(*plVar22 + 0x18))(plVar22);
        lVar19 = 0;
        goto LAB_020599f0;
      }
      break;
    }
  }
  goto LAB_02059718;
  while( true ) {
    lVar5 = plVar22[1] + lVar19;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar19 = lVar19 + 1;
      goto LAB_02059ab0;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar19 = lVar19 + 2;
      goto LAB_02059ab0;
    }
    lVar19 = lVar19 + 3;
    if (lVar19 == 0x80001) break;
LAB_020599f0:
    if (*(char *)(plVar22[1] + lVar19) == '\0') goto LAB_02059ab0;
  }
  lVar19 = 0;
LAB_02059ab0:
  iVar6 = (int)lVar19;
  if (*(int *)((long)auVar9 + 0x10) <= (int)lVar19) {
    iVar6 = *(int *)((long)auVar9 + 0x10) + -1;
  }
  memcpy(plVar3,plVar25,(long)iVar6);
  *(undefined1 *)((long)plVar3 + (long)iVar6) = 0;
  ppuVar16 = &PTR_LAB_04908da0;
LAB_02059ae4:
  *(undefined ***)auVar9 = ppuVar16;
  *(long **)((long)auVar9 + 0x20) = local_9258;
  if ((iVar13 <= (int)local_9248) && ((int)local_9248 < local_9248._4_4_)) {
    if (iVar13 < (int)local_9248) {
      memmove((void *)((long)local_9240 + lVar18),(void *)((long)local_9240 + lVar18 + -8),
              (long)(((int)local_9248 + (int)lVar20) * 8));
    }
    local_9240[-lVar20] = (long)auVar9;
LAB_02059a84:
    local_9248 = (undefined *)CONCAT44(local_9248._4_4_,(int)local_9248 + 1);
  }
LAB_02059718:
  puVar21 = puVar21 + 1;
  if (puVar21 == puVar27) goto LAB_02059b44;
  goto LAB_02059724;
}

