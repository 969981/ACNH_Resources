
/* WARNING: Removing unreachable block (ram,0x0178b9e0) */
/* WARNING: Removing unreachable block (ram,0x0178b9f4) */

void FUN_0178b5f0(long param_1,long *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 local_58;
  ulong local_38;
  
  puVar12 = PTR_DAT_04bbe3c8;
  lVar13 = param_2[0x22a];
  if (lVar13 != 0) {
    if (*(int *)(lVar13 + 0x30) != 0) {
      lVar14 = *(long *)(lVar13 + 0x38);
      lVar10 = 0;
      lVar15 = (long)*(int *)(lVar13 + 0x30) << 3;
      do {
        plVar6 = (long *)**(undefined8 **)(lVar14 + lVar10 * 8);
        uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6,puVar12);
        puVar3 = PTR_DAT_04bbe3c8;
        if (uVar4 != 0xffffffff) {
          if (((((uint)lVar10 ^ 0xffffffff) & 0xffff) != 0) && ((uVar4 & 0xffff) != 0xffff)) {
            FUN_016102c0(param_2 + 0x22c,0,PTR_DAT_04bbe3c8,PTR_DAT_04bbe3d0);
            FUN_016102c0(param_2 + 0x22c,1,puVar3,PTR_DAT_04bbe3d8);
            if (*(int *)(lVar13 + 0x30) != 0) {
              lVar10 = (long)*(int *)(lVar13 + 0x30) * 8;
              puVar11 = *(undefined8 **)(lVar13 + 0x38);
              do {
                lVar10 = lVar10 + -8;
                iVar5 = (**(code **)(**(long **)*puVar11 + 0xc0))(*(long **)*puVar11,&DAT_0528dbd0);
                puVar11 = puVar11 + 1;
              } while (iVar5 == -1 && lVar10 != 0);
            }
            goto LAB_0178b7b8;
          }
          break;
        }
        lVar10 = lVar10 + 1;
        lVar15 = lVar15 + -8;
      } while (lVar15 != 0);
      if (*(int *)(lVar13 + 0x30) != 0) {
        lVar15 = *(long *)(lVar13 + 0x38);
        lVar10 = 0;
        lVar13 = (long)*(int *)(lVar13 + 0x30) << 3;
        do {
          plVar6 = (long *)**(undefined8 **)(lVar15 + lVar10 * 8);
          uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6,&DAT_0528dbd0);
          if (uVar4 != 0xffffffff) {
            if (((((uint)lVar10 ^ 0xffffffff) & 0xffff) != 0) && ((uVar4 & 0xffff) != 0xffff)) {
              FUN_016102c0(param_2 + 0x22c,0,&DAT_0528dbd0,PTR_DAT_04bbe3d0);
              FUN_016102c0(param_2 + 0x22c,1,&DAT_0528dbd0,PTR_DAT_04bbe3d8);
            }
            break;
          }
          lVar10 = lVar10 + 1;
          lVar13 = lVar13 + -8;
        } while (lVar13 != 0);
      }
    }
