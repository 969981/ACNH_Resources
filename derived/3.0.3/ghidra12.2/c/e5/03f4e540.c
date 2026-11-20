
void FUN_03f4e540(long *param_1,ulong param_2,byte param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  *(byte *)(param_1[0x401] + (param_2 & 0xffff)) = param_3;
  uVar12 = (uint)param_2 & 0xffff;
  if (0x16 < uVar12 - 0x7f47) {
    return;
  }
  switch(uVar12) {
  case 0x7f47:
    lVar7 = param_1[0x401];
    uVar12 = (uint)*(ushort *)(lVar7 + 0x7f43);
    if (*(ushort *)(lVar7 + 0x7f43) != 0) {
      uVar3 = *(undefined1 *)(lVar7 + 0x7f42);
      uVar2 = *(undefined1 *)(lVar7 + 0x7f47);
      uVar10 = (uint)*(ushort *)(lVar7 + 0x7f45);
      uVar11 = (uint)*(ushort *)(lVar7 + 0x7f40);
      do {
        uVar5 = FUN_03f4bda8(*param_1,uVar3,uVar11);
        FUN_03f4d1a0(*param_1,uVar2,uVar10,uVar5);
        uVar11 = uVar11 + 1;
        uVar10 = uVar10 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x7f48:
    lVar7 = param_1[0x401];
    *(ushort *)((long)param_1 + ((ulong)*(byte *)(lVar7 + 0x7f48) & 1) * 2 + 0x204a) =
         (ushort)*(byte *)(lVar7 + 0x7f4d) | (*(byte *)(lVar7 + 0x7f4e) & 0x7f) << 8;
    break;
  case 0x7f49:
  case 0x7f4a:
  case 0x7f4b:
    lVar7 = param_1[0x401];
    lVar9 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x7f49);
    uVar8 = *(ulong *)(lVar9 + (ulong)*(byte *)(lVar7 + 0x7f4b) * 0x80 +
                       ((ulong)(*(byte *)(lVar7 + 0x7f4a) >> 1) & 0x78) + 0x3761b8);
    if (uVar8 < 100) {
      if (*(char *)(lVar9 + 0x34710) == '\0') {
LAB_03f4e774:
        param_1[0x408] = 0;
        return;
      }
      if (uVar8 == 10) {
        lVar7 = *(long *)(lVar9 + 0x346b0);
        uVar6 = uVar6 & 0x1fff;
      }
      else {
        if (uVar8 == 8) {
          uVar8 = *(ulong *)(lVar9 + 0x36e190);
          uVar6 = (ulong)*(uint *)(lVar9 + 0x36e198) &
                  (uVar6 | ((ulong)*(byte *)(lVar7 + 0x7f4b) & 3) << 0x10);
          goto LAB_03f4e5dc;
        }
        if (uVar8 != 7) goto LAB_03f4e774;
        lVar7 = *(long *)(lVar9 + 0x36e1a0);
        uVar6 = uVar6 & 0x7ff;
      }
      param_1[0x408] = lVar7 + uVar6;
    }
    else {
      uVar6 = uVar6 & 0xfff;
LAB_03f4e5dc:
      param_1[0x408] = uVar8 + uVar6;
    }
    break;
  case 0x7f4f:
    lVar7 = param_1[0x401];
    uVar1 = (ushort)*(byte *)(lVar7 + 0x7f4d) | (*(byte *)(lVar7 + 0x7f4e) & 0x7f) << 8;
    if (uVar1 < 0xb80) {
      uVar3 = *(undefined1 *)(lVar7 + 0x7f4f);
      if (uVar1 == *(ushort *)((long)param_1 + 0x204a)) {
        *(undefined1 *)((long)param_1 + 0x2049) = 0;
      }
      else if (uVar1 == *(ushort *)((long)param_1 + 0x204c)) {
        *(undefined1 *)((long)param_1 + 0x2049) = 1;
      }
      else {
        bVar4 = *(byte *)(lVar7 + 0x7f4c);
        if (*(char *)((long)param_1 + 0x2049) == '\0') {
          if ((bVar4 >> 1 & 1) != 0) {
            if ((bVar4 & 1) != 0) goto LAB_03f4e848;
            goto LAB_03f4e810;
          }
LAB_03f4e804:
          uVar12 = 1;
        }
        else {
          if ((bVar4 & 1) != 0) {
            if ((bVar4 >> 1 & 1) != 0) {
LAB_03f4e848:
              *(undefined2 *)(param_1 + 0x409) = 0xffff;
              goto LAB_03f4e828;
            }
            goto LAB_03f4e804;
          }
LAB_03f4e810:
          uVar12 = 0;
        }
        *(char *)((long)param_1 + 0x2049) = (char)uVar12;
        *(ushort *)((long)param_1 + (ulong)uVar12 * 2 + 0x204a) = uVar1;
      }
      *(undefined1 *)(param_1 + 0x409) = uVar3;
    }
    else {
      *(undefined2 *)(param_1 + 0x409) = 0;
      *(undefined4 *)((long)param_1 + 0x204a) = 0xffffffff;
    }
LAB_03f4e828:
    *(undefined1 *)(param_1 + 0x40f) = 0;
    *(undefined1 *)(param_1 + 0x402) = 2;
    break;
  case 0x7f53:
    if ((param_3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x402) = 0;
    }
    break;
  case 0x7f55:
    if (*(byte *)(param_1[0x401] + 0x7f54) == 0) {
      *(undefined4 *)(param_1 + 0x40e) = 0xffffffff;
    }
    else {
      *(uint *)(param_1 + 0x40e) = (uint)*(byte *)(param_1[0x401] + 0x7f54) << 5 | 8;
    }
    break;
  case 0x7f56:
    *(undefined4 *)(param_1 + 0x40e) = 0x28;
    break;
  case 0x7f57:
    *(undefined4 *)(param_1 + 0x40e) = 0x48;
    break;
  case 0x7f58:
    *(undefined4 *)(param_1 + 0x40e) = 0x68;
    break;
  case 0x7f59:
    *(undefined4 *)(param_1 + 0x40e) = 0x88;
    break;
  case 0x7f5a:
    *(undefined4 *)(param_1 + 0x40e) = 0xa8;
    break;
  case 0x7f5b:
    *(undefined4 *)(param_1 + 0x40e) = 200;
    break;
  case 0x7f5c:
    *(undefined4 *)(param_1 + 0x40e) = 0xe8;
    break;
  case 0x7f5d:
    *(undefined4 *)(param_1 + 0x40e) = 0;
  }
  return;
}

