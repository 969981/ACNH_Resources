
uint FUN_0012aef0(long param_1,long param_2,byte *param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint *param_8,uint *param_9)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint local_12c;
  uint local_104;
  uint local_f4;
  long local_f0;
  byte local_e0 [112];
  long local_70;
  undefined8 local_68;
  
  iVar14 = *(int *)(*(long *)(param_1 + 8) + 0x70);
  lVar17 = *(long *)(*(long *)(param_1 + 8) + 8);
  bVar1 = *(byte *)(param_2 + 0x50);
  if (bVar1 - 5 < 2) {
    lVar18 = *(long *)(param_1 + 0x18);
    if (lVar18 == 0) {
      return 0xffff;
    }
    local_f0 = lVar18 + ((ulong)*(byte *)(lVar18 + 0x10) << 0x18 |
                         (ulong)*(byte *)(lVar18 + 0x11) << 0x10 |
                         (ulong)*(byte *)(lVar18 + 0x12) << 8 | (ulong)*(byte *)(lVar18 + 0x13));
  }
  uVar3 = (*(uint *)(lVar17 + 0x38) & 0xff00ff00) >> 8 | (*(uint *)(lVar17 + 0x38) & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar4 = (*(uint *)(lVar17 + 0x24) & 0xff00ff00) >> 8 | (*(uint *)(lVar17 + 0x24) & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = (*(uint *)(lVar17 + 0x20) & 0xff00ff00) >> 8 | (*(uint *)(lVar17 + 0x20) & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  if ((bVar1 | 2) == 6) {
    if ((param_4 & 0xffff) != 0) {
      iVar13 = 6;
      if (iVar14 != 0x40050001) {
        iVar13 = 10;
      }
      do {
        iVar14 = 1;
        if ((*param_3 & 0xfc) == 0xd8) {
          if (*(short *)(param_3 + 2) != 0) {
            iVar14 = 2;
          }
        }
        else {
          iVar14 = 1;
        }
        if (param_6 < param_5) {
          return 0xffff;
        }
        sVar10 = (short)param_7;
        bVar7 = false;
        uVar19 = param_6;
        local_f4 = param_5;
LAB_0012b020:
        do {
          while( true ) {
            uVar20 = param_5 + (uVar19 - param_5 >> 1);
            uVar6 = uVar20 * 4 - 4;
            if (*(char *)(param_2 + 0x50) == '\x06') {
              local_70 = local_f0 + (ulong)uVar6;
            }
            else {
              iVar11 = FUN_0010dbc0(*(undefined8 *)(param_1 + 8),3,uVar6 + uVar3,4,&local_70);
              if (iVar11 < 0) {
                return 0xffff;
              }
            }
            uVar6 = *(uint *)(*(long *)(param_1 + 8) + 8);
            uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
            uVar16 = 6;
            if ((uVar6 >> 0x10 | uVar6 << 0x10) != 0x40050001) {
              uVar16 = 10;
            }
            iVar11 = FUN_0010dbc0(*(long *)(param_1 + 8),5,
                                  uVar5 + (((uint)*(byte *)(local_70 + 1) << 0x10 |
                                            (uint)*(byte *)(local_70 + 2) << 8 |
                                           (uint)*(byte *)(local_70 + 3)) - 1) * iVar13,uVar16,
                                  &local_68);
            if (iVar11 < 0) {
              return 0xffff;
            }
            cVar8 = FUN_00127c00(*(undefined8 *)(param_1 + 8),local_68,uVar4,local_e0);
            if ((int)sVar10 < (int)cVar8) break;
            if (cVar8 < 0) {
              return 0xffff;
            }
LAB_0012b118:
            param_5 = uVar20 + 1;
            if (uVar19 < param_5) goto LAB_0012b140;
          }
          sVar9 = FUN_00100470(param_3,local_e0 + (long)sVar10 * 2,iVar14);
          if (sVar9 == 0) {
            uVar19 = uVar20 - 1;
            bVar7 = true;
            local_f4 = uVar20;
            if (uVar19 < param_5) break;
            goto LAB_0012b020;
          }
          if (-1 < sVar9) goto LAB_0012b118;
          uVar19 = uVar20 - 1;
        } while (param_5 <= uVar19);
LAB_0012b140:
        if (!bVar7) {
          return 0xffff;
        }
        if (param_6 < local_f4) {
          return 0xffff;
        }
        bVar7 = false;
        uVar19 = local_f4;
        local_104 = param_6;
LAB_0012b178:
        do {
          while( true ) {
            uVar20 = uVar19 + (param_6 - uVar19 >> 1);
            uVar6 = uVar20 * 4 - 4;
            if (*(char *)(param_2 + 0x50) == '\x06') {
              local_70 = local_f0 + (ulong)uVar6;
            }
            else {
              iVar11 = FUN_0010dbc0(*(undefined8 *)(param_1 + 8),3,uVar6 + uVar3,4,&local_70);
              if (iVar11 < 0) {
                return 0xffff;
              }
            }
            uVar6 = *(uint *)(*(long *)(param_1 + 8) + 8);
            uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
            uVar16 = 6;
            if ((uVar6 >> 0x10 | uVar6 << 0x10) != 0x40050001) {
              uVar16 = 10;
            }
            iVar11 = FUN_0010dbc0(*(long *)(param_1 + 8),5,
                                  uVar5 + (((uint)*(byte *)(local_70 + 1) << 0x10 |
                                            (uint)*(byte *)(local_70 + 2) << 8 |
                                           (uint)*(byte *)(local_70 + 3)) - 1) * iVar13,uVar16,
                                  &local_68);
            if (iVar11 < 0) {
              return 0xffff;
            }
            cVar8 = FUN_00127c00(*(undefined8 *)(param_1 + 8),local_68,uVar4,local_e0);
            if ((int)sVar10 < (int)cVar8) break;
            if (cVar8 < 0) {
              return 0xffff;
            }
LAB_0012b270:
            param_6 = uVar20 - 1;
            if (param_6 < uVar19) goto LAB_0012b294;
          }
          sVar9 = FUN_00100470(param_3,local_e0 + (long)sVar10 * 2,iVar14);
          if (sVar9 == 0) {
            uVar19 = uVar20 + 1;
            bVar7 = true;
            local_104 = uVar20;
            if (param_6 < uVar19) break;
            goto LAB_0012b178;
          }
          if (sVar9 < 0) goto LAB_0012b270;
          uVar19 = uVar20 + 1;
        } while (uVar19 <= param_6);
LAB_0012b294:
        if (!bVar7) {
          return 0xffff;
        }
        param_3 = param_3 + (ulong)(ushort)iVar14 * 2;
        param_4 = param_4 - iVar14;
        param_7 = iVar14 + param_7;
        param_5 = local_f4;
        param_6 = local_104;
      } while ((param_4 & 0xffff) != 0);
    }
    goto LAB_0012b7c8;
  }
  if (param_5 <= param_6) {
    uVar19 = 0;
    iVar13 = 6;
    if (iVar14 != 0x40050001) {
      iVar13 = 10;
    }
    bVar7 = false;
    uVar20 = param_6;
    local_12c = param_6;
    local_f4 = param_5;
    do {
      uVar6 = param_5 + (uVar20 - param_5 >> 1);
      uVar15 = uVar6 * 4 - 4;
      if (bVar1 == 5) {
        local_70 = local_f0 + (ulong)uVar15;
      }
      else {
        iVar11 = FUN_0010dbc0(*(undefined8 *)(param_1 + 8),3,uVar15 + uVar3,4,&local_70);
        if (iVar11 < 0) {
          return 0xffff;
        }
      }
      uVar15 = *(uint *)(*(long *)(param_1 + 8) + 8);
      uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
      uVar16 = 6;
      if ((uVar15 >> 0x10 | uVar15 << 0x10) != 0x40050001) {
        uVar16 = 10;
      }
      iVar11 = FUN_0010dbc0(*(long *)(param_1 + 8),5,
                            uVar5 + (((uint)*(byte *)(local_70 + 1) << 0x10 |
                                      (uint)*(byte *)(local_70 + 2) << 8 |
                                     (uint)*(byte *)(local_70 + 3)) - 1) * iVar13,uVar16,&local_68);
      if (iVar11 < 0) {
        return 0xffff;
      }
      cVar8 = FUN_00127c00(*(undefined8 *)(param_1 + 8),local_68,uVar4,local_e0);
      uVar15 = (uint)cVar8;
      if ((int)uVar15 < 0) {
        return 0xffff;
      }
      bVar1 = *param_3;
      bVar2 = local_e0[0];
      if (bVar1 == local_e0[0]) {
        bVar1 = param_3[1];
        bVar2 = local_e0[1];
      }
      uVar12 = (uint)bVar1 - (uint)bVar2;
      if (uVar12 == 0) {
        if ((int)uVar15 < (int)(param_4 & 0xffff)) {
          uVar12 = FUN_00100470(param_3 + 2,(ulong)local_e0 | 2,uVar15 - 1);
          if ((uVar12 & 0xffff) != 0) goto LAB_0012b45c;
        }
        else {
          uVar12 = FUN_00100470(param_3 + 2,(ulong)local_e0 | 2,param_4 - 1);
          if ((uVar12 & 0xffff) == 0) goto LAB_0012b4c0;
LAB_0012b45c:
          if ((short)uVar12 < 0) {
            uVar20 = uVar6 - 1;
            if (param_5 <= uVar20) goto LAB_0012b36c;
            goto LAB_0012b4fc;
          }
        }
        param_5 = uVar6 + 1;
        if (uVar20 < param_5) goto LAB_0012b4fc;
      }
      else {
        if ((uVar12 & 0xffff) != 0) goto LAB_0012b45c;
LAB_0012b4c0:
        if (uVar15 == (param_4 & 0xffff)) {
          uVar15 = uVar6;
          if (uVar6 <= uVar19) {
            uVar20 = local_12c;
            uVar15 = uVar19;
          }
          uVar19 = uVar15;
          local_12c = uVar20;
          local_f4 = uVar6;
        }
        uVar20 = uVar6 - 1;
        bVar7 = true;
        if (uVar20 < param_5) goto LAB_0012b4fc;
      }
LAB_0012b36c:
      bVar1 = *(byte *)(param_2 + 0x50);
    } while( true );
  }
LAB_0012b2dc:
  if (param_5 <= param_6) {
    uVar19 = param_5 * 4 - 4;
    if (*(char *)(param_2 + 0x50) == '\x05') {
      local_70 = local_f0 + (ulong)uVar19;
    }
    else {
      iVar13 = FUN_0010dbc0(*(undefined8 *)(param_1 + 8),3,uVar19 + uVar3,4,&local_70);
      if (iVar13 < 0) {
        return 0xffff;
      }
    }
    iVar13 = 6;
    if (iVar14 != 0x40050001) {
      iVar13 = 10;
    }
    uVar3 = *(uint *)(*(long *)(param_1 + 8) + 8);
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar16 = 6;
    if ((uVar3 >> 0x10 | uVar3 << 0x10) != 0x40050001) {
      uVar16 = 10;
    }
    iVar14 = FUN_0010dbc0(*(long *)(param_1 + 8),5,
                          uVar5 + (((uint)*(byte *)(local_70 + 1) << 0x10 |
                                    (uint)*(byte *)(local_70 + 2) << 8 |
                                   (uint)*(byte *)(local_70 + 3)) - 1) * iVar13,uVar16,&local_68);
    if (((-1 < iVar14) &&
        (cVar8 = FUN_00127c00(*(undefined8 *)(param_1 + 8),local_68,uVar4,local_e0),
        (int)(param_4 & 0xffff) <= (int)cVar8)) &&
       (sVar10 = FUN_00100470(param_3,local_e0,param_4), sVar10 == 0)) {
      return 0xfffe;
    }
  }
  return 0xffff;
LAB_0012b4fc:
  if (uVar19 != 0) {
    if (uVar19 == local_12c) {
      *param_8 = local_f4;
      *param_9 = uVar19;
      return param_4;
    }
    if (local_12c < uVar19) {
      return 0xffff;
    }
    local_104 = 0;
    iVar13 = 6;
    if (iVar14 != 0x40050001) {
      iVar13 = 10;
    }
LAB_0012b648:
    do {
      while( true ) {
        uVar20 = uVar19 + (local_12c - uVar19 >> 1);
        uVar6 = uVar20 * 4 - 4;
        if (*(char *)(param_2 + 0x50) == '\x05') {
          local_70 = local_f0 + (ulong)uVar6;
        }
        else {
          iVar14 = FUN_0010dbc0(*(undefined8 *)(param_1 + 8),3,uVar6 + uVar3,4,&local_70);
          if (iVar14 < 0) {
            return 0xffff;
          }
        }
        uVar6 = *(uint *)(*(long *)(param_1 + 8) + 8);
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        uVar16 = 6;
        if ((uVar6 >> 0x10 | uVar6 << 0x10) != 0x40050001) {
          uVar16 = 10;
        }
        iVar14 = FUN_0010dbc0(*(long *)(param_1 + 8),5,
                              uVar5 + (((uint)*(byte *)(local_70 + 1) << 0x10 |
                                        (uint)*(byte *)(local_70 + 2) << 8 |
                                       (uint)*(byte *)(local_70 + 3)) - 1) * iVar13,uVar16,&local_68
                             );
        if (iVar14 < 0) {
          return 0xffff;
        }
        cVar8 = FUN_00127c00(*(undefined8 *)(param_1 + 8),local_68,uVar4,local_e0);
        uVar6 = (uint)cVar8;
        if ((int)uVar6 < 0) {
          return 0xffff;
        }
        bVar1 = *param_3;
        bVar2 = local_e0[0];
        if (bVar1 == local_e0[0]) {
          bVar1 = param_3[1];
          bVar2 = local_e0[1];
        }
        uVar15 = (uint)bVar1 - (uint)bVar2;
        if (uVar15 != 0) break;
        if ((int)(param_4 & 0xffff) <= (int)uVar6) {
          uVar15 = FUN_00100470(param_3 + 2,(ulong)local_e0 | 2,param_4 - 1);
          break;
        }
        sVar10 = FUN_00100470(param_3 + 2,(ulong)local_e0 | 2,uVar6 - 1);
        if (sVar10 != 0) goto LAB_0012b76c;
LAB_0012b774:
        uVar19 = uVar20 + 1;
        if (local_12c < uVar19) goto LAB_0012b7b8;
      }
      sVar10 = (short)uVar15;
      if ((uVar15 & 0xffff) != 0) {
LAB_0012b76c:
        if (-1 < sVar10) goto LAB_0012b774;
LAB_0012b7a8:
        local_12c = uVar20 - 1;
        if (local_12c < uVar19) break;
        goto LAB_0012b648;
      }
      if (uVar6 != (param_4 & 0xffff)) goto LAB_0012b7a8;
      uVar19 = uVar20 + 1;
      local_104 = uVar20;
    } while (uVar19 <= local_12c);
LAB_0012b7b8:
    param_5 = local_f4;
    param_6 = local_104;
    param_7 = param_4;
    if (local_104 == 0) {
      return 0xffff;
    }
LAB_0012b7c8:
    *param_8 = param_5;
    *param_9 = param_6;
    return param_7;
  }
  if (bVar7) {
    return 0xfffe;
  }
  goto LAB_0012b2dc;
}

