
int FUN_023203ac(long *param_1,undefined4 param_2,ulong param_3)

{
  byte *pbVar1;
  char *pcVar2;
  bool bVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  byte bVar16;
  undefined2 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined4 local_68;
  int local_64;
  
  puVar6 = PTR_DAT_04bb43c0;
  pbVar1 = (byte *)(param_1 + 0x3dd);
  if ((DAT_05abbc58 == 0) || (((byte)(&DAT_00001230)[DAT_05abbc58] >> 6 & 1) == 0)) {
    if ((*(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0) != 0) && (DAT_04c487d4 != -1)) {
      local_68 = 0x15;
      puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar4 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar4 >> 0x15 & 1) != 0) {
        lVar11 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0) + 0x13c;
        bVar7 = true;
        goto joined_r0x0232046c;
      }
    }
  }
  else {
    bVar7 = false;
    lVar11 = DAT_05abbc58 + 0x11d0;
joined_r0x0232046c:
    if ((param_3 & 1) == 0) {
      if (param_1[0x53] == 0) {
LAB_023204ec:
        puVar17 = &DAT_05586008;
      }
      else {
        lVar18 = *(long *)(param_1[0x53] + 0xbdd0);
        if (*(char *)(lVar18 + 0x1d5) != '\0') {
          lVar19 = *(long *)PTR_DAT_04bb43c0;
          puVar17 = (undefined2 *)(lVar18 + 0xcc);
          uVar9 = FUN_0277d6c4(puVar17);
          if (*(long *)puVar6 != 0) {
            lVar19 = *(long *)(lVar19 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
               (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
            goto LAB_023204d8;
            goto LAB_02320af0;
          }
LAB_023204d8:
          iVar10 = FUN_0277d6c4(puVar17);
          if (iVar10 == 0xfffd) goto LAB_023204ec;
        }
        puVar17 = (undefined2 *)(lVar18 + 0xd4);
      }
LAB_02320af0:
      uVar15 = FUN_0277d7b4(puVar17,lVar11);
      if (((uVar15 & 1) == 0) || (*(char *)((long)puVar17 + 3) != *(char *)(lVar11 + 3))) {
        bVar8 = false;
      }
      else {
        bVar8 = *(int *)(puVar17 + 2) == *(int *)(lVar11 + 4);
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,lVar11,param_2);
      bVar3 = false;
      if ((int)param_1[0x2f] == 0) {
        bVar3 = bVar7;
      }
      if (bVar3) {
        FUN_02648c90(pbVar1,lVar11,0);
      }
      if (bVar8) {
        if (param_1[0x53] == 0) {
LAB_02320be0:
          puVar17 = &DAT_05586008;
        }
        else {
          lVar18 = *(long *)(param_1[0x53] + 0xbdd8);
          if (*(char *)(lVar18 + 0x1d5) != '\0') {
            lVar19 = *(long *)puVar6;
            puVar17 = (undefined2 *)(lVar18 + 0xcc);
            uVar9 = FUN_0277d6c4(puVar17);
            if (*(long *)puVar6 != 0) {
              lVar19 = *(long *)(lVar19 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
                 (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
              goto LAB_02320bcc;
              goto LAB_02321514;
            }
LAB_02320bcc:
            iVar10 = FUN_0277d6c4(puVar17);
            if (iVar10 == 0xfffd) goto LAB_02320be0;
          }
          puVar17 = (undefined2 *)(lVar18 + 0xd4);
        }
LAB_02321514:
        uVar15 = FUN_0277d7b4(puVar17,lVar11 + 8);
        if ((uVar15 & 1) == 0) {
          iVar10 = 2;
        }
        else {
          iVar10 = 2;
          if ((*(char *)((long)puVar17 + 3) == *(char *)(lVar11 + 0xb)) &&
             (iVar10 = 0, *(int *)(puVar17 + 2) != *(int *)(lVar11 + 0xc))) {
            iVar10 = 2;
          }
        }
      }
      else {
        iVar10 = 1;
      }
      (**(code **)(*param_1 + 0x2a8))(param_1,lVar11 + 8,param_2);
      bVar8 = false;
      if ((int)param_1[0x2f] == 0) {
        bVar8 = bVar7;
      }
      if (bVar8) {
        FUN_02648c90(pbVar1,lVar11 + 8,0);
      }
      if (iVar10 == 0) {
        if (param_1[0x53] == 0) {
LAB_02321610:
          puVar17 = &DAT_05586008;
        }
        else {
          lVar18 = *(long *)(param_1[0x53] + 0xbde0);
          if (*(char *)(lVar18 + 0x1d5) != '\0') {
            lVar19 = *(long *)puVar6;
            puVar17 = (undefined2 *)(lVar18 + 0xcc);
            uVar9 = FUN_0277d6c4(puVar17);
            if (*(long *)puVar6 != 0) {
              lVar19 = *(long *)(lVar19 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
                 (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
              goto LAB_023215fc;
              goto LAB_02321620;
            }
LAB_023215fc:
            iVar10 = FUN_0277d6c4(puVar17);
            if (iVar10 == 0xfffd) goto LAB_02321610;
          }
          puVar17 = (undefined2 *)(lVar18 + 0xd4);
        }
LAB_02321620:
        uVar15 = FUN_0277d7b4(puVar17,lVar11 + 0x10);
        if ((uVar15 & 1) == 0) {
          iVar10 = 3;
        }
        else {
          iVar10 = 3;
          if ((*(char *)((long)puVar17 + 3) == *(char *)(lVar11 + 0x13)) &&
             (iVar10 = 0, *(int *)(puVar17 + 2) != *(int *)(lVar11 + 0x14))) {
            iVar10 = 3;
          }
        }
      }
      (**(code **)(*param_1 + 0x2b0))(param_1,lVar11 + 0x10,param_2);
      bVar8 = false;
      if ((int)param_1[0x2f] == 0) {
        bVar8 = bVar7;
      }
      if (bVar8) {
        FUN_02648c90(pbVar1,lVar11 + 0x10,0);
      }
      lVar19 = *(long *)puVar6;
      lVar18 = lVar11 + 0x40;
      uVar9 = FUN_0277d6c4(lVar18);
      lVar20 = *(long *)puVar6;
      if (lVar20 == 0) {
LAB_0232176c:
        if (iVar10 == 0) {
          if (param_1[0x53] == 0) {
LAB_023217e0:
            puVar17 = &DAT_05586008;
          }
          else {
            lVar18 = *(long *)(param_1[0x53] + 0xbde8);
            if (*(char *)(lVar18 + 0x1d5) != '\0') {
              puVar17 = (undefined2 *)(lVar18 + 0xcc);
              uVar9 = FUN_0277d6c4(puVar17);
              if (*(long *)puVar6 != 0) {
                lVar19 = *(long *)(lVar20 + 0x57e58);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
                   (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
                goto LAB_023217cc;
                goto LAB_023217f0;
              }
LAB_023217cc:
              iVar10 = FUN_0277d6c4(puVar17);
              if (iVar10 == 0xfffd) goto LAB_023217e0;
            }
            puVar17 = (undefined2 *)(lVar18 + 0xd4);
          }
LAB_023217f0:
          uVar15 = FUN_0277d7b4(puVar17,lVar11 + 0x18);
          if ((uVar15 & 1) == 0) {
            iVar10 = 5;
          }
          else {
            iVar10 = 5;
            if ((*(char *)((long)puVar17 + 3) == *(char *)(lVar11 + 0x1b)) &&
               (iVar10 = 0, *(int *)(puVar17 + 2) != *(int *)(lVar11 + 0x1c))) {
              iVar10 = 5;
            }
          }
        }
        (**(code **)(*param_1 + 0x2b8))(param_1,lVar11 + 0x18,param_2);
        bVar8 = false;
        if ((int)param_1[0x2f] == 0) {
          bVar8 = bVar7;
        }
        if (bVar8) {
          FUN_02648c90(pbVar1,lVar11 + 0x18,0);
        }
        if (iVar10 == 0) {
          if (param_1[0x53] == 0) {
LAB_023218ec:
            puVar17 = &DAT_05586008;
          }
          else {
            lVar18 = *(long *)(param_1[0x53] + 0xbdf0);
            if (*(char *)(lVar18 + 0x1d5) != '\0') {
              lVar19 = *(long *)puVar6;
              puVar17 = (undefined2 *)(lVar18 + 0xcc);
              uVar9 = FUN_0277d6c4(puVar17);
              if (*(long *)puVar6 != 0) {
                lVar19 = *(long *)(lVar19 + 0x57e58);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
                   (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
                goto LAB_023218d8;
                goto LAB_023218fc;
              }
LAB_023218d8:
              iVar10 = FUN_0277d6c4(puVar17);
              if (iVar10 == 0xfffd) goto LAB_023218ec;
            }
            puVar17 = (undefined2 *)(lVar18 + 0xd4);
          }
LAB_023218fc:
          uVar15 = FUN_0277d7b4(puVar17,lVar11 + 0x20);
          if ((uVar15 & 1) == 0) {
            iVar10 = 6;
          }
          else {
            iVar10 = 6;
            if ((*(char *)((long)puVar17 + 3) == *(char *)(lVar11 + 0x23)) &&
               (iVar10 = 0, *(int *)(puVar17 + 2) != *(int *)(lVar11 + 0x24))) {
              iVar10 = 6;
            }
          }
        }
        (**(code **)(*param_1 + 0x2c0))(param_1,lVar11 + 0x20,param_2);
        bVar8 = false;
        if ((int)param_1[0x2f] == 0) {
          bVar8 = bVar7;
        }
        if (bVar8) {
          FUN_02648c90(pbVar1,lVar11 + 0x20,0);
        }
      }
      else {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_0232176c;
        if (iVar10 == 0) {
          if (param_1[0x53] == 0) {
LAB_02321760:
            puVar17 = &DAT_05586008;
          }
          else {
            lVar19 = *(long *)(param_1[0x53] + 0xbde8);
            if (*(char *)(lVar19 + 0x1d5) != '\0') {
              puVar17 = (undefined2 *)(lVar19 + 0xcc);
              uVar9 = FUN_0277d6c4(puVar17);
              if (*(long *)puVar6 != 0) {
                lVar20 = *(long *)(lVar20 + 0x57e58);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                if ((*(uint *)(lVar20 + 0x1d8) <= uVar9) ||
                   (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
                goto LAB_0232174c;
                goto LAB_02321a54;
              }
LAB_0232174c:
              iVar10 = FUN_0277d6c4(puVar17);
              if (iVar10 == 0xfffd) goto LAB_02321760;
            }
            puVar17 = (undefined2 *)(lVar19 + 0xd4);
          }
LAB_02321a54:
          uVar15 = FUN_0277d7b4(puVar17,lVar18);
          if ((uVar15 & 1) == 0) {
            iVar10 = 4;
          }
          else {
            iVar10 = 4;
            if ((*(char *)((long)puVar17 + 3) == *(char *)(lVar11 + 0x43)) &&
               (iVar10 = 0, *(int *)(puVar17 + 2) != *(int *)(lVar11 + 0x44))) {
              iVar10 = 4;
            }
          }
        }
        (**(code **)(*param_1 + 0x2b8))(param_1,lVar18,param_2);
        bVar8 = false;
        if ((int)param_1[0x2f] == 0) {
          bVar8 = bVar7;
        }
        if (bVar8) {
          FUN_02648c90(pbVar1,lVar18,0);
        }
        if (iVar10 == 0) {
          if (param_1[0x53] == 0) {
LAB_02321b4c:
            puVar17 = &DAT_05586008;
          }
          else {
            lVar18 = *(long *)(param_1[0x53] + 0xbdf0);
            if (*(char *)(lVar18 + 0x1d5) != '\0') {
              lVar19 = *(long *)puVar6;
              puVar17 = (undefined2 *)(lVar18 + 0xcc);
              uVar9 = FUN_0277d6c4(puVar17);
              if (*(long *)puVar6 != 0) {
                lVar19 = *(long *)(lVar19 + 0x57e58);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
                   (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
                goto LAB_02321b38;
                goto LAB_02321b5c;
              }
LAB_02321b38:
              iVar10 = FUN_0277d6c4(puVar17);
              if (iVar10 == 0xfffd) goto LAB_02321b4c;
            }
            puVar17 = (undefined2 *)(lVar18 + 0xd4);
          }
LAB_02321b5c:
          puVar5 = PTR_DAT_04bb37e0;
          uVar15 = FUN_0277d7b4(puVar17,PTR_DAT_04bb37e0);
          if ((uVar15 & 1) == 0) {
            iVar10 = 6;
          }
          else {
            iVar10 = 6;
            if ((*(char *)((long)puVar17 + 3) == puVar5[3]) &&
               (iVar10 = 0, *(int *)(puVar17 + 2) != *(int *)(puVar5 + 4))) {
              iVar10 = 6;
            }
          }
        }
        (**(code **)(*param_1 + 0x2c0))(param_1,PTR_DAT_04bb37e0,param_2);
      }
      if (iVar10 == 0) {
        if (param_1[0x53] == 0) {
LAB_023219f8:
          puVar17 = &DAT_05586008;
        }
        else {
          lVar18 = *(long *)(param_1[0x53] + 0xbdf8);
          if (*(char *)(lVar18 + 0x1d5) != '\0') {
            lVar19 = *(long *)puVar6;
            puVar17 = (undefined2 *)(lVar18 + 0xcc);
            uVar9 = FUN_0277d6c4(puVar17);
            if (*(long *)puVar6 != 0) {
              lVar19 = *(long *)(lVar19 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
                 (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
              goto LAB_023219e4;
              goto LAB_02321a08;
            }
LAB_023219e4:
            iVar10 = FUN_0277d6c4(puVar17);
            if (iVar10 == 0xfffd) goto LAB_023219f8;
          }
          puVar17 = (undefined2 *)(lVar18 + 0xd4);
        }
LAB_02321a08:
        uVar15 = FUN_0277d7b4(puVar17,lVar11 + 0x28);
        if ((uVar15 & 1) == 0) {
          iVar10 = 7;
        }
        else {
          iVar10 = 7;
          if ((*(char *)((long)puVar17 + 3) == *(char *)(lVar11 + 0x2b)) &&
             (iVar10 = 0, *(int *)(puVar17 + 2) != *(int *)(lVar11 + 0x2c))) {
            iVar10 = 7;
          }
        }
      }
      (**(code **)(*param_1 + 0x2c8))(param_1,lVar11 + 0x28,param_2);
      bVar8 = false;
      if ((int)param_1[0x2f] == 0) {
        bVar8 = bVar7;
      }
      if (bVar8) {
        FUN_02648c90(pbVar1,lVar11 + 0x28,0);
      }
      if (iVar10 == 0) {
        if (param_1[0x53] == 0) {
LAB_02321c80:
          puVar17 = &DAT_05586008;
        }
        else {
          lVar18 = *(long *)(param_1[0x53] + 0xbe00);
          if (*(char *)(lVar18 + 0x1d5) != '\0') {
            lVar19 = *(long *)puVar6;
            puVar17 = (undefined2 *)(lVar18 + 0xcc);
            uVar9 = FUN_0277d6c4(puVar17);
            if (*(long *)puVar6 != 0) {
              lVar19 = *(long *)(lVar19 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
                 (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
              goto LAB_02321c6c;
              goto LAB_02321c90;
            }
LAB_02321c6c:
            iVar10 = FUN_0277d6c4(puVar17);
            if (iVar10 == 0xfffd) goto LAB_02321c80;
          }
          puVar17 = (undefined2 *)(lVar18 + 0xd4);
        }
LAB_02321c90:
        uVar15 = FUN_0277d7b4(puVar17,lVar11 + 0x30);
        if ((uVar15 & 1) == 0) {
          iVar10 = 8;
        }
        else {
          iVar10 = 8;
          if ((*(char *)((long)puVar17 + 3) == *(char *)(lVar11 + 0x33)) &&
             (iVar10 = 0, *(int *)(puVar17 + 2) != *(int *)(lVar11 + 0x34))) {
            iVar10 = 8;
          }
        }
      }
      (**(code **)(*param_1 + 0x2d0))(param_1,lVar11 + 0x30,param_2);
      bVar8 = false;
      if ((int)param_1[0x2f] == 0) {
        bVar8 = bVar7;
      }
      if (bVar8) {
        FUN_02648c90(pbVar1,lVar11 + 0x30,0);
      }
      if (iVar10 == 0) {
        if (param_1[0x53] == 0) {
LAB_02321d8c:
          puVar17 = &DAT_05586008;
        }
        else {
          lVar18 = *(long *)(param_1[0x53] + 0xbe08);
          if (*(char *)(lVar18 + 0x1d5) != '\0') {
            lVar19 = *(long *)puVar6;
            puVar17 = (undefined2 *)(lVar18 + 0xcc);
            uVar9 = FUN_0277d6c4(puVar17);
            if (*(long *)puVar6 != 0) {
              lVar19 = *(long *)(lVar19 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
                 (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
              goto LAB_02321d78;
              goto LAB_02321d9c;
            }
LAB_02321d78:
            iVar10 = FUN_0277d6c4(puVar17);
            if (iVar10 == 0xfffd) goto LAB_02321d8c;
          }
          puVar17 = (undefined2 *)(lVar18 + 0xd4);
        }
LAB_02321d9c:
        uVar15 = FUN_0277d7b4(puVar17,lVar11 + 0x38);
        if ((uVar15 & 1) == 0) {
          iVar10 = 10;
        }
        else {
          iVar10 = 10;
          if ((*(char *)((long)puVar17 + 3) == *(char *)(lVar11 + 0x3b)) &&
             (iVar10 = 0, *(int *)(puVar17 + 2) != *(int *)(lVar11 + 0x3c))) {
            iVar10 = 10;
          }
        }
      }
      puVar14 = (undefined4 *)(lVar11 + 0x38);
      (**(code **)(*param_1 + 0x2d8))(param_1,puVar14,param_2);
      bVar8 = false;
      if ((int)param_1[0x2f] == 0) {
        bVar8 = bVar7;
      }
      if (!bVar8) {
        return iVar10;
      }
      goto LAB_02321e18;
    }
  }
  FUN_02519c40(pbVar1,(int)param_1[0x46]);
  bVar16 = *pbVar1;
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  local_68 = CONCAT31(local_68._1_3_,bVar16);
  lVar11 = FUN_025830c0(DAT_055021a0,&local_68,1);
  if (lVar11 == 0) {
    return 0;
  }
  if ((*(long **)(lVar11 + 0x16250) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x16250), puVar12 == (undefined8 *)0x0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)*puVar12)();
    uVar15 = uVar15 & 0xffffffff;
  }
  pcVar2 = (char *)(*(long *)(lVar11 + 0x16238) + *(long *)(lVar11 + 0x16230));
  if ((*pcVar2 == '\0') || (uVar13 = FUN_016e5e90(), (uVar13 & 1) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = (byte)pcVar2[1] < 2;
  }
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar11 + 0x16250) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x16250) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if ((*(long **)(lVar11 + 0xd0) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0xd0), puVar12 == (undefined8 *)0x0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)*puVar12)();
    uVar15 = uVar15 & 0xffffffff;
  }
  lVar18 = *(long *)(lVar11 + 0xb8) + *(long *)(lVar11 + 0xb0);
  if (*(char *)(lVar18 + 0xaf89) == '\0' || 7 < *(byte *)(lVar18 + 0xaf88)) {
    lVar19 = lVar18;
    if (((*(char *)(lVar18 + 0xaf8a) != '\0') && (uVar13 = FUN_016e5e90(), (uVar13 & 1) != 0)) &&
       (lVar19 = lVar18 + 0xaf90, (*(byte *)(lVar18 + 0xaf8b) & 0xfe) != 0)) {
      lVar19 = lVar18;
    }
  }
  else {
    lVar19 = lVar18 + (ulong)*(byte *)(lVar18 + 0xaf88) * 0x11f8 + 0x1fc8;
  }
  puVar14 = (undefined4 *)FUN_026e85f0(lVar19);
  local_68 = *puVar14;
  local_64 = puVar14[1];
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar11 + 0xd0) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xd0) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  puVar6 = PTR_DAT_04bb43c0;
  if (param_1[0x53] == 0) {
LAB_02320720:
    puVar17 = &DAT_05586008;
  }
  else {
    lVar18 = *(long *)(param_1[0x53] + 0xbdd0);
    if (*(char *)(lVar18 + 0x1d5) != '\0') {
      puVar17 = (undefined2 *)(lVar18 + 0xcc);
      lVar19 = *(long *)PTR_DAT_04bb43c0;
      uVar9 = FUN_0277d6c4(puVar17);
      if (*(long *)puVar6 != 0) {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_0232070c;
        goto LAB_02320730;
      }
LAB_0232070c:
      iVar10 = FUN_0277d6c4(puVar17);
      if (iVar10 == 0xfffd) goto LAB_02320720;
    }
    puVar17 = (undefined2 *)(lVar18 + 0xd4);
  }
LAB_02320730:
  uVar15 = FUN_0277d7b4(puVar17,&local_68);
  if (((uVar15 & 1) == 0) || (*(char *)((long)puVar17 + 3) != local_68._3_1_)) {
    bVar8 = false;
  }
  else {
    bVar8 = *(int *)(puVar17 + 2) == local_64;
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_68,param_2);
  bVar3 = bVar7;
  if ((int)param_1[0x2f] != 0) {
    bVar3 = true;
  }
  if (!bVar3) {
    FUN_02648c90(pbVar1,&local_68,0);
  }
  if ((*(long **)(lVar11 + 0xd0) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0xd0), puVar12 == (undefined8 *)0x0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)*puVar12)();
    uVar15 = uVar15 & 0xffffffff;
  }
  lVar18 = *(long *)(lVar11 + 0xb8) + *(long *)(lVar11 + 0xb0);
  if ((*(char *)(lVar18 + 0xaf89) == '\0') || (7 < *(byte *)(lVar18 + 0xaf88))) {
    lVar19 = lVar18;
    if ((*(char *)(lVar18 + 0xaf8a) != '\0') &&
       ((uVar13 = FUN_016e5e90(), (uVar13 & 1) != 0 &&
        (lVar19 = lVar18 + 0xaf90, (*(byte *)(lVar18 + 0xaf8b) & 0xfe) != 0)))) {
      lVar19 = lVar18;
    }
  }
  else {
    lVar19 = lVar18 + (ulong)*(byte *)(lVar18 + 0xaf88) * 0x11f8 + 0x1fc8;
  }
  puVar14 = (undefined4 *)FUN_026ea320(lVar19);
  local_68 = *puVar14;
  local_64 = puVar14[1];
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar11 + 0xd0) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xd0) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  puVar6 = PTR_DAT_04bb43c0;
  if (bVar8) {
    if (param_1[0x53] == 0) {
LAB_023208f8:
      puVar17 = &DAT_05586008;
    }
    else {
      lVar18 = *(long *)(param_1[0x53] + 0xbdd8);
      if (*(char *)(lVar18 + 0x1d5) != '\0') {
        puVar17 = (undefined2 *)(lVar18 + 0xcc);
        lVar19 = *(long *)PTR_DAT_04bb43c0;
        uVar9 = FUN_0277d6c4(puVar17);
        if (*(long *)puVar6 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_023208e4;
          goto LAB_02320910;
        }
LAB_023208e4:
        iVar10 = FUN_0277d6c4(puVar17);
        if (iVar10 == 0xfffd) goto LAB_023208f8;
      }
      puVar17 = (undefined2 *)(lVar18 + 0xd4);
    }
LAB_02320910:
    uVar15 = FUN_0277d7b4(puVar17,&local_68);
    if ((uVar15 & 1) == 0) {
      iVar10 = 2;
    }
    else {
      iVar10 = 2;
      if ((*(char *)((long)puVar17 + 3) == local_68._3_1_) &&
         (iVar10 = 0, *(int *)(puVar17 + 2) != local_64)) {
        iVar10 = 2;
      }
    }
  }
  else {
    iVar10 = 1;
  }
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_68,param_2);
  bVar8 = bVar7;
  if ((int)param_1[0x2f] != 0) {
    bVar8 = true;
  }
  if (!bVar8) {
    FUN_02648c90(pbVar1,&local_68,0);
  }
  if ((*(long **)(lVar11 + 0xd0) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0xd0), puVar12 == (undefined8 *)0x0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)*puVar12)();
    uVar15 = uVar15 & 0xffffffff;
  }
  lVar18 = *(long *)(lVar11 + 0xb8) + *(long *)(lVar11 + 0xb0);
  if ((*(char *)(lVar18 + 0xaf89) == '\0') || (7 < *(byte *)(lVar18 + 0xaf88))) {
    lVar19 = lVar18;
    if ((*(char *)(lVar18 + 0xaf8a) != '\0') &&
       ((uVar13 = FUN_016e5e90(), (uVar13 & 1) != 0 &&
        (lVar19 = lVar18 + 0xaf90, (*(byte *)(lVar18 + 0xaf8b) & 0xfe) != 0)))) {
      lVar19 = lVar18;
    }
  }
  else {
    lVar19 = lVar18 + (ulong)*(byte *)(lVar18 + 0xaf88) * 0x11f8 + 0x1fc8;
  }
  puVar14 = (undefined4 *)FUN_026ea720(lVar19);
  local_68 = *puVar14;
  local_64 = puVar14[1];
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar11 + 0xd0) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xd0) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  puVar6 = PTR_DAT_04bb43c0;
  if (iVar10 == 0) {
    if (param_1[0x53] == 0) {
LAB_02320ae0:
      puVar17 = &DAT_05586008;
    }
    else {
      lVar18 = *(long *)(param_1[0x53] + 0xbde0);
      if (*(char *)(lVar18 + 0x1d5) != '\0') {
        puVar17 = (undefined2 *)(lVar18 + 0xcc);
        lVar19 = *(long *)PTR_DAT_04bb43c0;
        uVar9 = FUN_0277d6c4(puVar17);
        if (*(long *)puVar6 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_02320acc;
          goto LAB_02320bf8;
        }
LAB_02320acc:
        iVar10 = FUN_0277d6c4(puVar17);
        if (iVar10 == 0xfffd) goto LAB_02320ae0;
      }
      puVar17 = (undefined2 *)(lVar18 + 0xd4);
    }
LAB_02320bf8:
    uVar15 = FUN_0277d7b4(puVar17,&local_68);
    if ((uVar15 & 1) == 0) {
      iVar10 = 3;
    }
    else {
      iVar10 = 3;
      if ((*(char *)((long)puVar17 + 3) == local_68._3_1_) &&
         (iVar10 = 0, *(int *)(puVar17 + 2) != local_64)) {
        iVar10 = 3;
      }
    }
  }
  (**(code **)(*param_1 + 0x2b0))(param_1,&local_68,param_2);
  bVar8 = bVar7;
  if ((int)param_1[0x2f] != 0) {
    bVar8 = true;
  }
  if (!bVar8) {
    FUN_02648c90(pbVar1,&local_68,0);
  }
  if ((*(long **)(lVar11 + 0xd0) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0xd0), puVar12 == (undefined8 *)0x0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)*puVar12)();
    uVar15 = uVar15 & 0xffffffff;
  }
  puVar14 = (undefined4 *)FUN_028078d8(*(long *)(lVar11 + 0xb8) + *(long *)(lVar11 + 0xb0));
  local_68 = *puVar14;
  local_64 = puVar14[1];
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar11 + 0xd0) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xd0) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  puVar6 = PTR_DAT_04bb43c0;
  if (iVar10 == 0) {
    if (param_1[0x53] == 0) {
LAB_02320d68:
      puVar17 = &DAT_05586008;
    }
    else {
      lVar18 = *(long *)(param_1[0x53] + 0xbde8);
      if (*(char *)(lVar18 + 0x1d5) != '\0') {
        puVar17 = (undefined2 *)(lVar18 + 0xcc);
        lVar19 = *(long *)PTR_DAT_04bb43c0;
        uVar9 = FUN_0277d6c4(puVar17);
        if (*(long *)puVar6 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_02320d54;
          goto LAB_02320d78;
        }
LAB_02320d54:
        iVar10 = FUN_0277d6c4(puVar17);
        if (iVar10 == 0xfffd) goto LAB_02320d68;
      }
      puVar17 = (undefined2 *)(lVar18 + 0xd4);
    }
LAB_02320d78:
    uVar15 = FUN_0277d7b4(puVar17,&local_68);
    if ((uVar15 & 1) == 0) {
      iVar10 = 5;
    }
    else {
      iVar10 = 5;
      if ((*(char *)((long)puVar17 + 3) == local_68._3_1_) &&
         (iVar10 = 0, *(int *)(puVar17 + 2) != local_64)) {
        iVar10 = 5;
      }
    }
  }
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_68,param_2);
  bVar8 = bVar7;
  if ((int)param_1[0x2f] != 0) {
    bVar8 = true;
  }
  if (!bVar8) {
    FUN_02648c90(pbVar1,&local_68,0);
  }
  if ((*(long **)(lVar11 + 0xd0) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0xd0), puVar12 == (undefined8 *)0x0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)*puVar12)();
    uVar15 = uVar15 & 0xffffffff;
  }
  puVar14 = (undefined4 *)FUN_02807b30(*(long *)(lVar11 + 0xb8) + *(long *)(lVar11 + 0xb0));
  local_68 = *puVar14;
  local_64 = puVar14[1];
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar11 + 0xd0) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xd0) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  puVar6 = PTR_DAT_04bb43c0;
  if (iVar10 == 0) {
    if (param_1[0x53] == 0) {
LAB_02320ee8:
      puVar17 = &DAT_05586008;
    }
    else {
      lVar18 = *(long *)(param_1[0x53] + 0xbdf0);
      if (*(char *)(lVar18 + 0x1d5) != '\0') {
        puVar17 = (undefined2 *)(lVar18 + 0xcc);
        lVar19 = *(long *)PTR_DAT_04bb43c0;
        uVar9 = FUN_0277d6c4(puVar17);
        if (*(long *)puVar6 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_02320ed4;
          goto LAB_02320ef8;
        }
LAB_02320ed4:
        iVar10 = FUN_0277d6c4(puVar17);
        if (iVar10 == 0xfffd) goto LAB_02320ee8;
      }
      puVar17 = (undefined2 *)(lVar18 + 0xd4);
    }
LAB_02320ef8:
    uVar15 = FUN_0277d7b4(puVar17,&local_68);
    if ((uVar15 & 1) == 0) {
      iVar10 = 6;
    }
    else {
      iVar10 = 6;
      if ((*(char *)((long)puVar17 + 3) == local_68._3_1_) &&
         (iVar10 = 0, *(int *)(puVar17 + 2) != local_64)) {
        iVar10 = 6;
      }
    }
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_68,param_2);
  bVar8 = bVar7;
  if ((int)param_1[0x2f] != 0) {
    bVar8 = true;
  }
  if (!bVar8) {
    FUN_02648c90(pbVar1,&local_68,0);
  }
  if ((*(long **)(lVar11 + 0xd0) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0xd0), puVar12 == (undefined8 *)0x0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)*puVar12)();
    uVar15 = uVar15 & 0xffffffff;
  }
  lVar18 = *(long *)(lVar11 + 0xb8) + *(long *)(lVar11 + 0xb0);
  if ((*(char *)(lVar18 + 0xaf89) == '\0') || (7 < *(byte *)(lVar18 + 0xaf88))) {
    lVar19 = lVar18;
    if ((*(char *)(lVar18 + 0xaf8a) != '\0') &&
       ((uVar13 = FUN_016e5e90(), (uVar13 & 1) != 0 &&
        (lVar19 = lVar18 + 0xaf90, (*(byte *)(lVar18 + 0xaf8b) & 0xfe) != 0)))) {
      lVar19 = lVar18;
    }
  }
  else {
    lVar19 = lVar18 + (ulong)*(byte *)(lVar18 + 0xaf88) * 0x11f8 + 0x1fc8;
  }
  puVar14 = (undefined4 *)FUN_026e9240(lVar19);
  local_68 = *puVar14;
  local_64 = puVar14[1];
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar11 + 0xd0) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xd0) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  puVar6 = PTR_DAT_04bb43c0;
  if (iVar10 == 0) {
    if (param_1[0x53] == 0) {
LAB_023210c8:
      puVar17 = &DAT_05586008;
    }
    else {
      lVar18 = *(long *)(param_1[0x53] + 0xbdf8);
      if (*(char *)(lVar18 + 0x1d5) != '\0') {
        puVar17 = (undefined2 *)(lVar18 + 0xcc);
        lVar19 = *(long *)PTR_DAT_04bb43c0;
        uVar9 = FUN_0277d6c4(puVar17);
        if (*(long *)puVar6 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_023210b4;
          goto LAB_023210d8;
        }
LAB_023210b4:
        iVar10 = FUN_0277d6c4(puVar17);
        if (iVar10 == 0xfffd) goto LAB_023210c8;
      }
      puVar17 = (undefined2 *)(lVar18 + 0xd4);
    }
LAB_023210d8:
    uVar15 = FUN_0277d7b4(puVar17,&local_68);
    if ((uVar15 & 1) == 0) {
      iVar10 = 7;
    }
    else {
      iVar10 = 7;
      if ((*(char *)((long)puVar17 + 3) == local_68._3_1_) &&
         (iVar10 = 0, *(int *)(puVar17 + 2) != local_64)) {
        iVar10 = 7;
      }
    }
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_68,param_2);
  bVar8 = bVar7;
  if ((int)param_1[0x2f] != 0) {
    bVar8 = true;
  }
  if (!bVar8) {
    FUN_02648c90(pbVar1,&local_68,0);
  }
  if ((*(long **)(lVar11 + 0xd0) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0xd0), puVar12 == (undefined8 *)0x0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)*puVar12)();
    uVar15 = uVar15 & 0xffffffff;
  }
  lVar18 = *(long *)(lVar11 + 0xb8) + *(long *)(lVar11 + 0xb0);
  if ((*(char *)(lVar18 + 0xaf89) == '\0') || (7 < *(byte *)(lVar18 + 0xaf88))) {
    lVar19 = lVar18;
    if ((*(char *)(lVar18 + 0xaf8a) != '\0') &&
       ((uVar13 = FUN_016e5e90(), (uVar13 & 1) != 0 &&
        (lVar19 = lVar18 + 0xaf90, (*(byte *)(lVar18 + 0xaf8b) & 0xfe) != 0)))) {
      lVar19 = lVar18;
    }
  }
  else {
    lVar19 = lVar18 + (ulong)*(byte *)(lVar18 + 0xaf88) * 0x11f8 + 0x1fc8;
  }
  puVar14 = (undefined4 *)FUN_026e9470(lVar19);
  local_68 = *puVar14;
  local_64 = puVar14[1];
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar11 + 0xd0) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xd0) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  puVar6 = PTR_DAT_04bb43c0;
  if (iVar10 == 0) {
    if (param_1[0x53] == 0) {
LAB_023212a8:
      puVar17 = &DAT_05586008;
    }
    else {
      lVar18 = *(long *)(param_1[0x53] + 0xbe00);
      if (*(char *)(lVar18 + 0x1d5) != '\0') {
        puVar17 = (undefined2 *)(lVar18 + 0xcc);
        lVar19 = *(long *)PTR_DAT_04bb43c0;
        uVar9 = FUN_0277d6c4(puVar17);
        if (*(long *)puVar6 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_02321294;
          goto LAB_023212b8;
        }
LAB_02321294:
        iVar10 = FUN_0277d6c4(puVar17);
        if (iVar10 == 0xfffd) goto LAB_023212a8;
      }
      puVar17 = (undefined2 *)(lVar18 + 0xd4);
    }
LAB_023212b8:
    uVar15 = FUN_0277d7b4(puVar17,&local_68);
    if ((uVar15 & 1) == 0) {
      iVar10 = 8;
    }
    else {
      iVar10 = 8;
      if ((*(char *)((long)puVar17 + 3) == local_68._3_1_) &&
         (iVar10 = 0, *(int *)(puVar17 + 2) != local_64)) {
        iVar10 = 8;
      }
    }
  }
  (**(code **)(*param_1 + 0x2d0))(param_1,&local_68,param_2);
  bVar8 = bVar7;
  if ((int)param_1[0x2f] != 0) {
    bVar8 = true;
  }
  if (!bVar8) {
    FUN_02648c90(pbVar1,&local_68,0);
  }
  if ((*(long **)(lVar11 + 0xd0) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0xd0), puVar12 == (undefined8 *)0x0)) {
    uVar9 = 1;
  }
  else {
    uVar9 = (**(code **)*puVar12)();
    uVar9 = uVar9 ^ 1;
  }
  lVar18 = *(long *)(lVar11 + 0xb8) + *(long *)(lVar11 + 0xb0);
  if ((*(char *)(lVar18 + 0xaf89) == '\0') || (7 < *(byte *)(lVar18 + 0xaf88))) {
    lVar19 = lVar18;
    if ((*(char *)(lVar18 + 0xaf8a) != '\0') &&
       ((uVar15 = FUN_016e5e90(), (uVar15 & 1) != 0 &&
        (lVar19 = lVar18 + 0xaf90, (*(byte *)(lVar18 + 0xaf8b) & 0xfe) != 0)))) {
      lVar19 = lVar18;
    }
  }
  else {
    lVar19 = lVar18 + (ulong)*(byte *)(lVar18 + 0xaf88) * 0x11f8 + 0x1fc8;
  }
  puVar14 = (undefined4 *)FUN_026e96a0(lVar19);
  local_68 = *puVar14;
  local_64 = puVar14[1];
  if ((((uVar9 & 1) == 0) && (*(long *)(lVar11 + 0xd0) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xd0) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  puVar6 = PTR_DAT_04bb43c0;
  if (iVar10 == 0) {
    if (param_1[0x53] == 0) {
LAB_02321488:
      puVar17 = &DAT_05586008;
    }
    else {
      lVar11 = *(long *)(param_1[0x53] + 0xbe08);
      if (*(char *)(lVar11 + 0x1d5) != '\0') {
        puVar17 = (undefined2 *)(lVar11 + 0xcc);
        lVar18 = *(long *)PTR_DAT_04bb43c0;
        uVar9 = FUN_0277d6c4(puVar17);
        if (*(long *)puVar6 != 0) {
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((*(uint *)(lVar18 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_02321474;
          goto LAB_02321498;
        }
LAB_02321474:
        iVar10 = FUN_0277d6c4(puVar17);
        if (iVar10 == 0xfffd) goto LAB_02321488;
      }
      puVar17 = (undefined2 *)(lVar11 + 0xd4);
    }
LAB_02321498:
    uVar15 = FUN_0277d7b4(puVar17,&local_68);
    if ((uVar15 & 1) == 0) {
      iVar10 = 10;
    }
    else {
      iVar10 = 10;
      if ((*(char *)((long)puVar17 + 3) == local_68._3_1_) &&
         (iVar10 = 0, *(int *)(puVar17 + 2) != local_64)) {
        iVar10 = 10;
      }
    }
  }
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_68,param_2);
  if ((int)param_1[0x2f] != 0) {
    bVar7 = true;
  }
  if (bVar7) {
    return iVar10;
  }
  puVar14 = &local_68;
LAB_02321e18:
  FUN_02648c90(pbVar1,puVar14,0);
  return iVar10;
}