LAB_0178b7b8:
    if (*(char *)(param_1 + 0x6a0) == '\0') {
      lVar13 = *(long *)PTR_DAT_04bb46d0;
      uVar4 = (uint)*(ushort *)(param_1 + 0x290) - (uint)*(ushort *)(lVar13 + 0x400);
      if (((uVar4 < *(uint *)(lVar13 + 0x3e0)) &&
          (puVar7 = *(uint **)(*(long *)(lVar13 + 1000) + (long)(int)uVar4 * 8),
          puVar7 != (uint *)0x0)) && (uVar4 = *puVar7, uVar4 != 0 && puVar7 != (uint *)(ulong)uVar4)
         ) {
        puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
        if (((*puVar8 != 0) && (uVar4 = puVar8[1], uVar4 != 0)) && ((ulong)(ushort)puVar8[2] != 0))
        {
          lVar13 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar8 + lVar13 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar13 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar13) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bbe4f8) &&
               (*(short *)(*(long *)(PTR_DAT_04bbe4f8 + 8) + (long)(int)uVar1 * 2) == 1)) {
              lVar13 = param_2[0x230];
              if (lVar13 != 0 && param_2[0x22c] != 0) {
                uVar9 = *(ulong *)(lVar13 + (ulong)(1 < *(uint *)(param_2 + 0x22f)) * 8);
              }
              else {
                uVar9 = 0xffffffffffff;
              }
              if (((((uVar9 ^ 0xffffffffffffffff) & 0xffff00000000) != 0) &&
                  ((uVar9 & 0xffff) != 0xffff)) && ((uVar9 & 0xffff0000) != 0xffff0000)) {
                local_38 = 0x3f8000003eaaaaab;
                local_58 = 0xbf800000;
                if (lVar13 != 0 && param_2[0x22c] != 0) {
                  uVar9 = *(ulong *)(lVar13 + (ulong)(1 < *(uint *)(param_2 + 0x22f)) * 8);
                }
                else {
                  uVar9 = 0xffffffffffff;
                }
                plVar6 = (long *)**(undefined8 **)
                                   (*(long *)(param_2[0x22a] + 0x38) +
                                   (-(uVar9 >> 0xf & 1) & 0xfffffffffff80000 | (uVar9 & 0xffff) << 3
                                   ));
                (**(code **)(*plVar6 + 0x178))
                          (0,plVar6,(int)uVar9 >> 0x10,(int)(uVar9 >> 0x10) >> 0x10,&local_38,
                           &local_58);
              }
            }
          }
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x350) == '\0') goto LAB_0178bc30;
  if (*(ushort *)(param_1 + 0x290) == 0xf9) {
    uVar2 = *(undefined1 *)(*(long *)PTR_DAT_04bb5ce0 + 0xfe8);
    *(undefined1 *)(param_1 + 0x674) = uVar2;
    *(undefined1 *)(param_1 + 0x675) = uVar2;
    if (param_2[0x227] != 0) {
      FUN_038501b0(0x41200000,param_2[0x227],0);
      lVar13 = param_2[0x227];
      if (*(char *)(lVar13 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar13 + 0x2c0) = 0;
        FUN_03855b20(lVar13 + 0xc0,0);
      }
      puVar12 = PTR_DAT_04bbe368;
      FUN_0384f8c0(lVar13,PTR_DAT_04bbe368,0,0);
      (**(code **)(*param_2 + 0x120))(param_2,puVar12,10,0);
    }
    local_38 = local_38 & 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x678) = 0;
    goto LAB_0178bc30;
  }
  lVar13 = *(long *)PTR_DAT_04bb46d0;
  uVar4 = (uint)*(ushort *)(param_1 + 0x290) - (uint)*(ushort *)(lVar13 + 0x400);
  if ((uVar4 < *(uint *)(lVar13 + 0x3e0)) &&
     (puVar7 = *(uint **)(*(long *)(lVar13 + 1000) + (long)(int)uVar4 * 8), puVar7 != (uint *)0x0))
  {
    uVar4 = *puVar7;
    if (uVar4 == 0 || puVar7 == (uint *)(ulong)uVar4) {
LAB_0178bae8:
      uVar4 = *puVar7;
      if (uVar4 != 0 && puVar7 != (uint *)(ulong)uVar4) {
        puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
        if (((*puVar8 != 0) && (uVar4 = puVar8[1], uVar4 != 0)) && ((ulong)(ushort)puVar8[2] != 0))
        {
          lVar13 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar8 + lVar13 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar13 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar13) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bbe4f0) &&
               (*(short *)(*(long *)(PTR_DAT_04bbe4f0 + 8) + (long)(int)uVar1 * 2) == 3)) {
              if ((*(long *)PTR_DAT_04bb5ce0 == 0) ||
                 ((uVar4 = *(uint *)(*(long *)PTR_DAT_04bb5ce0 + 0xee0), 3 < uVar4 || (uVar4 == 2)))
                 ) {
                if (param_2[0x227] == 0) goto LAB_0178bc30;
                FUN_038501b0(0x41200000,param_2[0x227],0);
                lVar13 = param_2[0x227];
                if (*(char *)(lVar13 + 0x2c0) != '\0') {
                  *(undefined1 *)(lVar13 + 0x2c0) = 0;
                  FUN_03855b20(lVar13 + 0xc0,0);
                }
                puVar12 = PTR_DAT_04bbe350;
              }
              else {
                if (param_2[0x227] == 0) goto LAB_0178bc30;
                FUN_038501b0(0x41200000,param_2[0x227],0);
                lVar13 = param_2[0x227];
                if (*(char *)(lVar13 + 0x2c0) != '\0') {
                  *(undefined1 *)(lVar13 + 0x2c0) = 0;
                  FUN_03855b20(lVar13 + 0xc0,0);
                }
                puVar12 = PTR_DAT_04bbe360;
              }
              goto LAB_0178bc00;
            }
          }
        }
      }
      goto LAB_0178bbc8;
    }
    puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
    if (((*puVar8 == 0) || (uVar4 = puVar8[1], uVar4 == 0)) || ((ulong)(ushort)puVar8[2] == 0))
    goto LAB_0178bae8;
    lVar13 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      lVar13 = 0x1c;
    }
    lVar13 = (long)puVar8 + lVar13 + (ulong)(ushort)puVar8[2] * 8;
    if (lVar13 == 0) goto LAB_0178bae8;
    uVar1 = 0;
    if ((ulong)uVar4 != 0) {
      uVar1 = (uint)((ulong)((long)puVar7 - lVar13) / (ulong)uVar4);
    }
    if (*puVar8 <= uVar1) {
      uVar1 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bbe4f0 <= uVar1) ||
       (*(short *)(*(long *)(PTR_DAT_04bbe4f0 + 8) + (long)(int)uVar1 * 2) != 1)) goto LAB_0178bae8;
    if (param_2[0x227] == 0) goto LAB_0178bc30;
    FUN_038501b0(0x41200000,param_2[0x227],0);
    lVar13 = param_2[0x227];
    if (*(char *)(lVar13 + 0x2c0) != '\0') {
      *(undefined1 *)(lVar13 + 0x2c0) = 0;
      FUN_03855b20(lVar13 + 0xc0,0);
    }
    puVar12 = PTR_DAT_04bbe358;
  }
  else {
LAB_0178bbc8:
    if (param_2[0x227] == 0) goto LAB_0178bc30;
    FUN_038501b0(0x41200000,param_2[0x227],0);
    lVar13 = param_2[0x227];
    if (*(char *)(lVar13 + 0x2c0) != '\0') {
      *(undefined1 *)(lVar13 + 0x2c0) = 0;
      FUN_03855b20(lVar13 + 0xc0,0);
    }
    puVar12 = PTR_DAT_04bbe368;
  }
LAB_0178bc00:
  FUN_0384f8c0(lVar13,puVar12,0,0);
  (**(code **)(*param_2 + 0x120))(param_2,puVar12,10,0);
LAB_0178bc30:
  FUN_0178bc94(param_1,param_2);
  return;
}

