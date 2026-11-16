
bool FUN_02905378(long param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  ushort uVar6;
  uint *puVar7;
  long lVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (puVar5 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar5 != (uint *)0x0)) {
        uVar4 = *puVar5;
        if (uVar4 == 0 || puVar5 == (uint *)(ulong)uVar4) {
LAB_02905448:
          uVar6 = 0;
        }
        else {
          puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
          uVar6 = 0;
          if (*puVar7 != 0) {
            uVar4 = puVar7[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar8 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar4);
                }
                if (*puVar7 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326c78) &&
                   (uVar6 = *(ushort *)(DAT_05326c80 + (long)(int)uVar2 * 2), uVar6 < 7))
                goto LAB_0290544c;
              }
            }
            goto LAB_02905448;
          }
        }
LAB_0290544c:
        if (uVar6 == 0) {
          return false;
        }
        uVar4 = *puVar5;
        if (uVar4 == 0 || puVar5 == (uint *)(ulong)uVar4) {
LAB_02905468:
          uVar4 = 0;
        }
        else {
          puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
          uVar4 = 0;
          if (*puVar7 != 0) {
            uVar4 = puVar7[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar8 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar4);
                }
                if (*puVar7 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326c78) &&
                   (uVar4 = (uint)*(ushort *)(DAT_05326c80 + (long)(int)uVar2 * 2), uVar4 < 7))
                goto LAB_0290546c;
              }
            }
            goto LAB_02905468;
          }
        }
LAB_0290546c:
        lVar8 = *(long *)(param_1 + 8);
        if (uVar4 == *(uint *)(lVar8 + 4)) {
          return true;
        }
        uVar2 = *puVar5;
        uVar4 = 0;
        if ((uVar2 != 0) && (puVar5 != (uint *)(ulong)uVar2)) {
          puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar2);
          if ((*puVar7 != 0) && ((uVar4 = puVar7[1], uVar4 != 0 && ((ulong)(ushort)puVar7[2] != 0)))
             ) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar4 != 0) {
                uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
              }
              if (*puVar7 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326c78) &&
                 (uVar6 = *(ushort *)(DAT_05326c80 + (long)(int)uVar2 * 2), uVar4 = (uint)uVar6,
                 uVar6 < 7)) goto LAB_029054b4;
            }
          }
          uVar4 = 0;
        }
        goto LAB_029054b4;
      }
    }
  }
  uVar4 = 1;
  lVar8 = *(long *)(param_1 + 8);
  if (*(int *)(lVar8 + 4) == 1) {
    return true;
  }
LAB_029054b4:
  return uVar4 == *(uint *)(lVar8 + 8);
}

