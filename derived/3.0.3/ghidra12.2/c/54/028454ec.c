
byte FUN_028454ec(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  ushort uVar6;
  bool bVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  lVar9 = *(long *)puVar2;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_48 = 0;
      local_50 = *param_2;
      uStack_4c = param_2[1];
      uVar4 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar2 == 0) {
LAB_02845688:
        puVar5 = (uint *)0x0;
        uVar6 = 0xbc;
        bVar7 = true;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02845688;
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_2);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
           (puVar5 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
           puVar5 == (uint *)0x0)) goto LAB_02845688;
        uVar4 = *puVar5;
        uVar6 = 0;
        if ((uVar4 == 0) || (puVar5 == (uint *)(ulong)uVar4)) {
LAB_02845808:
          bVar7 = false;
        }
        else {
          puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
          uVar6 = 0;
          if (*puVar8 == 0) goto LAB_02845808;
          uVar4 = puVar8[1];
          if ((uVar4 == 0) || ((ulong)(ushort)puVar8[2] == 0)) {
LAB_02845804:
            uVar6 = 0;
            goto LAB_02845808;
          }
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 == 0) goto LAB_02845804;
          uVar1 = 0;
          if ((ulong)uVar4 != 0) {
            uVar1 = (uint)((ulong)((long)puVar5 - lVar9) / (ulong)uVar4);
          }
          if (*puVar8 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if (DAT_05326ec0 <= uVar1) goto LAB_02845804;
          uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2);
          if (uVar6 < 0xbd) goto LAB_02845808;
          bVar7 = false;
          uVar6 = 0;
        }
      }
      if ((uVar6 == 0x69) || (uVar6 == 0x6a)) {
        uVar4 = 0;
        if ((!bVar7) && ((uVar1 = *puVar5, uVar1 != 0 && (puVar5 != (uint *)(ulong)uVar1)))) {
          puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar1);
          uVar4 = 0;
          if (*puVar8 != 0) {
            uVar4 = puVar8[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar5 - lVar9) / (ulong)uVar4);
                }
                if (*puVar8 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05327218) &&
                   (uVar4 = (uint)*(ushort *)(DAT_05327220 + (long)(int)uVar1 * 2), uVar4 < 0x1c))
                goto LAB_0284573c;
              }
            }
            uVar4 = 0;
          }
        }
LAB_0284573c:
        switch(*(undefined1 *)(param_1 + 0x2e)) {
        case 0:
          bVar3 = uVar4 == 0xe;
          break;
        case 1:
          bVar3 = uVar4 == 0xf;
          break;
        case 2:
          bVar3 = uVar4 == 0x10;
          break;
        case 3:
          bVar3 = uVar4 == 0x12;
          break;
        case 4:
          bVar3 = uVar4 == 0x13;
          break;
        case 5:
          bVar3 = uVar4 == 0x16;
          break;
        case 6:
          bVar3 = uVar4 == 0x17;
          break;
        case 7:
          bVar3 = (uVar4 & 0xfffffffd) == 0x18;
          break;
        case 8:
          bVar3 = uVar4 - 0x19 < 2;
          break;
        case 9:
        case 10:
          bVar3 = FUN_0277d7b4(param_2,param_1 + 0x34);
          break;
        default:
          goto switchD_0284575c_default;
        }
        goto LAB_02845774;
      }
    }
  }
switchD_0284575c_default:
  bVar3 = 0;
LAB_02845774:
  return bVar3 & 1;
}

