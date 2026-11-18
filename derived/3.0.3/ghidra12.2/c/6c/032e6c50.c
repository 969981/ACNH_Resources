
void FUN_032e6c50(long param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  long lVar18;
  undefined2 local_70 [2];
  short local_6c [2];
  uint local_68 [2];
  
  bVar5 = false;
  *(undefined1 *)(param_1 + 0x16ec) = 0;
  puVar6 = PTR_DAT_04bc90c0;
  lVar18 = 0;
  do {
    lVar15 = DAT_05355a60;
    if (*(char *)(param_1 + 0x16d8) == '\0') {
      return;
    }
    if (*(long *)(*(long *)puVar6 + 0x18) != *(long *)(*(long *)puVar6 + 0x10)) {
      return;
    }
    if (((DAT_05355a60 != 0) &&
        (lVar13 = *(long *)(*(long *)(DAT_05355a60 + 0x20) + 0x6e0), lVar13 != 0)) &&
       (puVar8 = *(undefined8 **)(lVar13 + 8), puVar8 != (undefined8 *)0x0)) {
      if (*(char *)(puVar8 + 0x2be) != '\0') {
        return;
      }
      uVar9 = (**(code **)*puVar8)();
      if ((uVar9 & 1) != 0) {
        return;
      }
    }
    lVar13 = DAT_05734ea0;
    if (*(char *)(param_1 + 0x16ec) != '\0') {
      return;
    }
    lVar14 = *(long *)(lVar15 + 0x20);
    lVar16 = param_1 + lVar18;
    iVar2 = *(int *)(lVar16 + 0x6e0);
    local_68[0] = *(uint *)(lVar16 + 0x6d8);
    if (*(char *)(lVar14 + 0x106c) < '\0') {
      local_68[0] = local_68[0] | 0x100;
    }
    uVar7 = local_68[0];
    uVar3 = *(uint *)(lVar16 + 0x6d4);
    if ((uVar3 & 1) == 0) {
      if ((uVar3 >> 1 & 1) == 0) {
        if ((uVar3 >> 8 & 1) != 0) {
          uVar11 = 0;
          uVar12 = 1;
LAB_032e6de8:
          local_68[1] = 0;
          lVar15 = *(long *)PTR_DAT_04bc9358;
          **(undefined8 **)(lVar15 + 8) = 0;
          *(undefined1 *)(*(long *)(lVar15 + 8) + 8) = 1;
          FUN_032e763c(param_1,iVar2,local_68,uVar11,param_2 & 1,uVar12);
        }
      }
      else {
        lVar15 = *(long *)(lVar14 + 0x6e0);
        if (lVar15 == 0) {
          return;
        }
        plVar10 = *(long **)(lVar15 + 8);
        if (plVar10 == (long *)0x0) {
          return;
        }
        iVar4 = *(int *)(param_1 + 0x16e8);
        if (((iVar2 == 0xe1) && (iVar4 == 0xe1)) || ((iVar2 == 0xe5 && (iVar4 == 0xe5)))) {
          local_68[1] = 0;
          **(undefined8 **)(DAT_05734ea0 + 8) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 8) + 8) = 1;
          (**(code **)(*plVar10 + 0x98))();
        }
        else if ((iVar2 == 0xe6) && (iVar4 == 0xe6)) {
          local_68[1] = 0;
          **(undefined8 **)(DAT_05734ea0 + 8) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 8) + 8) = 1;
          (**(code **)(*plVar10 + 0xa0))();
        }
      }
    }
    else {
      FUN_032e74e0(local_6c,iVar2,local_68,*(undefined4 *)(param_1 + 0x16d4));
      uVar11 = *(undefined8 *)(lVar16 + 0x6dc);
      *(undefined8 *)(param_1 + 0x16dc) = *(undefined8 *)(lVar16 + 0x6d4);
      *(undefined8 *)(param_1 + 0x16e4) = uVar11;
      lVar13 = DAT_05734ea0;
      if ((iVar2 == 0x5d) && ((uVar7 >> 10 & 1) == 0)) {
        return;
      }
      lVar15 = *(long *)(lVar15 + 0x20);
      lVar16 = *(long *)(lVar15 + 0x6e0);
      if (local_6c[0] != 0) {
        if (lVar16 == 0) {
          plVar10 = (long *)0x0;
        }
        else {
          plVar10 = *(long **)(lVar16 + 8);
        }
        if (iVar2 == 0x2c) {
          if ((uVar7 & 0xc) == 0) {
            local_68[1] = 0;
            lVar15 = *(long *)PTR_DAT_04bc9358;
            **(undefined8 **)(lVar15 + 8) = 0;
            *(undefined1 *)(*(long *)(lVar15 + 8) + 8) = 1;
            (**(code **)(*plVar10 + 0x48))(plVar10,uVar7 >> 1 & 1,1);
          }
          else {
            lVar15 = *(long *)PTR_DAT_04bc9358;
            **(undefined8 **)(lVar15 + 8) = 0;
            *(undefined1 *)(*(long *)(lVar15 + 8) + 8) = 1;
            lVar15 = *plVar10;
LAB_032e7018:
            local_68[1] = 0;
            (**(code **)(lVar15 + 0x80))(plVar10);
          }
        }
        else {
          FUN_032e74e0(local_70,iVar2,local_68,*(undefined4 *)(param_1 + 0x16d4));
          lVar15 = DAT_05734ea0;
          local_68[1] = 0;
          **(undefined8 **)(DAT_05734ea0 + 8) = 0;
          *(undefined1 *)(*(long *)(lVar15 + 8) + 8) = 1;
          (**(code **)(*plVar10 + 0x28))(plVar10,local_70[0],iVar2 - 0x54U < 0x10);
        }
        goto LAB_032e6d20;
      }
      if (lVar16 == 0) {
        plVar10 = (long *)0x0;
        if (iVar2 < 0x8a) goto LAB_032e6f30;
LAB_032e7030:
        if (iVar2 - 0xe1U < 6) {
          pbVar1 = (byte *)(lVar15 + 0x16410);
          switch(iVar2) {
          default:
            if ((uVar7 >> 2 & 1) == 0) {
              if ((uVar7 & 8) == 0 || bVar5) goto LAB_032e6d20;
LAB_032e7400:
              *pbVar1 = *pbVar1 ^ 1;
              if (*(int *)(lVar15 + 0x16414) == 0xc) {
LAB_032e7484:
                uVar17 = 0xd;
              }
              else {
                if (*(int *)(lVar15 + 0x16414) == 0xd) goto LAB_032e71e8;
LAB_032e7420:
                uVar17 = *(undefined4 *)(lVar15 + 0x16418);
              }
              goto LAB_032e7488;
            }
            if (!bVar5) goto LAB_032e7400;
            break;
          case 0xe2:
          case 0xe6:
            if ((uVar7 & 2) == 0 || bVar5) goto LAB_032e6d20;
            *pbVar1 = *pbVar1 ^ 1;
            if (*(int *)(lVar15 + 0x16414) == 0xc) goto LAB_032e7484;
            if (*(int *)(lVar15 + 0x16414) != 0xd) goto LAB_032e7420;
LAB_032e71e8:
            uVar17 = 0xc;
LAB_032e7488:
            *(undefined4 *)(lVar15 + 0x16414) = uVar17;
            if (*(long *)(lVar15 + 0x17f8) != 0) {
              FUN_032e6374();
            }
            break;
          case 0xe3:
          case 0xe4:
            goto switchD_032e6f50_caseD_2c;
          }
          bVar5 = true;
          goto LAB_032e6d20;
        }
        if (iVar2 == 0x8a) {
          local_68[1] = 0;
          **(undefined8 **)(DAT_05734ea0 + 8) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 8) + 8) = 1;
          (**(code **)(*plVar10 + 0xb8))();
          goto LAB_032e6d20;
        }
        if (iVar2 == 0x94) {
          **(undefined8 **)(DAT_05734ea0 + 8) = 0;
          *(undefined1 *)(*(long *)(lVar13 + 8) + 8) = 1;
          lVar15 = *plVar10;
          goto LAB_032e7018;
        }
