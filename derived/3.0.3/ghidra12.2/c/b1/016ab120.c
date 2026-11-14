
ulong FUN_016ab120(undefined8 param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined2 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined *puVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  char cVar26;
  ushort uVar27;
  uint *puVar28;
  int *piVar29;
  undefined8 uVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  uint local_120;
  undefined4 local_11c;
  undefined *local_118;
  long local_110;
  undefined8 local_108;
  undefined1 local_fd;
  undefined8 local_f8;
  char *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  lVar22 = *(long *)PTR_DAT_04bb46b0;
  if (lVar22 == 0) {
LAB_016ab1c8:
    uVar31 = 0;
  }
  else {
    puVar23 = *(undefined8 **)(lVar22 + 0x10);
    if ((*(byte *)(lVar22 + 0x453) & 1) == 0) {
      lVar22 = (**(code **)(*(long *)*puVar23 + 0x38))();
      if (lVar22 == 0) goto LAB_016ab1c8;
      lVar22 = lVar22 + 0x70;
    }
    else if (((puVar23 == (undefined8 *)0x0) || ((long *)puVar23[0x26] == (long *)0x0)) ||
            (lVar22 = (**(code **)(*(long *)puVar23[0x26] + 0x38))(), lVar22 == 0))
    goto LAB_016ab1c8;
    plVar1 = (long *)(lVar22 + 0x2181a8);
    if ((*(long *)(lVar22 + 0x2181c8) == 0) ||
       (puVar23 = *(undefined8 **)(*(long *)(lVar22 + 0x2181c8) + 0x10),
       puVar23 == (undefined8 *)0x0)) {
      uVar17 = 0;
    }
    else {
      uVar17 = (**(code **)*puVar23)();
      uVar17 = uVar17 & 0xffffffff;
    }
    local_f8 = (undefined *)(((ulong)local_f8 >> 8 & 0xffffff) << 8);
    uVar9 = FUN_016cedbc(&local_f8);
    local_f8._0_4_ = (uint)local_f8 & 0xffffff00;
    local_f8 = (undefined *)CONCAT44(1,(uint)local_f8);
    uVar10 = FUN_016cedbc(&local_f8);
    local_f8._0_4_ = (uint)local_f8 & 0xffffff00;
    local_f8 = (undefined *)CONCAT44(2,(uint)local_f8);
    uVar11 = FUN_016cedbc(&local_f8);
    local_f8._0_4_ = (uint)local_f8 & 0xffffff00;
    local_f8 = (undefined *)CONCAT44(3,(uint)local_f8);
    uVar12 = FUN_016cedbc(&local_f8);
    local_f8._0_4_ = (uint)local_f8 & 0xffffff00;
    local_f8 = (undefined *)CONCAT44(4,(uint)local_f8);
    uVar13 = FUN_016cedbc(&local_f8);
    local_f8._0_4_ = (uint)local_f8 & 0xffffff00;
    local_f8 = (undefined *)CONCAT44(5,(uint)local_f8);
    uVar14 = FUN_016cedbc(&local_f8);
    local_f8._0_4_ = (uint)local_f8 & 0xffffff00;
    local_f8 = (undefined *)CONCAT44(6,(uint)local_f8);
    uVar15 = FUN_016cedbc(&local_f8);
    local_f8._0_4_ = (uint)local_f8 & 0xffffff00;
    local_f8 = (undefined *)CONCAT44(7,(uint)local_f8);
    uVar16 = FUN_016cedbc(&local_f8);
    uVar9 = (uVar10 & 1) + (uVar9 & 1) + (uVar11 & 1) + (uVar12 & 1) +
            (uVar13 & 1) + (uVar14 & 1) + (uVar15 & 1) + (uVar16 & 1);
    uVar31 = (ulong)uVar9;
    if ((uVar9 != 0) && (7 < uVar9)) {
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      local_f0 = "HotelIsFullAllRoomWithVisitor";
      local_f8 = puVar2;
      uVar31 = FUN_0273f0a0(&local_f8);
      if ((uVar31 & 1) == 0) {
        local_f0 = "HotelIsFullAllRoomWithVisitor";
        local_f8 = puVar2;
        FUN_0273f3c4(&local_f8,1);
        uVar31 = 8;
      }
      else {
        puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar10 = *puVar18 ^ *puVar18 << 0xb;
        uVar11 = puVar18[3];
        *puVar18 = puVar18[1];
        puVar18[1] = puVar18[2];
        uVar10 = uVar10 >> 8 ^ uVar11 >> 0x13 ^ uVar10 ^ uVar11;
        puVar18[2] = uVar11;
        puVar18[3] = uVar10;
        uVar31 = (ulong)((uVar9 + (int)((ulong)uVar10 * 3 >> 0x20)) - 2);
      }
    }
    if ((*(long *)(lVar22 + 0x2181c8) != 0) &&
       (plVar19 = *(long **)(*(long *)(lVar22 + 0x2181c8) + 0x20), plVar19 != (long *)0x0)) {
      local_f8 = (undefined *)*plVar1;
      local_f0 = *(char **)(lVar22 + 0x2181b0);
      uStack_e8 = 0x179e4;
      (**(code **)(*plVar19 + 0x20))(plVar19,&local_f8);
    }
    lVar3 = *(long *)(lVar22 + 0x2181b0) + *plVar1;
    if ((int)uVar31 == 0) {
      FUN_02779788(lVar3);
    }
    else {
      FUN_02779020(lVar3,param_1);
      if ((*(long *)(lVar22 + 0x2181c8) != 0) &&
         (plVar19 = *(long **)(*(long *)(lVar22 + 0x2181c8) + 0x20), plVar19 != (long *)0x0)) {
        local_f8 = (undefined *)*plVar1;
        local_f0 = *(char **)(lVar22 + 0x2181b0);
        uStack_e8 = 0x179e4;
        (**(code **)(*plVar19 + 0x20))(plVar19,&local_f8);
      }
      uVar9 = FUN_02778f3c(*(long *)(lVar22 + 0x2181b0) + *plVar1);
      local_70 = 0;
      local_f8 = (undefined *)0x0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = (char *)0x0;
      uStack_e8 = 0;
      FUN_016b0734(&local_f8,0);
      uVar32 = 0;
      lVar3 = lVar22 + 0x218210;
      lVar33 = lVar3;
      do {
        lVar25 = lVar33;
        if (7 < uVar32) {
          lVar25 = lVar3;
        }
        lVar24 = *(long *)(lVar25 + 0x28);
        if (lVar24 == 0) {
          uVar20 = 0;
        }
        else {
          if (*(undefined8 **)(lVar24 + 0x10) == (undefined8 *)0x0) {
            uVar20 = 0;
            plVar19 = *(long **)(lVar24 + 0x20);
          }
          else {
            uVar20 = (**(code **)**(undefined8 **)(lVar24 + 0x10))();
            uVar20 = uVar20 & 0xffffffff;
            if (*(long *)(lVar25 + 0x28) == 0) goto LAB_016ab4c8;
            plVar19 = *(long **)(*(long *)(lVar25 + 0x28) + 0x20);
          }
          if (plVar19 != (long *)0x0) {
            local_118 = *(undefined **)(lVar25 + 8);
            local_110 = *(long *)(lVar25 + 0x10);
            local_108 = 3;
            (**(code **)(*plVar19 + 0x20))(plVar19,&local_118);
          }
        }
LAB_016ab4c8:
        uVar21 = FUN_016b1390(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8),&local_f8);
        if ((uVar21 & 1) != 0) {
          if ((*(long *)(lVar25 + 0x28) != 0) &&
             (plVar19 = *(long **)(*(long *)(lVar25 + 0x28) + 0x20), plVar19 != (long *)0x0)) {
            local_118 = *(undefined **)(lVar25 + 8);
            local_110 = *(long *)(lVar25 + 0x10);
            local_108 = 3;
            (**(code **)(*plVar19 + 0x20))(plVar19,&local_118);
          }
          uVar8 = FUN_020fd7d8(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8));
          FUN_020fcca0(&local_f8,uVar8);
        }
        if ((((uVar20 & 1) != 0) && (*(long *)(lVar25 + 0x28) != 0)) &&
           (puVar23 = *(undefined8 **)(*(long *)(lVar25 + 0x28) + 0x18),
           puVar23 != (undefined8 *)0x0)) {
          (**(code **)*puVar23)();
        }
        uVar32 = uVar32 + 1;
        lVar33 = lVar33 + 0x38;
      } while (uVar31 != uVar32);
      if ((int)uVar31 < 8) {
        uVar32 = uVar31;
        do {
          lVar33 = lVar3 + uVar32 * 0x38;
          if (7 < (uint)uVar32) {
            lVar33 = lVar3;
          }
          lVar25 = *(long *)(lVar33 + 0x28);
          if (lVar25 == 0) {
            puVar4 = (undefined2 *)(*(long *)(lVar33 + 0x10) + *(long *)(lVar33 + 8));
            *puVar4 = 0x23;
            *(undefined1 *)(puVar4 + 1) = 8;
          }
          else {
            if (*(undefined8 **)(lVar25 + 0x10) == (undefined8 *)0x0) {
              uVar20 = 0;
              plVar19 = *(long **)(lVar25 + 0x20);
joined_r0x016ab618:
              if (plVar19 != (long *)0x0) {
                local_118 = *(undefined **)(lVar33 + 8);
                local_110 = *(long *)(lVar33 + 0x10);
                local_108 = 3;
                (**(code **)(*plVar19 + 0x20))(plVar19,&local_118);
              }
            }
            else {
              uVar20 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
              uVar20 = uVar20 & 0xffffffff;
              if (*(long *)(lVar33 + 0x28) != 0) {
                plVar19 = *(long **)(*(long *)(lVar33 + 0x28) + 0x20);
                goto joined_r0x016ab618;
              }
            }
            puVar4 = (undefined2 *)(*(long *)(lVar33 + 0x10) + *(long *)(lVar33 + 8));
            *puVar4 = 0x23;
            *(undefined1 *)(puVar4 + 1) = 8;
            if ((((uVar20 & 1) != 0) && (*(long *)(lVar33 + 0x28) != 0)) &&
               (puVar23 = *(undefined8 **)(*(long *)(lVar33 + 0x28) + 0x18),
               puVar23 != (undefined8 *)0x0)) {
              (**(code **)*puVar23)();
            }
          }
          uVar10 = (uint)uVar32 + 1;
          uVar32 = (ulong)uVar10;
        } while (uVar10 != 8);
      }
      if ((uVar9 & 1) == 0) {
        if ((*(long *)(lVar22 + 0x2181c8) != 0) &&
           (plVar19 = *(long **)(*(long *)(lVar22 + 0x2181c8) + 0x20), plVar19 != (long *)0x0)) {
          local_118 = (undefined *)*plVar1;
          local_110 = *(long *)(lVar22 + 0x2181b0);
          local_108 = 0x179e4;
          (**(code **)(*plVar19 + 0x20))(plVar19,&local_118);
        }
        *(undefined1 *)(*(long *)(lVar22 + 0x2181b0) + *plVar1 + 0x179d0) = 0xff;
      }
      else {
        puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar9 = *puVar18 ^ *puVar18 << 0xb;
        uVar10 = puVar18[3];
        *puVar18 = puVar18[1];
        puVar18[1] = puVar18[2];
        uVar9 = uVar9 >> 8 ^ uVar10 >> 0x13 ^ uVar9 ^ uVar10;
        uVar32 = uVar31 * uVar9;
        puVar18[2] = uVar10;
        puVar18[3] = uVar9;
        if ((*(long *)(lVar22 + 0x2181c8) != 0) &&
           (plVar19 = *(long **)(*(long *)(lVar22 + 0x2181c8) + 0x20), plVar19 != (long *)0x0)) {
          local_118 = (undefined *)*plVar1;
          local_110 = *(undefined8 *)(lVar22 + 0x2181b0);
          local_108 = 0x179e4;
          (**(code **)(*plVar19 + 0x20))(plVar19,&local_118);
        }
        uVar8 = (undefined1)(uVar32 >> 0x20);
        if ((uVar32 >> 0x20 & 0xf8) != 0) {
          uVar8 = 0xff;
        }
        local_fd = 0;
        uVar20 = (ulong)local_108 >> 0x20;
        *(undefined1 *)(*(long *)(lVar22 + 0x2181b0) + *plVar1 + 0x179d0) = uVar8;
        local_108 = CONCAT44((uint)uVar20 & 0xffffff00,8);
        local_110 = (long)&local_108 + 4;
        local_118 = PTR_DAT_04bb3768 + 0x10;
        lVar33 = lVar3 + (uVar32 >> 0x20) * 0x38;
        if (uVar32 >> 0x23 != 0) {
          lVar33 = lVar3;
        }
        if ((*(long **)(lVar33 + 0x28) == (long *)0x0) ||
           (puVar23 = (undefined8 *)**(long **)(lVar33 + 0x28), puVar23 == (undefined8 *)0x0)) {
          uVar9 = 1;
        }
        else {
          uVar9 = (**(code **)*puVar23)();
          uVar9 = uVar9 ^ 1;
        }
        pbVar5 = (byte *)(*(long *)(lVar33 + 0x10) + *(long *)(lVar33 + 8));
        FUN_038d1270(&local_118,"-----");
        uVar32 = (ulong)*pbVar5;
        if (uVar32 < 0x23) {
          FUN_038d1270(&local_118,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar32 * 8 + 0xb0),
                       pbVar5[1]);
        }
        if ((((uVar9 & 1) == 0) && (*(long *)(lVar33 + 0x28) != 0)) &&
           (puVar23 = *(undefined8 **)(*(long *)(lVar33 + 0x28) + 8), puVar23 != (undefined8 *)0x0))
        {
          (**(code **)*puVar23)();
        }
        uVar30 = *(undefined8 *)PTR_DAT_04bb4138;
        (**(code **)(local_118 + 0x18))(&local_118);
        local_120 = FUN_006bd550(local_110,0);
        puVar18 = (uint *)FUN_0079e770(uVar30,&local_120);
        puVar7 = PTR_DAT_04bb40b8;
        puVar2 = PTR_DAT_04bb40b0;
        if (puVar18 != (uint *)0x0) {
          if (*puVar18 != 0) {
            cVar26 = *PTR_DAT_04bb40b0;
            do {
              if (cVar26 == '\0') {
                cVar26 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar2 = 1;
                *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
              }
              else {
                uVar9 = *(uint *)(puVar7 + 0x50);
                if (-1 < (int)uVar9) {
                  if ((ushort *)((ulong)uVar9 + (long)puVar18) != (ushort *)0x0) {
                    uVar27 = *(ushort *)((ulong)uVar9 + (long)puVar18);
                    goto LAB_016ab93c;
                  }
                  break;
                }
                if (uVar9 != 0xffffffff) break;
              }
              puVar28 = (uint *)(ulong)*puVar18;
              uVar27 = 0xfffe;
              if ((*puVar18 == 0) || (puVar18 == puVar28)) goto LAB_016ab93c;
              lVar3 = 0xc;
              if (*(char *)((long)puVar18 + (10 - (long)puVar28)) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar18 + (lVar3 - (long)puVar28);
              if (lVar3 == 0) break;
              uVar32 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar28));
              *(undefined4 *)(puVar7 + 0x50) = 0xfffffffe;
              if (uVar32 == 0) break;
              piVar29 = (int *)(lVar3 + 4);
              while (piVar29[-1] != -0x78f0e1d7) {
                piVar29 = piVar29 + 2;
                uVar32 = uVar32 - 1;
                if (uVar32 == 0) goto LAB_016ab938;
              }
              iVar6 = 0;
              if (*piVar29 != -1) {
                iVar6 = *piVar29;
              }
              *(int *)(puVar7 + 0x50) = iVar6;
              if (*puVar18 == 0) break;
            } while( true );
          }
LAB_016ab938:
          uVar27 = 0xfffe;
LAB_016ab93c:
          local_120 = (uint)uVar27;
          local_11c = 0;
          FUN_0277d4ac(&local_120);
          FUN_016d1ea0(0,&local_120,PTR_DAT_04bb37e0);
        }
      }
    }
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar22 + 0x2181c8) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar22 + 0x2181c8) + 0x18),
       puVar23 != (undefined8 *)0x0)) {
      (**(code **)*puVar23)();
    }
  }
  return uVar31;
}

