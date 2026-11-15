
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021e9730(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  uint *puVar7;
  ushort uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
LAB_021e9b64:
    lVar10 = DAT_05150358;
    if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
        ((*(long *)(DAT_05150358 + 0x488) != 0 &&
         (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
       ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
        (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))) {
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        FUN_0124c030(&local_58,param_2);
        iVar5 = FUN_0123db50(&local_50,local_48);
        if (iVar5 - 0x23U < 9) {
          *param_1 = 0x2355;
          goto LAB_021e9b10;
        }
      }
    }
    uVar3 = DAT_0558600c;
    *(undefined4 *)param_1 = _DAT_05586008;
    *(undefined4 *)((long)param_1 + 4) = uVar3;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_021e9b64;
    local_48 = 0;
    local_50 = *param_2;
    uStack_4c = param_2[1];
    local_58 = &PTR_FUN_04a36b50;
    uVar4 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar2 == 0) {
LAB_021e9ad8:
      uVar8 = 0xbc;
LAB_021e9b48:
      if (uVar8 != 0x56) goto LAB_021e9b64;
      uVar6 = 0x2355;
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((*(uint *)(lVar10 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_021e9ad8;
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((*(uint *)(lVar10 + 0x1d8) <= uVar4) ||
         (puVar7 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar7 == (uint *)0x0)) goto LAB_021e9ad8;
      uVar8 = 0;
      uVar4 = *puVar7;
      if ((uVar4 != 0) && (puVar7 != (uint *)(ulong)uVar4)) {
        puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
        uVar8 = 0;
        if (*puVar9 != 0) {
          uVar4 = puVar9[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar10 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar7 - lVar10) / (ulong)uVar4);
              }
              if (*puVar9 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar8 < 0xbd))
              goto LAB_021e98c4;
            }
          }
          uVar8 = 0;
        }
      }
LAB_021e98c4:
      if (uVar8 != 0x6a) {
        uVar8 = 0;
        uVar4 = *puVar7;
        if ((uVar4 != 0) && (puVar7 != (uint *)(ulong)uVar4)) {
          puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
          uVar8 = 0;
          if (*puVar9 != 0) {
            uVar4 = puVar9[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar10 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar7 - lVar10) / (ulong)uVar4);
                }
                if (*puVar9 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar8 < 0xbd))
                goto LAB_021e996c;
              }
            }
            uVar8 = 0;
          }
        }
LAB_021e996c:
        if (uVar8 == 0x6b) goto LAB_021e9b00;
        uVar8 = 0;
        uVar4 = *puVar7;
        if ((uVar4 != 0) && (puVar7 != (uint *)(ulong)uVar4)) {
          puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
          uVar8 = 0;
          if (*puVar9 != 0) {
            uVar4 = puVar9[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar10 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar7 - lVar10) / (ulong)uVar4);
                }
                if (*puVar9 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar8 < 0xbd))
                goto LAB_021e9a14;
              }
            }
            uVar8 = 0;
          }
        }
LAB_021e9a14:
        if (uVar8 == 0x69) {
          uVar6 = 0xc8d;
          goto LAB_021e9b04;
        }
        uVar8 = 0;
        uVar4 = *puVar7;
        if ((uVar4 != 0) && (puVar7 != (uint *)(ulong)uVar4)) {
          puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
          uVar8 = 0;
          if (*puVar9 != 0) {
            uVar4 = puVar9[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar10 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar7 - lVar10) / (ulong)uVar4);
                }
                if (*puVar9 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar8 < 0xbd))
                goto LAB_021e9b48;
              }
            }
            uVar8 = 0;
          }
        }
        goto LAB_021e9b48;
      }
LAB_021e9b00:
      uVar6 = 0x2354;
    }
LAB_021e9b04:
    *(undefined2 *)param_1 = uVar6;
    *(undefined2 *)((long)param_1 + 2) = 0;
    *(undefined4 *)((long)param_1 + 4) = 0;
LAB_021e9b10:
    FUN_0277d4ac(param_1);
  }
  return;
}

