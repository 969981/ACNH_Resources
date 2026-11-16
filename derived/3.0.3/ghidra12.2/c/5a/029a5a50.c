
void FUN_029a5a50(long param_1,char *param_2,byte *param_3,ulong param_4,ulong param_5,long *param_6
                 ,uint param_7,long param_8)

{
  ushort *puVar1;
  bool bVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  undefined2 *puVar20;
  byte bVar21;
  byte bVar22;
  int iVar23;
  undefined4 uVar24;
  uint uVar25;
  long lVar26;
  byte *pbVar27;
  long lVar28;
  byte *pbVar29;
  long lVar30;
  undefined8 *puVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  uint local_ac;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  byte local_7c [4];
  undefined8 local_78;
  long local_70;
  ulong local_68;
  
  cVar6 = *(char *)(param_8 + 3);
  cVar7 = *(char *)(param_8 + 2);
  uVar17 = *(uint *)(param_2 + 4);
  lVar33 = *(long *)(param_8 + 8);
  bVar10 = cVar7 != '\0';
  bVar11 = *(char *)(param_8 + 1) == '\0';
  bVar9 = bVar10 || bVar11;
  if (-1 < lVar33) {
    lVar26 = *param_6 - *(long *)(param_8 + 0x10);
    if (lVar26 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
      lVar32 = 0;
      if (*(long *)PTR_DAT_04bb29d0 != 0) {
        lVar32 = (lVar26 * 1000) / *(long *)PTR_DAT_04bb29d0;
      }
    }
    else {
      lVar32 = 0;
      if (DAT_05ae7888 != 0) {
        lVar32 = lVar26 / DAT_05ae7888;
      }
      lVar32 = lVar32 * 1000;
    }
    lVar33 = lVar32 + lVar33;
  }
  puVar1 = (ushort *)(param_1 + 0x5ce20);
  sVar8 = *(short *)PTR_DAT_04bb6298;
  if (sVar8 == -1) {
    local_ac = 0;
  }
  else {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
    puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8;
    if (0xff < (uint)(int)sVar8) {
      puVar3 = PTR_DAT_04bc39f8;
    }
    local_ac = *(uint *)(puVar3 + 4) & 1;
  }
  if ((((param_4 & 1) == 0) && ((param_5 & 1) != 0)) && (*(uint *)(param_1 + 0x50) == uVar17)) {
    if (uVar17 - 0xf9 < 0xe) {
      FUN_029a7f40(param_1,bVar9,param_7 & 1);
    }
    else if (uVar17 - 0x109 < 6) {
      FUN_029a8860(param_1,bVar9,param_7 & 1);
    }
    else if (uVar17 - 0x10f < 0x24) {
      FUN_029a98c0(param_1,bVar9,param_7 & 1);
    }
    else if (uVar17 - 0x133 < 0x20) {
      if ((DAT_0523adf0 == 0) || (*(int *)(DAT_0523adf0 + 0x98) == 0)) {
        FUN_029aa3f0(param_1,bVar9,param_7 & 1);
      }
      else {
        FUN_029aa3f0(param_1,bVar9,param_7 & 1);
        FUN_029aabe0(param_1);
      }
    }
  }
  pbVar27 = param_3 + 0x10;
  lVar26 = *(long *)pbVar27;
  puVar20 = (undefined2 *)(param_1 + 0x5ce28) + (ulong)*puVar1 * 0x14;
  if (599 < *puVar1) {
    puVar20 = (undefined2 *)(param_1 + 0x5ce28);
  }
  puVar20[1] = 0xf6f6;
  *(undefined8 *)(puVar20 + 0x10) = 0xff7fffffff7fffff;
  *puVar20 = (short)uVar17;
  *(undefined8 *)(puVar20 + 2) = 0xfff6fff6fff6fff6;
  *(undefined4 *)(puVar20 + 6) = 0xfffffff6;
  *(undefined8 *)(puVar20 + 8) = 0xfffffffffffffff6;
  *(undefined8 *)(puVar20 + 0xc) = 0xff7fffffff7fffff;
  if ((*param_3 & 1) == 0) {
LAB_029a5cbc:
    bVar2 = false;
    bVar13 = false;
  }
  else {
    if ((param_4 & 1) == 0) {
      if (!bVar9) {
        uVar25 = local_ac ^ 1;
        if (cVar6 == '\0') {
          uVar25 = 1;
        }
        if (uVar25 == 0) {
          iVar16 = *(int *)(param_3 + 4);
          iVar23 = *(int *)(param_2 + 0x18);
          if (*(int *)(param_2 + 0x18) != iVar16) {
            *(int *)(param_2 + 0x18) = iVar16;
            iVar23 = iVar16;
          }
          bVar2 = true;
          *(int *)(puVar20 + 6) = iVar23;
          goto LAB_029a5d9c;
        }
        goto LAB_029a5cbc;
      }
      FUN_029aae30(param_1,param_2,param_3,1,param_7 & 1);
      if (cVar7 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        *(undefined4 *)(puVar20 + 6) = *(undefined4 *)(param_2 + 0x18);
      }
    }
    else {
      if (cVar7 == '\0') {
        if (cVar6 == '\0') goto LAB_029a5cbc;
        FUN_029aae30(param_1,param_2,param_3,bVar9,param_7 & 1);
        bVar2 = false;
LAB_029a5d9c:
        bVar13 = true;
        goto LAB_029a5dbc;
      }
      FUN_029aae30(param_1,param_2,param_3,bVar9,param_7 & 1);
      bVar2 = local_ac != 0;
      if (bVar2) {
        *(undefined4 *)(puVar20 + 6) = *(undefined4 *)(param_2 + 0x18);
      }
    }
    bVar13 = true;
  }
LAB_029a5dbc:
  if ((*param_3 >> 1 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      if (bVar10 || bVar11) {
        FUN_029ab030(param_1,param_2,param_3,param_7 & 1);
        if (cVar7 != '\0') {
          bVar2 = true;
          *(char *)(puVar20 + 1) = param_2[8];
        }
        bVar13 = true;
      }
      else {
        uVar25 = local_ac ^ 1;
        if (cVar6 == '\0') {
          uVar25 = 1;
        }
        if (uVar25 == 0) {
          bVar22 = param_3[3];
          bVar21 = param_2[8];
          if (param_2[8] != bVar22) {
            param_2[8] = bVar22;
            bVar21 = bVar22;
          }
          goto LAB_029a5e68;
        }
      }
    }
    else if (cVar7 == '\0') {
      if (cVar6 != '\0') {
        if (param_2[8] != param_3[3]) {
          param_2[8] = param_3[3];
        }
        goto LAB_029a5e70;
      }
    }
    else if (local_ac != 0) {
      FUN_029ab030(param_1,param_2,param_3,param_7 & 1);
      bVar21 = param_2[8];
LAB_029a5e68:
      bVar2 = true;
      *(byte *)(puVar20 + 1) = bVar21;
LAB_029a5e70:
      bVar13 = true;
    }
  }
  if (param_3[1] == 0) {
LAB_029a5ff4:
    bVar12 = false;
    bVar22 = param_3[2];
joined_r0x029a5fec:
    if (bVar22 != 0) {
      if ((param_4 & 1) == 0) {
        if (bVar10 || bVar11) {
          if (local_ac == 0) {
            FUN_029ab224(param_2,cVar6 != '\0',lVar33,param_6,lVar26);
            if (cVar7 != '\0') {
              bVar2 = true;
              *(long *)(puVar20 + 8) = lVar33;
            }
            goto LAB_029a6404;
          }
          lVar32 = *DAT_0537d558;
          bVar22 = *(byte *)(lVar32 + 0x473);
          pbVar29 = PTR_DAT_04bb5038;
          if ((long)(char)bVar22 != 0xffffffffffffffff) {
            puVar4 = (uint *)(lVar32 + 0x48) + ((long)(char)bVar22 & 0xffffffffU) * 0x20;
            if (7 < bVar22) {
              puVar4 = (uint *)(lVar32 + 0x48);
            }
            if ((*puVar4 & 8) != 0) {
              pbVar29 = (byte *)(lVar32 + 0x470);
            }
          }
          bVar22 = *pbVar29;
          if (7 < bVar22) {
            bVar22 = 0xff;
          }
          if (*(int *)(param_2 + 0x18) == (int)(char)bVar22) {
            bVar13 = cVar6 != '\0';
            lVar30 = lVar26;
            lVar32 = lVar33;
          }
          else {
            lVar28 = *(long *)PTR_DAT_04bb29d0;
            lVar32 = (lVar28 * 0x14d) / 1000;
            if (lVar32 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
              lVar30 = 0;
              if (lVar28 != 0) {
                lVar30 = (lVar32 * 1000) / lVar28;
              }
            }
            else {
              lVar30 = 0;
            }
            bVar13 = true;
            lVar30 = lVar30 + lVar33;
            lVar32 = lVar30;
          }
          FUN_029ab224(param_2,bVar13,lVar33,param_6,lVar30);
          if (cVar7 != '\0') {
            bVar2 = true;
            *(long *)(puVar20 + 8) = lVar32;
          }
          param_2[0x38] = '\x03';
LAB_029a6680:
          bVar13 = true;
          bVar22 = *param_3;
          goto joined_r0x029a6690;
        }
      }
      else if (cVar7 == '\0') {
        if (cVar6 != '\0') {
          FUN_029ab224(param_2,1,lVar33,param_6,lVar26);
          if (!bVar12) {
            param_2[0x38] = '\x03';
          }
          else {
            param_2[0x38] = '\0';
          }
          bVar12 = bVar12;
LAB_029a6404:
          bVar13 = true;
        }
      }
      else if ((local_ac != 0) && (*(int *)(param_2 + 4) - 0x153U < 0xc)) {
        lVar28 = *(long *)PTR_DAT_04bb29d0;
        lVar32 = (lVar28 * 0x14d) / 1000;
        if (lVar32 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
          lVar30 = 0;
          if (lVar28 != 0) {
            lVar30 = (lVar32 * 1000) / lVar28;
          }
        }
        else {
          lVar30 = 0;
        }
        bVar2 = true;
        FUN_029ab224(param_2,1,lVar33,param_6,lVar30 + lVar33);
        *(long *)(puVar20 + 8) = lVar30 + lVar33;
        goto LAB_029a6680;
      }
    }
    bVar22 = *param_3;
  }
  else {
    if ((param_4 & 1) == 0) {
      if (bVar10 || bVar11) {
        uVar25 = *(uint *)(param_3 + 8);
        bVar12 = uVar25 != *(uint *)(param_2 + 0xc);
        if (bVar12) {
          local_84 = 0xfffe;
          FUN_0277d4ac(&local_84);
          uVar5 = 0;
          if (uVar25 != 99999 && -1 < (int)uVar25) {
            uVar5 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
          }
          for (lVar32 = *(long *)(DAT_055f6860 + 0x19f820); lVar32 != 0;
              lVar32 = *(long *)(lVar32 + 0x10)) {
            while ((int)uVar5 < *(int *)(lVar32 + 0x20)) {
              lVar32 = *(long *)(lVar32 + 8);
              if (lVar32 == 0) goto LAB_029a5fb0;
            }
            if ((int)uVar5 <= *(int *)(lVar32 + 0x20)) {
              local_78 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar32 + 0x2c);
              goto LAB_029a6140;
            }
          }
LAB_029a5fb0:
          local_78 = (undefined *)0xfffe;
LAB_029a6140:
          FUN_0277d4ac(&local_78);
          local_84 = (ulong)local_78;
          uVar15 = FUN_0277d6c4(&local_84);
          *(undefined2 *)(param_2 + 0x122) = uVar15;
          local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar25);
          FUN_029a7d90(param_1,param_2,&local_78);
        }
        if (cVar7 == '\0') goto LAB_029a618c;
        uVar25 = *(uint *)(param_2 + 0xc);
        goto LAB_029a6184;
      }
      if ((cVar6 == '\0') || ((0x13 < uVar17 - 0xe5 && (local_ac == 0)))) goto LAB_029a5ff4;
      bVar12 = false;
      bVar2 = true;
      puVar20[2] = (short)*(undefined4 *)(param_3 + 8);
      bVar22 = param_3[2];
      goto joined_r0x029a5fec;
    }
    if (cVar7 != '\0') {
      uVar25 = *(uint *)(param_2 + 0xc);
      uVar5 = *(uint *)(param_3 + 8);
      bVar12 = uVar5 != uVar25;
      if (bVar12) {
        local_84 = 0xfffe;
        FUN_0277d4ac(&local_84);
        uVar25 = 0;
        if (uVar5 != 99999 && -1 < (int)uVar5) {
          uVar25 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
        }
        for (lVar32 = *(long *)(DAT_055f6860 + 0x19f820); lVar32 != 0;
            lVar32 = *(long *)(lVar32 + 0x10)) {
          while ((int)uVar25 < *(int *)(lVar32 + 0x20)) {
            lVar32 = *(long *)(lVar32 + 8);
            if (lVar32 == 0) goto LAB_029a5f10;
          }
          if ((int)uVar25 <= *(int *)(lVar32 + 0x20)) {
            local_78 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar32 + 0x2c);
            goto LAB_029a60ec;
          }
        }
LAB_029a5f10:
        local_78 = (undefined *)0xfffe;
LAB_029a60ec:
        FUN_0277d4ac(&local_78);
        local_84 = (ulong)local_78;
        uVar15 = FUN_0277d6c4(&local_84);
        *(undefined2 *)(param_2 + 0x122) = uVar15;
        local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar5);
        FUN_029a7d90(param_1,param_2,&local_78);
        uVar25 = *(uint *)(param_2 + 0xc);
      }
