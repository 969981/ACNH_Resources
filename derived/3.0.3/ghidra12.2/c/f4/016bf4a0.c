
void FUN_016bf4a0(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  void *pvVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  char *__src;
  bool bVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  long lVar22;
  long lVar23;
  undefined1 *puVar24;
  char cVar25;
  uint uVar26;
  ulong uVar27;
  undefined1 *puVar28;
  long lVar29;
  char *pcVar30;
  uint local_8c;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined1 local_6d;
  undefined4 local_64;
  
  *(undefined4 *)(param_1 + 0x98) = 1;
  if ((*(int *)(param_1 + 0xc) == -1) || (lVar19 = *(long *)PTR_DAT_04bb46b0, lVar19 == 0)) {
LAB_016bf5c4:
    uVar13 = *(byte *)(param_1 + 0x54) & 0xfe;
  }
  else {
    puVar20 = *(undefined8 **)(lVar19 + 0x10);
    if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
      lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
      if (lVar19 != 0) {
        lVar19 = lVar19 + 0x70;
        goto LAB_016bf52c;
      }
      goto LAB_016bf5c4;
    }
    if (((puVar20 == (undefined8 *)0x0) || ((long *)puVar20[0x26] == (long *)0x0)) ||
       (lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar19 == 0)) goto LAB_016bf5c4;
LAB_016bf52c:
    iVar10 = *(int *)(param_1 + 0xc);
    puVar28 = &LAB_002057b0 + lVar19;
    if (*(char *)(param_1 + 8) != '\0') {
      puVar28 = (undefined1 *)(lVar19 + 0x20b9e8);
    }
    if ((*(long **)(puVar28 + (long)iVar10 * 0xc40 + 0x28) == (long *)0x0) ||
       (puVar20 = (undefined8 *)**(long **)(puVar28 + (long)iVar10 * 0xc40 + 0x28),
       puVar20 == (undefined8 *)0x0)) {
      bVar6 = *(byte *)(*(long *)(puVar28 + (long)iVar10 * 0xc40 + 0x10) +
                       *(long *)(puVar28 + (long)iVar10 * 0xc40 + 8));
    }
    else {
      uVar14 = (**(code **)*puVar20)();
      bVar6 = *(byte *)(*(long *)(puVar28 + (long)iVar10 * 0xc40 + 0x10) +
                       *(long *)(puVar28 + (long)iVar10 * 0xc40 + 8));
      if ((((uVar14 & 1) != 0) && (*(long *)(puVar28 + (long)iVar10 * 0xc40 + 0x28) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(puVar28 + (long)iVar10 * 0xc40 + 0x28) + 8),
         puVar20 != (undefined8 *)0x0)) {
        (**(code **)*puVar20)();
      }
    }
    if ((bVar6 & 1) != 0) goto LAB_016bf5c4;
    uVar13 = *(byte *)(param_1 + 0x54) | 1;
  }
  *(char *)(param_1 + 0x54) = (char)uVar13;
  pcVar1 = (char *)(param_1 + 8);
  local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
  if ((uVar13 >> 1 & 1) == 0) {
    iVar10 = FUN_0252d29c();
    plVar16 = (long *)PTR_DAT_04bb46b0;
    lVar19 = *(long *)PTR_DAT_04bb46b0;
    if (lVar19 != 0) {
      puVar20 = *(undefined8 **)(lVar19 + 0x10);
      if ((*(byte *)(lVar19 + 0x453) & 1) != 0) {
        if (((puVar20 != (undefined8 *)0x0) && ((long *)puVar20[0x26] != (long *)0x0)) &&
           (lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar19 != 0)) {
          lVar19 = lVar19 + (long)iVar10 * 0xcb0;
          lVar29 = lVar19 + 0x211c20;
          lVar19 = *(long *)(lVar19 + 0x211c48);
          if (lVar19 == 0) goto LAB_016bf854;
LAB_016bf7fc:
          if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) {
            local_8c = 0;
          }
          else {
            local_8c = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
            lVar19 = *(long *)(lVar29 + 0x28);
            if (lVar19 == 0) goto LAB_016bf8e0;
          }
          plVar18 = *(long **)(lVar19 + 0x20);
          if (plVar18 != (long *)0x0) {
            local_88 = *(undefined **)(lVar29 + 8);
            local_80 = *(char **)(lVar29 + 0x10);
            local_78 = 0x1594;
            (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
          }
          goto LAB_016bf8e0;
        }
        goto LAB_016bf5ec;
      }
      lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
      if (lVar19 == 0) goto LAB_016bf5ec;
      lVar19 = lVar19 + (long)iVar10 * 0xcb0;
      lVar29 = lVar19 + 0x211c90;
      lVar19 = *(long *)(lVar19 + 0x211cb8);
      if (lVar19 != 0) goto LAB_016bf7fc;
LAB_016bf854:
      local_8c = 0;
LAB_016bf8e0:
      pvVar3 = (void *)(*(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8));
      memset(pvVar3,0,0x1594);
      *(undefined2 *)((long)pvVar3 + 2) = 0xffff;
      FUN_028f8bb0((long)pvVar3 + 4);
      *(undefined8 *)((long)pvVar3 + 0x1578) = 0;
      *(undefined4 *)((long)pvVar3 + 0x1560) = 0;
      *(undefined1 *)((long)pvVar3 + 0x1564) = 0;
      *(undefined8 *)((long)pvVar3 + 0x1568) = 0;
      *(undefined8 *)((long)pvVar3 + 0x1570) = 0;
      *(undefined1 *)((long)pvVar3 + 0x158a) = 0;
      *(undefined8 *)((long)pvVar3 + 0x157e) = 0;
      *(undefined4 *)((long)pvVar3 + 0x158c) = 0;
      *(undefined4 *)((long)pvVar3 + 0x1586) = 0x101;
      *(undefined1 *)((long)pvVar3 + 0x1590) = 0;
      if ((*(int *)(param_1 + 0xc) == -1) || (lVar19 = *plVar16, lVar19 == 0)) {
LAB_016bfa28:
        local_88 = (undefined *)CONCAT44(local_88._4_4_,4);
        if ((*(byte *)(param_1 + 0x54) >> 4 & 1) == 0) {
          uVar12 = FUN_0252d29c();
          uVar14 = FUN_016ceefc(pcVar1,uVar12);
          if ((uVar14 & 1) != 0) {
            if ((*(int *)(param_1 + 0xc) == -1) || (lVar19 = *plVar16, lVar19 == 0)) {
LAB_016bfb44:
              puVar28 = (undefined1 *)0x0;
              lVar19 = *(long *)(lVar29 + 0x60);
joined_r0x016bfb4c:
              if (lVar19 == 0) goto LAB_016bfb84;
LAB_016bfb50:
              if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) goto LAB_016bfb84;
              uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
              uVar14 = uVar14 & 0xffffffff;
            }
            else {
              puVar20 = *(undefined8 **)(lVar19 + 0x10);
              if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
                lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
                if (lVar19 == 0) goto LAB_016bfb44;
                lVar19 = lVar19 + 0x70;
              }
              else if (((puVar20 == (undefined8 *)0x0) || ((long *)puVar20[0x26] == (long *)0x0)) ||
                      (lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar19 == 0))
              goto LAB_016bfb44;
              if (*(char *)(param_1 + 8) == '\0') {
                puVar28 = &LAB_002057b0 + lVar19 + (long)*(int *)(param_1 + 0xc) * 0xc40;
                lVar19 = *(long *)(lVar29 + 0x60);
                goto joined_r0x016bfb4c;
              }
              puVar28 = (undefined1 *)(lVar19 + (long)*(int *)(param_1 + 0xc) * 0xc40 + 0x20b9e8);
              lVar19 = *(long *)(lVar29 + 0x60);
              if (lVar19 != 0) goto LAB_016bfb50;
LAB_016bfb84:
              uVar14 = 0;
            }
            if ((*(long **)(puVar28 + 0x28) == (long *)0x0) ||
               (puVar20 = (undefined8 *)**(long **)(puVar28 + 0x28), puVar20 == (undefined8 *)0x0))
            {
              uVar27 = 0;
            }
            else {
              uVar27 = (**(code **)*puVar20)();
              uVar27 = uVar27 & 0xffffffff;
            }
            if ((*(long *)(lVar29 + 0x60) != 0) &&
               (plVar18 = *(long **)(*(long *)(lVar29 + 0x60) + 0x20), plVar18 != (long *)0x0)) {
              local_88 = *(undefined **)(lVar29 + 0x40);
              local_80 = *(char **)(lVar29 + 0x48);
              local_78 = 0x158c;
              (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
            }
            memcpy((void *)(*(long *)(lVar29 + 0x48) + *(long *)(lVar29 + 0x40)),
                   (void *)(*(long *)(puVar28 + 0x10) + *(long *)(puVar28 + 8)),0x158c);
            if ((((uVar27 & 1) != 0) && (*(long *)(puVar28 + 0x28) != 0)) &&
               (puVar20 = *(undefined8 **)(*(long *)(puVar28 + 0x28) + 8),
               puVar20 != (undefined8 *)0x0)) {
              (**(code **)*puVar20)();
            }
            if ((((uVar14 & 1) != 0) && (*(long *)(lVar29 + 0x60) != 0)) &&
               (puVar20 = *(undefined8 **)(*(long *)(lVar29 + 0x60) + 0x18),
               puVar20 != (undefined8 *)0x0)) {
              (**(code **)*puVar20)();
            }
            lVar19 = *(long *)(lVar29 + 0x728);
            if (lVar19 == 0) {
              puVar21 = (undefined4 *)(*(long *)(lVar29 + 0x710) + *(long *)(lVar29 + 0x708));
              *(undefined1 *)(puVar21 + 1) = 0;
              *puVar21 = 0;
            }
            else {
              if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) {
                uVar14 = 0;
LAB_016bfc80:
                plVar18 = *(long **)(lVar19 + 0x20);
                if (plVar18 != (long *)0x0) {
                  local_88 = *(undefined **)(lVar29 + 0x708);
                  local_80 = *(char **)(lVar29 + 0x710);
                  local_78 = 5;
                  (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
                }
              }
              else {
                uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
                lVar19 = *(long *)(lVar29 + 0x728);
                uVar14 = uVar14 & 0xffffffff;
                if (lVar19 != 0) goto LAB_016bfc80;
              }
              puVar21 = (undefined4 *)(*(long *)(lVar29 + 0x710) + *(long *)(lVar29 + 0x708));
              *(undefined1 *)(puVar21 + 1) = 0;
              *puVar21 = 0;
              if ((((uVar14 & 1) != 0) && (*(long *)(lVar29 + 0x728) != 0)) &&
                 (puVar20 = *(undefined8 **)(*(long *)(lVar29 + 0x728) + 0x18),
                 puVar20 != (undefined8 *)0x0)) {
                (**(code **)*puVar20)();
              }
            }
          }
        }
      }
      else {
        puVar20 = *(undefined8 **)(lVar19 + 0x10);
        if ((*(byte *)(lVar19 + 0x453) & 1) != 0) {
          if (((puVar20 != (undefined8 *)0x0) && ((long *)puVar20[0x26] != (long *)0x0)) &&
             (lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar19 != 0))
          goto LAB_016bf9a8;
          goto LAB_016bfa28;
        }
        lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
        if (lVar19 == 0) goto LAB_016bfa28;
        lVar19 = lVar19 + 0x70;
LAB_016bf9a8:
        iVar10 = *(int *)(param_1 + 0xc);
        puVar28 = &LAB_002057b0 + lVar19;
        if (*(char *)(param_1 + 8) != '\0') {
          puVar28 = (undefined1 *)(lVar19 + 0x20b9e8);
        }
        if ((*(long **)(puVar28 + (long)iVar10 * 0xc40 + 0x28) == (long *)0x0) ||
           (puVar20 = (undefined8 *)**(long **)(puVar28 + (long)iVar10 * 0xc40 + 0x28),
           puVar20 == (undefined8 *)0x0)) {
          bVar6 = *(byte *)(*(long *)(puVar28 + (long)iVar10 * 0xc40 + 0x10) +
                           *(long *)(puVar28 + (long)iVar10 * 0xc40 + 8));
        }
        else {
          uVar14 = (**(code **)*puVar20)();
          bVar6 = *(byte *)(*(long *)(puVar28 + (long)iVar10 * 0xc40 + 0x10) +
                           *(long *)(puVar28 + (long)iVar10 * 0xc40 + 8));
          if ((((uVar14 & 1) != 0) && (*(long *)(puVar28 + (long)iVar10 * 0xc40 + 0x28) != 0)) &&
             (puVar20 = *(undefined8 **)(*(long *)(puVar28 + (long)iVar10 * 0xc40 + 0x28) + 8),
             puVar20 != (undefined8 *)0x0)) {
            (**(code **)*puVar20)();
          }
        }
        if ((bVar6 & 1) != 0) goto LAB_016bfa28;
      }
      uVar14 = FUN_0252d29c();
      if ((*(int *)(param_1 + 0xc) != -1) && (*(char *)(param_1 + 8) == '\0')) {
        uVar27 = 0;
        lVar19 = 0x28;
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        do {
          local_64 = (undefined4)uVar27;
          if (((uVar14 & 0xffffffff) != uVar27) && (lVar22 = *plVar16, lVar22 != 0)) {
            puVar20 = *(undefined8 **)(lVar22 + 0x10);
            if ((*(byte *)(lVar22 + 0x453) & 1) == 0) {
              lVar22 = (**(code **)(*(long *)*puVar20 + 0x38))();
              if (lVar22 != 0) {
                uVar13 = 0x1c90;
                goto LAB_016bfd8c;
              }
            }
            else if (((puVar20 != (undefined8 *)0x0) && ((long *)puVar20[0x26] != (long *)0x0)) &&
                    (lVar22 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar22 != 0)) {
              uVar13 = 0x1c20;
LAB_016bfd8c:
              lVar22 = lVar22 + (ulong)(uVar13 | 0x210000);
              lVar23 = *(long *)(lVar22 + lVar19);
              lVar4 = lVar22 + lVar19;
              if (lVar23 == 0) {
                uVar17 = 0;
              }
              else {
                if (*(undefined8 **)(lVar23 + 0x10) == (undefined8 *)0x0) {
                  uVar17 = 0;
                  plVar16 = *(long **)(lVar23 + 0x20);
                }
                else {
                  uVar17 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
                  uVar17 = uVar17 & 0xffffffff;
                  if (*(long *)(lVar22 + lVar19) == 0) goto LAB_016bfe04;
                  plVar16 = *(long **)(*(long *)(lVar22 + lVar19) + 0x20);
                }
                if (plVar16 != (long *)0x0) {
                  local_88 = *(undefined **)(lVar4 + -0x20);
                  local_80 = *(char **)(lVar4 + -0x18);
                  local_78 = 0x1594;
                  (**(code **)(*plVar16 + 0x20))(plVar16,&local_88);
                }
              }
LAB_016bfe04:
              pcVar30 = *(char **)(lVar4 + -0x18) + (long)*(undefined **)(lVar4 + -0x20);
              uVar13 = (uint)(byte)pcVar30[0x1590];
              if ((pcVar30[0x1590] & 1U) != 0) {
                if ((*(long *)(lVar22 + lVar19) != 0) &&
                   (plVar16 = *(long **)(*(long *)(lVar22 + lVar19) + 0x20), plVar16 != (long *)0x0)
                   ) {
                  local_78 = 0x1594;
                  local_88 = *(undefined **)(lVar4 + -0x20);
                  local_80 = *(char **)(lVar4 + -0x18);
                  (**(code **)(*plVar16 + 0x20))(plVar16,&local_88);
                  pcVar30 = (char *)(*(long *)(lVar4 + -0x18) + *(long *)(lVar4 + -0x20));
                  uVar13 = (uint)(byte)pcVar30[0x1590];
                }
                uVar26 = *(uint *)(pcVar30 + 0x158c);
                if ((uVar13 >> 1 & 1) == 0) {
                  if (uVar26 < 8) {
                    cVar25 = '\0';
                    goto LAB_016bfea0;
                  }
                }
                else if (uVar26 < 8) {
                  cVar25 = '\x01';
LAB_016bfea0:
                  if (uVar26 == *(uint *)(param_1 + 0xc) && cVar25 == *(char *)(param_1 + 8)) {
                    local_80 = "IsClearHotelWorkDataByOther";
                    local_88 = puVar2;
                    FUN_0274d104(&local_64,&local_88,1);
                    local_80 = "ClearedHotelWorkRoomIndex";
                    local_88 = puVar2;
                    FUN_0274d104(&local_64,&local_88,*(undefined4 *)(param_1 + 0xc));
                    if ((*(long *)(lVar22 + lVar19) != 0) &&
                       (plVar16 = *(long **)(*(long *)(lVar22 + lVar19) + 0x20),
                       plVar16 != (long *)0x0)) {
                      local_88 = *(undefined **)(lVar4 + -0x20);
                      local_80 = *(char **)(lVar4 + -0x18);
                      local_78 = 0x1594;
                      (**(code **)(*plVar16 + 0x20))(plVar16,&local_88);
                    }
                    pvVar3 = (void *)(*(long *)(lVar4 + -0x18) + *(long *)(lVar4 + -0x20));
                    memset(pvVar3,0,0x1594);
                    *(undefined2 *)((long)pvVar3 + 2) = 0xffff;
                    FUN_028f8bb0((long)pvVar3 + 4);
                    *(undefined4 *)((long)pvVar3 + 0x1560) = 0;
                    *(undefined8 *)((long)pvVar3 + 0x1568) = 0;
                    *(undefined1 *)((long)pvVar3 + 0x1564) = 0;
                    *(undefined4 *)((long)pvVar3 + 0x1586) = 0x101;
                    *(undefined8 *)((long)pvVar3 + 0x1570) = 0;
                    *(undefined8 *)((long)pvVar3 + 0x1578) = 0;
                    *(undefined8 *)((long)pvVar3 + 0x157e) = 0;
                    *(undefined1 *)((long)pvVar3 + 0x158a) = 0;
                    *(undefined4 *)((long)pvVar3 + 0x158c) = 0;
                    *(undefined1 *)((long)pvVar3 + 0x1590) = 0;
                  }
                }
              }
              plVar16 = (long *)PTR_DAT_04bb46b0;
              if ((((uVar17 & 1) != 0) && (*(long *)(lVar22 + lVar19) != 0)) &&
                 (puVar20 = *(undefined8 **)(*(long *)(lVar22 + lVar19) + 0x18),
                 puVar20 != (undefined8 *)0x0)) {
                (**(code **)*puVar20)();
              }
            }
          }
          uVar27 = uVar27 + 1;
          lVar19 = lVar19 + 0xcb0;
        } while (uVar27 != 8);
      }
      if ((*(long *)(lVar29 + 0x28) != 0) &&
         (plVar18 = *(long **)(*(long *)(lVar29 + 0x28) + 0x20), plVar18 != (long *)0x0)) {
        local_88 = *(undefined **)(lVar29 + 8);
        local_80 = *(char **)(lVar29 + 0x10);
        local_78 = 0x1594;
        (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
      }
      lVar19 = *(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8);
      *(undefined4 *)(lVar19 + 0x158c) = *(undefined4 *)(param_1 + 0xc);
      bVar7 = *(byte *)(lVar19 + 0x1590);
      bVar6 = *(char *)(param_1 + 8) << 1;
      *(byte *)(lVar19 + 0x1590) = bVar7 & 0xfd | bVar6;
      *(byte *)(lVar19 + 0x1590) = bVar7 & 0xfc | bVar6 | *(int *)(param_1 + 0xc) != -1;
      if ((*(long *)(lVar29 + 0x28) != 0) &&
         (plVar18 = *(long **)(*(long *)(lVar29 + 0x28) + 0x20), plVar18 != (long *)0x0)) {
        local_88 = *(undefined **)(lVar29 + 8);
        local_80 = *(char **)(lVar29 + 0x10);
        local_78 = 0x1594;
        (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
      }
      lVar19 = *(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8);
      local_88 = (undefined *)CONCAT44(local_88._4_4_,3);
      *(byte *)(lVar19 + 0x1590) =
           *(byte *)(lVar19 + 0x1590) & 0xfb | (*(byte *)(param_1 + 0x54) >> 3 & 1) << 2;
      if ((*(long *)(lVar29 + 0x28) != 0) &&
         (plVar18 = *(long **)(*(long *)(lVar29 + 0x28) + 0x20), plVar18 != (long *)0x0)) {
        local_88 = *(undefined **)(lVar29 + 8);
        local_80 = *(char **)(lVar29 + 0x10);
        local_78 = 0x1594;
        (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
      }
      lVar19 = *(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8);
      local_88 = (undefined *)CONCAT44(local_88._4_4_,4);
      *(byte *)(lVar19 + 0x1590) =
           *(byte *)(lVar19 + 0x1590) & 0xf7 | (*(byte *)(param_1 + 0x54) >> 4 & 1) << 3;
      uVar8 = *(undefined2 *)(param_1 + 0x10);
      lVar19 = *(long *)(lVar29 + 0x98);
      if (*(char *)(param_1 + 0x12) == '\0') {
        uVar8 = 0xffff;
      }
      if (lVar19 == 0) {
        *(undefined2 *)(*(long *)(lVar29 + 0x80) + *(long *)(lVar29 + 0x78)) = uVar8;
      }
      else {
        if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) {
          uVar14 = 0;
LAB_016c0120:
          plVar18 = *(long **)(lVar19 + 0x20);
          if (plVar18 != (long *)0x0) {
            local_88 = *(undefined **)(lVar29 + 0x78);
            local_80 = *(char **)(lVar29 + 0x80);
            local_78 = 2;
            (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
          }
        }
        else {
          uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
          lVar19 = *(long *)(lVar29 + 0x98);
          uVar14 = uVar14 & 0xffffffff;
          if (lVar19 != 0) goto LAB_016c0120;
        }
        *(undefined2 *)(*(long *)(lVar29 + 0x80) + *(long *)(lVar29 + 0x78)) = uVar8;
        if ((((uVar14 & 1) != 0) && (*(long *)(lVar29 + 0x98) != 0)) &&
           (puVar20 = *(undefined8 **)(*(long *)(lVar29 + 0x98) + 0x18),
           puVar20 != (undefined8 *)0x0)) {
          (**(code **)*puVar20)();
        }
      }
      if (*pcVar1 != '\0') {
        lVar19 = *(long *)(lVar29 + 0x728);
        if (lVar19 == 0) {
          uVar14 = 0;
        }
        else {
          if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) {
            uVar14 = 0;
          }
          else {
            uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
            lVar19 = *(long *)(lVar29 + 0x728);
            uVar14 = uVar14 & 0xffffffff;
            if (lVar19 == 0) goto LAB_016c01dc;
          }
          plVar16 = *(long **)(lVar19 + 0x20);
          if (plVar16 != (long *)0x0) {
            local_88 = *(undefined **)(lVar29 + 0x708);
            local_80 = *(char **)(lVar29 + 0x710);
            local_78 = 5;
            (**(code **)(*plVar16 + 0x20))(plVar16,&local_88);
          }
        }
LAB_016c01dc:
        puVar28 = (undefined1 *)(*(long *)(lVar29 + 0x710) + *(long *)(lVar29 + 0x708));
        plVar16 = (long *)(param_1 + 0x58);
        (**(code **)(*plVar16 + 0x18))(plVar16);
        lVar19 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x60) + lVar19) == '\0') {
LAB_016c0248:
            if (5 < (int)lVar19) goto LAB_016c052c;
            break;
          }
          lVar22 = *(long *)(param_1 + 0x60) + lVar19;
          if (*(char *)(lVar22 + 1) == '\0') {
            lVar19 = lVar19 + 1;
            goto LAB_016c0248;
          }
          if (*(char *)(lVar22 + 2) == '\0') {
            lVar19 = lVar19 + 2;
            goto LAB_016c0248;
          }
          lVar19 = lVar19 + 3;
        } while (lVar19 != 0x80001);
        (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(plVar16);
        lVar19 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x60) + lVar19) == '\0') {
LAB_016c02ac:
            uVar26 = (uint)lVar19;
            uVar13 = uVar26;
            if (4 < (int)uVar26) {
              uVar13 = 5;
            }
            if ((int)uVar26 < 1) goto LAB_016c0514;
            uVar5 = uVar13;
            if ((int)uVar13 < 2) {
              uVar5 = 1;
            }
            (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(plVar16);
            puVar24 = *(undefined1 **)(param_1 + 0x60);
            lVar19 = 0;
            goto LAB_016c02f0;
          }
          lVar22 = *(long *)(param_1 + 0x60) + lVar19;
          if (*(char *)(lVar22 + 1) == '\0') {
            lVar19 = lVar19 + 1;
            goto LAB_016c02ac;
          }
          if (*(char *)(lVar22 + 2) == '\0') {
            lVar19 = lVar19 + 2;
            goto LAB_016c02ac;
          }
          lVar19 = lVar19 + 3;
        } while (lVar19 != 0x80001);
        uVar13 = 0;
        goto LAB_016c0514;
      }
      goto LAB_016c06e0;
    }
  }
  goto LAB_016bf5ec;
