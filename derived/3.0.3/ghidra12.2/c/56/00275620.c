
void FUN_00275620(undefined8 param_1,undefined8 param_2,undefined8 *param_3,byte *param_4,
                 long *param_5,void *param_6,undefined4 *param_7)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  void *pvVar16;
  uint uVar17;
  ulong uVar18;
  char *pcVar19;
  long lVar20;
  uint uVar21;
  ushort uVar22;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined2 local_da;
  undefined2 local_d8;
  undefined2 local_d6;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined2 local_cc;
  undefined2 local_ca;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined2 local_c4;
  undefined2 local_c2;
  ushort local_c0;
  undefined1 local_98;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  
  puVar4 = PTR_DAT_04bc1510;
  if ((0x3b5 < *(uint *)(param_3 + 1)) || (*(uint *)(param_3 + 1) < 0xf)) goto LAB_00275654;
  pcVar19 = (char *)*param_3;
  lVar20 = *(long *)PTR_DAT_04bc1510;
  memset(param_6,0,0x20);
  (**(code **)(*(long *)((long)param_6 + 0x2e0) + 0x18))((long)param_6 + 0x2e0);
  (**(code **)(*(long *)((long)param_6 + 0x120) + 0x18))((long)param_6 + 0x120);
  *(undefined1 *)((long)param_6 + 0x400) = 0xff;
  memset((void *)((long)param_6 + 0x20),0,0x40);
  (**(code **)(*(long *)((long)param_6 + 0x328) + 0x18))((long)param_6 + 0x328);
  (**(code **)(*(long *)((long)param_6 + 400) + 0x18))((long)param_6 + 400);
  *(undefined1 *)((long)param_6 + 0x401) = 0xff;
  memset((void *)((long)param_6 + 0x60),0,0x40);
  (**(code **)(*(long *)((long)param_6 + 0x370) + 0x18))((long)param_6 + 0x370);
  (**(code **)(*(long *)((long)param_6 + 0x200) + 0x18))((long)param_6 + 0x200);
  *(undefined1 *)((long)param_6 + 0x402) = 0xff;
  memset((void *)((long)param_6 + 0xa0),0,0x40);
  (**(code **)(*(long *)((long)param_6 + 0x3b8) + 0x18))((long)param_6 + 0x3b8);
  (**(code **)(*(long *)((long)param_6 + 0x270) + 0x18))((long)param_6 + 0x270);
  *(undefined1 *)((long)param_6 + 0x403) = 0xff;
  memset((void *)((long)param_6 + 0xe0),0,0x40);
  cVar2 = *pcVar19;
  *param_4 = pcVar19[1];
  *(char *)((long)param_6 + 0x404) = pcVar19[2];
  uVar15 = *(uint *)(pcVar19 + 0xb);
  if (((cVar2 != '\a') && (cVar2 != '\x02')) || ((*param_4 & 0xfe) != 2)) {
    uVar18 = (*(ulong *)(pcVar19 + 3) & 0xff00ff00ff00ff00) >> 8 |
             (*(ulong *)(pcVar19 + 3) & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    lVar11 = FUN_002ba788(*(undefined8 *)puVar4);
    uVar12 = FUN_002b43ec(lVar11 + 8);
    if ((uVar18 >> 0x20 | uVar18 << 0x20) != uVar12) {
      local_80._0_4_ = 0;
      local_e8 = CONCAT44(local_e8._4_4_,0x2c18);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_e8 + 4),(Result *)&local_80);
      goto LAB_00275678;
    }
    uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    uVar9 = FUN_002b43f4(lVar11 + 8);
    if ((uVar15 >> 0x10 | uVar15 << 0x10) != uVar9) goto LAB_00275654;
  }
  if (((cVar2 == '\a') || (cVar2 == '\x02')) && (*param_4 != 0)) {
    local_e8 = local_e8 & 0xffffffff00000000;
  }
  else {
    if (*(uint *)(param_3 + 1) < 0x13) {
LAB_00275654:
      uVar10 = 0x2c18;
    }
    else {
      uVar13 = FUN_0026c894(DAT_04c603c8);
      uVar10 = FUN_002840d8(uVar13,*param_3,*(undefined4 *)(param_3 + 1));
      *param_7 = uVar10;
      if (*(uint *)(param_3 + 1) < 0x14) goto LAB_00275654;
      plVar1 = (long *)(lVar20 + 0x10);
      bVar3 = pcVar19[0xf];
      bVar5 = FUN_002ab700(plVar1);
      if (bVar3 != bVar5) {
        local_e0 = 0;
        local_e8 = 1;
        (**(code **)(*plVar1 + 0x10))(plVar1,&local_e8);
        local_80._0_4_ = 0;
        *param_4 = 6;
        local_e8 = CONCAT44(local_e8._4_4_,0x10c26);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((long)&local_e8 + 4),(Result *)&local_80);
        goto LAB_00275678;
      }
      uVar15 = *(uint *)(param_3 + 1);
      if (uVar15 < (uint)bVar3 * 2 + 0x14) goto LAB_00275654;
      if (bVar3 == 0) {
        uVar9 = 0x10;
      }
      else {
        lVar20 = 0;
        uVar22 = 0;
        do {
          bVar5 = pcVar19[lVar20 + 0x11];
          bVar6 = FUN_002ab970(plVar1,pcVar19[lVar20 + 0x10]);
          if (bVar5 < bVar6) {
            *param_4 = 2;
            uVar10 = 0x646f;
            goto LAB_00275a4c;
          }
          if (bVar6 < bVar5) {
            *param_4 = 3;
            uVar10 = 0x6470;
            goto LAB_00275a4c;
          }
          uVar22 = uVar22 + 1;
          lVar20 = lVar20 + 2;
        } while (uVar22 < bVar3);
        uVar15 = *(uint *)(param_3 + 1);
        uVar9 = (int)lVar20 + 0x10;
      }
      uVar21 = (uint)bVar3 * 2 + 0x16;
      if (((uVar15 < uVar21) ||
          (uVar17 = (uint)(*(ushort *)(pcVar19 + uVar9) >> 8) |
                    (*(ushort *)(pcVar19 + uVar9) & 0xff00ff) << 8, uVar17 - 0x41 < 0xffffffdf)) ||
         (uVar21 = uVar21 + uVar17, uVar15 < uVar21)) goto LAB_00275654;
      (**(code **)(*param_5 + 0x18))(&local_e8,param_5,pcVar19 + (uVar9 + 2));
      local_e0 = 0;
      local_e8 = 0x200000000000;
      (**(code **)(*param_5 + 0x20))(param_5,&local_e8);
      uVar21 = uVar21 + 0x27;
      if (*(uint *)(param_3 + 1) < uVar21) {
        local_e8 = CONCAT44(local_e8._4_4_,0x2c18);
        goto LAB_00275664;
      }
      uVar17 = uVar9 + 2 + uVar17;
      memcpy(param_6,pcVar19 + uVar17,0x20);
      uVar15 = (*(uint *)(pcVar19 + (uVar17 + 0x20)) & 0xff00ff00) >> 8 |
               (*(uint *)(pcVar19 + (uVar17 + 0x20)) & 0xff00ff) << 8;
      *(uint *)((long)param_6 + 0x408) = uVar15 >> 0x10 | uVar15 << 0x10;
      *(char *)((long)param_6 + 0x405) = pcVar19[uVar17 + 0x24];
      *(char *)((long)param_6 + 0x406) = pcVar19[uVar17 + 0x25];
      bVar3 = pcVar19[uVar17 + 0x26];
      if (bVar3 < 5) {
        if (bVar3 != 0) {
          uVar18 = 0;
          uVar17 = uVar17 + 0x27;
          do {
            uVar15 = *(uint *)(param_3 + 1);
            if (uVar15 < uVar21 + 1) {
LAB_00276100:
              uVar10 = 0x2c18;
LAB_00275a4c:
              local_e8 = CONCAT44(local_e8._4_4_,uVar10);
              goto LAB_00275a50;
            }
            if (pcVar19[uVar17] != '\x02') {
              uVar21 = uVar21 + 0x51;
              if (uVar21 <= uVar15) {
                lVar20 = 0;
                do {
                  uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 1 + (int)lVar20));
                  auStack_90[lVar20 + -0x58] = uVar7;
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x50);
                local_98 = 0;
                FUN_00227930(&local_80,&local_e8);
                (**(code **)(*(long *)((long)param_6 + uVar18 * 0x70 + 0x120) + 0x10))
                          (auStack_90,(long)param_6 + uVar18 * 0x70 + 0x120,&local_80);
                uVar17 = uVar17 + 0x51;
                goto LAB_00275cec;
              }
              goto LAB_00276100;
            }
            uVar21 = uVar21 + 0x29;
            if (uVar15 < uVar21) goto LAB_00276100;
            uVar8 = FUN_002284b0(pcVar19 + (uVar17 + 1));
            local_e8 = CONCAT62(local_e8._2_6_,uVar8);
            uVar8 = FUN_002284b0(pcVar19 + (uVar17 + 3));
            local_e8._0_4_ = CONCAT22(uVar8,(undefined2)local_e8);
            uVar8 = FUN_002284b0(pcVar19 + (uVar17 + 5));
            local_e8._0_6_ = CONCAT24(uVar8,(undefined4)local_e8);
            uVar8 = FUN_002284b0(pcVar19 + (uVar17 + 7));
            local_e8 = CONCAT26(uVar8,(undefined6)local_e8);
            uVar8 = FUN_002284b0(pcVar19 + (uVar17 + 9));
            local_e0 = CONCAT22(local_e0._2_2_,uVar8);
            uVar8 = FUN_002284b0(pcVar19 + (uVar17 + 0xb));
            local_e0 = CONCAT22(uVar8,(undefined2)local_e0);
            local_dc = FUN_002284b0(pcVar19 + (uVar17 + 0xd));
            local_da = FUN_002284b0(pcVar19 + (uVar17 + 0xf));
            local_d8 = FUN_002284b0(pcVar19 + (uVar17 + 0x11));
            local_d6 = FUN_002284b0(pcVar19 + (uVar17 + 0x13));
            local_d4 = FUN_002284b0(pcVar19 + (uVar17 + 0x15));
            local_d2 = FUN_002284b0(pcVar19 + (uVar17 + 0x17));
            local_d0 = FUN_002284b0(pcVar19 + (uVar17 + 0x19));
            local_ce = FUN_002284b0(pcVar19 + (uVar17 + 0x1b));
            local_cc = FUN_002284b0(pcVar19 + (uVar17 + 0x1d));
            local_ca = FUN_002284b0(pcVar19 + (uVar17 + 0x1f));
            local_c8 = FUN_002284b0(pcVar19 + (uVar17 + 0x21));
            local_c6 = FUN_002284b0(pcVar19 + (uVar17 + 0x23));
            local_c4 = FUN_002284b0(pcVar19 + (uVar17 + 0x25));
            local_c2 = FUN_002284b0(pcVar19 + (uVar17 + 0x27));
            uVar17 = uVar17 + 0x29;
            local_c0 = 0;
            FUN_002279b0(&local_80,&local_e8);
            (**(code **)(*(long *)((long)param_6 + uVar18 * 0x70 + 0x120) + 0x10))
                      (auStack_90,(long)param_6 + uVar18 * 0x70 + 0x120,&local_80);
LAB_00275cec:
            uVar15 = *(uint *)(param_3 + 1);
            if (uVar15 < uVar21 + 1) goto LAB_00276100;
            if (pcVar19[uVar17] != '\x02') {
              uVar21 = uVar21 + 0x29;
              if (uVar21 <= uVar15) {
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 1));
                local_e8 = CONCAT71(local_e8._1_7_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 2));
                local_e8._0_2_ = CONCAT11(uVar7,(undefined1)local_e8);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 3));
                local_e8._0_3_ = CONCAT12(uVar7,(undefined2)local_e8);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 4));
                local_e8._0_4_ = CONCAT13(uVar7,(undefined3)local_e8);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 5));
                local_e8._0_5_ = CONCAT14(uVar7,(undefined4)local_e8);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 6));
                local_e8._0_6_ = CONCAT15(uVar7,(undefined5)local_e8);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 7));
                local_e8._0_7_ = CONCAT16(uVar7,(undefined6)local_e8);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 8));
                local_e8 = CONCAT17(uVar7,(undefined7)local_e8);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 9));
                local_e0 = CONCAT31(local_e0._1_3_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 10));
                local_e0._0_2_ = CONCAT11(uVar7,(undefined1)local_e0);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0xb));
                local_e0._0_3_ = CONCAT12(uVar7,(undefined2)local_e0);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0xc));
                local_e0 = CONCAT13(uVar7,(undefined3)local_e0);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0xd));
                local_dc = CONCAT11(local_dc._1_1_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0xe));
                local_dc = CONCAT11(uVar7,(undefined1)local_dc);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0xf));
                local_da = CONCAT11(local_da._1_1_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x10));
                local_da = CONCAT11(uVar7,(undefined1)local_da);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x11));
                local_d8 = CONCAT11(local_d8._1_1_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x12));
                local_d8 = CONCAT11(uVar7,(undefined1)local_d8);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x13));
                local_d6 = CONCAT11(local_d6._1_1_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x14));
                local_d6 = CONCAT11(uVar7,(undefined1)local_d6);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x15));
                local_d4 = CONCAT11(local_d4._1_1_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x16));
                local_d4 = CONCAT11(uVar7,(undefined1)local_d4);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x17));
                local_d2 = CONCAT11(local_d2._1_1_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x18));
                local_d2 = CONCAT11(uVar7,(undefined1)local_d2);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x19));
                local_d0 = CONCAT11(local_d0._1_1_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x1a));
                local_d0 = CONCAT11(uVar7,(undefined1)local_d0);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x1b));
                local_ce = CONCAT11(local_ce._1_1_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x1c));
                local_ce = CONCAT11(uVar7,(undefined1)local_ce);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x1d));
                local_cc = CONCAT11(local_cc._1_1_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x1e));
                local_cc = CONCAT11(uVar7,(undefined1)local_cc);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x1f));
                local_ca = CONCAT11(local_ca._1_1_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x20));
                local_ca = CONCAT11(uVar7,(undefined1)local_ca);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x21));
                local_c8 = CONCAT11(local_c8._1_1_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x22));
                local_c8 = CONCAT11(uVar7,(undefined1)local_c8);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x23));
                local_c6 = CONCAT11(local_c6._1_1_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x24));
                local_c6 = CONCAT11(uVar7,(undefined1)local_c6);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x25));
                local_c4 = CONCAT11(local_c4._1_1_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x26));
                local_c4 = CONCAT11(uVar7,(undefined1)local_c4);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x27));
                local_c2 = CONCAT11(local_c2._1_1_,uVar7);
                uVar7 = FUN_002284d0(pcVar19 + (uVar17 + 0x28));
                local_c2 = CONCAT11(uVar7,(undefined1)local_c2);
                pvVar16 = (void *)((long)param_6 + uVar18 * 0x48);
                uVar17 = uVar17 + 0x29;
                local_c0 = local_c0 & 0xff00;
                FUN_00227930(&local_80,&local_e8);
                lVar20 = *(long *)((long)pvVar16 + 0x2e0);
                puVar14 = &local_80;
                goto LAB_00276090;
              }
              goto LAB_00276100;
            }
            uVar21 = uVar21 + 0x15;
            if (uVar15 < uVar21) goto LAB_00276100;
            uVar8 = FUN_002284b0(pcVar19 + (uVar17 + 1));
            local_80._0_4_ = CONCAT22(local_80._2_2_,uVar8);
            uVar8 = FUN_002284b0(pcVar19 + (uVar17 + 3));
            local_80._0_4_ = CONCAT22(uVar8,(undefined2)local_80);
            local_80._4_2_ = FUN_002284b0(pcVar19 + (uVar17 + 5));
            local_80._6_2_ = FUN_002284b0(pcVar19 + (uVar17 + 7));
            local_78 = FUN_002284b0(pcVar19 + (uVar17 + 9));
            local_76 = FUN_002284b0(pcVar19 + (uVar17 + 0xb));
            local_74 = FUN_002284b0(pcVar19 + (uVar17 + 0xd));
            local_72 = FUN_002284b0(pcVar19 + (uVar17 + 0xf));
            local_70 = FUN_002284b0(pcVar19 + (uVar17 + 0x11));
            local_6e = FUN_002284b0(pcVar19 + (uVar17 + 0x13));
            pvVar16 = (void *)((long)param_6 + uVar18 * 0x48);
            uVar17 = uVar17 + 0x15;
            local_6c = 0;
            FUN_002279b0(&local_e8,&local_80);
            lVar20 = *(long *)((long)pvVar16 + 0x2e0);
            puVar14 = &local_e8;