LAB_029a6184:
      puVar20[2] = (short)uVar25;
      bVar2 = true;
LAB_029a618c:
      bVar13 = true;
      bVar22 = param_3[2];
      goto joined_r0x029a5fec;
    }
    if (cVar6 != '\0') {
      uVar25 = *(uint *)(param_3 + 8);
      bVar12 = uVar25 != *(uint *)(param_2 + 0xc);
      if (bVar12) {
        local_84 = 0xfffe;
        FUN_0277d4ac(&local_84);
        uVar5 = 0;
        if (uVar25 != 99999 && -1 < (int)uVar25) {
          uVar5 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
        }
        for (lVar32 = *(long *)(DAT_055f6860 + 0x19f820); lVar32 != 0;
            lVar32 = *(long *)(lVar32 + 0x10)) {
          while ((int)uVar5 < *(int *)(lVar32 + 0x20)) {
            lVar32 = *(long *)(lVar32 + 8);
            if (lVar32 == 0) goto LAB_029a60a0;
          }
          if ((int)uVar5 <= *(int *)(lVar32 + 0x20)) {
            local_78 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar32 + 0x2c);
            goto LAB_029a7328;
          }
        }
LAB_029a60a0:
        local_78 = (undefined *)0xfffe;
LAB_029a7328:
        FUN_0277d4ac(&local_78);
        local_84 = (ulong)local_78;
        uVar15 = FUN_0277d6c4(&local_84);
        *(undefined2 *)(param_2 + 0x122) = uVar15;
        local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar25);
        FUN_029a7d90(param_1,param_2,&local_78);
      }
      goto LAB_029a618c;
    }
    bVar12 = false;
    bVar22 = *param_3;
  }
