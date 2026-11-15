
/* WARNING: Removing unreachable block (ram,0x02090618) */
/* WARNING: Removing unreachable block (ram,0x02090620) */
/* WARNING: Removing unreachable block (ram,0x02090628) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02090590(long param_1,long *param_2,undefined8 ****param_3)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  undefined8 ****ppppuVar15;
  uint uVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 *****pppppuVar21;
  undefined8 ****local_158;
  undefined4 local_14c;
  undefined8 ****local_148;
  undefined8 *****local_140;
  undefined4 local_138;
  undefined8 ***local_130;
  code **ppcStack_128;
  undefined4 local_120;
  code *local_118;
  undefined8 uStack_110;
  undefined8 *****local_108;
  undefined8 *****local_100;
  undefined8 **local_f8;
  undefined8 uStack_f0;
  undefined8 *****local_e8;
  undefined8 ****local_e0;
  undefined8 **local_d8 [4];
  undefined8 *local_b8 [4];
  undefined8 local_98 [4];
  uint local_78;
  uint uStack_74;
  uint local_70;
  int iStack_6c;
  
  local_108 = &local_148;
  local_d8[0] = local_b8;
  local_98[0] = 0;
  ppcStack_128 = &local_118;
  local_140 = &local_108;
  local_b8[0] = local_98;
  local_120 = 5;
  local_118 = FUN_02090b40;
  uStack_110 = 0;
  local_130 = &local_f8;
  if (&local_f8 != (undefined8 ***)0x0) {
    local_130 = local_d8;
  }
  pppuVar7 = local_130;
  local_f8 = (undefined8 **)&LAB_02091094;
  uStack_f0 = 0;
  local_e0 = &local_148;
  local_e8 = local_140;
  local_100 = local_108;
  if (local_140 != (undefined8 *****)0x0) {
    local_100 = &local_e8;
  }
  if (local_130 != (undefined8 ***)0x0) {
    local_130 = (undefined8 ***)*local_130;
  }
  pppuVar8 = local_130;
  *pppuVar7 = (undefined8 **)&LAB_0209124c;
  pppuVar7[1] = (undefined8 **)0x0;
  ppppuVar15 = (undefined8 ****)(pppuVar7 + 2);
  *ppppuVar15 = (undefined8 ***)0x0;
  pppuVar7[3] = &local_148;
  *ppppuVar15 = &local_e8;
  if (&local_e8 != (undefined8 ******)0x0) {
    local_e0 = ppppuVar15;
  }
  if (local_130 != (undefined8 ***)0x0) {
    local_130 = (undefined8 ***)*local_130;
  }
  *pppuVar8 = (undefined8 **)&LAB_02091444;
  pppuVar8[1] = (undefined8 **)0x0;
  local_148 = (undefined8 ****)(pppuVar8 + 2);
  *local_148 = (undefined8 ***)0x0;
  pppuVar8[3] = &local_148;
  *local_148 = ppppuVar15;
  if (ppppuVar15 != (undefined8 ****)0x0) {
    pppuVar7[3] = local_148;
  }
  local_138 = 4;
  pppppuVar20 = &local_140;
  local_158 = param_3;
  uVar11 = nn::os::GetSystemTick();
  local_78 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  uStack_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 2;
  local_70 = (uStack_74 ^ uStack_74 >> 0x1e) * 0x6c078965 + 3;
  iStack_6c = (local_70 ^ local_70 >> 0x1e) * 0x6c078965 + 4;
  FUN_038aaa70(&local_148,&local_78);
  puVar5 = PTR_DAT_04bb32e8;
  local_14c = 0;
  if (local_140 != &local_148) {
    bVar10 = false;
    pppppuVar19 = local_140 + -2;
    pppppuVar21 = local_140;
LAB_020907ac:
    plVar17 = (long *)param_2[1];
    do {
      if (plVar17 == param_2) goto LAB_02090b0c;
      plVar18 = plVar17 + -1;
      pcVar12 = (char *)FUN_021c9770((int)*plVar18,1);
      if ((pcVar12 != (char *)0x0) && (*pcVar12 != '\0')) {
        cVar4 = *(char *)(*(long *)puVar5 + 0x4064);
        bVar3 = *(byte *)(*(long *)puVar5 + 0x4065);
        uVar11 = (int)cVar4 + 0x18;
        if (4 < cVar4) {
          uVar11 = (int)cVar4;
        }
        uVar16 = (uint)(byte)pcVar12[8];
        bVar9 = uVar16 == (uVar11 & 0xff);
        if (((uVar16 < (uVar11 & 0xff)) || (pcVar12[9] == bVar3 && bVar9)) ||
           ((byte)pcVar12[9] < bVar3 && bVar9)) {
          uVar11 = uVar11 & 0xff;
          uVar16 = (uint)(byte)pcVar12[10];
          if (((uVar11 < uVar16) || (bVar3 == pcVar12[0xb] && uVar11 == uVar16)) ||
             (bVar3 < (byte)pcVar12[0xb] && uVar11 == uVar16)) goto LAB_02090854;
        }
      }
      plVar17 = (long *)plVar17[1];
    } while( true );
  }
  if ((int)param_2[2] != 0) {
LAB_02090980:
    puVar5 = PTR_DAT_04bb32e8;
    for (plVar17 = (long *)param_2[1]; plVar17 != param_2; plVar17 = (long *)plVar17[1]) {
      plVar18 = plVar17 + -1;
      pcVar12 = (char *)FUN_021c9770((int)*plVar18,1);
      if ((pcVar12 != (char *)0x0) && (*pcVar12 != '\0')) {
        cVar4 = *(char *)(*(long *)puVar5 + 0x4064);
        bVar3 = *(byte *)(*(long *)puVar5 + 0x4065);
        uVar11 = (int)cVar4 + 0x18;
        if (4 < cVar4) {
          uVar11 = (int)cVar4;
        }
        uVar16 = (uint)(byte)pcVar12[8];
        bVar10 = uVar16 == (uVar11 & 0xff);
        if (((uVar16 < (uVar11 & 0xff)) || (pcVar12[9] == bVar3 && bVar10)) ||
           ((byte)pcVar12[9] < bVar3 && bVar10)) {
          uVar11 = uVar11 & 0xff;
          uVar16 = (uint)(byte)pcVar12[10];
          if (((uVar11 < uVar16) || (bVar3 == pcVar12[0xb] && uVar11 == uVar16)) ||
             (bVar3 < (byte)pcVar12[0xb] && uVar11 == uVar16)) {
            if ((plVar17 != (long *)0x0) && (plVar18 != (long *)0x0)) {
              uVar2 = (undefined4)*plVar18;
              uVar13 = FUN_02090b40(pcVar12,&local_78,&local_14c,uVar2);
              uVar11 = local_78;
              uVar6 = local_14c;
              if ((uVar13 & 1) != 0) {
                lVar14 = FUN_021c9770(uVar2,1);
                *(uint *)(lVar14 + 0x1f8) = uVar11;
                *(undefined4 *)(lVar14 + 0x1fc) = uVar6;
                FUN_02093ad0(lVar14 + 0x10,2,1);
                if ((int)DAT_05453fec == -1) {
                  lVar14 = 0;
LAB_02090ab8:
                  *(undefined4 *)((long)&DAT_05453fec + lVar14 * 4) = uVar2;
                }
                else if (DAT_05453fec._4_4_ == -1) {
                  lVar14 = 1;
                  goto LAB_02090ab8;
                }
                if (*plVar17 != 0) {
                  *(long *)(*plVar17 + 8) = plVar17[1];
                }
                if ((long *)plVar17[1] != (long *)0x0) {
                  *(long *)plVar17[1] = *plVar17;
                }
                *plVar17 = 0;
                plVar17[1] = 0;
                *(int *)(param_2 + 2) = (int)param_2[2] + -1;
                plVar17[-1] = param_2[3];
                param_2[3] = (long)plVar18;
              }
            }
            break;
          }
        }
      }
    }
  }
LAB_02090b0c:
  do {
    ppppuVar15 = *pppppuVar20;
    pppppuVar20 = (undefined8 *****)(ppppuVar15 + 1);
  } while ((undefined8 *****)ppppuVar15 != &local_148);
  return;
LAB_02090854:
  if ((plVar17 == (long *)0x0) || (plVar18 == (long *)0x0)) goto LAB_02090b0c;
  ppppuVar15 = *pppppuVar19;
  plVar1 = (long *)(param_1 + ((long)pppppuVar19[1] >> 1));
  if (((ulong)pppppuVar19[1] & 1) != 0) {
    ppppuVar15 = *(undefined8 *****)((long)ppppuVar15 + *plVar1);
  }
  uVar2 = (undefined4)*plVar18;
  uVar13 = (*(code *)ppppuVar15)(plVar1,&local_78,&local_14c,uVar2,local_158);
  uVar11 = local_78;
  uVar6 = local_14c;
  if ((uVar13 & 1) == 0) goto LAB_02090958;
  lVar14 = FUN_021c9770(uVar2,1);
  *(undefined4 *)(lVar14 + 0x1fc) = uVar6;
  *(uint *)(lVar14 + 0x1f8) = uVar11;
  FUN_02093ad0(lVar14 + 0x10,2,1);
  if ((int)DAT_05453fec == -1) {
    lVar14 = 0;
LAB_020908f8:
    *(undefined4 *)((long)&DAT_05453fec + lVar14 * 4) = uVar2;
  }
  else if (DAT_05453fec._4_4_ == -1) {
    lVar14 = 1;
    goto LAB_020908f8;
  }
  if (*plVar17 != 0) {
    *(long *)(*plVar17 + 8) = plVar17[1];
  }
  if ((long *)plVar17[1] != (long *)0x0) {
    *(long *)plVar17[1] = *plVar17;
  }
  *plVar17 = 0;
  plVar17[1] = 0;
  *(int *)(param_2 + 2) = (int)param_2[2] + -1;
  plVar17[-1] = param_2[3];
  param_2[3] = (long)plVar18;
  if (bVar10) goto LAB_02090b0c;
  bVar10 = true;
LAB_02090958:
  if ((int)param_2[2] == 0) goto LAB_02090b0c;
  pppppuVar21 = (undefined8 *****)pppppuVar21[1];
  pppppuVar19 = pppppuVar21 + -2;
  if (pppppuVar19 == &local_158) goto LAB_02090980;
  goto LAB_020907ac;
}

