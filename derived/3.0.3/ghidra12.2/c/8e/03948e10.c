
undefined8 *
FUN_03948e10(long param_1,long param_2,uint *param_3,long param_4,uint param_5,uint param_6,
            uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,long param_12,
            byte param_13,uint param_14,undefined8 param_15,byte param_16)

{
  MutexType *pMVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  ushort uVar8;
  short sVar9;
  long lVar10;
  bool bVar11;
  byte bVar12;
  undefined1 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  ushort uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  uint *puVar27;
  long lVar28;
  int *piVar29;
  long lVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  uint uVar33;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar25 = (uint)param_16 | *(uint *)(param_1 + 8) >> 4;
  uVar24 = *(uint *)(param_1 + 8) >> 7;
  uVar14 = uVar24 & 0xc;
  uVar23 = 0;
  if (1 < param_14) {
    uVar23 = param_14 - 1;
  }
  if (param_6 == 8) {
    uVar33 = 6;
  }
  else {
    uVar33 = param_11;
    if (param_6 == 9) {
      uVar33 = param_11 * 6;
    }
  }
  pMVar1 = (MutexType *)(param_1 + 0xa80);
  uVar2 = uVar14 | (uint)(param_12 != 0) << 1 | uVar25 & 1;
  nn::os::LockMutex(pMVar1);
  uVar6 = *(uint *)(param_1 + 0xa50);
  if ((*(byte *)(param_1 + 8) >> 6 & 1) == 0) {
    uVar20 = *(uint *)(param_1 + 0xb08);
    lVar15 = *(long *)(param_1 + 0xa58);
    uVar33 = uVar6;
    if (uVar20 <= uVar6) {
      uVar33 = uVar20;
    }
    if (uVar20 < uVar6) {
      uVar22 = uVar33;
      uVar20 = uVar33;
      if ((*(byte *)(lVar15 + (long)(int)uVar33 * 0x150 + 0x111) & 1) != 0) {
        do {
          uVar22 = uVar22 + 1;
          uVar20 = uVar20 + 1;
          if (uVar6 == uVar20) goto LAB_039490e8;
        } while ((*(byte *)(lVar15 + (long)(int)uVar20 * 0x150 + 0x111) & 1) != 0);
      }
LAB_03949134:
      *(uint *)(param_1 + 0xb08) = uVar22;
      puVar32 = (undefined8 *)(lVar15 + (long)(int)uVar20 * 0x150);
    }
    else {
LAB_039490e8:
      if (uVar33 != 0) {
        if ((*(byte *)(lVar15 + 0x111) & 1) == 0) {
          uVar22 = 0;
          uVar20 = 0;
        }
        else {
          uVar22 = 0;
          do {
            uVar22 = uVar22 + 1;
            if (uVar33 == uVar22) goto LAB_03949144;
          } while ((*(byte *)(lVar15 + (long)(int)uVar22 * 0x150 + 0x111) & 1) != 0);
          uVar20 = uVar22;
        }
        goto LAB_03949134;
      }
LAB_03949144:
      puVar32 = (undefined8 *)0x0;
    }
    bVar12 = *(byte *)((long)puVar32 + 0x111) & 0xfc | 1;
  }
  else {
    lVar15 = *(long *)(param_1 + 0xa58);
    if (uVar6 != 0) {
      uVar20 = 0;
      do {
        puVar32 = (undefined8 *)(lVar15 + (long)(int)uVar20 * 0x150);
        if ((*(byte *)((long)puVar32 + 0x111) & 3) == 2) {
          uVar17 = *(ushort *)((long)puVar32 + 0x3a);
          if (*(ushort *)(puVar32 + 0x13) == param_5 && uVar17 == param_6) {
            uVar22 = (uint)*(ushort *)(puVar32 + 6);
            if (*(ushort *)(puVar32 + 6) < 2) {
              uVar22 = 1;
            }
            if (uVar22 == param_7) {
              uVar8 = *(ushort *)((long)puVar32 + 0x32);
              uVar22 = (uint)uVar8;
              if (uVar17 != 3) {
                uVar22 = 1;
              }
              if (uVar22 == uVar8 || uVar22 < uVar8) {
                uVar22 = (uint)uVar8;
              }
              if (uVar22 == param_8 && *(byte *)(puVar32 + 7) == param_10) {
                if ((uVar17 < 10) && ((1 << (ulong)(uVar17 & 0x1f) & 0x350U) != 0)) {
                  uVar21 = (uint)*(ushort *)((long)puVar32 + 0x34);
                  uVar22 = uVar21;
                }
                else {
                  uVar21 = (uint)*(ushort *)((long)puVar32 + 0x34);
                  uVar22 = 1;
                }
                if (uVar22 <= uVar21) {
                  uVar22 = uVar21;
                }
                if (((uVar22 == uVar33) &&
                    (*(byte *)(lVar15 + (long)(int)uVar20 * 0x150 + 0x10b) == param_9)) &&
                   (uVar2 == *(byte *)(lVar15 + (long)(int)uVar20 * 0x150 + 0x110))) {
                  *(byte *)((long)puVar32 + 0x111) = *(byte *)((long)puVar32 + 0x111) | 1;
                  nn::os::UnlockMutex(pMVar1);
                  if (((*(byte *)(lVar15 + (long)(int)uVar20 * 0x150 + 0x10c) & 1) != 0) ||
                     (*(char *)(param_1 + 9) < '\0')) goto LAB_03949164;
                  goto LAB_039493cc;
                }
              }
            }
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar6 != uVar20);
    }
    uVar17 = 0;
    uVar33 = 0;
    puVar31 = (undefined8 *)0x0;
    do {
      puVar32 = puVar31;
      if ((*(byte *)(lVar15 + (long)(int)uVar33 * 0x150 + 0x111) & 1) == 0) {
        puVar32 = (undefined8 *)(lVar15 + (long)(int)uVar33 * 0x150);
        uVar8 = *(short *)((long)puVar32 + 0x10e) + 1;
        *(ushort *)((long)puVar32 + 0x10e) = uVar8;
        uVar3 = uVar17;
        if (uVar17 <= uVar8) {
          uVar3 = uVar8;
        }
        if (uVar8 <= uVar17) {
          puVar32 = puVar31;
        }
        uVar17 = uVar3;
      }
      uVar33 = uVar33 + 1;
      puVar31 = puVar32;
    } while (uVar6 != uVar33);
    bVar12 = *(byte *)((long)puVar32 + 0x111) | 3;
  }
  *(byte *)((long)puVar32 + 0x111) = bVar12;
  nn::os::UnlockMutex(pMVar1);
LAB_03949164:
  *(undefined2 *)((long)puVar32 + 0x10e) = 0;
  *(undefined2 *)((long)puVar32 + 0x109) = 0;
  uVar25 = uVar25 & 1;
  puVar32[0x14] = 0;
  *(undefined4 *)(puVar32 + 0x1d) = 0;
  puVar32[0x1a] = 0;
  *(char *)((long)puVar32 + 0x10b) = (char)param_9;
  *(char *)(puVar32 + 0x22) = (char)uVar2;
  *(byte *)((long)puVar32 + 0x112) = *(byte *)((long)puVar32 + 0x112) | 1;
  uVar33 = uVar25;
  if ((((uVar24 & 4) != 0) && (0x11 < param_5)) &&
     ((param_5 - 0x59 < 0xffffffd6 &&
      (uVar33 = uVar25 | 2, (*(byte *)((long)puVar32 + 0x10c) & 0x20) != 0)))) {
    uVar33 = uVar25;
  }
  if (9 < param_6) goto switchD_039491f0_caseD_6;
  uVar33 = uVar33 | uVar14 >> 1 & 4;
  switch(param_6) {
  case 0:
    uVar16 = 0;
    param_8 = 1;
    uVar14 = 1;
    break;
  case 1:
    uVar16 = 1;
    param_11 = param_8;
    goto LAB_0394926c;
  case 2:
    uVar16 = 2;
    goto LAB_0394928c;
  case 3:
    uVar16 = 3;
LAB_0394926c:
    uVar14 = 1;
    param_8 = param_11;
    break;
  case 4:
    uVar16 = 4;
LAB_0394928c:
    uVar14 = param_11;
    break;
  case 5:
    if ((int)param_10 < 1) {
      param_10 = 0;
      uVar16 = 1;
    }
    else {
      uVar16 = 5;
    }
    uVar14 = 1;
    param_9 = 1;
    goto LAB_039492e0;
  default:
    goto switchD_039491f0_caseD_6;
  case 8:
    uVar16 = 8;
    uVar14 = 6;
    break;
  case 9:
    FUN_0390c1b8(puVar32,param_5,param_7,param_8,param_11,param_9,uVar33);
    goto switchD_039491f0_caseD_6;
  }
  param_10 = 0;
LAB_039492e0:
  FUN_0390a734(puVar32,uVar16,param_5,param_7,param_8,uVar14,param_9,uVar33,param_10,1);
switchD_039491f0_caseD_6:
  *(uint *)(puVar32 + 0x15) = param_5;
  *(uint *)((long)puVar32 + 0xac) = (uint)*(ushort *)(puVar32 + 9);
  if ((*(byte *)((long)puVar32 + 0x4e) & 1) == 0) {
    sVar9 = *(short *)(puVar32 + 0x13);
    if (sVar9 == 0x59) {
      iVar19 = 3;
    }
    else if (sVar9 == 0x5b) {
      iVar19 = 4;
    }
    else if (sVar9 == 0x5c) {
      iVar19 = 5;
    }
    else {
      iVar19 = (uint)(sVar9 != 0) << 1;
    }
  }
  else {
    iVar19 = 1;
  }
  iVar4 = *(int *)((long)puVar32 + 0x3c);
  iVar18 = *(int *)(puVar32 + 8);
  *(int *)(puVar32 + 0x16) = iVar19;
  *(int *)((long)puVar32 + 0xb4) = iVar4;
  *(int *)(puVar32 + 0x17) = iVar18;
  if (*(byte *)((long)puVar32 + 0x39) < 2) {
    *(undefined8 *)((long)puVar32 + 0xbc) = 0;
    *(undefined4 *)((long)puVar32 + 0xc4) = 4;
  }
  else {
    iVar19 = *(int *)((long)puVar32 + 0x44);
    puVar32[0x18] = 0x400000000;
    *(int *)((long)puVar32 + 0xbc) = iVar19;
    if (iVar19 != 0) {
      iVar18 = iVar19 + ((iVar4 + iVar18) - 1U & -iVar4);
    }
  }
  *(int *)(puVar32 + 0x19) = iVar18 + iVar4;
  if (*(char *)(param_1 + 9) < '\0') {
    puVar32[1] = 0;
    puVar32[2] = 0;
    *puVar32 = 0;
    if ((*(byte *)((long)puVar32 + 0x4e) >> 1 & 1) == 0) {
      bVar11 = false;
    }
    else {
      bVar11 = 0x11 < *(ushort *)(puVar32 + 0x13) && *(ushort *)(puVar32 + 0x13) - 0x59 < 0xffffffd6
      ;
    }
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    FUN_038fd3e0(puVar32 + 10,&local_80,puVar32 + 6,0,puVar32[0x12],bVar11,1);
  }
LAB_039493cc:
  puVar32[0x1a] = param_3;
  *(char *)((long)puVar32 + 0x109) = (char)uVar23;
  nn::os::LockMutex((MutexType *)(param_1 + 0xac0));
  uVar14 = *param_3;
  lVar15 = *(long *)(param_3 + 2);
  *(char *)((long)puVar32 + 0x10a) = (char)uVar23;
  if (uVar14 <= uVar23) {
    uVar23 = 0;
  }
  lVar15 = lVar15 + (long)(int)uVar23 * 0xe0;
  lVar10 = FUN_03967170(lVar15,puVar32 + 0x15,param_12,param_13 & 1);
  puVar32[0x14] = lVar10;
  if (lVar10 == 0) {
LAB_03949778:
    FUN_03949ad0(param_1,0);
    FUN_03949ad0(param_1,1);
    FUN_03949ad0(param_1,2);
    FUN_03949ad0(param_1,3);
  }
  else if ((param_13 & 1) == 0) {
    uVar14 = *(uint *)(param_1 + 0x10);
    if (1 < uVar14) {
      uVar14 = 2;
    }
    if (uVar14 != 0) {
      uVar25 = 0;
      bVar11 = false;
      do {
        lVar28 = (long)(int)uVar25;
        lVar30 = *(long *)(param_1 + 0x18) + (long)(int)uVar25 * 0xe0;
        if (*(uint *)(param_1 + 0x7c0) <= uVar25) {
          lVar28 = 0;
        }
        uVar23 = 0;
        lVar26 = *(long *)(lVar30 + 0x58);
        if (*(int *)(lVar30 + 0x68) < 1) {
          lVar26 = 0;
        }
        puVar27 = (uint *)(lVar26 - *(int *)(lVar30 + 0x6c));
        if (lVar26 != 0 && puVar27 != (uint *)0x0) {
          uVar23 = *puVar27;
        }
        lVar30 = *(long *)(param_1 + 0x7c8) + lVar28 * 0xe0;
        uVar24 = 0;
        lVar28 = *(long *)(lVar30 + 0x60);
        if (*(int *)(lVar30 + 0x68) < 1) {
          lVar28 = 0;
        }
        piVar29 = (int *)(lVar28 - *(int *)(lVar30 + 0x6c));
        if (lVar28 != 0 && piVar29 != (int *)0x0) {
          uVar24 = *piVar29 + piVar29[6];
        }
        uVar25 = uVar25 + 1;
        bVar11 = (bool)(bVar11 | uVar24 < uVar23);
      } while (uVar14 != uVar25);
      if (!bVar11) goto LAB_039495c8;
LAB_03949768:
      FUN_03967810(lVar15,lVar10,1);
      puVar32[0x14] = 0;
      goto LAB_03949778;
    }
LAB_039495c8:
    uVar14 = *(uint *)(param_1 + 0x2a0);
    if (1 < uVar14) {
      uVar14 = 2;
    }
    if (uVar14 != 0) {
      uVar25 = 0;
      bVar11 = false;
      do {
        lVar28 = (long)(int)uVar25;
        lVar30 = *(long *)(param_1 + 0x2a8) + (long)(int)uVar25 * 0xe0;
        if (*(uint *)(param_1 + 0x7c0) <= uVar25) {
          lVar28 = 0;
        }
        uVar23 = 0;
        lVar26 = *(long *)(lVar30 + 0x58);
        if (*(int *)(lVar30 + 0x68) < 1) {
          lVar26 = 0;
        }
        puVar27 = (uint *)(lVar26 - *(int *)(lVar30 + 0x6c));
        if (lVar26 != 0 && puVar27 != (uint *)0x0) {
          uVar23 = *puVar27;
        }
        lVar30 = *(long *)(param_1 + 0x7c8) + lVar28 * 0xe0;
        uVar24 = 0;
        lVar28 = *(long *)(lVar30 + 0x60);
        if (*(int *)(lVar30 + 0x68) < 1) {
          lVar28 = 0;
        }
        piVar29 = (int *)(lVar28 - *(int *)(lVar30 + 0x6c));
        if (lVar28 != 0 && piVar29 != (int *)0x0) {
          uVar24 = *piVar29 + piVar29[6];
        }
        uVar25 = uVar25 + 1;
        bVar11 = (bool)(bVar11 | uVar24 < uVar23);
      } while (uVar14 != uVar25);
      if (bVar11) goto LAB_03949768;
    }
    uVar14 = *(uint *)(param_1 + 0x530);
    if (1 < uVar14) {
      uVar14 = 2;
    }
    if (uVar14 != 0) {
      uVar25 = 0;
      bVar11 = false;
      do {
        lVar28 = (long)(int)uVar25;
        lVar30 = *(long *)(param_1 + 0x538) + (long)(int)uVar25 * 0xe0;
        if (*(uint *)(param_1 + 0x7c0) <= uVar25) {
          lVar28 = 0;
        }
        uVar23 = 0;
        lVar26 = *(long *)(lVar30 + 0x58);
        if (*(int *)(lVar30 + 0x68) < 1) {
          lVar26 = 0;
        }
        puVar27 = (uint *)(lVar26 - *(int *)(lVar30 + 0x6c));
        if (lVar26 != 0 && puVar27 != (uint *)0x0) {
          uVar23 = *puVar27;
        }
        lVar30 = *(long *)(param_1 + 0x7c8) + lVar28 * 0xe0;
        uVar24 = 0;
        lVar28 = *(long *)(lVar30 + 0x60);
        if (*(int *)(lVar30 + 0x68) < 1) {
          lVar28 = 0;
        }
        piVar29 = (int *)(lVar28 - *(int *)(lVar30 + 0x6c));
        if (lVar28 != 0 && piVar29 != (int *)0x0) {
          uVar24 = *piVar29 + piVar29[6];
        }
        uVar25 = uVar25 + 1;
        bVar11 = (bool)(bVar11 | uVar24 < uVar23);
      } while (uVar14 != uVar25);
      goto LAB_03949764;
    }
  }
  else {
    uVar14 = *param_3;
    if (1 < uVar14) {
      uVar14 = 2;
    }
    if (uVar14 != 0) {
      uVar25 = 0;
      bVar11 = false;
      do {
        lVar28 = (long)(int)uVar25;
        lVar30 = *(long *)(param_3 + 2) + (long)(int)uVar25 * 0xe0;
        if (*(uint *)(param_1 + 0x7c0) <= uVar25) {
          lVar28 = 0;
        }
        uVar23 = 0;
        lVar26 = *(long *)(lVar30 + 0x58);
        if (*(int *)(lVar30 + 0x68) < 1) {
          lVar26 = 0;
        }
        puVar27 = (uint *)(lVar26 - *(int *)(lVar30 + 0x6c));
        if (lVar26 != 0 && puVar27 != (uint *)0x0) {
          uVar23 = *puVar27;
        }
        lVar30 = *(long *)(param_1 + 0x7c8) + lVar28 * 0xe0;
        uVar24 = 0;
        lVar28 = *(long *)(lVar30 + 0x60);
        if (*(int *)(lVar30 + 0x68) < 1) {
          lVar28 = 0;
        }
        piVar29 = (int *)(lVar28 - *(int *)(lVar30 + 0x6c));
        if (lVar28 != 0 && piVar29 != (int *)0x0) {
          uVar24 = *piVar29 + piVar29[6];
        }
        uVar25 = uVar25 + 1;
        bVar11 = (bool)(bVar11 | uVar24 < uVar23);
      } while (uVar14 != uVar25);
LAB_03949764:
      if (bVar11) goto LAB_03949768;
    }
  }
  if ((*(uint *)(param_1 + 8) >> 0xd & 1) == 0) {
    if ((*(uint *)(param_1 + 8) >> 0xe & 1) == 0) goto LAB_039497c8;
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  *(undefined1 *)(puVar32[0x14] + 0x84) = uVar13;
LAB_039497c8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xac0));
  if (((param_2 != 0) && ((*(byte *)(param_1 + 9) >> 3 & 1) != 0)) &&
     (*(char *)(puVar32[0x14] + 0x85) != '\0')) {
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),0x101);
  }
  lVar15 = puVar32[0x14];
  cVar7 = *(char *)(lVar15 + 0x84);
  uVar5 = *(undefined4 *)(lVar15 + 0x24);
  local_80 = *(undefined8 *)(lVar15 + 0x20);
  local_78 = *(undefined8 *)(lVar15 + 0x28);
  uStack_70 = *(undefined8 *)(lVar15 + 0x30);
  *(undefined4 *)puVar32 = *(undefined4 *)(lVar15 + 0x20);
  *(undefined4 *)((long)puVar32 + 4) = uVar5;
  puVar32[1] = local_78;
  puVar32[2] = uStack_70;
  if ((*(byte *)((long)puVar32 + 0x4e) >> 1 & 1) == 0) {
    bVar11 = false;
  }
  else {
    bVar11 = 0x11 < *(ushort *)(puVar32 + 0x13) && *(ushort *)(puVar32 + 0x13) - 0x59 < 0xffffffd6;
  }
  FUN_038fd3e0(puVar32 + 10,&local_80,puVar32 + 6,0,puVar32[0x12],bVar11,cVar7 != '\0');
  lVar10 = puVar32[0x14];
  lVar15 = *(long *)(lVar10 + 0x40);
  if (lVar15 != 0) {
    uVar5 = *(undefined4 *)(lVar10 + 0x3c);
    uVar16 = *(undefined8 *)(lVar10 + 0x48);
    *(undefined4 *)(puVar32 + 3) = *(undefined4 *)(lVar10 + 0x38);
    *(undefined4 *)((long)puVar32 + 0x1c) = uVar5;
    puVar32[4] = lVar15;
    puVar32[5] = uVar16;
  }
  bVar11 = false;
  uVar14 = (uint)*(byte *)((long)puVar32 + 0x10a);
  if (*(uint *)puVar32[0x1a] <= (uint)*(byte *)((long)puVar32 + 0x10a)) {
    uVar14 = 0;
  }
  *(int *)(puVar32 + 0x1d) =
       (int)*(undefined8 *)(*(long *)((uint *)puVar32[0x1a] + 2) + (ulong)uVar14 * 0xe0 + 0x28);
  uVar16 = *(undefined8 *)(param_4 + 8);
  *(undefined2 *)((long)puVar32 + 0x10e) = 0;
  puVar32[0x1c] = uVar16;
  uVar17 = *(ushort *)(puVar32 + 0x13);
  lVar15 = (ulong)uVar17 * 0x10;
  *(uint *)((long)puVar32 + 0x4a) =
       (*(uint *)(&DAT_041b288c + lVar15) & 0xff) << 0x10 | *(int *)(&DAT_041b2890 + lVar15) << 0x18
       | (*(uint *)(&DAT_041b2888 + lVar15) & 0xff) << 8 | (uint)(byte)(&DAT_041b2884)[lVar15];
  if ((*(byte *)((long)puVar32 + 0x4e) >> 1 & 1) != 0) {
    bVar11 = 0x11 < uVar17 && uVar17 - 0x59 < 0xffffffd6;
  }
  local_80 = *puVar32;
  local_78 = puVar32[1];
  uStack_70 = puVar32[2];
  FUN_038fd3e0(puVar32 + 10,&local_80,puVar32 + 6,0,puVar32[0x12],bVar11,0);
  return puVar32;
}