joined_r0x029a6690:
  if ((bVar22 >> 4 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      if (bVar10 || bVar11) {
        lVar28 = *(long *)(param_3 + 0x18);
        param_2[0x120] = '\0';
        lVar32 = 0;
        *(long *)(param_2 + 0x20) = lVar28;
        lVar28 = *param_6 - lVar28;
        if (lVar28 == 0) {
LAB_029a677c:
          lVar28 = 0;
          *(int *)(param_2 + 0x10) = (int)lVar32;
LAB_029a6784:
          uVar24 = (undefined4)lVar28;
        }
        else {
          lVar30 = (long)*(int *)(param_2 + 0x128);
          if (lVar28 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
            lVar32 = 0;
            if (*(long *)PTR_DAT_04bb29d0 != 0) {
              lVar32 = (lVar28 * 1000000) / *(long *)PTR_DAT_04bb29d0;
            }
          }
          else if (lVar28 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
            lVar32 = 0;
            if (*(long *)PTR_DAT_04bb29d0 != 0) {
              lVar32 = (lVar28 * 1000) / *(long *)PTR_DAT_04bb29d0;
            }
            lVar32 = lVar32 * 1000;
          }
          else {
            lVar32 = 0;
            if (DAT_05ae7888 != 0) {
              lVar32 = lVar28 / DAT_05ae7888;
            }
            lVar32 = lVar32 * 1000000;
          }
          lVar32 = (lVar32 * *(int *)(param_2 + 0x124)) / 1000000;
          if (lVar32 < lVar30) goto LAB_029a677c;
          lVar34 = *(int *)(param_2 + 300) - lVar30;
          lVar28 = 0;
          if (lVar34 != 0) {
            lVar28 = (lVar32 - lVar30) / lVar34;
          }
          *(int *)(param_2 + 0x10) =
               *(int *)(param_2 + 0x128) + ((int)(lVar32 - lVar30) - (int)lVar28 * (int)lVar34);
          uVar24 = 0xffffffff;
          if (lVar28 < 0x100000000) goto LAB_029a6784;
        }
        *(undefined4 *)(param_2 + 0x14) = uVar24;
        if (cVar7 == '\0') goto LAB_029a686c;
      }
      else {
        uVar25 = local_ac ^ 1;
        if (cVar6 == '\0') {
          uVar25 = 1;
        }
        if (uVar25 != 0) goto LAB_029a6870;
        lVar28 = *(long *)(param_3 + 0x18);
        param_2[0x120] = '\0';
        lVar32 = 0;
        *(long *)(param_2 + 0x20) = lVar28;
        lVar28 = *param_6 - lVar28;
        if (lVar28 == 0) {
LAB_029a67e0:
          lVar28 = 0;
          *(int *)(param_2 + 0x10) = (int)lVar32;
LAB_029a67e8:
          uVar24 = (undefined4)lVar28;
        }
        else {
          lVar30 = (long)*(int *)(param_2 + 0x128);
          if (lVar28 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
            lVar32 = 0;
            if (*(long *)PTR_DAT_04bb29d0 != 0) {
              lVar32 = (lVar28 * 1000000) / *(long *)PTR_DAT_04bb29d0;
            }
          }
          else if (lVar28 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
            lVar32 = 0;
            if (*(long *)PTR_DAT_04bb29d0 != 0) {
              lVar32 = (lVar28 * 1000) / *(long *)PTR_DAT_04bb29d0;
            }
            lVar32 = lVar32 * 1000;
          }
          else {
            lVar32 = 0;
            if (DAT_05ae7888 != 0) {
              lVar32 = lVar28 / DAT_05ae7888;
            }
            lVar32 = lVar32 * 1000000;
          }
          lVar32 = (lVar32 * *(int *)(param_2 + 0x124)) / 1000000;
          if (lVar32 < lVar30) goto LAB_029a67e0;
          lVar34 = *(int *)(param_2 + 300) - lVar30;
          lVar28 = 0;
          if (lVar34 != 0) {
            lVar28 = (lVar32 - lVar30) / lVar34;
          }
          *(int *)(param_2 + 0x10) =
               *(int *)(param_2 + 0x128) + ((int)(lVar32 - lVar30) - (int)lVar28 * (int)lVar34);
          uVar24 = 0xffffffff;
          if (lVar28 < 0x100000000) goto LAB_029a67e8;
        }
        *(undefined4 *)(param_2 + 0x14) = uVar24;
      }
      lVar32 = *(long *)(param_3 + 0x18) - *param_6;
      if (lVar32 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
        lVar28 = 0;
        if (*(long *)PTR_DAT_04bb29d0 != 0) {
          lVar28 = (lVar32 * 1000) / *(long *)PTR_DAT_04bb29d0;
        }
      }
      else {
        lVar28 = 0;
        if (DAT_05ae7888 != 0) {
          lVar28 = lVar32 / DAT_05ae7888;
        }
        lVar28 = lVar28 * 1000;
      }
      bVar2 = true;
      *(long *)(puVar20 + 8) = lVar28 + lVar33;
    }
    else {
      if ((cVar7 != '\0') || (cVar6 == '\0')) goto LAB_029a6870;
      lVar28 = *(long *)(param_3 + 0x18);
      param_2[0x120] = '\0';
      lVar32 = 0;
      *(long *)(param_2 + 0x20) = lVar28;
      lVar28 = *param_6 - lVar28;
      if (lVar28 == 0) {
LAB_029a6708:
        lVar28 = 0;
        *(int *)(param_2 + 0x10) = (int)lVar32;
LAB_029a6710:
        uVar24 = (undefined4)lVar28;
      }
      else {
        lVar30 = (long)*(int *)(param_2 + 0x128);
        if (lVar28 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
          lVar32 = 0;
          if (*(long *)PTR_DAT_04bb29d0 != 0) {
            lVar32 = (lVar28 * 1000000) / *(long *)PTR_DAT_04bb29d0;
          }
        }
        else if (lVar28 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
          lVar32 = 0;
          if (*(long *)PTR_DAT_04bb29d0 != 0) {
            lVar32 = (lVar28 * 1000) / *(long *)PTR_DAT_04bb29d0;
          }
          lVar32 = lVar32 * 1000;
        }
        else {
          lVar32 = 0;
          if (DAT_05ae7888 != 0) {
            lVar32 = lVar28 / DAT_05ae7888;
          }
          lVar32 = lVar32 * 1000000;
        }
        lVar32 = (lVar32 * *(int *)(param_2 + 0x124)) / 1000000;
        if (lVar32 < lVar30) goto LAB_029a6708;
        lVar34 = *(int *)(param_2 + 300) - lVar30;
        lVar28 = 0;
        if (lVar34 != 0) {
          lVar28 = (lVar32 - lVar30) / lVar34;
        }
        *(int *)(param_2 + 0x10) =
             *(int *)(param_2 + 0x128) + ((int)(lVar32 - lVar30) - (int)lVar28 * (int)lVar34);
        uVar24 = 0xffffffff;
        if (lVar28 < 0x100000000) goto LAB_029a6710;
      }
      *(undefined4 *)(param_2 + 0x14) = uVar24;
      if (bVar12) {
        param_2[0x38] = '\0';
      }
      else {
        param_2[0x38] = '\x03';
      }
    }
LAB_029a686c:
    bVar13 = true;
  }
