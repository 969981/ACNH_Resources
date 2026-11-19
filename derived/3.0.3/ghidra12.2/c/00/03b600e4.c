
uint FUN_03b600e4(undefined4 param_1,long param_2,ulong param_3)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  long *plVar14;
  undefined *local_d8;
  undefined1 *puStack_d0;
  undefined4 local_c8;
  undefined1 local_c4 [127];
  undefined1 local_45;
  
  lVar13 = *(long *)PTR_DAT_04bd1e70;
  if (lVar13 != 0 && *(char *)(param_2 + 8) != '\0') {
    local_45 = 0;
    local_c8 = 0x80;
    puStack_d0 = local_c4;
    lVar10 = param_2 + 0x20;
    local_c4[0] = 0;
    local_d8 = PTR_DAT_04bb2d88 + 0x10;
    lVar9 = *(long *)(param_2 + 0x28);
    if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x2c) >> 4 & 1) != 0)) {
      lVar4 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0xb0);
      uVar3 = 0;
      if (lVar4 == 0) goto LAB_03b603f4;
      if (*(char *)(lVar9 + 0x30) == '\0') {
        lVar9 = FUN_03b4dec0(lVar4,0);
        uVar3 = 0;
        if (lVar9 == 0) goto LAB_03b603f4;
      }
      else {
        lVar9 = FUN_03b4dec0(lVar4,*(undefined1 *)(lVar9 + 0x31));
        if (lVar9 == 0) {
          uVar3 = 0;
          goto LAB_03b603f4;
        }
      }
      *(long *)(param_2 + 0x40) = lVar9;
      *(long *)(lVar9 + 0x18) = lVar10;
    }
    uVar5 = FUN_03b57a9c(*(undefined8 *)(param_2 + 0xe0),lVar10);
    if ((uVar5 & 1) != 0) {
      if (**(int **)(param_2 + 0xe0) == 2) {
        bVar2 = *(byte *)(param_2 + 0x31);
        if (((bVar2 >> 3 & 1) == 0) ||
           (puVar6 = *(undefined8 **)(param_2 + 0x38), puVar6 == (undefined8 *)0x0)) {
          if ((bVar2 >> 1 & 1) == 0) {
            if (*(long *)PTR_DAT_04bc3ee8 == 0) {
              if ((bVar2 >> 5 & 1) == 0) {
                if (*(long *)(param_2 + 0x28) == 0) {
                  pcVar8 = (char *)0x0;
                }
                else {
                  puVar12 = (uint *)(*(long *)(param_2 + 0x28) + 0x24);
                  pcVar8 = (char *)((ulong)*puVar12 + (long)puVar12);
                }
              }
              else {
                pcVar8 = "<NoSound>";
              }
              pcVar1 = ".bfstm";
              if (DAT_05aebc00 != '\0') {
                pcVar1 = ".bwav";
              }
              FUN_038d1270(&local_d8,&DAT_0406a3d7,pcVar8,pcVar1);
            }
            else {
              if ((bVar2 >> 5 & 1) == 0) {
                if (*(long *)(param_2 + 0x28) == 0) {
                  pcVar8 = (char *)0x0;
                }
                else {
                  puVar12 = (uint *)(*(long *)(param_2 + 0x28) + 0x24);
                  pcVar8 = (char *)((ulong)*puVar12 + (long)puVar12);
                }
              }
              else {
                pcVar8 = "<NoSound>";
              }
              pcVar1 = ".bfstm";
              if (DAT_05aebc00 != '\0') {
                pcVar1 = ".bwav";
              }
              FUN_038d1270(&local_d8,"%s%s%s",*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0xb8),
                           pcVar8,pcVar1);
            }
          }
        }
        else {
          uVar5 = (**(code **)*puVar6)(puVar6,&local_d8,lVar10);
          if ((uVar5 & 1) == 0) goto LAB_03b603f0;
        }
      }
      if ((((*(char *)(lVar13 + 1) != '\0') && (lVar10 = *(long *)(lVar13 + 0x1a0), lVar10 != 0)) &&
          (0 < *(int *)(lVar10 + 0x20))) &&
         ((int)(uint)*(ushort *)(*(long *)(param_2 + 0xe0) + 0x30) <= *(int *)(lVar10 + 0x58))) {
        if (*(long *)(param_2 + 0xd8) != 0) {
          FUN_03b628a0(0,*(long *)(param_2 + 0xd8),0,0);
          if (*(char *)(lVar13 + 1) != '\0') {
            plVar14 = *(long **)(param_2 + 0xd8);
            lVar9 = *(long *)(lVar13 + 0x1a0);
            *(undefined4 *)(plVar14 + 2) = 0;
            (**(code **)(*plVar14 + 0x30))(plVar14,plVar14 + 1);
            lVar10 = lVar9 + ((ulong)(*(ushort *)(plVar14 + 0x23) >> 3) & 0x1ff8);
            *(ulong *)(lVar10 + 0xb8) =
                 1L << ((ulong)*(ushort *)(plVar14 + 0x23) & 0x3f) | *(ulong *)(lVar10 + 0xb8);
            lVar9 = lVar9 + ((ulong)(*(ushort *)(plVar14 + 0x23) >> 3) & 0x1ff8);
            *(ulong *)(lVar9 + 0xd0) =
                 *(ulong *)(lVar9 + 0xd0) &
                 (1L << ((ulong)*(ushort *)(plVar14 + 0x23) & 0x3f) ^ 0xffffffffffffffffU);
          }
          *(undefined8 *)(param_2 + 0xd8) = 0;
        }
        if (*(char *)(lVar13 + 1) == '\0') {
          *(undefined8 *)(param_2 + 0xd8) = 0;
        }
        else {
          lVar10 = FUN_03b68570(*(undefined8 *)(lVar13 + 0x1a0),
                                *(undefined2 *)(*(long *)(param_2 + 0xe0) + 0x30));
          *(long *)(param_2 + 0xd8) = lVar10;
          if (lVar10 != 0) {
            lVar9 = *(long *)(param_2 + 0xe0);
            uVar3 = *(uint *)(param_2 + 0x10);
            uVar11 = (uint)*(byte *)(lVar9 + 8);
            if (*(byte *)(lVar9 + 8) != 0) {
              if (*(int **)(lVar9 + 0x10) == (int *)0x0) {
                uVar11 = 0;
              }
              else {
                uVar11 = 0;
                if ((**(int **)(lVar9 + 0x10) == 0x56415742) && (*(short *)(lVar9 + 0x30) != 0)) {
                  uVar11 = *(uint *)(*(long *)(lVar9 + 0x18) + 8);
                }
              }
            }
            if (uVar11 <= uVar3) {
              uVar3 = 0;
            }
            uVar5 = FUN_03b619d0(lVar10,lVar9,uVar3,&local_d8);
            if ((((uVar5 & 1) == 0) || (3 < *(uint *)(param_2 + 0xc))) ||
               (*(uint *)(param_2 + 0xc) == 1)) {
              if (*(char *)(lVar13 + 1) != '\0') {
                plVar14 = *(long **)(param_2 + 0xd8);
                lVar10 = *(long *)(lVar13 + 0x1a0);
                *(undefined4 *)(plVar14 + 2) = 0;
                (**(code **)(*plVar14 + 0x30))(plVar14,plVar14 + 1);
                lVar13 = lVar10 + ((ulong)(*(ushort *)(plVar14 + 0x23) >> 3) & 0x1ff8);
                *(ulong *)(lVar13 + 0xb8) =
                     1L << ((ulong)*(ushort *)(plVar14 + 0x23) & 0x3f) | *(ulong *)(lVar13 + 0xb8);
                lVar10 = lVar10 + ((ulong)(*(ushort *)(plVar14 + 0x23) >> 3) & 0x1ff8);
                *(ulong *)(lVar10 + 0xd0) =
                     *(ulong *)(lVar10 + 0xd0) &
                     (1L << ((ulong)*(ushort *)(plVar14 + 0x23) & 0x3f) ^ 0xffffffffffffffffU);
              }
              uVar3 = 0;
              *(undefined8 *)(param_2 + 0xd8) = 0;
            }
            else {
              *(undefined4 *)(param_2 + 0xc) = 1;
              FUN_03b62f70(*(undefined4 *)(param_2 + 0x14),*(undefined8 *)(param_2 + 0xd8));
              if (*(char *)(lVar13 + 0x1f0) != '\0') {
                uVar7 = FUN_03b513a0(lVar13,0);
                FUN_03b5f2d0(*(undefined8 *)(param_2 + 0xd8),uVar7);
              }
              lVar13 = *(long *)(param_2 + 0xd8);
              if ((((*(long *)(lVar13 + 0x108) != 0) &&
                   (*(long *)(*(long *)(lVar13 + 0x108) + 0xb0) != -1)) &&
                  (*(long *)(param_2 + 0x28) != 0)) && (*(char *)(param_2 + 0x30) != -1)) {
                lVar10 = *(long *)(param_2 + 0x40);
                if (lVar10 == 0) {
                  lVar10 = 0;
                  if ((*(byte *)(param_2 + 0x31) & 0x10) != 0) {
                    lVar10 = *(long *)(param_2 + 0x38);
                  }
                }
                if ((lVar10 != 0) && (*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x88) != 0)) {
                  FUN_03b484dc(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x88));
                  lVar13 = *(long *)(param_2 + 0xd8);
                }
              }
              FUN_03b63350(lVar13,*(char *)(*(long *)PTR_DAT_04bc3ee8 + 0xc2) == '\0');
              if ((param_3 & 1) == 0) {
                uVar3 = FUN_03b605a0(param_1,param_2);
              }
              else {
                uVar3 = 1;
              }
            }
            goto LAB_03b603f4;
          }
        }
        if (*(int *)(param_2 + 0xc) - 1U < 3) {
          uVar3 = 0;
          *(int *)(param_2 + 0xc) = 0;
          goto LAB_03b603f4;
        }
      }
    }
  }
LAB_03b603f0:
  uVar3 = 0;
LAB_03b603f4:
  return uVar3 & 1;
}

