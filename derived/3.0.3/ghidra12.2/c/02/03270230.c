
void FUN_03270230(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined8 local_90;
  char *pcStack_88;
  undefined1 local_80;
  uint local_7c;
  int local_6c;
  undefined1 auStack_68 [8];
  
  lVar12 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  if (lVar12 == 0) {
    uVar13 = 0xffffffff;
  }
  else {
    cVar3 = *(char *)(param_1 + 0xaa9e9);
    uVar13 = 0xffffffff;
    if (-1 < cVar3) {
      iVar9 = *(int *)(lVar12 + 0x2e8);
      iVar8 = *(int *)(lVar12 + 0x430) - *(int *)(lVar12 + 0x438);
      iVar4 = 0;
      if (iVar9 != 0) {
        iVar4 = (int)cVar3 / iVar9;
      }
      if ((*(byte *)(lVar12 + 1000) >> 1 & 1) == 0) {
        iVar8 = iVar8 + iVar4;
      }
      else {
        uVar7 = *(uint *)(lVar12 + 0x434);
        uVar13 = 0;
        if ((int)uVar7 < iVar8) {
          uVar13 = ~uVar7;
        }
        if (iVar8 < 0) {
          uVar13 = uVar7 + 1;
        }
        iVar1 = iVar8 + iVar4 + uVar13;
        iVar8 = *(int *)(lVar12 + 0x3d0);
        iVar2 = 0;
        if (iVar8 <= iVar1) {
          iVar2 = iVar8;
        }
        if (-1 < iVar1) {
          iVar8 = -iVar2;
        }
        iVar8 = iVar8 + iVar1;
      }
      uVar13 = ((int)cVar3 - iVar4 * iVar9) + iVar8 * iVar9;
      if (*(int *)(lVar12 + 0x3cc) <= (int)uVar13 || 0x7fffffff < uVar13) {
        uVar13 = 0xffffffff;
      }
    }
  }
  lVar12 = param_1 + 0x228;
  FUN_03264a78(&local_6c,lVar12,uVar13);
  puVar5 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(auStack_68);
  if (*(long *)puVar5 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      uVar7 = FUN_03415510();
      uVar7 = uVar7 & local_6c == 6;
      iVar8 = FUN_0267c230(param_1 + 0x1f8);
      iVar9 = FUN_03264b90(lVar12);
      if (iVar9 < (int)uVar7) {
        uVar11 = 0x50;
      }
      else {
        local_80 = local_6c == 6;
        local_90 = &DAT_04b16560;
        pcStack_88 = (char *)param_1;
        local_7c = uVar13;
        iVar8 = FUN_03416120(auStack_68,param_1 + 0x1f8,local_80,(iVar8 - iVar9) + uVar7,&local_90);
        if (iVar8 != 2) {
          if (iVar8 == 1) {
            uVar13 = *(uint *)(param_1 + 0xaa8e8);
            uVar11 = 0xffffffff;
            if ((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(param_1 + 0xaa8d0))) {
              lVar14 = param_1 + 0xaa8c0;
              uVar7 = uVar13 + 1 & 3;
              if (2 < uVar13) {
                uVar13 = uVar13 + 1 & 0xfffffffc;
                do {
                  uVar13 = uVar13 - 4;
                  lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(lVar14 + 8) + 8) + 8) + 8);
                } while (uVar13 != 0);
              }
              for (; uVar7 != 0; uVar7 = uVar7 - 1) {
                lVar14 = *(long *)(lVar14 + 8);
              }
              uVar11 = 0xffffffff;
              if ((lVar14 != 0) && (lVar14 = lVar14 - *(int *)(param_1 + 0xaa8d4), lVar14 != 0)) {
                uVar11 = *(undefined4 *)(lVar14 + 0x270);
              }
            }
            local_90 = PTR_DAT_04bb2020 + 0x10;
            pcStack_88 = "/L_SortWin_00";
            lVar14 = FUN_02bb21c8(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x38,&local_90);
            bVar6 = *(int *)(param_1 + 0x220) == 1;
            uVar10 = 0x1f;
            if (!bVar6) {
              uVar10 = 1;
            }
            local_90 = (undefined *)
                       CONCAT17(bVar6,CONCAT16(uVar10,CONCAT24(*(undefined2 *)(lVar14 + 0x2aa),
                                                               uVar11)));
            FUN_03263030(lVar12,&local_90);
            FUN_03270ef0(param_1,0xffffffff);
            FUN_03271190(param_1,0);
            FUN_0345b4a0(*(undefined8 *)(*(long *)(param_1 + 0x210) + 0x588),0);
            return;
          }
          if (iVar8 != 0) {
            return;
          }
          if (local_6c == 6) {
            FUN_03264940(lVar12);
            return;
          }
          local_90 = (undefined *)CONCAT44(local_90._4_4_,2);
          FUN_032646b0(lVar12,uVar13,&local_90);
          return;
        }
        uVar11 = 0xc;
      }
      *(undefined4 *)(param_1 + 0xaa9f8) = uVar11;
      if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
        *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 8;
      }
    }
  }
  return;
}

