
void FUN_0208fcb0(undefined8 param_1)

{
  undefined *puVar1;
  uint *puVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  byte *pbVar20;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  byte local_64 [4];
  
  puVar1 = PTR_DAT_04bb27d0;
  lVar16 = *(long *)PTR_DAT_04bb39b0;
  pbVar20 = PTR_DAT_04bb32e0;
  if (lVar16 == 0) {
LAB_0208fd30:
    if (*pbVar20 < 8) goto LAB_0208fda0;
LAB_0208fd3c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0208fd98:
      pbVar20 = PTR_DAT_04bb5038;
      goto LAB_0208fda0;
    }
    lVar16 = **(long **)PTR_DAT_04bb27d0;
    bVar10 = *(byte *)(lVar16 + 0x473);
    pbVar20 = PTR_DAT_04bb5038;
    if ((long)(char)bVar10 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
      if (7 < bVar10) {
        puVar2 = (uint *)(lVar16 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar20 = (byte *)(lVar16 + 0x471);
      }
    }
    local_64[0] = *pbVar20;
    if (7 < local_64[0]) goto LAB_0208fd98;
  }
  else {
    if (*(int *)(lVar16 + 0x15c) != 0) {
      pbVar20 = (byte *)(lVar16 + 0x158);
    }
    if (7 < *pbVar20) {
      if ((*(int *)(lVar16 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0208fd30;
      }
      goto LAB_0208fd3c;
    }
LAB_0208fda0:
    local_64[0] = *pbVar20;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
      goto LAB_0208fdd0;
    }
  }
  uVar13 = FUN_0252f708(local_64,1,0);
  if ((uVar13 & 1) != 0) {
    return;
  }
LAB_0208fdd0:
  if (*(byte *)(**(long **)puVar1 + 0x476) < 2) {
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 != -1) {
      local_88 = (undefined *)CONCAT44(local_88._4_4_,0x19);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x19 & 1) != 0) {
        return;
      }
    }
    iVar11 = FUN_016d1b60();
    puVar8 = PTR_DAT_04bb3968;
    puVar7 = PTR_DAT_04bb3238;
    iVar19 = 0;
    puVar1 = PTR_DAT_04bb3768 + 0x10;
    do {
      pcVar14 = (char *)FUN_021c9770(iVar19,1);
      if (pcVar14 != (char *)0x0) {
        local_78 = 8;
        local_6d = 0;
        local_74[0] = 0;
        local_88 = puVar1;
        puStack_80 = local_74;
        FUN_038d1270(&local_88,"-----");
        pbVar20 = (byte *)(pcVar14 + 0x18);
        if ((ulong)*pbVar20 < 0x23) {
          FUN_038d1270(&local_88,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar20 * 8 + 0xb0),pcVar14[0x19])
          ;
        }
        iVar12 = FUN_020a4f40(*(undefined8 *)puVar8,&local_88,puVar7,1);
        bVar9 = false;
        if (*pcVar14 != '\0') {
          cVar3 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
          bVar10 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
          uVar6 = (int)cVar3 + 0x18;
          if (4 < cVar3) {
            uVar6 = (int)cVar3;
          }
          uVar18 = (uint)(byte)pcVar14[8];
          bVar9 = uVar18 == (uVar6 & 0xff);
          if (((uVar18 < (uVar6 & 0xff)) || (pcVar14[9] == bVar10 && bVar9)) ||
             ((byte)pcVar14[9] < bVar10 && bVar9)) {
            uVar6 = uVar6 & 0xff;
            uVar18 = (uint)(byte)pcVar14[10];
            bVar9 = (uVar6 < uVar18 || bVar10 == pcVar14[0xb] && uVar6 == uVar18) ||
                    bVar10 < (byte)pcVar14[0xb] && uVar6 == uVar18;
          }
          else {
            bVar9 = false;
          }
        }
        if (iVar12 == 0) {
          if (bVar9) {
            if (iVar11 != iVar19) goto LAB_020900c0;
          }
          else if (iVar11 == iVar19) {
            piVar17 = (int *)(pcVar14 + 0x68);
            if (pcVar14[0x6c] == '\0') {
              if (*(int *)(pcVar14 + 0x40) < 1) {
                piVar17 = (int *)PTR_DAT_04bc2808;
              }
              else {
                iVar5 = *(int *)(pcVar14 + 0x40) + *(int *)(pcVar14 + 0x3c) + -1;
                iVar12 = 0;
                if (*(int *)(pcVar14 + 0x38) <= iVar5) {
                  iVar12 = *(int *)(pcVar14 + 0x38);
                }
                piVar17 = (int *)(*(long *)(pcVar14 + 0x30) + (long)(iVar5 - iVar12) * 0x10 + 4);
              }
            }
            local_8c = *piVar17;
            if (local_8c == 3) goto LAB_0208fec8;
            uVar15 = 3;
            iVar12 = iVar11;
LAB_02090258:
            FUN_0208f100(param_1,iVar12,1,uVar15,0);
          }
          else {
            if (pcVar14[0x6c] == '\0') {
              if (*(int *)(pcVar14 + 0x40) < 1) {
                piVar17 = (int *)PTR_DAT_04bc2808;
              }
              else {
                iVar5 = *(int *)(pcVar14 + 0x40) + *(int *)(pcVar14 + 0x3c) + -1;
                iVar12 = 0;
                if (*(int *)(pcVar14 + 0x38) <= iVar5) {
                  iVar12 = *(int *)(pcVar14 + 0x38);
                }
                piVar17 = (int *)(*(long *)(pcVar14 + 0x30) + (long)(iVar5 - iVar12) * 0x10 + 4);
              }
              local_8c = *piVar17;
              if (local_8c != 1) {
                FUN_0208f100(param_1,iVar19,1,1,0);
              }
            }
            else {
              local_8c = *(int *)(pcVar14 + 0x68);
            }
LAB_020900c0:
            if (pcVar14[0x6c] == '\0') {
              if (*(int *)(pcVar14 + 0x40) < 1) {
                iVar12 = *(int *)PTR_DAT_04bc2808;
              }
              else {
                iVar5 = *(int *)(pcVar14 + 0x40) + *(int *)(pcVar14 + 0x3c) + -1;
                iVar12 = 0;
                if (*(int *)(pcVar14 + 0x38) <= iVar5) {
                  iVar12 = *(int *)(pcVar14 + 0x38);
                }
                iVar12 = *(int *)(*(long *)(pcVar14 + 0x30) + (long)(iVar5 - iVar12) * 0x10 + 4);
              }
            }
            else {
              iVar12 = *(int *)(pcVar14 + 0x68);
            }
            if (iVar12 == 0) {
              local_8c = 0;
              FUN_0220f914(&local_8c);
              if (*(int *)(pcVar14 + 0x40) < 1) {
                local_90 = 0;
              }
              else {
                iVar5 = *(int *)(pcVar14 + 0x40) + *(int *)(pcVar14 + 0x3c) + -1;
                iVar12 = 0;
                if (*(int *)(pcVar14 + 0x38) <= iVar5) {
                  iVar12 = *(int *)(pcVar14 + 0x38);
                }
                uVar6 = iVar5 - iVar12;
                local_90 = *(undefined4 *)
                            (*(long *)(pcVar14 + 0x30) +
                            (-(ulong)(uVar6 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar6 << 4));
              }
              bVar10 = *pbVar20;
              if (((bVar10 < 0x23) && ((byte)pcVar14[0x19] <= (byte)PTR_DAT_04bc27f0[bVar10])) &&
                 ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar10 * 4) >>
                   (ulong)((byte)pcVar14[0x19] & 0x1f) & 1) != 0)) {
                if (bVar10 == 0xd) {
                  local_94 = 3;
                }
                else {
                  bVar10 = FUN_020fd7d8(pbVar20);
                  if (7 < bVar10) goto LAB_020901dc;
                  local_94 = *(undefined4 *)(&DAT_04058920 + (long)(char)bVar10 * 4);
                }
              }
              else {
LAB_020901dc:
                local_94 = 1;
              }
              iVar12 = *(int *)(pcVar14 + 0x11c);
              if (iVar12 == 2) {
                if (local_8c == 0) {
                  pcVar14[0x11c] = '\0';
                  pcVar14[0x11d] = '\0';
                  pcVar14[0x11e] = '\0';
                  pcVar14[0x11f] = '\0';
LAB_02090234:
                  uVar13 = FUN_021de8e0(&local_90,&local_8c,&local_94);
                  if ((uVar13 & 1) != 0) {
                    uVar15 = 0;
                    iVar12 = iVar19;
                    goto LAB_02090258;
                  }
                }
              }
              else if (iVar12 == 1) {
                if (local_8c != 1) goto LAB_02090230;
              }
              else if ((iVar12 == 0) && (0 < local_8c)) {
LAB_02090230:
                *(int *)(pcVar14 + 0x11c) = local_8c;
                goto LAB_02090234;
              }
            }
          }
        }
      }
LAB_0208fec8:
      iVar19 = iVar19 + 1;
    } while (iVar19 != 0x11);
  }
  return;
}