LAB_029a6870:
  if (((*(int *)(param_2 + 0x18) == -1) || (*(int *)(param_3 + 0x20) != *(int *)(param_2 + 0x18)))
     || ((*param_3 >> 2 & 1) == 0)) {
LAB_029a697c:
    if (((param_4 & 1) != 0) && (*(char *)(param_1 + 8) != '\0')) {
      if ('\0' < param_2[0x38]) {
        param_2[0x38] = param_2[0x38] + -1;
      }
      iVar16 = *(int *)(param_2 + 0x28);
      lVar32 = *param_6;
      if ((-1 < iVar16) && (*(long *)(param_2 + 0x30) <= lVar32)) {
        local_84 = 0xfffe;
        FUN_0277d4ac(&local_84);
        uVar5 = *(uint *)(param_2 + 0x28);
        uVar25 = 0;
        if (uVar5 != 99999 && -1 < (int)uVar5) {
          uVar25 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
        }
        for (lVar32 = *(long *)(DAT_055f6860 + 0x19f820); lVar32 != 0;
            lVar32 = *(long *)(lVar32 + 0x10)) {
          while ((int)uVar25 < *(int *)(lVar32 + 0x20)) {
            lVar32 = *(long *)(lVar32 + 8);
            if (lVar32 == 0) goto LAB_029a6a2c;
          }
          if ((int)uVar25 <= *(int *)(lVar32 + 0x20)) {
            local_78 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar32 + 0x2c);
            goto LAB_029a6a48;
          }
        }
LAB_029a6a2c:
        local_78 = (undefined *)0xfffe;
LAB_029a6a48:
        FUN_0277d4ac(&local_78);
        local_84 = (ulong)local_78;
        uVar15 = FUN_0277d6c4(&local_84);
        local_88 = *(undefined4 *)(param_2 + 0x28);
        *(undefined2 *)(param_2 + 0x122) = uVar15;
        FUN_029a7d90(param_1,param_2,&local_88);
        param_2[0x120] = '\0';
        lVar32 = 0;
        *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x30);
        lVar28 = *param_6 - *(long *)(param_2 + 0x30);
        if (lVar28 == 0) {
LAB_029a6b5c:
          lVar28 = 0;
          *(int *)(param_2 + 0x10) = (int)lVar32;
LAB_029a6b64:
          uVar24 = (undefined4)lVar28;
        }
        else {
          lVar30 = (long)*(int *)(param_2 + 0x128);
          if (lVar28 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
            lVar32 = 0;
            if (*(long *)PTR_DAT_04bb29d0 != 0) {
              lVar32 = (lVar28 * 1000000) / *(long *)PTR_DAT_04bb29d0;
            }
          }
          else if (lVar28 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
            lVar32 = 0;
            if (*(long *)PTR_DAT_04bb29d0 != 0) {
              lVar32 = (lVar28 * 1000) / *(long *)PTR_DAT_04bb29d0;
            }
            lVar32 = lVar32 * 1000;
          }
          else {
            lVar32 = 0;
            if (DAT_05ae7888 != 0) {
              lVar32 = lVar28 / DAT_05ae7888;
            }
            lVar32 = lVar32 * 1000000;
          }
          lVar32 = (lVar32 * *(int *)(param_2 + 0x124)) / 1000000;
          if (lVar32 < lVar30) goto LAB_029a6b5c;
          lVar34 = *(int *)(param_2 + 300) - lVar30;
          lVar28 = 0;
          if (lVar34 != 0) {
            lVar28 = (lVar32 - lVar30) / lVar34;
          }
          *(int *)(param_2 + 0x10) =
               *(int *)(param_2 + 0x128) + ((int)(lVar32 - lVar30) - (int)lVar28 * (int)lVar34);
          uVar24 = 0xffffffff;
          if (lVar28 < 0x100000000) goto LAB_029a6b64;
        }
        *(undefined4 *)(param_2 + 0x14) = uVar24;
        iVar16 = -1;
        bVar13 = true;
        param_2[0x28] = -1;
        param_2[0x29] = -1;
        param_2[0x2a] = -1;
        param_2[0x2b] = -1;
        param_2[0x30] = '\0';
        param_2[0x31] = '\0';
        param_2[0x32] = '\0';
        param_2[0x33] = '\0';
        param_2[0x34] = '\0';
        param_2[0x35] = '\0';
        param_2[0x36] = '\0';
        param_2[0x37] = '\0';
        lVar32 = *param_6;
      }
      lVar32 = lVar32 - *(long *)(param_2 + 0x20);
      lVar28 = 0;
      if (lVar32 == 0) {
LAB_029a6c48:
        lVar32 = 0;
        *(int *)(param_2 + 0x10) = (int)lVar28;
LAB_029a6c50:
        uVar25 = (uint)lVar32;
      }
      else {
        lVar30 = (long)*(int *)(param_2 + 0x128);
        if (lVar32 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
          lVar28 = 0;
          if (*(long *)PTR_DAT_04bb29d0 != 0) {
            lVar28 = (lVar32 * 1000000) / *(long *)PTR_DAT_04bb29d0;
          }
        }
        else if (lVar32 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
          lVar28 = 0;
          if (*(long *)PTR_DAT_04bb29d0 != 0) {
            lVar28 = (lVar32 * 1000) / *(long *)PTR_DAT_04bb29d0;
          }
          lVar28 = lVar28 * 1000;
        }
        else {
          lVar28 = 0;
          if (DAT_05ae7888 != 0) {
            lVar28 = lVar32 / DAT_05ae7888;
          }
          lVar28 = lVar28 * 1000000;
        }
        lVar28 = (lVar28 * *(int *)(param_2 + 0x124)) / 1000000;
        if (lVar28 < lVar30) goto LAB_029a6c48;
        lVar34 = *(int *)(param_2 + 300) - lVar30;
        lVar32 = 0;
        if (lVar34 != 0) {
          lVar32 = (lVar28 - lVar30) / lVar34;
        }
        *(int *)(param_2 + 0x10) =
             *(int *)(param_2 + 0x128) + ((int)(lVar28 - lVar30) - (int)lVar32 * (int)lVar34);
        uVar25 = 0xffffffff;
        if (lVar32 < 0x100000000) goto LAB_029a6c50;
      }
      *(uint *)(param_2 + 0x14) = uVar25;
      if (*(int *)(param_2 + 0xc) < 1) {
        if (param_2[8] != '\0' && (bVar10 || bVar11)) {
          local_78 = (undefined *)0x0;
          FUN_029ab7c0(param_1,param_2,*param_6,&local_78,param_7 & 1);
          if (cVar7 != '\0') {
            puVar20[2] = (short)*(undefined4 *)(param_2 + 0xc);
            *(long *)(puVar20 + 8) = lVar33;
            bVar2 = true;
          }
          bVar13 = true;
        }
      }
      else if ((1 < uVar25) && (param_2[8] != '\0')) {
        bVar22 = param_2[0x120] + 1;
        param_2[0x120] = bVar22;
        if (((iVar16 < 0 && 0xa9 < bVar22) && (iVar16 >= 0 || bVar22 != 0xaa)) && bVar9) {
          lVar32 = *(long *)PTR_DAT_04bb29d0;
          uVar18 = (lVar32 * 0x14d) / 1000;
          local_78 = (undefined *)uVar18;
          FUN_029ab7c0(param_1,param_2,*param_6,&local_78,param_7 & 1);
          if (cVar7 != '\0') {
            puVar20[2] = (short)*(undefined4 *)(param_2 + 0x28);
            if (uVar18 + 0x20c49ba5e353f7 < 0x4189374bc6a7ee) {
              lVar28 = 0;
              if (lVar32 != 0) {
                lVar28 = (long)(uVar18 * 1000) / lVar32;
              }
            }
            else {
              lVar28 = 0;
            }
            *(long *)(puVar20 + 8) = lVar28 + lVar33;
            bVar2 = true;
          }
        }
      }
      if ((bVar9) && (param_2[8] != '\0')) {
        uVar25 = (uint)(byte)param_2[0x58];
        if (0 < *(int *)(param_2 + 0xc)) {
          uVar25 = uVar25 + 1;
        }
        if (uVar25 < 3) {
          local_78 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_78);
          uVar15 = FUN_0277d6c4(&local_78);
          *(undefined2 *)(param_2 + 0x122) = uVar15;
          param_2[0x28] = -1;
          param_2[0x29] = -1;
          param_2[0x2a] = -1;
          param_2[0x2b] = -1;
          param_2[0x30] = '\0';
          param_2[0x31] = '\0';
          param_2[0x32] = '\0';
          param_2[0x33] = '\0';
          param_2[0x34] = '\0';
          param_2[0x35] = '\0';
          param_2[0x36] = '\0';
          param_2[0x37] = '\0';
          local_8c = 0;
          FUN_029a7d90(param_1,param_2,&local_8c);
          FUN_029ab224(param_2,cVar6 != '\0',lVar33,param_6,lVar26);
          param_2[8] = '\0';
          if (cVar7 != '\0') {
            *(undefined1 *)(puVar20 + 1) = 0;
            uVar24 = *(undefined4 *)(param_2 + 0xc);
            *(long *)(puVar20 + 8) = lVar33;
            puVar20[2] = (short)uVar24;
            bVar2 = true;
          }
          goto LAB_029a6ebc;
        }
      }
    }
    if (bVar13) {
LAB_029a6ebc:
      *param_2 = '\x01';
    }
  }
  else {
    if ((param_4 & 1) != 0) {
      if ((bVar9 & local_ac) == 1) {
        FUN_029ab4d0(param_1,param_2,param_3,cVar6 != '\0',lVar33,param_6,lVar26,param_7 & 1);
        if (cVar7 != '\0') {
          puVar20[2] = 0;
          bVar2 = true;
          *(long *)(puVar20 + 8) = lVar33;
        }
        bVar13 = true;
      }
      goto LAB_029a697c;
    }
    if (bVar9 != 0) {
      FUN_029ab4d0(param_1,param_2,param_3,cVar6 != '\0',lVar33,param_6,lVar26,param_7 & 1);
      if (cVar7 != '\0') goto LAB_029a694c;
      goto LAB_029a6ebc;
    }
    local_ac = local_ac ^ 1;
    if (cVar6 == '\0') {
      local_ac = 1;
    }
    if (local_ac == 0) {
LAB_029a694c:
      bVar2 = true;
      puVar20[2] = 0;
      *(long *)(puVar20 + 8) = lVar33;
      goto LAB_029a6ebc;
    }
    if (bVar13) goto LAB_029a6ebc;
  }
  if ((*param_2 == '\0') || (*(char *)(param_1 + 8) == '\0')) goto LAB_029a75d4;
  if (0x84 < (int)uVar17) {
    if (uVar17 < 0xe5) {
      uVar17 = uVar17 - 0x85;
      uVar25 = (uVar17 & 0xff) / 0xc;
      local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar25);
      local_84 = CONCAT44(local_84._4_4_,uVar17 + uVar25 * -0xc >> 1) & 0xffffffff0000007f;
      if (DAT_05574040 == 0) {
LAB_029a6fac:
        lVar33 = 0;
        if ((uVar17 & 1) == 0) goto LAB_029a6fb4;
LAB_029a7070:
        lVar26 = *(long *)(lVar33 + 0x2210);
        if (lVar26 == 0) {
          uVar18 = 0;
        }
        else {
          if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
            uVar18 = 0;
          }
          else {
            uVar18 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
            lVar26 = *(long *)(lVar33 + 0x2210);
            uVar18 = uVar18 & 0xffffffff;
            if (lVar26 == 0) goto LAB_029a7240;
          }
          plVar19 = *(long **)(lVar26 + 0x20);
          if (plVar19 != (long *)0x0) {
            local_78 = *(undefined **)(lVar33 + 0x21f0);
            local_70 = *(undefined8 *)(lVar33 + 0x21f8);
            local_68 = 4;
            (**(code **)(*plVar19 + 0x20))(plVar19,&local_78);
          }
        }
LAB_029a7240:
        *(char *)(*(long *)(lVar33 + 0x21f8) + *(long *)(lVar33 + 0x21f0) + 2) =
             (char)*(undefined4 *)(param_2 + 0x18);
        if ((*(long *)(lVar33 + 0x2210) != 0) &&
           (plVar19 = *(long **)(*(long *)(lVar33 + 0x2210) + 0x20), plVar19 != (long *)0x0)) {
          local_78 = *(undefined **)(lVar33 + 0x21f0);
          local_70 = *(undefined8 *)(lVar33 + 0x21f8);
          local_68 = 4;
          (**(code **)(*plVar19 + 0x20))(plVar19,&local_78);
        }
        *(short *)(*(long *)(lVar33 + 0x21f8) + *(long *)(lVar33 + 0x21f0)) =
             (short)*(undefined4 *)(param_2 + 0xc);
        if ((uVar18 & 1) == 0) goto LAB_029a75d0;
        lVar33 = *(long *)(lVar33 + 0x2210);
      }
      else {
        puVar31 = *(undefined8 **)(DAT_05574040 + 0x10);
        if ((*(byte *)(DAT_05574040 + 0x453) & 1) != 0) {
          if (((puVar31 != (undefined8 *)0x0) && ((long *)puVar31[0x26] != (long *)0x0)) &&
             (lVar33 = (**(code **)(*(long *)puVar31[0x26] + 0x38))(), lVar33 != 0))
          goto LAB_029a6fa0;
          goto LAB_029a6fac;
        }
        lVar33 = (**(code **)(*(long *)*puVar31 + 0x38))();
        if (lVar33 == 0) goto LAB_029a6fac;
        lVar33 = lVar33 + 0x70;
LAB_029a6fa0:
        if (7 < (uint)local_78) goto LAB_029a6fac;
        lVar26 = lVar33 + 0x119228 + ((ulong)local_78 & 0xffffffff) * 0xfa08;
        if (7 < (uint)local_78) {
          lVar26 = lVar33 + 0x119228;
        }
        lVar33 = lVar26 + 0x1df8 + (local_84 & 0xffffffff) * 0x2488;
        if (5 < (uint)local_84) {
          lVar33 = lVar26 + 0x1df8;
        }
        if ((uVar17 & 1) != 0) goto LAB_029a7070;
LAB_029a6fb4:
        lVar26 = *(long *)(lVar33 + 0x1e90);
        if (lVar26 == 0) {
          uVar18 = 0;
        }
        else {
          if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
            uVar18 = 0;
          }
          else {
            uVar18 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
            lVar26 = *(long *)(lVar33 + 0x1e90);
            uVar18 = uVar18 & 0xffffffff;
            if (lVar26 == 0) goto LAB_029a7154;
          }
          plVar19 = *(long **)(lVar26 + 0x20);
          if (plVar19 != (long *)0x0) {
            local_78 = *(undefined **)(lVar33 + 0x1e70);
            local_70 = *(undefined8 *)(lVar33 + 0x1e78);
            local_68 = 4;
            (**(code **)(*plVar19 + 0x20))(plVar19,&local_78);
          }
        }
