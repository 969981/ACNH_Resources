
/* WARNING: Removing unreachable block (ram,0x00b95c24) */

undefined8 FUN_00b9588c(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ushort uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint *local_40;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_40 = (uint *)0x0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar2 == 0) {
LAB_00b95954:
    puVar8 = (uint *)0x0;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_00b95954;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_2);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (*(uint *)(lVar9 + 0x1d8) <= uVar3) goto LAB_00b95954;
    puVar8 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8);
    if (puVar8 != (uint *)0x0) {
      local_40 = puVar8;
    }
  }
  uVar4 = FUN_01ad7aa4(&local_50,0);
  if ((uVar4 & 1) == 0) {
    uVar6 = 0;
    if (((puVar8 != (uint *)0x0) && (uVar3 = *puVar8, uVar3 != 0)) &&
       (puVar8 != (uint *)(ulong)uVar3)) {
      puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05327190) &&
               (uVar6 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar6 < 0x13e))
            goto LAB_00b95a00;
          }
        }
        uVar6 = 0;
      }
    }
LAB_00b95a00:
    if (uVar6 == 0x4f) goto LAB_00b95ac8;
    if (*(char *)(param_1 + 8) != '\0') {
      uVar6 = 0;
      if (((puVar8 != (uint *)0x0) && (uVar3 = *puVar8, uVar3 != 0)) &&
         (puVar8 != (uint *)(ulong)uVar3)) {
        puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar3 = puVar7[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05327190) &&
                 (uVar6 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar6 < 0x13e))
              goto LAB_00b95ab4;
            }
          }
          uVar6 = 0;
        }
      }
LAB_00b95ab4:
      if (uVar6 == 0x50) goto LAB_00b95ac8;
    }
LAB_00b95c44:
    uVar5 = 1;
  }
  else {
LAB_00b95ac8:
    if (puVar8 != (uint *)0x0) {
      uVar3 = *puVar8;
      uVar6 = 0;
      if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
        puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar3 = puVar7[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
              goto LAB_00b95b60;
            }
          }
          uVar6 = 0;
        }
      }
LAB_00b95b60:
      if (uVar6 == 0x12) {
        uVar6 = 0;
        uVar3 = *puVar8;
        if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
          puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
          uVar6 = 0;
          if (*puVar7 != 0) {
            uVar3 = puVar7[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar3);
                }
                if (*puVar7 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05327218) &&
                   (uVar6 = *(ushort *)(DAT_05327220 + (long)(int)uVar1 * 2), uVar6 < 0x1c))
                goto LAB_00b95c30;
              }
            }
            uVar6 = 0;
          }
        }
LAB_00b95c30:
        if (uVar6 == 1) goto LAB_00b95c44;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}

