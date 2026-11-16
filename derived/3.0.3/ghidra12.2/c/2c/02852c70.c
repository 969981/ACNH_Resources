
bool FUN_02852c70(long param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  long lVar18;
  byte bVar19;
  byte *pbVar20;
  ushort *local_d0;
  undefined *local_a0;
  char *pcStack_98;
  undefined *local_90;
  char *pcStack_88;
  undefined4 local_80;
  char local_7c [7];
  undefined1 local_75;
  undefined8 local_70;
  uint local_64;
  
  puVar1 = PTR_DAT_04bb46b0;
  local_64 = 0;
  puVar3 = &local_64;
  if (param_2 != (uint *)0x0) {
    puVar3 = param_2;
  }
  *puVar3 = 0;
  local_90 = (undefined *)CONCAT44(local_90._4_4_,6);
  lVar14 = *(long *)PTR_DAT_04bb46b0;
  if (lVar14 == 0) {
    return false;
  }
  plVar15 = *(long **)(lVar14 + 0x10);
  if ((*(byte *)(lVar14 + 0x453) & 1) == 0) {
    plVar15 = (long *)*plVar15;
LAB_02852ce0:
    (**(code **)(*plVar15 + 0x38))();
  }
  else if ((plVar15 != (long *)0x0) && (plVar15 = (long *)plVar15[0x26], plVar15 != (long *)0x0))
  goto LAB_02852ce0;
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    return false;
  }
  puVar16 = *(undefined8 **)(lVar14 + 0x10);
  if ((*(byte *)(lVar14 + 0x453) & 1) == 0) {
    lVar14 = (**(code **)(*(long *)*puVar16 + 0x38))();
    if (lVar14 == 0) {
      return false;
    }
    lVar14 = lVar14 + 0x70;
  }
  else {
    if (puVar16 == (undefined8 *)0x0) {
      return false;
    }
    if ((long *)puVar16[0x26] == (long *)0x0) {
      return false;
    }
    lVar14 = (**(code **)(*(long *)puVar16[0x26] + 0x38))();
    if (lVar14 == 0) {
      return false;
    }
  }
  if ((*(long **)(lVar14 + 0xd0) == (long *)0x0) ||
     (puVar16 = (undefined8 *)**(long **)(lVar14 + 0xd0), puVar16 == (undefined8 *)0x0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = (**(code **)*puVar16)();
    uVar10 = uVar10 & 0xffffffff;
  }
  local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  pbVar20 = PTR_DAT_04bb32e0;
  if (lVar18 == 0) {
LAB_02852e08:
    if (7 < *pbVar20) {
LAB_02852e14:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar18 = **(long **)PTR_DAT_04bb27d0;
        bVar19 = *(byte *)(lVar18 + 0x473);
        pbVar20 = PTR_DAT_04bb5038;
        if ((long)(char)bVar19 != 0xffffffffffffffff) {
          puVar4 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar19 & 0xffffffffU) * 0x20;
          if (7 < bVar19) {
            puVar4 = (uint *)(lVar18 + 0x48);
          }
          if ((*puVar4 & 8) != 0) {
            pbVar20 = (byte *)(lVar18 + 0x471);
          }
        }
        bVar19 = *pbVar20;
        if (bVar19 < 8) goto LAB_02852e84;
      }
      pbVar20 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar20 = (byte *)(lVar18 + 0x158);
    }
    if (7 < *pbVar20) {
      if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02852e08;
      }
      goto LAB_02852e14;
    }
  }
  bVar19 = *pbVar20;
  if (7 < bVar19) {
    bVar19 = 0xff;
  }
