
uint FUN_01fdeee8(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  float *pfVar11;
  undefined *local_88 [3];
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  if (param_2 != (undefined4 *)0x0) {
    iVar4 = FUN_021d5df0(*(long *)(param_1 + 8) + 0x3e0);
    local_60 = (undefined *)CONCAT44(local_60._4_4_,iVar4);
    if ((iVar4 == 0) && (lVar9 = *(long *)PTR_DAT_04bb4960, lVar9 != 0)) {
      uVar5 = *(uint *)(param_1 + 0x123bc);
      if ((int)*(uint *)(lVar9 + 0x5c0) < 1) {
        if ((((*(long *)(lVar9 + 0x4b0) != 0) &&
             (puVar10 = *(uint **)(*(long *)(lVar9 + 0x4b0) + 8), puVar10 != (uint *)0x0)) &&
            ((*(uint *)(lVar9 + 0x4c8) <= uVar5 ||
             (*(char *)(*(long *)(lVar9 + 0x4d0) + (long)(int)uVar5) != '\0')))) &&
           (((uVar5 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
          iVar4 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            iVar4 = 0x1c;
          }
          puVar10 = (uint *)((ulong)(puVar10[1] * uVar5 + (uint)(ushort)puVar10[2] * 8 + iVar4) +
                            (long)puVar10);
          goto LAB_01fdef80;
        }
      }
      else if (uVar5 < *(uint *)(lVar9 + 0x5c0)) {
        uVar6 = uVar5;
        if (*(uint *)(lVar9 + 0x5b0) <= uVar5) {
          uVar6 = 0;
        }
        puVar10 = *(uint **)(*(long *)(lVar9 + 0x5b8) + (ulong)uVar6 * 8);
LAB_01fdef80:
        if (puVar10 != (uint *)0x0 && *(long *)PTR_DAT_04bb4970 != 0) {
          if (uVar5 == 0x3c) {
            uVar5 = 1;
            *param_2 = 4;
            goto LAB_01fdef24;
          }
          uVar5 = *puVar10;
          if (uVar5 != 0 && puVar10 != (uint *)(ulong)uVar5) {
            puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
            if (((*puVar8 != 0) && (uVar5 = puVar8[1], uVar5 != 0)) &&
               ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar6 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar6 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar5);
                }
                if (*puVar8 <= uVar6) {
                  uVar6 = 0xffffffff;
                }
                if ((uVar6 < *(uint *)PTR_DAT_04bc23e0) &&
                   ((*(ushort *)(*(long *)(PTR_DAT_04bc23e0 + 8) + (long)(int)uVar6 * 2) & 0xfffe)
                    == 2)) {
                  FUN_01fd6d50(auStack_38);
                  uVar5 = FUN_03853b94(puVar10);
                  if ((uVar5 < *(uint *)PTR_DAT_04bc23d0) &&
                     (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc23d0 + 8) + (long)(int)uVar5 * 2),
                     uVar2 < 0xd)) {
                    if (uVar2 == 10) {
                      pfVar11 = (float *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278);
                      uVar5 = FUN_021f4f90(pfVar11,0,0);
                    }
                    else {
                      if (uVar2 != 9) goto LAB_01fdf108;
                      pfVar11 = (float *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278);
                      uVar5 = FUN_021f2ed0(pfVar11,0);
                    }
                    uVar6 = *(uint *)(param_1 + 0x123bc);
                    if ((uVar6 == 0x16) || (uVar3 = uVar5, uVar6 == 0x10)) {
                      local_50 = 0;
                      local_60 = PTR_DAT_04bbc1a0 + 0x10;
                      puVar1 = PTR_DAT_04bb2010 + 0x10;
                      uStack_40 = 0;
                      puStack_58 = puVar1;
                      local_48 = puVar1;
                      FUN_012e1d60(&local_60,pfVar11,2,2);
                      local_68 = (int)((float)(int)*pfVar11 / 5.0) - (uint)(*pfVar11 < 0.0);
                      iStack_64 = (int)((float)(int)pfVar11[2] / 5.0) - (uint)(pfVar11[2] < 0.0);
                      local_70 = puVar1;
                      FUN_01a4f4bc(local_88);
                      local_88[0] = PTR_DAT_04bb3140 + 0x10;
                      uVar7 = FUN_01a5190c(local_88,0,&local_70,0);
                      uVar6 = FUN_01fd595c(&local_60,uVar7);
                      uVar3 = uVar5 & uVar6;
                    }
                    if ((uVar3 & 1) != 0) {
                      *param_2 = 4;
                      goto LAB_01fdef24;
                    }
                  }
                  else {
LAB_01fdf108:
                    if (*(int *)(*(long *)(param_1 + 8) + 0x750) == 0) {
                      uVar5 = FUN_01fe0208(param_1,param_2,auStack_38);
                      goto LAB_01fdef24;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_01fdef24:
  return uVar5 & 1;
}

