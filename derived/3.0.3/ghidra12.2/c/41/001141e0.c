
uint FUN_001141e0(ushort *param_1,undefined2 *param_2,short param_3,uint param_4,char param_5)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  
  if (param_5 == '\x03') {
    if (param_3 != 0) {
      uVar9 = 0;
      do {
        uVar1 = *param_1;
        if (uVar1 == 0) break;
        if ((param_4 & 0xffff) < (uVar9 + 1 & 0xffff)) {
          return 0xffff;
        }
        uVar11 = (uint)*(byte *)((long)param_1 + 1);
        uVar7 = (uint)*(byte *)((long)param_1 + 1) | (uVar1 & 0xff) << 8;
        if (uVar7 - 0x30a1 < 0x56) {
          if (uVar7 == 0x30f6) {
            *(undefined1 *)param_2 = 0x30;
            uVar10 = 0x51;
            goto LAB_001144f4;
          }
          if (uVar7 == 0x30f5) {
            *(undefined1 *)param_2 = 0x30;
            uVar10 = 0x4b;
            goto LAB_001144f4;
          }
          if (uVar7 != 0x30f4) {
            uVar11 = uVar7 - 0x60;
            *(char *)param_2 = (char)(uVar11 >> 8);
            goto LAB_001144f0;
          }
          if ((param_4 & 0xffff) < (uVar9 + 2 & 0xffff)) {
            return 0xffff;
          }
          *param_2 = 0x4630;
          uVar10 = 0x9b;
          lVar6 = 2;
          *(undefined1 *)(param_2 + 1) = 0x30;
          puVar8 = param_2 + 1;
          uVar9 = uVar9 + 2;
        }
        else {
          if (uVar7 < 0xff01) {
            if (((1 < uVar7 - 0x3001) && (1 < uVar7 - 0x309b)) && (1 < uVar7 - 0x30fb)) {
              return 0xffff;
            }
          }
          else if (((0x1e < uVar7 - 0xff01) ||
                   ((1 << (ulong)(uVar7 - 0xff01 & 0x1f) & 0x50002821U) == 0)) && (uVar7 != 0xff5e))
          {
            return 0xffff;
          }
          *(char *)param_2 = (char)uVar1;
LAB_001144f0:
          uVar10 = (undefined1)uVar11;
LAB_001144f4:
          lVar6 = 1;
          puVar8 = param_2;
          uVar9 = uVar9 + 1;
        }
        param_3 = param_3 + -1;
        param_2 = param_2 + lVar6;
        *(undefined1 *)((long)puVar8 + 1) = uVar10;
        param_1 = param_1 + 1;
      } while (param_3 != 0);
      goto LAB_00114524;
    }
  }
  else {
    if (param_5 != '\x04') {
      return 0xffff;
    }
    if (param_3 != 0) {
      uVar9 = 0;
      uVar5 = 0;
      do {
        if (*param_1 == 0) break;
        uVar3 = ((ulong)*param_1 & 0xff) << 8 | (ulong)*(byte *)((long)param_1 + 1);
        iVar2 = (int)uVar3;
        if ((iVar2 == 0xff61) || ((iVar2 + 0x9cU & 0xffff) < 0x3c)) {
          uVar1 = *(ushort *)((long)__DT_RELR.r_relr_bits_8 + uVar3 * 2 + 0x158);
          uVar7 = (uint)uVar1;
          iVar4 = (int)uVar5;
          uVar10 = (undefined1)(uVar1 >> 8);
          if (iVar4 == 0) goto LAB_00114370;
          if (iVar2 == 0xff9f) {
            if ((iVar4 + 0x76U & 0xffff) < 5) {
              uVar7 = *(ushort *)((long)__DT_RELR.r_relr_bits_8 + uVar5 * 2 + 0x158) + 2;
              goto LAB_0011431c;
            }
            goto LAB_00114370;
          }
          if ((iVar2 != 0xff9e) ||
             ((0xe < (iVar4 + 0x8aU & 0xffff) && (4 < (iVar4 + 0x76U & 0xffff)))))
          goto LAB_00114370;
          uVar7 = *(ushort *)((long)__DT_RELR.r_relr_bits_8 + uVar5 * 2 + 0x158) + 1;
LAB_0011431c:
          param_2 = param_2 + -1;
          uVar10 = (undefined1)(uVar7 >> 8);
          if ((param_4 & 0xffff) < (uVar9 & 0xffff)) {
            return 0xffff;
          }
        }
        else {
          lVar6 = 1;
          uVar7 = 0xffff;
          switch(iVar2) {
          case 0x21:
            break;
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2d:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x3b:
          case 0x3c:
          case 0x3e:
            goto switchD_001142a0_caseD_22;
          case 0x26:
            lVar6 = 3;
            break;
          case 0x2c:
            lVar6 = 5;
            break;
          case 0x2e:
            lVar6 = 7;
            break;
          case 0x3d:
            lVar6 = 9;
            break;
          case 0x3f:
            lVar6 = 0xb;
            break;
          default:
            if (iVar2 != 0x7e) {
              return 0xffff;
            }
            lVar6 = 0xd;
          }
          uVar7 = (uint)*(ushort *)(&UNK_04057658 + lVar6 * 2);
          uVar10 = (undefined1)(*(ushort *)(&UNK_04057658 + lVar6 * 2) >> 8);
LAB_00114370:
          uVar9 = uVar9 + 1;
          if ((param_4 & 0xffff) < (uVar9 & 0xffff)) {
            return 0xffff;
          }
        }
        param_3 = param_3 + -1;
        *(undefined1 *)param_2 = uVar10;
        *(char *)((long)param_2 + 1) = (char)uVar7;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        uVar5 = uVar3;
      } while (param_3 != 0);
      goto LAB_00114524;
    }
  }
  uVar9 = 0;
LAB_00114524:
  *param_2 = 0;
  uVar7 = uVar9;
switchD_001142a0_caseD_22:
  return uVar7;
}