LAB_02852e84:
  cVar5 = *(char *)(param_1 + 0x2c);
  lVar18 = FUN_0265c2a0((long)cVar5 & 0xffffffff);
  if (lVar18 == 0) {
    local_d0 = (ushort *)PTR_DAT_04bb9cf0;
  }
  else if ((*(long **)(lVar18 + 0x28) == (long *)0x0) ||
          (puVar16 = (undefined8 *)**(long **)(lVar18 + 0x28), puVar16 == (undefined8 *)0x0)) {
    local_d0 = (ushort *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8));
  }
  else {
    uVar11 = (**(code **)*puVar16)();
    local_d0 = (ushort *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8));
    if (((uVar11 & 1) != 0) &&
       ((*(long *)(lVar18 + 0x28) != 0 &&
        (puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar16 != (undefined8 *)0x0))))
    {
      (**(code **)*puVar16)();
    }
  }
  uVar11 = 0;
  if (7 < bVar19) {
    bVar19 = 0xff;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bb3768 + 0x10;
  do {
    if (uVar11 != (long)cVar5) {
      puVar17 = &DAT_053fe348 + uVar11 * 0xba0;
      if (9 < (uint)uVar11) {
        puVar17 = &DAT_053fe348;
      }
      if (puVar17[0xaf9] != '\0') {
        lVar18 = *(long *)(lVar14 + 0xb8) + *(long *)(lVar14 + 0xb0);
        pbVar20 = (byte *)(lVar18 + uVar11 * 0x13230);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,(int)(char)pbVar20[0x1267a]);
        if (((char)pbVar20[0x1267a] == 0) &&
           ((uVar11 != ((long)*(char *)(lVar18 + 0x1e335d) & 0xffffffffU) ||
            (uVar11 == ((long)*(char *)(lVar18 + 0x1e3362) & 0xffffffffU))))) {
          iVar9 = *(int *)(lVar18 + uVar11 * 0x13230 + 0x10764);
          local_90 = (undefined *)CONCAT44(local_90._4_4_,iVar9);
          if (iVar9 == 1) {
            uVar12 = FUN_02153104(uVar11 & 0xffffffff,&local_70,0);
            if ((uVar12 & 1) == 0) {
              local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar19);
              lVar13 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_90,1);
              if (lVar13 != 0) {
                if ((*(long **)(lVar13 + 0x17bb0) == (long *)0x0) ||
                   (puVar16 = (undefined8 *)**(long **)(lVar13 + 0x17bb0),
                   puVar16 == (undefined8 *)0x0)) {
                  uVar7 = 1;
                }
                else {
                  uVar7 = (**(code **)*puVar16)();
                  uVar7 = uVar7 ^ 1;
                }
                uVar8 = FUN_026b318c(pbVar20,*(long *)(lVar13 + 0x17b98) +
                                             *(long *)(lVar13 + 0x17b90) + 0x1c);
                if ((((uVar7 & 1) == 0) && (*(long *)(lVar13 + 0x17bb0) != 0)) &&
                   (puVar16 = *(undefined8 **)(*(long *)(lVar13 + 0x17bb0) + 8),
                   puVar16 != (undefined8 *)0x0)) {
                  (**(code **)*puVar16)();
                }
                if (-1 < (int)uVar8) {
                  lVar18 = lVar18 + uVar11 * 0x13230 + 4;
                  lVar13 = lVar18 + (ulong)uVar8 * 0x5f0;
                  if (7 < uVar8) {
                    lVar13 = lVar18;
                  }
                  pcStack_88 = "FirstMeetGreetAtThisVillage";
                  local_90 = puVar1;
                  iVar9 = FUN_02746e10(lVar13 + 0x38,&local_90);
                  if (iVar9 != 0) {
                    local_a0 = PTR_DAT_04bb2020 + 0x10;
                    pcStack_98 = "FirstMeetGreetAtThisVillageToday";
                    iVar9 = FUN_02746e10(lVar13 + 0x38,&local_a0);
                    if ((iVar9 != 1) &&
                       ((uVar12 = FUN_0219dee4(&DAT_053fe348,uVar11 & 0xffffffff), (uVar12 & 1) == 0
                        || (uVar7 = FUN_0219e4b0(&DAT_053fe348),
                           ((uint)(*local_d0 >> 8) | (*local_d0 & 0xff00ff) << 8) !=
                           (((uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8) & 0xffff))))) {
                      *puVar3 = *puVar3 | 1 << (ulong)((uint)uVar11 & 0x1f);
                    }
                  }
                }
              }
            }
          }
          else {
            local_80 = 8;
            local_75 = 0;
            local_7c[0] = '\0';
            local_90 = puVar2;
            pcStack_88 = local_7c;
            FUN_038d1270(&local_90,"-----");
            if ((ulong)*pbVar20 < 0x23) {
              FUN_038d1270(&local_90,"%s%02d",
                           *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar20 * 8 + 0xb0),pbVar20[1]
                          );
            }
          }
        }
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 != 10);
  FUN_021ebc40(puVar3,0,0,0);
  FUN_021eb8f0(puVar3);
  uVar7 = *puVar3 - (*puVar3 >> 1 & 0x55555555);
  uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
  uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
  uVar7 = uVar7 + (uVar7 >> 8);
  bVar6 = (uVar7 + (uVar7 >> 0x10) & 0x3f) != 0;
  if ((uVar10 & 1) == 0) {
    return bVar6;
  }
  if (*(long *)(lVar14 + 0xd0) == 0) {
    return bVar6;
  }
  puVar16 = *(undefined8 **)(*(long *)(lVar14 + 0xd0) + 8);
  if (puVar16 == (undefined8 *)0x0) {
    return bVar6;
  }
  (**(code **)*puVar16)();
  return bVar6;
}

