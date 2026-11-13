
undefined4 FUN_011e7c30(undefined4 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
LAB_011e7d6c:
    uVar6 = 0xffffffff;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_011e7d6c;
    local_38 = (uint *)0x0;
    local_40 = *param_1;
    uStack_3c = param_1[1];
    local_48 = &PTR_FUN_04a36b50;
    uVar3 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar2 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (uVar3 < *(uint *)(lVar9 + 0x1d8)) {
          puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8);
          if (puVar7 != (uint *)0x0) {
            local_38 = puVar7;
          }
        }
      }
    }
    uVar4 = FUN_01af93e8(&local_48);
    uVar6 = 5;
    switch(uVar4) {
    case 0x17:
      break;
    default:
      if (local_38 == (uint *)0x0) {
        uVar8 = 0xbc;
      }
      else {
        uVar3 = *local_38;
        uVar8 = 0;
        if ((uVar3 != 0) && (local_38 != (uint *)(ulong)uVar3)) {
          puVar7 = (uint *)((long)local_38 - (long)(ulong)uVar3);
          uVar8 = 0;
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
                  uVar1 = (uint)((ulong)((long)local_38 - lVar9) / (ulong)uVar3);
                }
                if (*puVar7 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar8 < 0xbd))
                goto LAB_011e7e50;
              }
            }
            uVar8 = 0;
          }
        }
      }
LAB_011e7e50:
      uVar6 = 0;
      switch(uVar8) {
      case 0x51:
      case 0x57:
        break;
      case 0x60:
        iVar5 = FUN_0277d6c4(param_1);
        uVar6 = 0xb;
        if (iVar5 != 0xc12) {
          uVar6 = 9;
        }
        break;
      case 0x67:
switchD_011e7e7c_caseD_67:
        uVar6 = 4;
        break;
      default:
        if (uVar8 == 0x96) goto switchD_011e7e7c_caseD_67;
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
        uVar6 = 0xb;
      }
      break;
    case 0x34:
      uVar6 = 1;
      break;
    case 0x48:
      uVar6 = 2;
      break;
    case 0x49:
      uVar6 = 3;
      break;
    case 100:
      uVar6 = 7;
      break;
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
      uVar6 = 8;
      break;
    case 0x79:
      uVar6 = 10;
      break;
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
      uVar6 = 0xc;
    }
  }
  return uVar6;
}