LAB_029a7154:
        *(char *)(*(long *)(lVar33 + 0x1e78) + *(long *)(lVar33 + 0x1e70) + 2) =
             (char)*(undefined4 *)(param_2 + 0x18);
        if ((*(long *)(lVar33 + 0x1e90) != 0) &&
           (plVar19 = *(long **)(*(long *)(lVar33 + 0x1e90) + 0x20), plVar19 != (long *)0x0)) {
          local_78 = *(undefined **)(lVar33 + 0x1e70);
          local_70 = *(undefined8 *)(lVar33 + 0x1e78);
          local_68 = 4;
          (**(code **)(*plVar19 + 0x20))(plVar19,&local_78);
        }
        *(short *)(*(long *)(lVar33 + 0x1e78) + *(long *)(lVar33 + 0x1e70)) =
             (short)*(undefined4 *)(param_2 + 0xc);
        if ((*(long *)(lVar33 + 0x1e90) != 0) &&
           (plVar19 = *(long **)(*(long *)(lVar33 + 0x1e90) + 0x20), plVar19 != (long *)0x0)) {
          local_78 = *(undefined **)(lVar33 + 0x1e70);
          local_70 = *(undefined8 *)(lVar33 + 0x1e78);
          local_68 = 4;
          (**(code **)(*plVar19 + 0x20))(plVar19,&local_78);
        }
        lVar26 = *(long *)(lVar33 + 0x1e78) + *(long *)(lVar33 + 0x1e70);
        *(byte *)(lVar26 + 3) = *(byte *)(lVar26 + 3) & 0xfe | param_2[8];
        if ((uVar18 & 1) == 0) goto LAB_029a75d0;
        lVar33 = *(long *)(lVar33 + 0x1e90);
      }
      if ((lVar33 != 0) && (*(undefined8 **)(lVar33 + 0x18) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)(lVar33 + 0x18))();
      }
    }
    else {
      uVar25 = uVar17 - 0xf9;
      if (0xf8 < uVar17) {
        if (uVar17 < 0x107) {
          if (DAT_04cd19d8 != 0) {
            if (*(int *)(DAT_04cd19d8 + 0x15c) == 0) {
              FUN_025196e4(&local_84);
              bVar22 = (byte)local_84;
            }
            else {
              bVar22 = *(byte *)(DAT_04cd19d8 + 0x158);
              if (7 < bVar22) {
                bVar22 = 0xff;
              }
              local_84 = CONCAT71(local_84._1_7_,bVar22);
            }
            if (bVar22 < 8) {
              if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
                iVar16 = FUN_02582d8c(&local_84,2);
                if (-1 < iVar16) goto LAB_029a73c8;
              }
              else {
                local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar22);
                uVar18 = FUN_01d3e2d0(*DAT_0537d558 + 8,&local_78);
                if ((uVar18 & 1) != 0) {
LAB_029a73c8:
                  local_7c[0] = (byte)local_84;
                  if (7 < (byte)local_84) {
                    local_7c[0] = 0xff;
                  }
                  uVar18 = FUN_02669430(local_7c);
                  if ((((((uVar18 & 1) != 0) &&
                        (uVar17 = FUN_02582fe0(&local_84), uVar17 != 0xffffffff)) &&
                       (DAT_05574040 != 0)) &&
                      ((uVar17 < 8 && (*(int *)(DAT_05574040 + 0x114) == 1)))) &&
                     ((*(uint *)(DAT_05574040 + 0x110) == uVar17 &&
                      (lVar33 = FUN_026f480c(DAT_05574040), lVar33 != 0)))) {
                    lVar26 = lVar33 + (ulong)(uVar25 >> 1) * 0x2488 + 0x118;
                    if (0xb < uVar25) {
                      lVar26 = lVar33 + 0xdc48;
                    }
                    if ((uVar25 & 1) != 0) goto LAB_029a7458;
                    goto LAB_029a7500;
                  }
                }
              }
            }
          }
        }
        else if (uVar17 - 0x109 < 6) {
          local_78 = (undefined *)CONCAT71(local_78._1_7_,param_2[8]);
          local_78._0_4_ = CONCAT22(*(undefined2 *)(param_2 + 0xc),(undefined2)local_78);
          local_84 = CONCAT62(local_84._2_6_,*(undefined2 *)(param_2 + 0xc));
          local_78 = (undefined *)CONCAT44(*(undefined4 *)(param_2 + 0x18),(uint)local_78);
          local_84 = CONCAT44(*(undefined4 *)(param_2 + 0x18),(uint)local_84);
          if (uVar17 < 0x10b) {
            if ((uVar17 & 1) == 0) {
              FUN_037842a0(&local_84);
            }
            else {
              FUN_03783d20(&local_78);
            }
          }
          else if ((uVar17 & 1) == 0) {
            FUN_037843b0(&local_84);
          }
          else {
            FUN_03783f00(&local_78,uVar17 - 0x10d < 0xfffffffe);
          }
        }
        else {
          uVar25 = uVar17 - 0x10f;
          if (uVar25 < 0x24) {
            local_78 = (undefined *)CONCAT71(local_78._1_7_,param_2[8]);
            local_84 = CONCAT44(*(undefined4 *)(param_2 + 0x18),(uint)local_84);
            local_78._0_4_ = CONCAT22(*(undefined2 *)(param_2 + 0xc),(undefined2)local_78);
            local_78 = (undefined *)CONCAT44(*(undefined4 *)(param_2 + 0x18),(uint)local_78);
            local_84 = CONCAT62(local_84._2_6_,*(undefined2 *)(param_2 + 0xc));
            uVar17 = (uVar25 & 0xff) / 6;
            if ((uVar25 & 1) == 0) {
              FUN_03784070(&local_78);
            }
            else {
              FUN_037844d0(&local_84,uVar17,uVar25 + uVar17 * -6 >> 1 & 0x7f);
            }
          }
          else if (uVar17 - 0x133 < 0x20) {
            local_78 = (undefined *)CONCAT71(local_78._1_7_,param_2[8]);
            local_78._0_4_ = CONCAT22(*(undefined2 *)(param_2 + 0xc),(undefined2)local_78);
            local_84 = CONCAT62(local_84._2_6_,*(undefined2 *)(param_2 + 0xc));
            local_78 = (undefined *)CONCAT44(*(undefined4 *)(param_2 + 0x18),(uint)local_78);
            local_84 = CONCAT44(*(undefined4 *)(param_2 + 0x18),(uint)local_84);
            if ((uVar17 & 1) == 0) {
              FUN_016cae50(&local_84);
            }
            else {
              FUN_016ca938(&local_78,uVar17 - 0x133 >> 1);
            }
          }
          else {
            uVar17 = uVar17 - 0x153;
            if ((uVar17 < 0xc) && (uVar18 = FUN_035a3310(), (uVar18 & 1) != 0)) {
              lVar33 = FUN_02643020();
              if (lVar33 == 0) {
                lVar26 = 0;
              }
              else {
                uVar25 = uVar17 >> 1;
                local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar25);
                lVar26 = lVar33 + 0xe0 + (ulong)uVar25 * 0x2488;
                if (5 < uVar25) {
                  lVar26 = lVar33 + 0xe0;
                }
              }
              if ((uVar17 & 1) == 0) {
LAB_029a7500:
                local_68 = local_68 & 0xffffffffffffff00;
                local_70 = lVar26 + 0x1e68;
                if (*(long *)(lVar26 + 0x1e90) == 0) {
                  uVar14 = 0;
                }
                else {
                  puVar31 = *(undefined8 **)(*(long *)(lVar26 + 0x1e90) + 0x10);
                  uVar14 = 0;
                  if (puVar31 != (undefined8 *)0x0) {
                    uVar14 = (**(code **)*puVar31)();
                  }
                }
                local_68 = CONCAT62(local_68._2_6_,CONCAT11(uVar14,(undefined1)local_68)) &
                           0xffffffffffff01ff;
                local_78 = PTR_DAT_04bb4c08 + 0x10;
                lVar33 = FUN_029abad4(&local_78);
                *(char *)(lVar33 + 2) = (char)*(undefined4 *)(param_2 + 0x18);
                puVar20 = (undefined2 *)FUN_029abad4(&local_78);
                *puVar20 = (short)*(undefined4 *)(param_2 + 0xc);
                lVar33 = FUN_029abad4(&local_78);
                *(byte *)(lVar33 + 3) = *(byte *)(lVar33 + 3) & 0xfe | param_2[8];
              }
              else {
LAB_029a7458:
                local_68 = local_68 & 0xffffffffffffff00;
                local_70 = lVar26 + 0x21e8;
                if (*(long *)(lVar26 + 0x2210) == 0) {
                  uVar14 = 0;
                }
                else {
                  puVar31 = *(undefined8 **)(*(long *)(lVar26 + 0x2210) + 0x10);
                  uVar14 = 0;
                  if (puVar31 != (undefined8 *)0x0) {
                    uVar14 = (**(code **)*puVar31)();
                  }
                }
                local_68 = CONCAT62(local_68._2_6_,CONCAT11(uVar14,(undefined1)local_68)) &
                           0xffffffffffff01ff;
                local_78 = PTR_DAT_04bbddf0 + 0x10;
                lVar33 = FUN_029aba78(&local_78);
                *(char *)(lVar33 + 2) = (char)*(undefined4 *)(param_2 + 0x18);
                puVar20 = (undefined2 *)FUN_029aba78(&local_78);
                *puVar20 = (short)*(undefined4 *)(param_2 + 0xc);
              }
              FUN_02640184(&local_78);
            }
          }
        }
      }
    }
  }
