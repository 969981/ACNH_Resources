
undefined4 FUN_01a35a40(undefined4 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint *local_40;
  uint local_34;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
LAB_01a35bf4:
    uVar6 = 0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_01a35bf4;
    local_40 = (uint *)0x0;
    local_48 = *param_1;
    uStack_44 = param_1[1];
    local_50 = &PTR_FUN_04a36b50;
    uVar3 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar2 == 0) {
LAB_01a35c0c:
      local_34 = 0xbc;
      goto switchD_01a35be8_caseD_6;
    }
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_01a35c0c;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_1);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8), puVar7 == (uint *)0x0)
       ) goto LAB_01a35c0c;
    local_34 = 0;
    uVar3 = *puVar7;
    local_40 = puVar7;
    if ((uVar3 == 0) || (puVar7 == (uint *)(ulong)uVar3)) goto switchD_01a35be8_caseD_6;
    puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    local_34 = 0;
    if (*puVar8 == 0) goto switchD_01a35be8_caseD_6;
    uVar3 = puVar8[1];
    if ((uVar3 == 0) || ((ulong)(ushort)puVar8[2] == 0)) {
LAB_01a35cbc:
      local_34 = 0;
      goto switchD_01a35be8_caseD_6;
    }
    lVar9 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      lVar9 = 0x1c;
    }
    lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
    if (lVar9 == 0) goto LAB_01a35cbc;
    uVar1 = 0;
    if ((ulong)uVar3 != 0) {
      uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
    }
    if (*puVar8 <= uVar1) {
      uVar1 = 0xffffffff;
    }
    if ((DAT_05326ec0 <= uVar1) ||
       (local_34 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), 0xbc < local_34))
    goto LAB_01a35cbc;
    uVar6 = 1;
    switch(local_34) {
    case 4:
      break;
    case 5:
      uVar6 = 2;
      break;
    case 9:
      uVar6 = 0xd;
      break;
    case 10:
      uVar6 = 0xf;
      break;
    case 0xb:
      uVar6 = 0x13;
      break;
    case 0xd:
      uVar6 = 0xe;
      break;
    case 0xf:
      uVar6 = 0x10;
      break;
    case 0x10:
      uVar6 = 4;
      break;
    case 0x11:
      uVar6 = 0xc;
      break;
    case 0x12:
      uVar6 = 3;
      break;
    case 0x13:
      uVar6 = 0x11;
      break;
    case 0x14:
      uVar6 = 6;
      break;
    case 0x78:
      uVar6 = 5;
      break;
    default:
      if (local_34 == 0x9d) {
        return 0x15;
      }
    case 6:
    case 7:
    case 8:
    case 0xc:
    case 0xe:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
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
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
switchD_01a35be8_caseD_6:
      if (local_34 - 0x45 < 2) {
        uVar6 = 0x14;
      }
      else {
        uVar5 = FUN_0277d7b4(param_1,&DAT_052d8b60);
        if ((uVar5 & 1) == 0) {
          uVar5 = FUN_0277d7b4(param_1,&DAT_052d8b68);
          if ((uVar5 & 1) == 0) {
            uVar5 = FUN_01ae5f4c(&local_50);
            if ((uVar5 & 1) == 0) {
              uVar5 = FUN_01ae87f0(&local_50);
              if ((uVar5 & 1) == 0) {
                local_34 = 0xd;
                iVar4 = FUN_01ae7550(&local_50);
                uVar6 = 0xb;
                if (iVar4 != local_34) {
                  uVar6 = 0x12;
                }
              }
              else {
                uVar6 = 10;
              }
            }
            else {
              uVar6 = 9;
            }
          }
          else {
            uVar6 = 8;
          }
        }
        else {
          uVar6 = 7;
        }
      }
    }
  }
  return uVar6;
}