switchD_032e6f50_caseD_2c:
        uVar11 = 1;
        uVar12 = 0;
        goto LAB_032e6de8;
      }
      plVar10 = *(long **)(lVar16 + 8);
      if (0x89 < iVar2) goto LAB_032e7030;
LAB_032e6f30:
      switch(iVar2) {
      case 0x29:
        local_68[1] = 0;
        **(undefined8 **)(DAT_05734ea0 + 8) = 0;
        *(undefined1 *)(*(long *)(lVar13 + 8) + 8) = 1;
        (**(code **)(*plVar10 + 0xa8))();
        break;
      case 0x2a:
        local_68[1] = 0;
        **(undefined8 **)(DAT_05734ea0 + 8) = 0;
        *(undefined1 *)(*(long *)(lVar13 + 8) + 8) = 1;
        if ((uVar7 & 0xc) == 0) {
          (**(code **)(*plVar10 + 0x30))(plVar10,1);
        }
        else {
          (**(code **)(*plVar10 + 0x38))();
        }
        break;
      case 0x2b:
        local_68[1] = 0;
        **(undefined8 **)(DAT_05734ea0 + 8) = 0;
        *(undefined1 *)(*(long *)(lVar13 + 8) + 8) = 1;
        if ((uVar7 >> 1 & 1) == 0) {
          (**(code **)(*plVar10 + 0xb0))(plVar10,0);
        }
        else {
          (**(code **)(*plVar10 + 0xb0))(plVar10,1);
        }
        break;
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
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
        goto switchD_032e6f50_caseD_2c;
      case 0x35:
        local_68[1] = 0;
        **(undefined8 **)(DAT_05734ea0 + 8) = 0;
        *(undefined1 *)(*(long *)(lVar13 + 8) + 8) = 1;
        (**(code **)(*plVar10 + 0x88))();
        break;
      case 0x4c:
        local_68[1] = 0;
        **(undefined8 **)(DAT_05734ea0 + 8) = 0;
        *(undefined1 *)(*(long *)(lVar13 + 8) + 8) = 1;
        (**(code **)(*plVar10 + 0x40))();
        break;
      default:
        if (iVar2 != 0x88) goto switchD_032e6f50_caseD_2c;
        local_68[1] = 0;
        **(undefined8 **)(DAT_05734ea0 + 8) = 0;
        *(undefined1 *)(*(long *)(lVar13 + 8) + 8) = 1;
        (**(code **)(*plVar10 + 0x90))();
      }
    }
LAB_032e6d20:
    lVar18 = lVar18 + 0x10;
    if (lVar18 == 0x1000) {
      return;
    }
  } while( true );
}