LAB_016c02f0:
  if ((puVar24[lVar19] == '\0') || (puVar24[lVar19 + 1] == '\0')) goto LAB_016c0318;
  if ((puVar24[lVar19 + 2] == '\0') || (bVar9 = lVar19 == 0x7fffe, lVar19 = lVar19 + 3, bVar9))
  goto LAB_016c0318;
  goto LAB_016c02f0;
LAB_016c0318:
  *puVar28 = *puVar24;
  if (1 < (int)uVar13) {
    (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(plVar16);
    lVar22 = *(long *)(param_1 + 0x60);
    lVar19 = 0;
    do {
      if (*(char *)(lVar22 + lVar19) == '\0') goto LAB_016c037c;
      if (*(char *)(lVar22 + lVar19 + 1) == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_016c037c;
      }
      if (*(char *)(lVar22 + lVar19 + 2) == '\0') {
        lVar19 = lVar19 + 2;
        goto LAB_016c037c;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    lVar19 = 0;
LAB_016c037c:
    puVar24 = PTR_DAT_04bb2120;
    if ((int)lVar19 != 0) {
      puVar24 = (undefined1 *)(lVar22 + 1);
    }
    puVar28[1] = *puVar24;
    if (uVar5 != 2) {
      (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(plVar16);
      lVar19 = *(long *)(param_1 + 0x60);
      uVar27 = 0;
      do {
        if (*(char *)(lVar19 + uVar27) == '\0') goto LAB_016c03f4;
        if (*(char *)(lVar19 + uVar27 + 1) == '\0') {
          uVar27 = uVar27 + 1;
          goto LAB_016c03f4;
        }
        if (*(char *)(lVar19 + uVar27 + 2) == '\0') {
          uVar27 = uVar27 + 2;
          goto LAB_016c03f4;
        }
        uVar27 = uVar27 + 3;
      } while (uVar27 != 0x80001);
      uVar27 = 0;
LAB_016c03f4:
      puVar24 = PTR_DAT_04bb2120;
      if ((uVar27 & 0xfffffffe) != 0) {
        puVar24 = (undefined1 *)(lVar19 + 2);
      }
      puVar28[2] = *puVar24;
      if (uVar5 != 3) {
        (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(plVar16);
        lVar19 = *(long *)(param_1 + 0x60);
        uVar27 = 0;
        do {
          if (*(char *)(lVar19 + uVar27) == '\0') goto LAB_016c0470;
          if (*(char *)(lVar19 + uVar27 + 1) == '\0') {
            uVar27 = uVar27 + 1;
            goto LAB_016c0470;
          }
          if (*(char *)(lVar19 + uVar27 + 2) == '\0') {
            uVar27 = uVar27 + 2;
            goto LAB_016c0470;
          }
          uVar27 = uVar27 + 3;
        } while (uVar27 != 0x80001);
        uVar27 = 0;
LAB_016c0470:
        puVar24 = PTR_DAT_04bb2120;
        if (2 < (uVar27 & 0xffffffff)) {
          puVar24 = (undefined1 *)(lVar19 + 3);
        }
        puVar28[3] = *puVar24;
        if (uVar5 != 4) {
          (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(plVar16);
          lVar19 = *(long *)(param_1 + 0x60);
          uVar27 = 0;
          do {
            if (*(char *)(lVar19 + uVar27) == '\0') goto LAB_016c04f0;
            if (*(char *)(lVar19 + uVar27 + 1) == '\0') {
              uVar27 = uVar27 + 1;
              goto LAB_016c04f0;
            }
            if (*(char *)(lVar19 + uVar27 + 2) == '\0') {
              uVar27 = uVar27 + 2;
              goto LAB_016c04f0;
            }
            uVar27 = uVar27 + 3;
          } while (uVar27 != 0x80001);
          uVar27 = 0;
LAB_016c04f0:
          puVar24 = PTR_DAT_04bb2120;
          if ((uVar27 & 0xfffffffc) != 0) {
            puVar24 = (undefined1 *)(lVar19 + 4);
          }
          puVar28[4] = *puVar24;
        }
      }
    }
  }
  if ((int)uVar26 < 5) {
LAB_016c0514:
    memset(puVar28 + uVar13,0,5 - (ulong)uVar13);
  }
LAB_016c052c:
  plVar16 = *(long **)(lVar29 + 0x728);
  if ((uVar14 & 1) == 0) {
LAB_016c0550:
    local_78 = CONCAT35(local_78._5_3_,8);
    local_88 = PTR_DAT_04bb3768 + 0x10;
    if (plVar16 != (long *)0x0) {
      puVar20 = (undefined8 *)*plVar16;
joined_r0x016c0580:
      if (puVar20 != (undefined8 *)0x0) {
        local_80 = (char *)((long)&local_78 + 4);
        local_6d = 0;
        uVar14 = (**(code **)*puVar20)();
        uVar14 = uVar14 & 0xffffffff;
        goto LAB_016c05fc;
      }
    }
    local_6d = 0;
    local_80 = (char *)((long)&local_78 + 4);
    uVar14 = 0;
  }
  else {
    if (plVar16 != (long *)0x0) {
      if ((undefined8 *)plVar16[3] != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)plVar16[3])();
        plVar16 = *(long **)(lVar29 + 0x728);
        goto LAB_016c0550;
      }
      local_78 = CONCAT35(local_78._5_3_,8);
      local_88 = PTR_DAT_04bb3768 + 0x10;
      puVar20 = (undefined8 *)*plVar16;
      goto joined_r0x016c0580;
    }
    local_6d = 0;
    local_80 = (char *)((long)&local_78 + 4);
    local_78 = CONCAT35(local_78._5_3_,8);
    uVar14 = 0;
    local_88 = PTR_DAT_04bb3768 + 0x10;
  }
LAB_016c05fc:
  uVar27 = FUN_02775100(*(long *)(lVar29 + 0x710) + *(long *)(lVar29 + 0x708),&local_88);
  if ((((uVar14 & 1) != 0) && (*(long *)(lVar29 + 0x728) != 0)) &&
     (puVar20 = *(undefined8 **)(*(long *)(lVar29 + 0x728) + 8), puVar20 != (undefined8 *)0x0)) {
    (**(code **)*puVar20)();
  }
  pcVar30 = *(char **)(param_1 + 0x80);
  if ((uVar27 & 1) == 0) {
LAB_016c06d4:
    *pcVar30 = '\0';
  }
  else {
    (**(code **)(local_88 + 0x18))(&local_88);
    __src = local_80;
    if (pcVar30 != local_80) {
      (**(code **)(local_88 + 0x18))(&local_88);
      lVar19 = 0;
      do {
        if (local_80[lVar19] == '\0') goto LAB_016c06ac;
        if (local_80[lVar19 + 1] == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_016c06ac;
        }
        if (local_80[lVar19 + 2] == '\0') {
          lVar19 = lVar19 + 2;
          goto LAB_016c06ac;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      lVar19 = 0;
LAB_016c06ac:
      iVar10 = (int)lVar19;
      if (*(int *)(param_1 + 0x88) <= (int)lVar19) {
        iVar10 = *(int *)(param_1 + 0x88) + -1;
      }
      memcpy(pcVar30,__src,(long)iVar10);
      pcVar30 = pcVar30 + iVar10;
      goto LAB_016c06d4;
    }
  }
  plVar16 = (long *)PTR_DAT_04bb46b0;
LAB_016c06e0:
  puVar2 = PTR_DAT_04bb32e8;
  lVar19 = *(long *)(lVar29 + 0xc68);
  if (lVar19 == 0) {
    *(undefined8 *)(*(long *)(lVar29 + 0xc50) + *(long *)(lVar29 + 0xc48)) =
         *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  }
  else {
    if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) {
      uVar14 = 0;
LAB_016c0738:
      plVar18 = *(long **)(lVar19 + 0x20);
      if (plVar18 != (long *)0x0) {
        local_88 = *(undefined **)(lVar29 + 0xc48);
        local_80 = *(char **)(lVar29 + 0xc50);
        local_78 = 8;
        (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
      }
    }
    else {
      uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      lVar19 = *(long *)(lVar29 + 0xc68);
      uVar14 = uVar14 & 0xffffffff;
      if (lVar19 != 0) goto LAB_016c0738;
    }
    *(undefined8 *)(*(long *)(lVar29 + 0xc50) + *(long *)(lVar29 + 0xc48)) =
         *(undefined8 *)(*(long *)puVar2 + 0x4060);
    if ((((uVar14 & 1) != 0) && (*(long *)(lVar29 + 0xc68) != 0)) &&
       (puVar20 = *(undefined8 **)(*(long *)(lVar29 + 0xc68) + 0x18), puVar20 != (undefined8 *)0x0))
    {
      (**(code **)*puVar20)();
    }
  }
  local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
  if ((*(byte *)(param_1 + 0x54) >> 1 & 1) == 0) {
    if (*(int *)(param_1 + 0x98) != 0) {
      FUN_0252d11c(&local_64);
      local_88 = PTR_DAT_04bb2020 + 0x10;
      local_80 = "IsHotelEditTutorial";
      iVar10 = FUN_02753180(&local_64,&local_88);
      if (iVar10 != 0) goto LAB_016c07b0;
    }
    lVar19 = *(long *)(lVar29 + 0x60);
    if (lVar19 == 0) {
      *(byte *)(*(long *)(lVar29 + 0x48) + *(long *)(lVar29 + 0x40)) =
           *(byte *)(*(long *)(lVar29 + 0x48) + *(long *)(lVar29 + 0x40)) & 0xfd;
    }
    else {
      if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) {
        uVar14 = 0;
LAB_016c09bc:
        plVar18 = *(long **)(lVar19 + 0x20);
        if (plVar18 != (long *)0x0) {
          local_88 = *(undefined **)(lVar29 + 0x40);
          local_80 = *(char **)(lVar29 + 0x48);
          local_78 = 0x158c;
          (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
        }
      }
      else {
        uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
        lVar19 = *(long *)(lVar29 + 0x60);
        uVar14 = uVar14 & 0xffffffff;
        if (lVar19 != 0) goto LAB_016c09bc;
      }
      *(byte *)(*(long *)(lVar29 + 0x48) + *(long *)(lVar29 + 0x40)) =
           *(byte *)(*(long *)(lVar29 + 0x48) + *(long *)(lVar29 + 0x40)) & 0xfd;
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar29 + 0x60) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(lVar29 + 0x60) + 0x18), puVar20 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar20)();
      }
    }
  }
LAB_016c07b0:
  if (*(int *)(param_1 + 0x98) != 0) {
    if (*(int *)(param_1 + 0x98) != 0) {
      FUN_0252d11c(&local_64);
      local_88 = PTR_DAT_04bb2020 + 0x10;
      local_80 = "IsHotelEditTutorial";
      iVar10 = FUN_02753180(&local_64,&local_88);
      if (iVar10 != 0) goto LAB_016c0804;
    }
    uVar14 = (ulong)local_88 >> 0x20;
    local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
    if (((*(byte *)(param_1 + 0x54) & 1) == 0) &&
       (local_88 = (undefined *)CONCAT44((int)uVar14,4), (*(byte *)(param_1 + 0x54) >> 4 & 1) != 0))
    {
      local_64 = *(undefined4 *)PTR_DAT_04bb4b48;
      FUN_007d6d7c(&local_64,pcVar1);
      uVar14 = FUN_016c7db8(&local_64);
      if ((uVar14 & 1) != 0) {
        FUN_016c7f78(&local_64,0);
        if ((*(long *)(lVar29 + 0x28) != 0) &&
           (plVar18 = *(long **)(*(long *)(lVar29 + 0x28) + 0x20), plVar18 != (long *)0x0)) {
          local_88 = *(undefined **)(lVar29 + 8);
          local_80 = *(char **)(lVar29 + 0x10);
          local_78 = 0x1594;
          (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
        }
        lVar19 = *(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8);
        *(byte *)(lVar19 + 0x1590) = *(byte *)(lVar19 + 0x1590) | 0x10;
      }
      if ((*(int *)(param_1 + 0xc) == -1) || (lVar19 = *plVar16, lVar19 == 0)) {
LAB_016c0a5c:
        puVar28 = (undefined1 *)0x0;
        lVar19 = *(long *)(lVar29 + 0x60);
joined_r0x016c0a64:
        if (lVar19 != 0) goto LAB_016c0a68;
LAB_016c0ad4:
        uVar14 = 0;
      }
      else {
        puVar20 = *(undefined8 **)(lVar19 + 0x10);
        if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
          lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
          if (lVar19 == 0) goto LAB_016c0a5c;
          lVar19 = lVar19 + 0x70;
        }
        else if (((puVar20 == (undefined8 *)0x0) || ((long *)puVar20[0x26] == (long *)0x0)) ||
                (lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar19 == 0))
        goto LAB_016c0a5c;
        if (*(char *)(param_1 + 8) == '\0') {
          puVar28 = &LAB_002057b0 + lVar19 + (long)*(int *)(param_1 + 0xc) * 0xc40;
          lVar19 = *(long *)(lVar29 + 0x60);
          goto joined_r0x016c0a64;
        }
        puVar28 = (undefined1 *)(lVar19 + (long)*(int *)(param_1 + 0xc) * 0xc40 + 0x20b9e8);
        lVar19 = *(long *)(lVar29 + 0x60);
        if (lVar19 == 0) goto LAB_016c0ad4;
LAB_016c0a68:
        if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) {
          uVar14 = 0;
        }
        else {
          uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
          lVar19 = *(long *)(lVar29 + 0x60);
          uVar14 = uVar14 & 0xffffffff;
          if (lVar19 == 0) goto LAB_016c0ad8;
        }
        plVar16 = *(long **)(lVar19 + 0x20);
        if (plVar16 != (long *)0x0) {
          local_88 = *(undefined **)(lVar29 + 0x40);
          local_80 = *(char **)(lVar29 + 0x48);
          local_78 = 0x158c;
          (**(code **)(*plVar16 + 0x20))(plVar16,&local_88);
        }
      }
LAB_016c0ad8:
      lVar19 = *(long *)(lVar29 + 0x40);
      lVar22 = *(long *)(lVar29 + 0x48);
      if ((*(long **)(puVar28 + 0x28) == (long *)0x0) ||
         (puVar20 = (undefined8 *)**(long **)(puVar28 + 0x28), puVar20 == (undefined8 *)0x0)) {
        uVar13 = 1;
      }
      else {
        uVar13 = (**(code **)*puVar20)();
        uVar13 = uVar13 ^ 1;
      }
      *(byte *)(lVar19 + lVar22) =
           *(byte *)(lVar19 + lVar22) & 0xfb |
           *(byte *)(*(long *)(puVar28 + 0x10) + *(long *)(puVar28 + 8)) & 4;
      if ((((uVar13 & 1) == 0) && (*(long *)(puVar28 + 0x28) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(puVar28 + 0x28) + 8), puVar20 != (undefined8 *)0x0))
      {
        (**(code **)*puVar20)();
      }
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar29 + 0x60) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(lVar29 + 0x60) + 0x18), puVar20 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar20)();
      }
    }
  }