LAB_029a75d0:
  *param_2 = '\0';
LAB_029a75d4:
  if (bVar2) {
    *puVar1 = *puVar1 + 1;
  }
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0xff;
  param_3[5] = 0xff;
  param_3[6] = 0xff;
  param_3[7] = 0xff;
  param_3[8] = 0xff;
  param_3[9] = 0xff;
  param_3[10] = 0xff;
  param_3[0xb] = 0xff;
  pbVar27[0] = 0xff;
  pbVar27[1] = 0xff;
  pbVar27[2] = 0xff;
  pbVar27[3] = 0xff;
  pbVar27[4] = 0xff;
  pbVar27[5] = 0xff;
  pbVar27[6] = 0xff;
  pbVar27[7] = 0xff;
  param_3[0x18] = 0xff;
  param_3[0x19] = 0xff;
  param_3[0x1a] = 0xff;
  param_3[0x1b] = 0xff;
  param_3[0x1c] = 0xff;
  param_3[0x1d] = 0xff;
  param_3[0x1e] = 0xff;
  param_3[0x1f] = 0xff;
  param_3[0x20] = 0xff;
  param_3[0x21] = 0xff;
  param_3[0x22] = 0xff;
  param_3[0x23] = 0xff;
  param_3[0x24] = 0xfe;
  param_3[0x25] = 0xff;
  param_3[0x26] = 0;
  param_3[0x27] = 0;
  return;
}

