
void FUN_03b1f630(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  size_t __size;
  undefined1 **ppuVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  bool bVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  void *__s;
  int iVar16;
  int iVar17;
  long lVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined1 *puVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  undefined *local_5a8;
  undefined1 *local_5a0;
  uint local_598;
  undefined1 local_594 [63];
  undefined1 local_555;
  undefined1 **local_550;
  uint local_548;
  undefined *local_540;
  undefined1 *local_538;
  undefined1 *local_530;
  undefined1 *local_528;
  uint local_520;
  undefined1 local_51c [127];
  undefined1 local_49d;
  undefined **local_498;
  uint local_490;
  undefined *local_488;
  undefined1 *local_480;
  undefined *local_478;
  long local_470;
  long local_468;
  undefined1 auStack_460 [4];
  undefined1 auStack_45c [1020];
  
  *(long *)(param_1 + 0x20) = param_3;
  lVar13 = FUN_00364d70(param_2,"TopLeft");
  if (lVar13 != 0) {
    uVar14 = (**(code **)(**(long **)(param_3 + 0x18) + 0x60))(*(long **)(param_3 + 0x18),lVar13,1);
    *(undefined8 *)(param_1 + 0x28) = uVar14;
  }
  lVar13 = FUN_00364d70(param_2,"TopRight");
  if (lVar13 != 0) {
    uVar14 = (**(code **)(**(long **)(param_3 + 0x18) + 0x60))(*(long **)(param_3 + 0x18),lVar13,1);
    *(undefined8 *)(param_1 + 0x30) = uVar14;
  }
  lVar13 = FUN_00364d70(param_2,"BottomLeft");
  if (lVar13 != 0) {
    uVar14 = (**(code **)(**(long **)(param_3 + 0x18) + 0x60))(*(long **)(param_3 + 0x18),lVar13,1);
    *(undefined8 *)(param_1 + 0x38) = uVar14;
  }
  lVar13 = FUN_00364d70(param_2,"BottomRight");
  if (lVar13 != 0) {
    uVar14 = (**(code **)(**(long **)(param_3 + 0x18) + 0x60))(*(long **)(param_3 + 0x18),lVar13,1);
    *(undefined8 *)(param_1 + 0x40) = uVar14;
  }
  lVar13 = FUN_00364ec0(param_2,"BoxCursorWholePane");
  if (lVar13 != 0) {
    memset(&local_468,0,0x400);
    local_498 = &local_478;
    local_490 = 0;
    lVar18 = 0;
    local_470 = lVar13 + (ulong)*(uint *)(lVar13 + 4);
    local_488 = PTR_DAT_04bb2020 + 0x10;
    local_480 = &DAT_040c2970;
    do {
      if (*(char *)(local_470 + lVar18) == '\0') {
LAB_03b1f7dc:
        uVar12 = (int)lVar18 + 1;
        goto LAB_03b1f7e0;
      }
      if (*(char *)(local_470 + lVar18 + 1) == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_03b1f7dc;
      }
      if (*(char *)(local_470 + lVar18 + 2) == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_03b1f7dc;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    uVar12 = 1;
LAB_03b1f7e0:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    uVar27 = 0;
    puVar3 = PTR_DAT_04bb2bc0 + 0x10;
    local_478 = local_488;
LAB_03b1f864:
    uVar25 = local_490;
    ppuVar9 = local_498;
    uVar26 = (ulong)local_490;
    if (local_498 != &local_478 || local_490 != uVar12) {
      local_49d = 0;
      local_520 = 0x80;
      local_51c[0] = 0;
      local_530 = &DAT_048fc708;
      local_528 = local_51c;
      (**(code **)(*local_498 + 0x18))(local_498);
      puVar19 = ppuVar9[1];
      lVar13 = 0;
      do {
        if (puVar19[lVar13] == '\0') {
LAB_03b1f8e8:
          iVar16 = (int)lVar13;
          goto joined_r0x03b1f8e8;
        }
        if (puVar19[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_03b1f8e8;
        }
        if (puVar19[lVar13 + 2] == '\0') {
          iVar16 = (int)lVar13 + 2;
          goto joined_r0x03b1f8e8;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      iVar16 = 0;
joined_r0x03b1f8e8:
      if ((-1 < (int)uVar25) && ((int)uVar25 <= iVar16)) {
        (**(code **)(local_530 + 0x18))(&local_530);
        puVar8 = local_528;
        uVar24 = (ulong)local_520;
        if (0 < (int)local_520) {
          uVar23 = 0;
          do {
            puVar19 = local_498[1];
            if (puVar19[uVar26] == '\0') {
LAB_03b1f9c0:
              uVar25 = (int)uVar26 + 1;
              puVar8[uVar23 & 0xffffffff] = 0;
              local_490 = uVar25;
              if (0 < (int)uVar23) {
                local_550 = &local_530;
                local_548 = 0;
                local_538 = &DAT_0408f28c;
                local_540 = puVar2;
                (**(code **)(local_530 + 0x18))(&local_530);
                lVar13 = 0;
                goto LAB_03b1fa10;
              }
              break;
            }
            (**(code **)(local_488 + 0x18))(&local_488);
            uVar21 = 0;
            bVar11 = true;
            cVar6 = puVar19[uVar26];
            do {
              if (local_480[uVar21] == '\0') break;
              if (local_480[uVar21] == cVar6) {
                if (bVar11) goto LAB_03b1f9c0;
                break;
              }
              if (local_480[uVar21 + 1] == '\0') break;
              if (local_480[uVar21 + 1] == cVar6) goto LAB_03b1f9c0;
              if (local_480[uVar21 + 2] == '\0') break;
              if (local_480[uVar21 + 2] == cVar6) goto LAB_03b1f9c0;
              bVar11 = uVar21 < 0x7fffe;
              uVar21 = uVar21 + 3;
            } while (uVar21 != 0x80001);
            puVar8[uVar23] = cVar6;
            uVar23 = uVar23 + 1;
            uVar26 = uVar26 + 1;
          } while (uVar23 != uVar24);
        }
      }
      goto LAB_03b1f85c;
    }
    if ((int)uVar27 < 1) goto LAB_03b1fda8;
    goto LAB_03b1fcb4;
  }
  goto LAB_03b1fda8;
  while( true ) {
    if (local_528[lVar13 + 1] == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_03b1fa4c;
    }
    if (local_528[lVar13 + 2] == '\0') {
      lVar13 = lVar13 + 2;
      goto LAB_03b1fa4c;
    }
    lVar13 = lVar13 + 3;
    if (lVar13 == 0x80001) break;
LAB_03b1fa10:
    if (local_528[lVar13] == '\0') {
LAB_03b1fa4c:
      uVar25 = (int)lVar13 + 1;
      goto LAB_03b1fa50;
    }
  }
  uVar25 = 1;
LAB_03b1fa50:
  plVar15 = &local_468 + (ulong)uVar27 * 2;
  if (0x3f < uVar27) {
    plVar15 = &local_468;
  }
  if ((local_550 != &local_530) || (local_548 != uVar25)) {
    iVar16 = 0;
    puVar8 = auStack_460 + (ulong)uVar27 * 0x10;
    puVar10 = auStack_45c + (ulong)uVar27 * 0x10;
    if (0x3f < uVar27) {
      puVar8 = auStack_460;
      puVar10 = auStack_45c;
    }
    do {
      uVar1 = local_548;
      ppuVar7 = local_550;
      local_555 = 0;
      local_598 = 0x40;
      local_594[0] = 0;
      local_5a8 = puVar3;
      local_5a0 = local_594;
      (**(code **)(*local_550 + 0x18))(local_550);
      puVar20 = ppuVar7[1];
      lVar13 = 0;
      do {
        if (puVar20[lVar13] == '\0') {
LAB_03b1fb24:
          iVar17 = (int)lVar13;
          goto joined_r0x03b1fb24;
        }
        if (puVar20[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_03b1fb24;
        }
        if (puVar20[lVar13 + 2] == '\0') {
          iVar17 = (int)lVar13 + 2;
          goto joined_r0x03b1fb24;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      iVar17 = 0;
joined_r0x03b1fb24:
      if ((-1 < (int)uVar1) && ((int)uVar1 <= iVar17)) {
        (**(code **)(local_5a8 + 0x18))(&local_5a8);
        puVar20 = local_5a0;
        uVar26 = (ulong)local_598;
        if (0 < (int)local_598) {
          uVar24 = 0;
          uVar23 = (ulong)uVar1;
          do {
            puVar22 = local_550[1];
            if (puVar22[uVar23] == '\0') {
LAB_03b1fc00:
              uVar1 = (int)uVar23 + 1;
              puVar20[uVar24 & 0xffffffff] = 0;
              local_548 = uVar1;
              if ((int)uVar24 < 1) break;
              if (iVar16 == 2) {
                puVar20 = puVar10;
              }
              else {
                if (iVar16 != 1) {
                  if (iVar16 == 0) {
                    (**(code **)(local_5a8 + 0x18))(&local_5a8);
                    lVar13 = (**(code **)(**(long **)(param_3 + 0x18) + 0x60))
                                       (*(long **)(param_3 + 0x18),local_5a0,1);
                    if (lVar13 != 0) {
                      *plVar15 = lVar13;
                    }
                  }
                  break;
                }
                puVar20 = puVar8;
              }
              FUN_038d52a0(puVar20,&local_5a8);
              break;
            }
            (**(code **)(local_540 + 0x18))(&local_540);
            uVar21 = 0;
            bVar11 = true;
            cVar6 = puVar22[uVar23];
            do {
              if (local_538[uVar21] == '\0') break;
              if (local_538[uVar21] == cVar6) {
                if (bVar11) goto LAB_03b1fc00;
                break;
              }
              if (local_538[uVar21 + 1] == '\0') break;
              if (local_538[uVar21 + 1] == cVar6) goto LAB_03b1fc00;
              if (local_538[uVar21 + 2] == '\0') break;
              if (local_538[uVar21 + 2] == cVar6) goto LAB_03b1fc00;
              bVar11 = uVar21 < 0x7fffe;
              uVar21 = uVar21 + 3;
            } while (uVar21 != 0x80001);
            puVar20[uVar24] = cVar6;
            uVar24 = uVar24 + 1;
            uVar23 = uVar23 + 1;
          } while (uVar24 != uVar26);
        }
      }
      iVar16 = iVar16 + 1;
    } while ((local_550 != &local_530) || (local_548 != uVar25));
  }
  if (*plVar15 != 0) {
    uVar27 = uVar27 + 1;
  }
LAB_03b1f85c:
  if (0x3f < (int)uVar27) goto LAB_03b1fcb4;
  goto LAB_03b1f864;
LAB_03b1fcb4:
  __size = (ulong)uVar27 << 4;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    __s = malloc(__size);
    if (__s != (void *)0x0) goto LAB_03b1fd20;
LAB_03b1fd50:
    uVar27 = *(uint *)(param_1 + 0x48);
    if (uVar27 == 0) goto LAB_03b1fda8;
    __s = *(void **)(param_1 + 0x50);
  }
  else {
    plVar15 = DAT_04c62f60;
    if (DAT_04c62f60 == (long *)0x0) {
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar15 = (long *)(lVar13 + 8);
      if (lVar18 != 0) {
        plVar15 = (long *)(lVar18 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) goto LAB_03b1fd50;
    }
    __s = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,__size,8);
    if (__s == (void *)0x0) goto LAB_03b1fd50;
LAB_03b1fd20:
    memset(__s,0,__size);
    *(uint *)(param_1 + 0x48) = uVar27;
    *(void **)(param_1 + 0x50) = __s;
  }
  uVar26 = 0;
  uVar12 = 0;
  plVar15 = &local_468;
  do {
    uVar24 = (ulong)uVar12;
    uVar12 = uVar12 + 1;
    plVar5 = plVar15;
    if (0x3f < uVar26) {
      plVar5 = &local_468;
    }
    plVar4 = (long *)((long)__s + ((long)(uVar24 << 0x20) >> 0x1c));
    uVar26 = uVar26 + 1;
    lVar13 = plVar5[1];
    plVar15 = plVar15 + 2;
    *plVar4 = *plVar5;
    plVar4[1] = lVar13;
  } while (uVar27 != uVar12);
LAB_03b1fda8:
  lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 0x88);
  lVar18 = *(long *)(lVar13 + 0x20);
  plVar15 = *(long **)(lVar18 + 0x28);
  lVar18 = *(long *)(lVar18 + 0x3f8);
  uVar12 = (**(code **)(*plVar15 + 0x38))(plVar15,*(undefined1 *)(lVar13 + 0xdc));
  plVar15 = (long *)(lVar18 + 0x28);
  plVar5 = plVar15 + uVar12;
  if (1 < uVar12) {
    plVar5 = plVar15;
  }
  *plVar5 = param_1;
  lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 0x88);
  *(byte *)(lVar13 + 0xe6) = *(byte *)(lVar13 + 0xe6) | 4;
  return;
}