LAB_016c0804:
  if ((*(long *)(lVar29 + 0x28) != 0) &&
     (plVar16 = *(long **)(*(long *)(lVar29 + 0x28) + 0x20), plVar16 != (long *)0x0)) {
    local_88 = *(undefined **)(lVar29 + 8);
    local_80 = *(char **)(lVar29 + 0x10);
    local_78 = 0x1594;
    (**(code **)(*plVar16 + 0x20))(plVar16,&local_88);
  }
  lVar19 = *(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8);
  *(byte *)(lVar19 + 0x1590) = *(byte *)(lVar19 + 0x1590) | 1;
  if ((((local_8c & 1) != 0) && (*(long *)(lVar29 + 0x28) != 0)) &&
     (puVar20 = *(undefined8 **)(*(long *)(lVar29 + 0x28) + 0x18), puVar20 != (undefined8 *)0x0)) {
    (**(code **)*puVar20)();
  }
LAB_016bf5ec:
  puVar21 = *(undefined4 **)PTR_DAT_04bb9a68;
  uVar12 = *(undefined4 *)PTR_DAT_04bb3238;
  *puVar21 = uVar12;
  *(undefined8 *)(puVar21 + 1) = 0;
  *(undefined8 *)(puVar21 + 3) = 0;
  puVar21[5] = 0xffffffff;
  *(undefined1 *)(puVar21 + 6) = 0;
  puVar21[7] = uVar12;
  *(undefined8 *)(puVar21 + 8) = 0;
  *(undefined8 *)(puVar21 + 10) = 0;
  puVar21[0xc] = 0xffffffff;
  puVar21[0xe] = uVar12;
  *(undefined8 *)(puVar21 + 0xf) = 0;
  *(undefined8 *)(puVar21 + 0x11) = 0;
  puVar21[0x13] = 0xffffffff;
  local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
  *(undefined1 *)(puVar21 + 0xd) = 1;
  *(undefined1 *)(puVar21 + 0x14) = 1;
  iVar10 = FUN_016d1b60();
  if ((iVar10 != -1) && (iVar11 = FUN_021d7e50(param_1 + 0x58), iVar10 == iVar11)) {
    uVar15 = FUN_016d1b60();
    lVar19 = FUN_021c9770(uVar15,1);
    if (lVar19 != 0) {
      FUN_020939a8(lVar19 + 0x10,3,1,0);
    }
  }
  if (*pcVar1 == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_0252d11c(&local_64);
    local_88 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "IsHotelEditTutorial";
    iVar10 = FUN_02753180(&local_64,&local_88);
    if (iVar10 != 0) {
      return;
    }
  }
  local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    return;
  }
  iVar10 = FUN_016d01c0();
  lVar19 = FUN_016c91a4();
  if (iVar10 < 8) {
    return;
  }
  lVar29 = *(long *)PTR_DAT_04bb4138;
  if (lVar29 == 0) {
    return;
  }
  (**(code **)(*(long *)(param_1 + 0x58) + 0x18))(param_1 + 0x58);
  uVar12 = FUN_006bd550(*(undefined8 *)(param_1 + 0x60),0);
  local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar12);
  lVar29 = FUN_0079e770(lVar29,&local_88);
  if (lVar19 == 0) {
    return;
  }
  if (lVar29 == 0) {
    return;
  }
  local_64 = CONCAT13(local_64._3_1_,0x80023);
  FUN_020fd3a0(&local_64,param_1 + 0x58);
  iVar10 = FUN_016b158c(&local_64);
  lVar29 = *(long *)(lVar19 + 0x28);
  if (lVar29 == 0) {
    uVar14 = 0;
  }
  else {
    if (*(undefined8 **)(lVar29 + 0x10) == (undefined8 *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (**(code **)**(undefined8 **)(lVar29 + 0x10))();
      lVar29 = *(long *)(lVar19 + 0x28);
      uVar14 = uVar14 & 0xffffffff;
      if (lVar29 == 0) goto LAB_016bfac4;
    }
    plVar16 = *(long **)(lVar29 + 0x20);
    if (plVar16 != (long *)0x0) {
      local_88 = *(undefined **)(lVar19 + 8);
      local_80 = *(char **)(lVar19 + 0x10);
      local_78 = 0x1638;
      (**(code **)(*plVar16 + 0x20))(plVar16,&local_88);
    }
  }
LAB_016bfac4:
  *(bool *)(*(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8) + 0x1634) = iVar10 == 0;
  if ((((uVar14 & 1) != 0) && (*(long *)(lVar19 + 0x28) != 0)) &&
     (puVar20 = *(undefined8 **)(*(long *)(lVar19 + 0x28) + 0x18), puVar20 != (undefined8 *)0x0)) {
    (**(code **)*puVar20)();
  }
  return;
}

