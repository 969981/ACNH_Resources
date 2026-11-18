
uint FUN_0342dce0(undefined4 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  ushort uVar6;
  uint *puVar7;
  long lVar8;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_1;
  uStack_3c = param_1[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 == 0) {
LAB_0342e108:
    uVar6 = 0xbc;
LAB_0342e190:
    if ((((uVar6 != 0x32) && (uVar4 = FUN_01ad6a30(&local_48,0x2f), (uVar4 & 1) == 0)) &&
        (uVar4 = FUN_01ad6a30(&local_48,0x31), (uVar4 & 1) == 0)) &&
       (((uVar4 = FUN_01ad6a30(&local_48,0x30), (uVar4 & 1) == 0 &&
         (uVar4 = FUN_01ad6a30(&local_48,0x33), (uVar4 & 1) == 0)) &&
        (uVar4 = FUN_01ad6a30(&local_48,0x34), (uVar4 & 1) == 0)))) {
      uVar3 = FUN_01ad6a30(&local_48,0x87);
      goto LAB_0342e1f8;
    }
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0342e108;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_1);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
       (puVar5 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), puVar5 == (uint *)0x0)
       ) goto LAB_0342e108;
    uVar3 = *puVar5;
    if (uVar3 == 0 || puVar5 == (uint *)(ulong)uVar3) {
LAB_0342ddb8:
      uVar6 = 0;
    }
    else {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0342ddbc;
          }
        }
        goto LAB_0342ddb8;
      }
    }
LAB_0342ddbc:
    if (uVar6 != 0x26) {
      uVar6 = 0;
      uVar3 = *puVar5;
      if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
        puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar3 = puVar7[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
              goto LAB_0342de64;
            }
          }
          uVar6 = 0;
        }
      }
LAB_0342de64:
      if (uVar6 == 0x27) goto LAB_0342e1f4;
      uVar6 = 0;
      uVar3 = *puVar5;
      if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
        puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar3 = puVar7[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
              goto LAB_0342df0c;
            }
          }
          uVar6 = 0;
        }
      }
LAB_0342df0c:
      if (uVar6 == 0x28) goto LAB_0342e1f4;
      uVar6 = 0;
      uVar3 = *puVar5;
      if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
        puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar3 = puVar7[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
              goto LAB_0342dfb4;
            }
          }
          uVar6 = 0;
        }
      }
LAB_0342dfb4:
      if (uVar6 == 0x2b) goto LAB_0342e1f4;
      uVar6 = 0;
      uVar3 = *puVar5;
      if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
        puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar3 = puVar7[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
              goto LAB_0342e05c;
            }
          }
          uVar6 = 0;
        }
      }
LAB_0342e05c:
      if (uVar6 == 0x2d) goto LAB_0342e1f4;
      uVar6 = 0;
      uVar3 = *puVar5;
      local_38 = puVar5;
      if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
        puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar3 = puVar7[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
              goto LAB_0342e190;
            }
          }
          uVar6 = 0;
        }
      }
      goto LAB_0342e190;
    }
  }
LAB_0342e1f4:
  uVar3 = 1;
LAB_0342e1f8:
  return uVar3 & 1;
}

