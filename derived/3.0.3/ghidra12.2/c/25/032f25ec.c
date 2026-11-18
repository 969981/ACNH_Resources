
undefined8 FUN_032f25ec(undefined8 param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ushort *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auStack_1b4 [256];
  byte local_b4 [4];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_b4[0] = 0;
  if (param_2 != 0) {
    pbVar1 = (byte *)(param_2 + 0x70380);
    if ((uint)*pbVar1 == (param_3 & 0xff)) {
      return 0xffff;
    }
    if (*pbVar1 != 0xff) {
      return 0xffff;
    }
    uVar9 = 0;
    switch(param_3 & 0xff) {
    case 1:
      iVar2 = FUN_032f2968(param_1,param_2,pbVar1,local_b4);
      break;
    default:
      goto switchD_032f2678_caseD_2;
    case 3:
    case 4:
      iVar2 = FUN_032f5070(param_1,param_2,pbVar1,param_3,local_b4);
      break;
    case 6:
    case 7:
      iVar2 = FUN_032f5540(param_1,param_2,pbVar1,param_3,local_b4);
      break;
    case 9:
    case 10:
      iVar2 = FUN_032f3098(param_1,param_2,pbVar1,param_3,local_b4);
      break;
    case 0xd:
    case 0xe:
      iVar2 = FUN_032f3838(param_1,param_2,pbVar1,param_3,local_b4);
      break;
    case 0x10:
    case 0x11:
      iVar2 = FUN_032f3d64(param_1,param_2,pbVar1,param_3,local_b4);
      break;
    case 0x13:
      iVar2 = FUN_032f4c38(param_1,param_2,pbVar1,local_b4);
      break;
    case 0x16:
    case 0x17:
      iVar2 = FUN_032f5a28(param_1,param_2,pbVar1,param_3,local_b4);
      break;
    case 0x19:
    case 0x1a:
      iVar2 = FUN_032f6430(param_1,param_2,pbVar1,param_3,local_b4);
      break;
    case 0x1c:
    case 0x1d:
      iVar2 = FUN_032f691c(param_1,param_2,pbVar1,param_3,local_b4);
      break;
    case 0x1f:
    case 0x20:
      iVar2 = FUN_032f6df8(param_1,param_2,pbVar1,param_3,local_b4);
      break;
    case 0x22:
    case 0x23:
      iVar2 = FUN_032f72d8(param_1,param_2,pbVar1,param_3,local_b4);
      break;
    case 0x25:
    case 0x26:
      iVar2 = FUN_032f77c8(param_1,param_2,pbVar1,param_3,local_b4);
      break;
    case 0x28:
    case 0x29:
      iVar2 = FUN_032f7ca4(param_1,param_2,pbVar1,param_3,local_b4);
      break;
    case 0x2b:
    case 0x2c:
      iVar2 = FUN_032f8190(param_1,param_2,pbVar1,param_3,local_b4);
      break;
    case 0x2f:
    case 0x30:
      iVar2 = FUN_032f5f24(param_1,param_2,pbVar1,param_3,local_b4);
      break;
    case 0x31:
      iVar2 = FUN_032f4398(param_1,param_2,pbVar1,local_b4);
      break;
    case 0x32:
      iVar2 = FUN_032f482c(param_2,pbVar1,local_b4);
      break;
    case 0xfe:
      iVar2 = FUN_032f8560(param_2,pbVar1,local_b4);
    }
    if (-1 < iVar2) {
      uVar9 = (ulong)local_b4[0];
switchD_032f2678_caseD_2:
      FUN_032f9b60(auStack_1b4,"customize");
      lVar8 = *(long *)PTR_DAT_04bc1118;
      if (*(char *)(*(long *)(lVar8 + 0x20) + 0x16408) == '\0') {
        plVar10 = (long *)(param_2 + 0x70f68 + uVar9 * 0x50);
        if (*plVar10 == 0) {
          uVar3 = FUN_032f9224(lVar8);
          if (*(char *)(lVar8 + 0xa88) == '\0') {
            if (uVar3 < 0xe) {
              local_90 = *(undefined8 *)(lVar8 + 0xb80);
              uStack_88 = *(undefined8 *)(lVar8 + 0xb88);
              local_a0 = *(undefined8 *)(lVar8 + 0xb70);
              uStack_98 = *(undefined8 *)(lVar8 + 0xb78);
              local_70 = *(undefined8 *)(lVar8 + 0xba0);
              uStack_68 = *(undefined8 *)(lVar8 + 0xba8);
              local_80 = *(undefined8 *)(lVar8 + 0xb90);
              uStack_78 = *(undefined8 *)(lVar8 + 0xb98);
              local_50 = *(undefined8 *)(lVar8 + 0xbc0);
              uStack_48 = *(undefined8 *)(lVar8 + 0xbc8);
              local_60 = *(undefined8 *)(lVar8 + 0xbb0);
              uStack_58 = *(undefined8 *)(lVar8 + 3000);
              local_b0 = *(undefined8 *)(lVar8 + 0xb60);
              uStack_a8 = *(undefined8 *)(lVar8 + 0xb68);
              uVar5 = *(uint *)(local_b4 + (ulong)uVar3 * 4 + 4);
              uVar3 = *(uint *)((long)&uStack_78 + (ulong)uVar3 * 4);
              lVar4 = *(long *)(lVar8 + 0xa78);
LAB_032f2910:
              if ((lVar4 != 0) && (uVar3 != 0)) {
                *(short *)(param_2 + 0x78ebc) = (short)uVar9;
                *plVar10 = lVar4 + (ulong)uVar5;
                lVar8 = param_2 + 0x70f68 + uVar9 * 0x50;
                *(undefined8 *)(lVar8 + 0x28) = 0;
                *(undefined8 *)(lVar8 + 0x30) = 0x195019501950195;
                *(undefined2 *)(lVar8 + 0x48) = 0;
                *(undefined8 *)(lVar8 + 0x40) = 0;
                *(undefined8 *)(lVar8 + 8) = 0;
                *(undefined8 *)(lVar8 + 0x10) = 0;
                *(undefined4 *)(lVar8 + 0x38) = 0xfffb0005;
                *(undefined8 *)(lVar8 + 0x18) = 0;
                *(undefined8 *)(lVar8 + 0x20) = 0;
              }
            }
          }
          else {
            uVar6 = (ulong)*(ushort *)(lVar8 + 0xb5c);
            if (uVar6 != 0) {
              lVar4 = *(long *)(lVar8 + 0xa90);
              puVar7 = (ushort *)(lVar8 + 0xaa2);
              do {
                if ((uint)*puVar7 == (uVar3 & 0xffff)) {
                  uVar5 = *(uint *)(puVar7 + -3);
                  uVar3 = (uint)puVar7[-1];
                  goto LAB_032f2910;
                }
                puVar7 = puVar7 + 4;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
          }
        }
      }
      return 0;
    }
  }
  return 0xffff;
}