LAB_00276090:
            (**(code **)(lVar20 + 0x10))(auStack_90,(long)pvVar16 + 0x2e0,puVar14);
            uVar21 = uVar21 + 0x49;
            if (*(uint *)(param_3 + 1) < uVar21) goto LAB_00276100;
            *(char *)((long)param_6 + uVar18 + 0x400) = pcVar19[uVar17];
            memcpy((void *)((long)param_6 + uVar18 * 0x40 + 0x20),pcVar19 + (uVar17 + 1),0x40);
            uVar13 = FUN_00228470(pcVar19 + (uVar17 + 0x41));
            lVar20 = uVar18 * 8;
            uVar18 = uVar18 + 1;
            uVar17 = uVar17 + 0x49;
            *(undefined8 *)((long)param_6 + lVar20 + 0x410) = uVar13;
          } while (uVar18 != bVar3);
        }
        local_e8 = local_e8 & 0xffffffff00000000;
LAB_00275a50:
        local_80._0_4_ = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((long)&local_e8 + 4),(Result *)&local_80);
        goto LAB_00275678;
      }
      *param_4 = 6;
      uVar10 = 0x10c26;
    }
    local_e8 = CONCAT44(local_e8._4_4_,uVar10);
  }
LAB_00275664:
  local_80._0_4_ = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_e8 + 4),(Result *)&local_80);
LAB_00275678:
  FUN_002296c4(param_1,&local_e8);
  return;
}

