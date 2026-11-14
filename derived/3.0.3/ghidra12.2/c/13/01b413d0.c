
uint FUN_01b413d0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  ushort *puVar20;
  undefined8 local_198;
  undefined **local_190;
  long lStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined *local_170;
  undefined8 *local_168;
  undefined4 local_160;
  undefined8 local_15c [7];
  undefined1 local_11d;
  undefined2 local_114;
  undefined1 local_112;
  undefined1 local_110 [56];
  undefined *local_d8;
  undefined8 *puStack_d0;
  undefined *local_a0;
  undefined *puStack_98;
  
  lVar13 = *(long *)PTR_DAT_04bb46b0;
  if (lVar13 != 0) {
    puVar14 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar13 = (**(code **)(*(long *)*puVar14 + 0x38))();
      if (lVar13 != 0) {
        lVar13 = lVar13 + 0x70;
LAB_01b41458:
        lVar9 = FUN_0265c2a0(*(undefined4 *)(param_1 + 0x20));
        if (lVar9 == 0) {
          puVar20 = (ushort *)PTR_DAT_04bb9cf0;
        }
        else if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
                (puVar14 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar14 == (undefined8 *)0x0)) {
          puVar20 = (ushort *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
        }
        else {
          uVar10 = (**(code **)*puVar14)();
          puVar20 = (ushort *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
          if ((((uVar10 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
             (puVar14 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar14 != (undefined8 *)0x0)
             ) {
            (**(code **)*puVar14)();
          }
        }
        uVar3 = *puVar20;
        local_112 = (undefined1)puVar20[1];
        uVar10 = (ulong)(uVar3 & 0xff);
        if (((uVar10 < 0x23) &&
            (local_114._1_1_ = (byte)(uVar3 >> 8), bVar6 = local_114._1_1_,
            local_114._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar10])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar10 * 4) >> (ulong)(local_114._1_1_ & 0x1f) & 1) != 0))
        {
          uVar8 = *(uint *)(param_1 + 0x24);
          plVar16 = *(long **)(lVar13 + 0xe7290);
          local_114 = uVar3;
          if (uVar8 == 0) {
            if ((plVar16 == (long *)0x0) || ((undefined8 *)*plVar16 == (undefined8 *)0x0)) {
              uVar8 = 1;
            }
            else {
              uVar8 = (*(code *)**(undefined8 **)*plVar16)();
              uVar8 = uVar8 ^ 1;
            }
            puVar14 = (undefined8 *)(*(long *)(lVar13 + 0xe7278) + *(long *)(lVar13 + 0xe7270));
            uVar11 = FUN_0272eca4(param_1 + 0xc,1);
            memset(param_2,0,0x374);
            puVar19 = param_2 + 0x18;
            *(undefined2 *)puVar19 = 0xfffe;
            FUN_0277d4ac(puVar19);
            *(undefined1 *)((long)param_2 + 0xcc) = 0;
            memset((void *)((long)param_2 + 0xce),0,0x2a2);
            *(undefined2 *)(param_2 + 0x6e) = 0xfffe;
            *puVar19 = 0;
            *(undefined4 *)(param_2 + 0x19) = 0;
            *(undefined2 *)puVar19 = 0xfffe;
            *param_2 = 0;
            param_2[1] = 0;
            param_2[2] = 0;
            param_2[3] = 0;
            param_2[4] = 0;
            param_2[5] = 0;
            param_2[6] = 0;
            param_2[7] = 0;
            param_2[8] = 0;
            param_2[9] = 0;
            param_2[10] = 0;
            param_2[0xb] = 0;
            param_2[0xc] = 0;
            param_2[0xd] = 0;
            param_2[0xe] = 0;
            param_2[0xf] = 0;
            param_2[0x10] = 0;
            param_2[0x11] = 0;
            param_2[0x12] = 0;
            param_2[0x13] = 0;
            param_2[0x14] = 0;
            param_2[0x15] = 0;
            param_2[0x16] = 0;
            param_2[0x17] = 0;
            FUN_0277d4ac(puVar19);
            *(undefined1 *)(param_2 + 0x19) = 0;
            *(undefined1 *)param_2 = 1;
            *(undefined1 *)((long)param_2 + 0x5c) = 1;
            *(char *)((long)param_2 + 4) = (char)uVar3;
            *(byte *)((long)param_2 + 5) = bVar6;
            uVar5 = FUN_020fd7d8(&local_114);
            *(undefined1 *)((long)param_2 + 6) = uVar5;
            uVar15 = puVar14[1];
            uVar17 = puVar14[2];
            uVar5 = *(undefined1 *)(puVar14 + 3);
            uVar18 = *puVar14;
            *(undefined1 *)(param_2 + 0x17) = 0;
            *(undefined1 *)(param_2 + 4) = uVar5;
            param_2[2] = uVar15;
            param_2[3] = uVar17;
            param_2[1] = uVar18;
            uVar15 = param_3[1];
            uVar17 = param_3[2];
            uVar18 = *param_3;
            *(undefined1 *)(param_2 + 0xf) = *(undefined1 *)(param_3 + 3);
            param_2[0xd] = uVar15;
            param_2[0xe] = uVar17;
            param_2[0xc] = uVar18;
            uVar15 = *(undefined8 *)((long)param_3 + 0x2c);
            uVar17 = *(undefined8 *)((long)param_3 + 0x24);
            *(undefined8 *)((long)param_2 + 0x7c) = *(undefined8 *)((long)param_3 + 0x1c);
            *(undefined8 *)((long)param_2 + 0x84) = uVar17;
            *(undefined8 *)((long)param_2 + 0x8c) = uVar15;
            uVar7 = *(uint *)((long)param_3 + 0x34);
            if (1 < uVar7) {
              uVar7 = 0;
            }
            *(uint *)((long)param_2 + 0x94) = uVar7;
            *(undefined2 *)puVar19 = *(undefined2 *)(param_1 + 0x2c);
            *(undefined1 *)((long)param_2 + 0xc2) = *(undefined1 *)(param_1 + 0x2e);
            *(undefined1 *)((long)param_2 + 0xc3) = *(undefined1 *)(param_1 + 0x2f);
            *(undefined4 *)((long)param_2 + 0xc4) = *(undefined4 *)(param_1 + 0x30);
            uVar10 = nn::time::IsValidDate
                               ((uint)uVar11 & 0xffff,(uint)uVar11 >> 0x10 & 0xff,
                                (uint)((ulong)uVar11 >> 0x18) & 0xff);
            if ((uVar10 & 1) != 0) {
              *(short *)((long)param_2 + 0xbc) = (short)uVar11;
              *(char *)((long)param_2 + 0xbe) = (char)((ulong)uVar11 >> 0x10);
              *(char *)((long)param_2 + 0xbf) = (char)((ulong)uVar11 >> 0x18);
            }
            *(undefined1 *)((long)param_2 + 0xcc) = 0;
            if ((((uVar8 & 1) == 0) && (*(long *)(lVar13 + 0xe7290) != 0)) &&
               (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0xe7290) + 8),
               puVar14 != (undefined8 *)0x0)) {
              (**(code **)*puVar14)();
            }
            uVar8 = 1;
          }
          else {
            if ((plVar16 == (long *)0x0) || ((undefined8 *)*plVar16 == (undefined8 *)0x0)) {
              uVar7 = 1;
            }
            else {
              uVar7 = (*(code *)**(undefined8 **)*plVar16)();
              uVar8 = *(uint *)(param_1 + 0x24);
              uVar7 = uVar7 ^ 1;
            }
            if (uVar8 < 0xf) {
              local_11d = 0;
              local_168 = local_15c;
              puVar14 = *(undefined8 **)(PTR_s_Package_04bb6d28 + (ulong)uVar8 * 8 + 0x148);
              local_160 = 0x40;
              if (local_168 != puVar14) goto LAB_01b4160c;
            }
            else {
              puVar14 = &DAT_0407ebb1;
LAB_01b4160c:
              local_11d = 0;
              local_160 = 0x40;
              local_170 = PTR_DAT_04bb2030 + 0x10;
              local_168 = local_15c;
              lVar9 = 0;
              do {
                if (*(char *)((long)puVar14 + lVar9) == '\0') {
LAB_01b417e4:
                  iVar12 = (int)lVar9;
                  if (0x3f < iVar12) {
                    iVar12 = 0x3f;
                  }
                  goto LAB_01b417f0;
                }
                if (*(char *)((long)puVar14 + lVar9 + 1) == '\0') {
                  lVar9 = lVar9 + 1;
                  goto LAB_01b417e4;
                }
                if (*(char *)((long)puVar14 + lVar9 + 2) == '\0') {
                  lVar9 = lVar9 + 2;
                  goto LAB_01b417e4;
                }
                lVar9 = lVar9 + 3;
              } while (lVar9 != 0x80001);
              iVar12 = 0;
LAB_01b417f0:
              memcpy(local_168,puVar14,(long)iVar12);
              *(undefined1 *)((long)local_15c + (long)iVar12) = 0;
            }
            local_170 = PTR_DAT_04bb2bc0 + 0x10;
            puVar1 = PTR_DAT_04bb2020 + 0x10;
            puStack_98 = &DAT_040a6751;
            local_a0 = puVar1;
            bVar6 = FUN_020fd7d8(&local_114);
            uVar4 = local_160;
            puVar14 = local_168;
            if (bVar6 < 8) {
              puStack_d0 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)bVar6 * 8 + 0x20);
            }
            else {
              puStack_d0 = &DAT_0407ebb1;
            }
            local_110[0] = 0;
            local_d8 = puVar1;
            (**(code **)(local_170 + 0x18))(&local_170);
            puVar19 = local_168;
            (**(code **)(local_170 + 0x18))(&local_170);
            lVar9 = 0;
            do {
              if (*(char *)((long)local_168 + lVar9) == '\0') goto LAB_01b418cc;
              if (*(char *)((long)local_168 + lVar9 + 1) == '\0') {
                lVar9 = lVar9 + 1;
                goto LAB_01b418cc;
              }
              if (*(char *)((long)local_168 + lVar9 + 2) == '\0') {
                lVar9 = lVar9 + 2;
                goto LAB_01b418cc;
              }
              lVar9 = lVar9 + 3;
            } while (lVar9 != 0x80001);
            lVar9 = 0;
LAB_01b418cc:
            FUN_038d0770(puVar14,0,uVar4,puVar19,lVar9,&local_a0,&local_d8,local_110);
            uVar5 = *(undefined1 *)(param_1 + 0x28);
            local_180 = 0x40;
            uStack_178 = 1;
            local_190 = &PTR_LAB_04a37ef8;
            lVar9 = *(long *)(lVar13 + 0xe7270);
            lVar2 = *(long *)(lVar13 + 0xe7278);
            lStack_188 = param_1;
            local_198 = FUN_0272eca4(param_1 + 0xc,1);
            FUN_006d8678(&local_a0,"0%02d",uVar5);
            FUN_006d8678(&local_d8,"1%02d",uVar5);
            FUN_006d8678(local_110,"2%02d",uVar5);
            uVar8 = FUN_027b0054(param_2,&local_114,lVar2 + lVar9,param_3,&local_170,&local_a0,
                                 &local_d8,local_110,&local_198,param_4,0,&local_190);
            *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(param_1 + 0x2c);
            *(undefined1 *)((long)param_2 + 0xc2) = *(undefined1 *)(param_1 + 0x2e);
            *(undefined1 *)((long)param_2 + 0xc3) = *(undefined1 *)(param_1 + 0x2f);
            *(undefined4 *)((long)param_2 + 0xc4) = *(undefined4 *)(param_1 + 0x30);
            if ((((uVar7 & 1) == 0) && (*(long *)(lVar13 + 0xe7290) != 0)) &&
               (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0xe7290) + 8),
               puVar14 != (undefined8 *)0x0)) {
              (**(code **)*puVar14)();
            }
          }
          if (*(char *)(param_1 + 0x35) != '\0') {
            *(undefined1 *)(param_2 + 0x19) = 1;
          }
          goto LAB_01b41548;
        }
      }
    }
    else if (((puVar14 != (undefined8 *)0x0) && ((long *)puVar14[0x26] != (long *)0x0)) &&
            (lVar13 = (**(code **)(*(long *)puVar14[0x26] + 0x38))(), lVar13 != 0))
    goto LAB_01b41458;
  }
  uVar8 = 0;
LAB_01b41548:
  return uVar8 & 1;
}

