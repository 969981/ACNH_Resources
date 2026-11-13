
void FUN_013390e0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  int *piVar20;
  char *pcVar21;
  ulong uVar22;
  long *plVar23;
  int iVar24;
  undefined8 uVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  int iVar29;
  undefined *local_108;
  long *local_100;
  undefined1 local_f8;
  byte local_f7;
  uint local_f4;
  uint uStack_f0;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined2 local_be;
  undefined4 local_bc;
  undefined *local_b8;
  undefined8 *local_b0;
  undefined *puStack_a8;
  undefined *local_90;
  undefined8 *local_88;
  undefined *puStack_80;
  
  puVar13 = PTR_DAT_04bb4c28;
  local_b8 = PTR_DAT_04bbc1d0 + 0x10;
  uVar6 = *(uint *)(param_2 + 0x138);
  local_b0 = (undefined8 *)(PTR_DAT_04bbbff8 + 0x10);
  puStack_a8 = PTR_LAB_04bb4cc8;
  puStack_80 = PTR_LAB_04bb4cc0;
  if (0 < (int)uVar6) {
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    uVar28 = 0;
    iVar10 = (int)DAT_05194138 - (int)DAT_05194100;
    iVar11 = DAT_05194138._4_4_ - DAT_05194100._4_4_;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    local_90 = local_b8;
    local_88 = local_b0;
    do {
      lVar27 = *(long *)(*(long *)(param_2 + 0x120) + uVar28 * 8);
      puVar19 = (undefined8 *)(**(code **)(*(long *)(lVar27 + 0x60) + 0xf0))();
      uVar25 = *puVar19;
      local_be = 0;
      local_bc = 0;
      local_c0 = (undefined2)uVar25;
      FUN_0277d4ac(&local_c0);
      local_be = (undefined2)((ulong)uVar25 >> 0x10);
      local_bc = (undefined4)((ulong)uVar25 >> 0x20);
      piVar20 = (int *)(**(code **)(*(long *)(lVar27 + 0x98) + 0xf0))();
      iVar7 = *piVar20;
      piVar20 = (int *)(**(code **)(*(long *)(lVar27 + 200) + 0xf0))();
      iVar8 = *piVar20;
      pcVar21 = (char *)(**(code **)(*(long *)(lVar27 + 0xf8) + 0xf0))((long *)(lVar27 + 0xf8));
      cVar9 = *pcVar21;
      uVar22 = FUN_0277da10(&local_c0);
      if ((uVar22 & 1) != 0) {
        local_d8 = 0;
        local_c8 = 0;
        local_e8 = puVar2;
        puStack_e0 = puVar3;
        local_d0 = puVar3;
        FUN_012e5518(&local_e8,&local_c0);
        iVar1 = local_c8._4_4_ + 1;
        if (iVar1 != local_d8._4_4_) {
          iVar14 = (int)local_d8;
          iVar7 = iVar7 + iVar10;
          iVar8 = iVar8 + iVar11;
          iVar4 = (int)DAT_05194100 + iVar7;
          iVar5 = DAT_05194100._4_4_ + iVar8;
          iVar24 = local_d8._4_4_;
          iVar29 = (int)local_d8;
          do {
            uVar26 = iVar29 + iVar7;
            plVar23 = (long *)(*(code *)*local_88)(&local_88);
            uVar16 = (**(code **)(*plVar23 + 0x18))();
            if (uVar26 < uVar16) {
              uVar16 = iVar24 + iVar8;
              plVar23 = (long *)(*(code *)*local_88)(&local_88);
              uVar17 = (**(code **)(*plVar23 + 0x20))();
              if (uVar16 < uVar17) {
                if (cVar9 == '\x01') {
                  plVar23 = (long *)(*(code *)*local_b0)(&local_b0);
                  uVar17 = (**(code **)(*plVar23 + 0x18))();
                  uVar18 = (**(code **)(*plVar23 + 0x20))(plVar23);
                  if (uVar17 <= uVar26) {
                    uVar26 = 0;
                  }
                  if (uVar18 <= uVar16) {
                    uVar16 = 0;
                  }
                  local_100 = plVar23;
                  puVar12 = puVar13;
                  if ((plVar23[5] == 0) ||
                     (puVar19 = *(undefined8 **)(plVar23[5] + 0x10), puVar19 == (undefined8 *)0x0))
                  goto LAB_01339488;
LAB_01339418:
                  plVar23 = local_100;
                  local_f8 = 0;
                  bVar15 = (**(code **)*puVar19)();
                  local_f7 = bVar15 & 1;
                  local_108 = PTR_DAT_04bb4c28 + 0x10;
                  local_f4 = uVar26;
                  uStack_f0 = uVar16;
                  FUN_013394f8(&local_108,&local_c0,iVar4,iVar5,iVar29 + iVar4,iVar24 + iVar5);
                  if (((bVar15 & 1) != 0) &&
                     ((plVar23[5] != 0 &&
                      (puVar19 = *(undefined8 **)(plVar23[5] + 0x18), puVar19 != (undefined8 *)0x0))
                     )) {
                    (**(code **)*puVar19)();
                  }
                }
                else if (cVar9 == '\0') {
                  plVar23 = (long *)(*(code *)*local_88)(&local_88);
                  uVar17 = (**(code **)(*plVar23 + 0x18))();
                  uVar18 = (**(code **)(*plVar23 + 0x20))(plVar23);
                  if (uVar17 <= uVar26) {
                    uVar26 = 0;
                  }
                  if (uVar18 <= uVar16) {
                    uVar16 = 0;
                  }
                  local_100 = plVar23;
                  puVar12 = PTR_DAT_04bb4c28;
                  if ((plVar23[5] != 0) &&
                     (puVar19 = *(undefined8 **)(plVar23[5] + 0x10), puVar19 != (undefined8 *)0x0))
                  goto LAB_01339418;
LAB_01339488:
                  local_108 = puVar12 + 0x10;
                  local_f7 = 0;
                  local_f8 = 0;
                  local_f4 = uVar26;
                  uStack_f0 = uVar16;
                  FUN_013394f8(&local_108,&local_c0,iVar4,iVar5,iVar29 + iVar4,iVar24 + iVar5);
                }
              }
            }
            if (iVar29 < (int)local_c8) {
              iVar29 = iVar29 + 1;
            }
            else {
              iVar24 = iVar24 + 1;
              iVar29 = (int)local_d8;
            }
          } while ((iVar14 != iVar29) || (iVar1 != iVar24));
        }
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != uVar6);
  }
  return;
}

