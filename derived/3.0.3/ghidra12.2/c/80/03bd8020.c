
/* WARNING: Type propagation algorithm not settling */

void FUN_03bd8020(long *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  char *__s1;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 auStack_13c [6];
  float local_10c;
  float fStack_108;
  float local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  ulong local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  long local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  long *plStack_98;
  long local_90;
  ulong uStack_88;
  
  lVar15 = param_1[4];
  plVar14 = (long *)(*(long *)(*(long *)(lVar15 + 0x30) + 0x18) + 0x28);
  uVar5 = (**(code **)(*plVar14 + 0x58))(plVar14,param_1[5]);
  if ((uVar5 >> 2 & 1) == 0) {
    plVar13 = param_1 + 0x15;
    if ((*plVar13 != 0) && ((int)param_1[0x16] == *(int *)(*plVar13 + 0x34))) {
      uVar4 = *(ushort *)(lVar15 + 0x100);
      uVar7 = (**(code **)(*param_1 + 0x18))(param_1);
      if ((uVar7 & 1) != 0) {
        lVar8 = FUN_00322a20(plVar13);
        *(uint *)(lVar8 + 0x50) = (uint)uVar4;
      }
      iVar6 = FUN_03bd433c(plVar14,param_1[5]);
      if ((iVar6 == 0) && ((*(byte *)(param_1 + 0x13) >> 6 & 1) != 0)) {
        lVar15 = param_1[3];
        uVar5 = *(uint *)(lVar15 + 0x188);
        if ((uVar5 >> 3 & 1) != 0) {
          uVar5 = (**(code **)(*plVar14 + 0x58))(plVar14,param_1[5]);
          if (((uVar5 >> 1 & 1) == 0) && ((*(byte *)(param_1 + 0x13) >> 4 & 1) != 0)) {
            plVar10 = param_1 + 0x1d;
            lVar8 = param_1[5];
          }
          else {
            plVar10 = (long *)(lVar15 + 0xc0);
            lVar8 = param_1[5];
          }
          if (lVar8 != 0) {
            FUN_03bda49c(param_1,&local_f0,plVar10,lVar15 + 0xb4);
            uVar7 = (**(code **)(*param_1 + 0x18))(param_1);
            if ((((uVar7 & 1) != 0) && (lVar8 = FUN_00322a20(plVar13), 0 < *(int *)(lVar8 + 0x18c)))
               && (*(char *)(lVar8 + 0x1c) != '\0')) {
              local_c0._4_4_ = (undefined4)local_e0;
              local_b8 = (undefined4)local_d0;
              uStack_a8 = local_d0 >> 0x20;
              local_c0._0_4_ = (undefined4)local_f0;
              uStack_88 = (ulong)uStack_c4;
              uStack_b4 = 0;
              local_a0 = (long *)CONCAT44(local_d8,uStack_e8);
              plStack_98 = (long *)(ulong)uStack_c8;
              local_b0 = CONCAT44((int)((ulong)local_e0 >> 0x20),(int)((ulong)local_f0 >> 0x20));
              local_90 = CONCAT44(local_d4,uStack_e4);
              FUN_00322694(lVar8,&local_c0);
            }
          }
          *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfe;
          uVar5 = *(uint *)(lVar15 + 0x188);
        }
        if ((uVar5 >> 2 & 1) != 0) {
          uVar5 = (**(code **)(*plVar14 + 0x58))(plVar14,param_1[5]);
          if (((uVar5 >> 1 & 1) == 0) && ((*(byte *)(param_1 + 0x13) >> 4 & 1) != 0)) {
            local_c0._0_4_ = *(undefined4 *)((long)param_1 + 0xf4);
            puVar12 = (undefined4 *)&local_c0;
            local_c0._4_4_ = *(undefined4 *)((long)param_1 + 0x104);
            local_b8 = *(undefined4 *)((long)param_1 + 0x114);
          }
          else {
            puVar12 = (undefined4 *)(lVar15 + 0xa8);
          }
          FUN_03bd9238(param_1,puVar12,lVar15 + 0xb4);
        }
      }
      else if ((*(byte *)(param_1 + 0x13) & 0x41) != 0) {
        FUN_03bd9bec(param_1,&local_f0,param_1[5],lVar15,param_1[7],param_1[8],param_1[9]);
        uVar7 = (**(code **)(*param_1 + 0x18))(param_1);
        if ((uVar7 & 1) != 0) {
          uVar9 = FUN_00322a20(plVar13);
          local_c0._4_4_ = (undefined4)local_e0;
          local_b8 = (undefined4)local_d0;
          uStack_a8 = local_d0 >> 0x20;
          local_c0._0_4_ = (undefined4)local_f0;
          uStack_88 = (ulong)uStack_c4;
          uStack_b4 = 0;
          local_a0 = (long *)CONCAT44(local_d8,uStack_e8);
          plStack_98 = (long *)(ulong)uStack_c8;
          local_b0 = CONCAT44((int)((ulong)local_e0 >> 0x20),(int)((ulong)local_f0 >> 0x20));
          local_90 = CONCAT44(local_d4,uStack_e4);
          FUN_00322694(uVar9,&local_c0);
        }
        uVar5 = (**(code **)(*plVar14 + 0x58))(plVar14,param_1[5]);
        if ((uVar5 >> 1 & 1) == 0) {
          *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfe;
        }
      }
      if ((*(byte *)(param_1 + 0x13) & 6) != 0) {
        lVar8 = *(long *)(*(long *)(param_1[4] + 0x30) + 0x18);
        lVar15 = FUN_00322a20(plVar13);
        uVar7 = (**(code **)(*param_1 + 0x18))(param_1);
        if ((lVar15 != 0) && ((uVar7 & 1) != 0)) {
          uVar16 = param_1[7];
          lVar1 = param_1[4];
          lVar2 = param_1[5];
          uVar7 = FUN_03bdad4c(param_1,8);
          if (((uVar7 & 1) == 0) || ((*(uint *)((long)param_1 + 0x94) >> 8 & 1) == 0)) {
            *(uint *)((long)param_1 + 0x94) = *(uint *)((long)param_1 + 0x94) | 0x100;
            fVar21 = (float)FUN_03bd6264(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28,lVar2
                                         ,uVar16 & 0xffffffff,lVar1);
            *(float *)(param_1 + 0xe) = fVar21;
          }
          else {
            fVar21 = *(float *)(param_1 + 0xe);
          }
          uVar16 = param_1[7];
          lVar1 = param_1[4];
          lVar2 = param_1[5];
          uVar7 = FUN_03bdad4c(param_1,9);
          if (((uVar7 & 1) == 0) || ((*(uint *)((long)param_1 + 0x94) >> 9 & 1) == 0)) {
            *(uint *)((long)param_1 + 0x94) = *(uint *)((long)param_1 + 0x94) | 0x200;
            fVar22 = (float)FUN_03bd645c(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28,lVar2
                                         ,uVar16 & 0xffffffff,lVar1);
            *(float *)((long)param_1 + 0x74) = fVar22;
          }
          else {
            fVar22 = *(float *)((long)param_1 + 0x74);
          }
          uVar16 = param_1[7];
          lVar1 = param_1[4];
          lVar2 = param_1[5];
          uVar7 = FUN_03bdad4c(param_1,10);
          if (((uVar7 & 1) == 0) || ((*(uint *)((long)param_1 + 0x94) >> 10 & 1) == 0)) {
            *(uint *)((long)param_1 + 0x94) = *(uint *)((long)param_1 + 0x94) | 0x400;
            fVar23 = (float)FUN_03bd6654(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28,lVar2
                                         ,uVar16 & 0xffffffff,lVar1);
            *(float *)(param_1 + 0xf) = fVar23;
          }
          else {
            fVar23 = *(float *)(param_1 + 0xf);
          }
          uVar16 = param_1[7];
          lVar1 = param_1[4];
          lVar2 = param_1[5];
          uVar7 = FUN_03bdad4c(param_1,0xb);
          if (((uVar7 & 1) == 0) || ((*(uint *)((long)param_1 + 0x94) >> 0xb & 1) == 0)) {
            *(uint *)((long)param_1 + 0x94) = *(uint *)((long)param_1 + 0x94) | 0x800;
            fVar18 = (float)FUN_03bd684c(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28,lVar2
                                         ,uVar16 & 0xffffffff,lVar1);
            *(float *)((long)param_1 + 0x7c) = fVar18;
          }
          else {
            fVar18 = *(float *)((long)param_1 + 0x7c);
          }
          bVar3 = *(byte *)(param_1 + 0x13);
          if ((bVar3 >> 1 & 1) != 0) {
            fVar19 = *(float *)(param_1 + 0x1b);
            fVar20 = *(float *)(param_1 + 0x1c);
            *(float *)(lVar15 + 0x114) = fVar22 * *(float *)((long)param_1 + 0xdc);
            *(float *)(lVar15 + 0x110) = fVar21 * fVar19;
            *(float *)(lVar15 + 0x118) = fVar23 * fVar20;
            bVar3 = *(byte *)(param_1 + 0x13);
          }
          if ((bVar3 >> 2 & 1) != 0) {
            *(float *)(lVar15 + 0x11c) = fVar18 * *(float *)((long)param_1 + 0xe4);
            bVar3 = *(byte *)(param_1 + 0x13);
          }
          if ((bVar3 >> 1 & 1) != 0) {
            uVar7 = param_1[4];
            plVar10 = *(long **)(DAT_05aec208 + 0x9a0);
            if (plVar10 != (long *)0x0) {
              local_b0 = param_1[5];
              local_90 = param_1[3];
              uStack_a8 = uVar7;
              local_a0 = plVar13;
              plStack_98 = param_1;
              (**(code **)(*plVar10 + 0x40))(plVar10,&local_c0);
            }
            plVar10 = *(long **)(uVar7 + 0xf8);
            if (plVar10 != (long *)0x0) {
              local_b0 = param_1[5];
              local_90 = param_1[3];
              uStack_a8 = uVar7;
              local_a0 = plVar13;
              plStack_98 = param_1;
              (**(code **)(*plVar10 + 0x40))(plVar10,&local_c0);
            }
          }
          lVar8 = lVar8 + 0x28;
          iVar6 = FUN_03bea37c(lVar8,param_1[5],0x15);
          if (((iVar6 != 2) && (iVar6 = FUN_03bea37c(lVar8,param_1[5],0x14), iVar6 != 2)) &&
             (iVar6 = FUN_03bea37c(lVar8,param_1[5],0x13), iVar6 != 2)) {
            *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfd;
          }
          iVar6 = FUN_03bea37c(lVar8,param_1[5],0x16);
          if (iVar6 != 2) {
            *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfb;
          }
        }
      }
      FUN_03bd9768(param_1,plVar13);
      if (*(int *)((long)param_1 + 0x9c) == 0) {
        bVar3 = *(byte *)(param_1 + 0x13);
        *(byte *)(param_1 + 0x13) = bVar3 & 0xf7;
        iVar6 = FUN_03bd423c(plVar14,param_1[5]);
        plVar14 = DAT_05aec200;
        if (((bVar3 >> 3 & 1) != 0) && (0 < iVar6)) {
          (**(code **)(*DAT_05aec200 + 0x10))(DAT_05aec200);
          uVar7 = (**(code **)(*param_1 + 0x18))(param_1);
          if (((uVar7 & 1) != 0) &&
             ((lVar15 = FUN_00322a20(plVar13), 0 < *(int *)(lVar15 + 0x18c) &&
              (*(char *)(lVar15 + 0x1c) != '\0')))) {
            FUN_00321770((float)iVar6);
          }
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
      }
    }
  }
  else {
    uVar17 = FUN_03bdaa08(param_1,0xc,0);
    *(undefined4 *)((long)param_1 + 0xbc) = uVar17;
    uVar17 = FUN_03bdaa08(param_1,0xd,1);
    *(undefined4 *)(param_1 + 0x18) = uVar17;
    uVar17 = FUN_03bdaa08(param_1,0xe,2);
    *(undefined4 *)((long)param_1 + 0xc4) = uVar17;
    uVar17 = FUN_03bdaa08(param_1,0xf,3);
    *(undefined4 *)(param_1 + 0x19) = uVar17;
    uVar17 = FUN_03bdaa08(param_1,0x10,4);
    *(undefined4 *)((long)param_1 + 0xcc) = uVar17;
    uVar17 = FUN_03bdaa08(param_1,0x11,5);
    *(undefined4 *)(param_1 + 0x1a) = uVar17;
    uVar17 = FUN_03bdaa08(param_1,0x12,6);
    *(undefined4 *)((long)param_1 + 0xd4) = uVar17;
    plVar14 = (long *)(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28);
    __s1 = (char *)FUN_03bd3f74(plVar14,param_1[5]);
    if ((*__s1 != '\0') && (iVar6 = strncmp(__s1,"@Blank",6), iVar6 != 0)) {
      lVar8 = 0x40;
      lVar15 = *(long *)PTR_DAT_04bb2918 + 0xa20;
      do {
        iVar6 = strcmp((char *)(lVar15 + 0x28),__s1);
        if (iVar6 == 0) {
          FUN_03bd9768(param_1,lVar15 + 0x18);
          lVar8 = param_1[3];
          lVar1 = param_1[4];
          local_100 = *(undefined8 *)(lVar8 + 0x98);
          local_f8 = *(undefined4 *)(lVar8 + 0xa0);
          uStack_f4 = *(undefined4 *)(lVar8 + 0xa4);
          local_10c = *(float *)((long)param_1 + 0xbc);
          if ((*(byte *)(lVar8 + 0x188) & 0xc) == 0) {
            fStack_108 = local_10c;
            local_104 = local_10c;
          }
          else {
            fStack_108 = local_10c * *(float *)(lVar8 + 0xb8);
            local_104 = local_10c * *(float *)(lVar8 + 0xbc);
            local_10c = local_10c * *(float *)(lVar8 + 0xb4);
          }
          iVar6 = FUN_03bd433c(plVar14,param_1[5]);
          if (((iVar6 != 0) ||
              (uVar5 = (**(code **)(*plVar14 + 0x58))(plVar14,param_1[5]), (uVar5 >> 1 & 1) != 0))
             || ((*(byte *)(param_1 + 0x13) >> 4 & 1) == 0)) {
            if ((*(uint *)(lVar8 + 0x188) >> 3 & 1) != 0) {
              FUN_03bda49c(param_1,&local_f0,lVar8 + 0xc0,lVar8 + 0xb4);
              puVar11 = &local_f0;
              goto LAB_03bd83d4;
            }
            if ((*(uint *)(lVar8 + 0x188) >> 2 & 1) != 0) {
              uStack_e4 = *(undefined4 *)(lVar8 + 0xa8);
              local_d4 = *(undefined4 *)(lVar8 + 0xac);
              uStack_e8 = 0;
              local_d8 = 0;
              local_d0 = 0;
              local_f0 = 0x3f800000;
              local_e0 = 0x3f80000000000000;
              uStack_c8 = 0x3f800000;
              uStack_c4 = *(uint *)(lVar8 + 0xb0);
              FUN_03bda49c(param_1,auStack_13c,&local_f0,lVar8 + 0xb4);
              puVar11 = auStack_13c;
              goto LAB_03bd83d4;
            }
          }
          FUN_03bd9bec(param_1,&local_c0,param_1[5],lVar1,param_1[7],param_1[8],param_1[9]);
          puVar11 = &local_c0;
LAB_03bd83d4:
          FUN_03bd0f20(lVar15,puVar11,&local_100,&local_10c,0);
          return;
        }
        lVar15 = lVar15 + 0x1910;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}

