
uint FUN_027e09dc(long param_1,ulong param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined1 uStack_71;
  undefined *local_70;
  char *pcStack_68;
  
  uVar12 = FUN_0290d828();
  puVar8 = PTR_DAT_04bc2a20;
  puVar7 = PTR_DAT_04bc27f0;
  if (((uVar12 & 1) == 0) &&
     ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))
     ) {
    pbVar1 = (byte *)(param_1 + 0x1e3366);
    if ((ulong)*pbVar1 < 3) {
      lVar2 = param_1 + 0x1e3363;
      uVar12 = (ulong)*(byte *)(lVar2 + (ulong)*pbVar1);
      if (uVar12 < 10) {
        pbVar14 = (byte *)(param_1 + uVar12 * 0x13230);
        uVar13 = (ulong)*pbVar14;
        if (uVar13 < 0x23) {
          if ((pbVar14[1] <= (byte)PTR_DAT_04bc27f0[uVar13]) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(pbVar14[1] & 0x1f) & 1) != 0)) {
            local_70 = PTR_DAT_04bb2020 + 0x10;
            pcStack_68 = "ForceMoveOut";
            iVar9 = FUN_02749340(param_1 + uVar12 * 0x13230 + 0x1267c,&local_70);
            if (iVar9 == 0) {
              uVar10 = FUN_02691650(pbVar14);
              if (((uVar10 & 1) == 0) || ((param_2 & 1) == 0)) goto LAB_027e0cc4;
              if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
                uVar10 = 0;
                if ((int)(char)*pbVar1 + 1U < 3) {
                  uVar10 = (int)(char)*pbVar1 + 1;
                }
                FUN_025196e4(&uStack_71);
                if (uVar10 != (int)(char)*pbVar1) {
                  puVar3 = PTR_DAT_04bb2020 + 0x10;
                  do {
                    if (uVar10 < 3) {
                      uVar12 = (ulong)*(byte *)(lVar2 + (ulong)uVar10);
                      if (uVar12 < 10) {
                        pbVar14 = (byte *)(param_1 + uVar12 * 0x13230);
                        uVar13 = (ulong)*pbVar14;
                        if (((uVar13 < 0x23) && (pbVar14[1] <= (byte)puVar7[uVar13])) &&
                           ((*(uint *)(puVar8 + uVar13 * 4) >> (ulong)(pbVar14[1] & 0x1f) & 1) != 0)
                           ) {
                          pcStack_68 = "ForceMoveOut";
                          local_70 = puVar3;
                          iVar9 = FUN_02749340(param_1 + uVar12 * 0x13230 + 0x1267c,&local_70);
                          if (iVar9 == 0) {
                            uVar11 = FUN_02694234(pbVar14,&uStack_71);
                            if (-1 < (int)uVar11) {
                              lVar4 = param_1 + uVar12 * 0x13230 + 4;
                              lVar5 = lVar4 + (ulong)uVar11 * 0x5f0;
                              if (7 < uVar11) {
                                lVar5 = lVar4;
                              }
                              local_70 = PTR_DAT_04bb2020 + 0x10;
                              pcStack_68 = "TalkDIY";
                              iVar9 = FUN_02746e10(lVar5 + 0x38,&local_70);
                              if (iVar9 != 0) goto LAB_027e0b3c;
                            }
                            bVar6 = *(byte *)(lVar2 + (ulong)uVar10);
                            uVar10 = (uint)bVar6;
                            if (9 < bVar6) {
                              uVar10 = 0xffffffff;
                            }
                            lVar2 = param_1 + (ulong)uVar10 * 0x13230;
                            if (9 < uVar10) {
                              lVar2 = param_1;
                            }
                            if ((*(int *)(lVar2 + 0x10764) != 1) ||
                               (*(char *)(lVar2 + 0x13151) < '\0')) {
                              local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar10);
                              lVar2 = *(long *)PTR_DAT_04bb4760 + (ulong)uVar10 * 0x15;
                              if (0x6c < uVar10) {
                                lVar2 = *(long *)PTR_DAT_04bb4760;
                              }
                              uVar10 = (uint)*(byte *)(lVar2 + 4) | (*(byte *)(lVar2 + 5) & 3) << 8;
                              if (0x1ff < uVar10) {
                                uVar10 = uVar10 | 0xfffffc00;
                              }
                              uVar12 = FUN_01d69340(*(undefined8 *)
                                                     (*(long *)PTR_DAT_04bb27d0 + 0x10),uVar10,0);
                              if ((uVar12 & 1) != 0) goto LAB_027e0cc0;
                            }
                            break;
                          }
                        }
                      }
                    }
LAB_027e0b3c:
                    uVar11 = 0;
                    if (uVar10 + 1 < 3) {
                      uVar11 = uVar10 + 1;
                    }
                    uVar10 = uVar11;
                  } while (uVar11 != (int)(char)*pbVar1);
                }
              }
            }
          }
        }
      }
    }
    uVar10 = 1;
  }
  else {
LAB_027e0cc0:
    uVar10 = 0;
  }
LAB_027e0cc4:
  return uVar10 & 1;
}

