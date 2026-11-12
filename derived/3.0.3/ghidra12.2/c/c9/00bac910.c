
bool FUN_00bac910(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  ushort uVar6;
  uint *puVar7;
  long lVar8;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_2);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
         (puVar5 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8),
         puVar5 != (uint *)0x0)) {
        uVar2 = *puVar5;
        if (uVar2 == 0 || puVar5 == (uint *)(ulong)uVar2) {
LAB_00bac9e0:
          uVar2 = 0;
        }
        else {
          puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar2);
          uVar2 = 0;
          if (*puVar7 != 0) {
            uVar2 = puVar7[1];
            if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar8 != 0) {
                uVar4 = 0;
                if ((ulong)uVar2 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar2);
                }
                if (*puVar7 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < DAT_05326d48) &&
                   (uVar2 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar4 * 2), uVar2 < 0x52))
                goto LAB_00bac9e4;
              }
            }
            goto LAB_00bac9e0;
          }
        }
LAB_00bac9e4:
        if (uVar2 - 1 < 9) {
          return true;
        }
        uVar2 = *puVar5;
        if (uVar2 == 0 || puVar5 == (uint *)(ulong)uVar2) {
LAB_00baca08:
          uVar6 = 0;
        }
        else {
          puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar2);
          uVar6 = 0;
          if (*puVar7 != 0) {
            uVar2 = puVar7[1];
            if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar8 != 0) {
                uVar4 = 0;
                if ((ulong)uVar2 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar2);
                }
                if (*puVar7 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < DAT_05326d48) &&
                   (uVar6 = *(ushort *)(DAT_05326d50 + (long)(int)uVar4 * 2), uVar6 < 0x52))
                goto LAB_00baca0c;
              }
            }
            goto LAB_00baca08;
          }
        }
LAB_00baca0c:
        if ((uVar6 & 0xfffe) == 10) {
          return true;
        }
        uVar2 = *puVar5;
        uVar4 = 0;
        local_38 = puVar5;
        if ((uVar2 == 0) || (puVar5 == (uint *)(ulong)uVar2)) goto LAB_00bacad8;
        puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar2);
        uVar4 = 0;
        if (*puVar7 == 0) goto LAB_00bacad8;
        uVar2 = puVar7[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar4 = 0;
            if ((ulong)uVar2 != 0) {
              uVar4 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar2);
            }
            if (*puVar7 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < DAT_05326d48) &&
               (uVar4 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar4 * 2), uVar4 < 0x52))
            goto LAB_00bacad8;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_00bacad8:
  if ((uVar4 < 0x11) && ((1 << (ulong)(uVar4 & 0x1f) & 0x17000U) != 0)) {
    return true;
  }
  iVar3 = FUN_01ae7550(&local_48);
  return iVar3 - 1U < 6;
}

