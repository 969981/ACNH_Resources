
undefined8 FUN_029d4670(uint *param_1,long *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  long *plVar22;
  long lVar23;
  void *pvVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  int *piVar33;
  ulong uVar34;
  ulong uVar35;
  undefined4 *puVar36;
  int *piVar37;
  int iVar38;
  uint uVar39;
  undefined8 uVar40;
  ulong uVar41;
  uint uVar42;
  undefined8 uVar43;
  uint uVar44;
  uint uVar45;
  long lVar46;
  uint uVar47;
  uint uVar48;
  int *piVar49;
  uint uVar50;
  uint uVar51;
  undefined4 *puVar52;
  int *piVar53;
  
  nn::os::GetSystemTick();
  lVar46 = *(long *)PTR_DAT_04bb2698;
  if (lVar46 == 0) {
    pvVar24 = malloc(0x780);
joined_r0x029d470c:
    if (pvVar24 != (void *)0x0) {
      lVar46 = 0;
      do {
        puVar25 = (undefined8 *)((long)pvVar24 + lVar46);
        lVar46 = lVar46 + 0x10;
        *puVar25 = 0xffffffffffffffff;
        puVar25[1] = 0;
      } while (lVar46 != 0x780);
      *(void **)(param_1 + 2) = pvVar24;
      *param_1 = 0x78;
    }
  }
  else {
    plVar22 = (long *)*param_2;
    if (plVar22 != (long *)0x0) {
LAB_029d46e8:
      pvVar24 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,0x780,8);
      goto joined_r0x029d470c;
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar22 = (long *)(lVar46 + 8);
    if (lVar23 != 0) {
      plVar22 = (long *)(lVar23 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
    if (plVar22 != (long *)0x0) goto LAB_029d46e8;
  }
  lVar46 = *(long *)PTR_DAT_04bb2698;
  if (lVar46 == 0) {
    pvVar24 = malloc(0x250);
joined_r0x029d47a8:
    if (pvVar24 != (void *)0x0) {
      lVar46 = 0;
      do {
        puVar25 = (undefined8 *)((long)pvVar24 + lVar46);
        lVar46 = lVar46 + 0x10;
        *puVar25 = 0xffffffffffffffff;
        puVar25[1] = 0;
      } while (lVar46 != 0x250);
      *(void **)(param_1 + 6) = pvVar24;
      param_1[4] = 0x25;
    }
  }
  else {
    plVar22 = (long *)*param_2;
    if (plVar22 != (long *)0x0) {
LAB_029d4784:
      pvVar24 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,0x250,8);
      goto joined_r0x029d47a8;
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar22 = (long *)(lVar46 + 8);
    if (lVar23 != 0) {
      plVar22 = (long *)(lVar23 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
    if (plVar22 != (long *)0x0) goto LAB_029d4784;
  }
  uVar31 = 0;
  do {
    if (uVar31 == 0x5b) goto LAB_029d4800;
    iVar38 = uVar31 - 1;
    uVar45 = 4;
    uVar27 = 3;
    uVar30 = 2;
    uVar44 = 0x17;
    uVar48 = 0xd;
    uVar9 = 0;
    switch(iVar38) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
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
    case 0x32:
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
    case 0x3f:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x49:
    case 0x4a:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
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
    case 0x6a:
      uVar29 = 0;
      uVar51 = 0x10;
      uVar50 = 0xe;
      uVar47 = 0xc;
      uVar20 = 0x15;
      uVar48 = 0xd;
      uVar39 = 0xd;
      uVar27 = 4;
      uVar26 = 4;
      uVar42 = 0x16;
      uVar28 = 5;
      uVar44 = 0x17;
      uVar5 = 0x17;
      uVar6 = 0;
      uVar7 = 0xffffffff;
      uVar8 = 1;
      uVar9 = 0;
      uVar10 = 0xb;
      uVar11 = 7;
      uVar12 = 8;
      uVar13 = 0x14;
      uVar14 = 0x12;
      uVar15 = 0xf;
      uVar16 = 0x11;
      uVar17 = 9;
      uVar18 = 2;
      switch(iVar38) {
      case 0:
      case 6:
      case 0xd:
      case 0xe:
      case 0x28:
      case 0x37:
      case 0x39:
      case 0x3a:
      case 0x46:
      case 0x49:
      case 99:
      case 0x69:
        uVar30 = 3;
        uVar29 = 3;
        uVar20 = 3;
        uVar48 = 3;
        uVar39 = 3;
        uVar47 = 3;
        uVar45 = 3;
        uVar50 = 3;
        uVar42 = 3;
        uVar51 = 3;
        uVar44 = 3;
        uVar5 = 3;
        uVar6 = 3;
        uVar7 = 3;
        uVar8 = 3;
        uVar9 = 3;
        uVar10 = 3;
        uVar11 = 3;
        uVar12 = 3;
        uVar13 = 3;
        uVar14 = 3;
        uVar15 = 3;
        uVar16 = 3;
        uVar17 = 3;
        uVar18 = 3;
        switch(iVar38) {
        case 0:
        case 0x16:
        case 0x19:
        case 0x27:
        case 0x2a:
        case 0x4f:
        case 0x5e:
          break;
        case 1:
        case 0x4e:
          goto switchD_029d48c4_caseD_1;
        case 2:
          uVar47 = uVar31;
          uVar45 = 4;
          goto switchD_029d48c4_caseD_2;
        case 3:
        case 7:
        case 0xc:
        case 0x1c:
        case 0x23:
        case 0x36:
        case 0x38:
        case 0x4d:
          goto switchD_029d48c4_caseD_3;
        case 4:
        case 0x20:
        case 0x40:
          goto switchD_029d484c_caseD_20;
        case 5:
        case 0x47:
        case 0x5c:
          goto switchD_029d48c4_caseD_5;
        case 6:
        case 0xd:
        case 0xe:
        case 0x26:
        case 0x39:
        case 0x49:
        case 0x55:
        case 99:
          goto switchD_029d484c_caseD_55;
        case 8:
        case 9:
        case 0x1e:
        case 0x21:
        case 0x30:
        case 0x32:
        case 0x35:
          goto switchD_029d48c4_caseD_8;
        case 10:
        case 0x24:
        case 0x56:
        case 0x57:
        case 0x61:
          goto switchD_029d48c4_caseD_a;
        case 0xb:
        case 0x3b:
        case 0x67:
          goto switchD_029d48c4_caseD_b;
        case 0xf:
          goto switchD_029d48c4_caseD_f;
        case 0x10:
        case 0x2e:
          goto switchD_029d48c4_caseD_10;
        case 0x11:
          goto switchD_029d48c4_caseD_11;
        case 0x12:
        case 0x42:
          goto switchD_029d48c4_caseD_12;
        case 0x13:
          goto switchD_029d48c4_caseD_13;
        case 0x14:
          goto switchD_029d48c4_caseD_14;
        case 0x15:
        case 0x17:
          goto switchD_029d48c4_caseD_15;
        case 0x18:
          goto switchD_029d48c4_caseD_18;
        case 0x1a:
          goto switchD_029d48c4_caseD_1a;
        case 0x1b:
        case 0x4c:
          goto switchD_029d48c4_caseD_1b;
        case 0x1d:
          goto switchD_029d48c4_caseD_1d;
        case 0x1f:
        case 0x34:
          goto switchD_029d48c4_caseD_1f;
        case 0x22:
          goto switchD_029d48c4_caseD_22;
        case 0x25:
        case 0x2f:
        case 0x62:
          goto switchD_029d48c4_caseD_25;
        case 0x28:
        case 0x37:
        case 0x3a:
          uVar28 = 4;
          break;
        case 0x29:
          goto switchD_029d48c4_caseD_29;
        case 0x2b:
          goto switchD_029d48c4_caseD_2b;
        case 0x2c:
          goto switchD_029d48c4_caseD_2c;
        case 0x2d:
          goto switchD_029d48c4_caseD_2d;
        case 0x31:
          goto switchD_029d484c_caseD_31;
        case 0x33:
          goto switchD_029d484c_caseD_33;
        case 0x3c:
        case 0x4b:
        case 100:
        case 0x65:
          goto switchD_029d484c_caseD_4b;
        case 0x3d:
        case 0x52:
          goto switchD_029d48c4_caseD_3d;
        case 0x3e:
          goto switchD_029d484c_caseD_3e;
        case 0x3f:
        case 0x53:
          goto switchD_029d48c4_caseD_3f;
        case 0x41:
          goto switchD_029d48c4_caseD_41;
        case 0x43:
          goto switchD_029d48c4_caseD_43;
        case 0x44:
          goto switchD_029d48c4_caseD_44;
        case 0x45:
          goto switchD_029d48c4_caseD_45;
        case 0x46:
          uVar28 = 6;
          break;
        case 0x48:
        case 0x5b:
          goto switchD_029d484c_caseD_48;
        case 0x4a:
          goto switchD_029d48c4_caseD_4a;
        case 0x50:
          goto switchD_029d48c4_caseD_50;
        case 0x51:
          goto switchD_029d484c_caseD_51;
        case 0x54:
          goto switchD_029d48c4_caseD_54;
        case 0x58:
          goto switchD_029d48c4_caseD_58;
        case 0x59:
          goto switchD_029d48c4_caseD_59;
        case 0x5a:
          goto switchD_029d48c4_caseD_5a;
        case 0x5d:
          goto switchD_029d48c4_caseD_5d;
        case 0x5f:
          goto switchD_029d48c4_caseD_5f;
        case 0x60:
          goto switchD_029d48c4_caseD_60;
        case 0x66:
          goto switchD_029d48c4_caseD_66;
        case 0x68:
          goto switchD_029d48c4_caseD_68;
        case 0x69:
          goto switchD_029d484c_caseD_69;
        default:
          uVar7 = 3;
          goto switchD_029d48c4_caseD_5a;
        }
        break;
      case 1:
      case 0x4e:
switchD_029d48c4_caseD_1:
        uVar39 = uVar8;
        uVar28 = 4;
        break;
      case 2:
        goto switchD_029d48c4_caseD_2;
      case 3:
      case 7:
      case 0xc:
      case 0x1c:
      case 0x23:
      case 0x36:
      case 0x38:
      case 0x4d:
switchD_029d48c4_caseD_3:
        uVar39 = uVar30;
        uVar28 = 8;
        uVar26 = uVar27;
        break;
      case 4:
      case 0x20:
      case 0x40:
        goto switchD_029d484c_caseD_20;
      case 5:
      case 0x47:
      case 0x5c:
switchD_029d48c4_caseD_5:
        uVar39 = uVar10;
        uVar28 = 8;
        break;
      case 8:
      case 9:
      case 0x1e:
      case 0x21:
      case 0x30:
      case 0x32:
      case 0x35:
switchD_029d48c4_caseD_8:
        uVar39 = uVar6;
        uVar28 = 8;
        break;
      case 10:
      case 0x24:
      case 0x56:
      case 0x57:
      case 0x61:
switchD_029d48c4_caseD_a:
        uVar39 = uVar8;
        uVar28 = 8;
        break;
      case 0xb:
      case 0x3b:
      case 0x67:
switchD_029d48c4_caseD_b:
        uVar39 = uVar29;
        uVar28 = 4;
        break;
      case 0xf:
switchD_029d48c4_caseD_f:
        uVar39 = uVar11;
        uVar28 = 6;
        break;
      case 0x10:
      case 0x2e:
switchD_029d48c4_caseD_10:
        uVar39 = uVar20;
        uVar28 = 4;
        break;
      case 0x11:
switchD_029d48c4_caseD_11:
        uVar39 = uVar12;
        uVar28 = 4;
        break;
      case 0x12:
      case 0x42:
switchD_029d48c4_caseD_12:
        uVar39 = uVar29;
        uVar28 = 0xc;
        break;
      case 0x13:
switchD_029d48c4_caseD_13:
        uVar39 = uVar48;
        uVar28 = 0xc;
        break;
      case 0x14:
switchD_029d48c4_caseD_14:
        uVar39 = uVar48;
        uVar28 = 7;
        break;
      case 0x15:
      case 0x17:
switchD_029d48c4_caseD_15:
        uVar39 = uVar47;
        uVar28 = 9;
        break;
      case 0x16:
        break;
      case 0x18:
switchD_029d48c4_caseD_18:
        uVar39 = uVar20;
        uVar28 = 7;
        break;
      case 0x19:
        uVar39 = 0xc;
        break;
      case 0x1a:
switchD_029d48c4_caseD_1a:
        uVar39 = uVar13;
        uVar28 = 6;
        break;
      case 0x1b:
      case 0x4c:
switchD_029d48c4_caseD_1b:
        uVar39 = uVar45;
        uVar28 = 10;
        break;
      case 0x1d:
switchD_029d48c4_caseD_1d:
        uVar39 = uVar50;
        uVar28 = 8;
        break;
      case 0x1f:
      case 0x34:
switchD_029d48c4_caseD_1f:
        uVar39 = uVar29;
        uVar28 = 6;
        break;
      case 0x22:
switchD_029d48c4_caseD_22:
        uVar39 = uVar14;
        uVar28 = 8;
        break;
      case 0x25:
      case 0x2f:
      case 0x62:
switchD_029d48c4_caseD_25:
        uVar39 = uVar47;
        uVar28 = 8;
        break;
      case 0x26:
      case 0x55:
        goto switchD_029d484c_caseD_55;
      case 0x27:
        uVar39 = 2;
        break;
      case 0x29:
switchD_029d48c4_caseD_29:
        uVar39 = uVar50;
        uVar28 = 4;
        break;
      case 0x2a:
        uVar39 = 0;
        break;
      case 0x2b:
switchD_029d48c4_caseD_2b:
        uVar39 = uVar42;
        uVar28 = 4;
        break;
      case 0x2c:
switchD_029d48c4_caseD_2c:
        uVar39 = uVar15;
        uVar28 = 4;
        break;
      case 0x2d:
switchD_029d48c4_caseD_2d:
        uVar39 = uVar16;
        uVar28 = 8;
        break;
      case 0x31:
        goto switchD_029d484c_caseD_31;
      case 0x33:
        goto switchD_029d484c_caseD_33;
      case 0x3c:
      case 0x4b:
      case 100:
      case 0x65:
        goto switchD_029d484c_caseD_4b;
      case 0x3d:
      case 0x52:
switchD_029d48c4_caseD_3d:
        uVar39 = uVar5;
        uVar28 = 8;
        break;
      case 0x3e:
        goto switchD_029d484c_caseD_3e;
      case 0x3f:
      case 0x53:
switchD_029d48c4_caseD_3f:
        uVar39 = uVar30;
        uVar28 = 6;
        uVar26 = uVar27;
        break;
      case 0x41:
switchD_029d48c4_caseD_41:
        uVar39 = uVar42;
        uVar28 = 8;
        break;
      case 0x43:
switchD_029d48c4_caseD_43:
        uVar39 = uVar42;
        uVar28 = 9;
        break;
      case 0x44:
switchD_029d48c4_caseD_44:
        uVar39 = uVar51;
        uVar28 = 7;
        break;
      case 0x45:
switchD_029d48c4_caseD_45:
        uVar39 = uVar20;
        uVar28 = 8;
        break;
      case 0x48:
      case 0x5b:
        goto switchD_029d484c_caseD_48;
      case 0x4a:
switchD_029d48c4_caseD_4a:
        uVar39 = uVar51;
        uVar28 = 4;
        break;
      case 0x4f:
        uVar39 = 0x17;
        break;
      case 0x50:
switchD_029d48c4_caseD_50:
        uVar39 = uVar47;
        uVar28 = 6;
        break;
      case 0x51:
        goto switchD_029d484c_caseD_51;
      case 0x54:
switchD_029d48c4_caseD_54:
        uVar39 = uVar50;
        uVar28 = 6;
        break;
      case 0x58:
switchD_029d48c4_caseD_58:
        uVar39 = uVar17;
        uVar28 = 8;
        break;
      case 0x59:
switchD_029d48c4_caseD_59:
        uVar39 = uVar17;
        uVar28 = 9;
        break;
      case 0x5d:
switchD_029d48c4_caseD_5d:
        uVar39 = uVar11;
        uVar28 = 4;
        break;
      case 0x5e:
        uVar39 = 0xb;
        break;
      case 0x5f:
switchD_029d48c4_caseD_5f:
        uVar39 = uVar29;
        uVar28 = 10;
        break;
      case 0x60:
switchD_029d48c4_caseD_60:
        uVar39 = uVar18;
        uVar28 = 4;
        break;
      case 0x66:
switchD_029d48c4_caseD_66:
        uVar39 = uVar51;
        uVar28 = 8;
        break;
      case 0x68:
switchD_029d48c4_caseD_68:
        uVar39 = uVar5;
        uVar28 = 6;
        break;
      case 0x6a:
        uVar28 = 9;
        uVar39 = 10;
        break;
      default:
        uVar27 = 4;
      case 0x5a:
switchD_029d48c4_caseD_5a:
        uVar39 = uVar7;
        uVar26 = uVar27;
        uVar28 = 0xffffffff;
      }
      break;
    case 2:
      uVar47 = 0xc;
      uVar45 = uVar31;
switchD_029d48c4_caseD_2:
      uVar26 = uVar45;
      uVar39 = uVar47;
      uVar28 = 8;
      break;
    case 0x20:
    case 0x40:
switchD_029d484c_caseD_20:
      uVar39 = uVar30;
      uVar28 = 0x10;
      uVar26 = uVar27;
      break;
    case 0x31:
switchD_029d484c_caseD_31:
      uVar39 = uVar30;
      uVar28 = 0x20;
      uVar26 = uVar27;
      break;
    case 0x33:
switchD_029d484c_caseD_33:
      uVar39 = uVar45;
      uVar26 = uVar27;
      uVar28 = 0x11;
      break;
    case 0x3e:
switchD_029d484c_caseD_3e:
      uVar39 = uVar9;
      uVar26 = uVar27;
      uVar28 = 0x10;
      break;
    case 0x48:
    case 0x5b:
switchD_029d484c_caseD_48:
      uVar39 = uVar9;
      uVar26 = uVar27;
      uVar28 = 9;
      break;
    case 0x4b:
switchD_029d484c_caseD_4b:
      uVar39 = uVar45;
      uVar26 = uVar27;
      uVar28 = 8;
      break;
    case 0x51:
switchD_029d484c_caseD_51:
      uVar26 = uVar27;
      uVar39 = uVar44;
      uVar28 = 8;
      break;
    case 0x55:
switchD_029d484c_caseD_55:
      uVar26 = uVar27;
      uVar39 = uVar48;
      uVar28 = 8;
      break;
    case 0x69:
switchD_029d484c_caseD_69:
      uVar26 = uVar27;
      uVar39 = 3;
      uVar28 = 0xb;
      break;
    default:
      uVar27 = 0xffffffff;
      uVar7 = 0xffffffff;
      goto switchD_029d48c4_caseD_5a;
    }
    uVar44 = uVar31;
    if (*param_1 <= uVar31) {
      uVar44 = 0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 2) + (ulong)uVar44 * 0x10);
    *puVar1 = uVar31;
    puVar1[1] = uVar39;
    puVar1[2] = uVar26;
    puVar1[3] = uVar28;
LAB_029d4800:
    uVar31 = uVar31 + 1;
  } while (uVar31 != 0x6c);
  uVar31 = 0;
  uVar34 = 200;
  do {
    uVar44 = uVar31 + 200;
    uVar48 = uVar44 / 100;
    if (uVar48 - 2 < 2) {
      uVar48 = 4;
    }
    else if (uVar48 == 5) {
      uVar48 = 0x1b;
    }
    else {
      uVar48 = 0;
    }
    iVar38 = uVar31 + (int)(uVar34 / 100) * -100;
    uVar30 = uVar31;
    if (param_1[4] <= uVar31) {
      uVar30 = 0;
    }
    uVar31 = uVar31 + 1;
    puVar1 = (uint *)(*(long *)(param_1 + 6) + (long)(int)uVar30 * 0x10);
    *puVar1 = uVar44;
    puVar1[1] = iVar38 + 200;
    puVar1[2] = 4;
    puVar1[3] = uVar48;
    uVar34 = (ulong)((int)uVar34 + 1);
  } while (uVar31 != 0xc);
  iVar38 = 0;
  uVar31 = 300;
  do {
    uVar44 = iVar38 + 300;
    bVar19 = (uVar44 / 100 & 0x1fffffe) == 2;
    uVar48 = iVar38 + (uVar31 / 100) * -100 + 300;
    if (!bVar19) {
      uVar48 = 0;
    }
    if (uVar44 / 100 - 2 < 2) {
      uVar30 = 4;
    }
    else {
      uVar30 = 0;
      if (uVar44 / 100 == 5) {
        uVar30 = 0x1b;
      }
    }
    uVar27 = iVar38 + 0xc;
    iVar38 = iVar38 + 1;
    uVar31 = uVar31 + 1;
    if (param_1[4] <= uVar27) {
      uVar27 = 0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 6) + (ulong)uVar27 * 0x10);
    *puVar1 = uVar44;
    puVar1[1] = uVar48;
    puVar1[2] = (uint)bVar19 << 2;
    puVar1[3] = uVar30;
  } while (iVar38 != 0xc);
  lVar23 = *(long *)(param_1 + 6);
  iVar38 = 0;
  lVar46 = 0x180;
  if (param_1[4] < 0x19) {
    lVar46 = 0;
  }
  *(undefined8 *)(lVar23 + lVar46) = 0x2000001f5;
  ((undefined8 *)(lVar23 + lVar46))[1] = 0x1b00000004;
  uVar31 = 600;
  do {
    uVar44 = iVar38 + 600;
    lVar46 = (ulong)uVar44 / 100 - 2;
    uVar48 = (uint)lVar46;
    if (uVar48 < 5) {
      uVar30 = *(uint *)(&DAT_0417e1c4 + lVar46 * 4);
    }
    else {
      uVar30 = 0;
    }
    if (uVar44 / 100 - 2 < 2) {
LAB_029d4de4:
      uVar27 = iVar38 + (uVar31 / 100) * -100 + 600;
      if (uVar48 < 5) goto LAB_029d4e20;
LAB_029d4d70:
      uVar48 = 0;
    }
    else {
      if (uVar44 / 100 == 5) {
        uVar27 = 2;
      }
      else {
        if (uVar44 / 100 == 6) goto LAB_029d4de4;
        uVar27 = 0;
      }
      if (4 < uVar48) goto LAB_029d4d70;
LAB_029d4e20:
      if ((0x1bU >> (ulong)(uVar48 & 0x1f) & 1) == 0) goto LAB_029d4d70;
      uVar48 = *(uint *)(&DAT_0417e1d8 + lVar46 * 4);
    }
    uVar45 = iVar38 + 0x19;
    iVar38 = iVar38 + 1;
    uVar31 = uVar31 + 1;
    if (param_1[4] <= uVar45) {
      uVar45 = 0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 6) + (ulong)uVar45 * 0x10);
    *puVar1 = uVar44;
    puVar1[1] = uVar27;
    puVar1[2] = uVar30;
    puVar1[3] = uVar48;
    lVar46 = DAT_05ae7600;
  } while (iVar38 != 0xc);
  if (DAT_05ae7600 == 0) {
    puVar25 = malloc(0x780);
joined_r0x029d5004:
    if (puVar25 != (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 10) = puVar25;
      param_1[0xf] = 0x1e;
      puVar25[0xe8] = 0;
      puVar25[0x18] = puVar25 + 0x20;
      puVar25[0x10] = puVar25 + 0x18;
      puVar25[8] = puVar25 + 0x10;
      *puVar25 = puVar25 + 8;
      puVar25[0x20] = puVar25 + 0x28;
      puVar25[0x28] = puVar25 + 0x30;
      puVar25[0x30] = puVar25 + 0x38;
      puVar25[0x38] = puVar25 + 0x40;
      puVar25[0x40] = puVar25 + 0x48;
      puVar25[0x48] = puVar25 + 0x50;
      puVar25[0x50] = puVar25 + 0x58;
      puVar25[0x58] = puVar25 + 0x60;
      puVar25[0x60] = puVar25 + 0x68;
      puVar25[0x68] = puVar25 + 0x70;
      puVar25[0x70] = puVar25 + 0x78;
      puVar25[0x78] = puVar25 + 0x80;
      puVar25[0x80] = puVar25 + 0x88;
      puVar25[0x88] = puVar25 + 0x90;
      puVar25[0x90] = puVar25 + 0x98;
      puVar25[0x98] = puVar25 + 0xa0;
      puVar25[0xa0] = puVar25 + 0xa8;
      puVar25[0xa8] = puVar25 + 0xb0;
      puVar25[0xb0] = puVar25 + 0xb8;
      puVar25[0xb8] = puVar25 + 0xc0;
      puVar25[0xc0] = puVar25 + 200;
      puVar25[200] = puVar25 + 0xd0;
      puVar25[0xd0] = puVar25 + 0xd8;
      puVar25[0xd8] = puVar25 + 0xe0;
      puVar25[0xe0] = puVar25 + 0xe8;
      *(undefined8 **)(param_1 + 0xc) = puVar25;
    }
  }
  else {
    plVar22 = (long *)*param_2;
    if (plVar22 != (long *)0x0) {
LAB_029d4e7c:
      puVar25 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x780,8);
      goto joined_r0x029d5004;
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar22 = (long *)(lVar46 + 8);
    if (lVar23 != 0) {
      plVar22 = (long *)(lVar23 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
    if (plVar22 != (long *)0x0) goto LAB_029d4e7c;
  }
  lVar46 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar24 = malloc(0x5a0);
joined_r0x029d5014:
    if (pvVar24 != (void *)0x0) {
      lVar46 = 0x14;
      do {
        lVar23 = lVar46 + 0x18;
        *(undefined8 *)((long)pvVar24 + lVar46 + -0x14) = 0xffffffffffffffff;
        *(undefined8 *)((long)pvVar24 + lVar46 + -0xc) = 0xffffffff00000000;
        *(undefined8 *)((long)pvVar24 + lVar46 + -4) = 0xffffffff;
        lVar46 = lVar23;
      } while (lVar23 != 0x5b4);
      *(void **)(param_1 + 0x12) = pvVar24;
      param_1[0x10] = 0x78;
    }
  }
  else {
    plVar22 = (long *)*param_2;
    if (plVar22 != (long *)0x0) {
LAB_029d4fdc:
      pvVar24 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,0x5a0,8);
      goto joined_r0x029d5014;
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar22 = (long *)(lVar46 + 8);
    if (lVar23 != 0) {
      plVar22 = (long *)(lVar23 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
    if (plVar22 != (long *)0x0) goto LAB_029d4fdc;
  }
  uVar31 = *param_1;
  if (1 < (int)uVar31) {
    piVar33 = *(int **)(param_1 + 2);
    uVar35 = (ulong)(uVar31 >> 1);
    uVar34 = uVar35;
    do {
      uVar44 = (int)uVar35 * 2;
      piVar37 = piVar33 + (uVar34 - 1 & 0xffffffff) * 4;
      iVar38 = *piVar37;
      iVar32 = piVar37[1];
      uVar40 = *(undefined8 *)(piVar37 + 2);
      if ((int)uVar31 < (int)uVar44) {
        uVar48 = (uint)uVar34;
      }
      else {
        uVar41 = uVar34 & 0xffffffff;
        do {
          uVar30 = uVar44;
          if ((int)uVar44 < (int)uVar31) {
            piVar37 = piVar33 + (long)(int)uVar44 * 4;
            if (piVar37[-3] < piVar37[1]) {
              uVar48 = 1;
            }
            else if (piVar37[1] < piVar37[-3]) {
              uVar48 = 0;
            }
            else {
              uVar48 = (uint)(piVar37[-4] < *piVar37);
            }
            uVar30 = uVar48 | uVar44;
          }
          piVar37 = piVar33 + ((long)(int)uVar30 + -1) * 4;
          iVar4 = piVar37[1];
          uVar48 = (uint)uVar41;
          if (iVar32 < iVar4) {
            iVar21 = *piVar37;
          }
          else if ((iVar4 < iVar32) || (iVar21 = *piVar37, iVar21 <= iVar38)) break;
          uVar43 = *(undefined8 *)(piVar37 + 2);
          piVar33[(long)(int)uVar48 * 4 + -4] = iVar21;
          piVar33[(long)(int)uVar48 * 4 + -3] = iVar4;
          *(undefined8 *)(piVar33 + (long)(int)uVar48 * 4 + -2) = uVar43;
          uVar44 = uVar30 * 2;
          uVar41 = (ulong)uVar30;
          uVar48 = uVar30;
        } while ((int)uVar44 <= (int)uVar31);
      }
      uVar35 = (ulong)((int)uVar35 - 1);
      piVar33[(long)(int)uVar48 * 4 + -4] = iVar38;
      piVar33[(long)(int)uVar48 * 4 + -3] = iVar32;
      *(undefined8 *)(piVar33 + (long)(int)uVar48 * 4 + -2) = uVar40;
      bVar19 = 1 < (long)uVar34;
      uVar34 = uVar34 - 1;
    } while (bVar19);
    iVar32 = piVar33[1];
    piVar37 = piVar33 + (ulong)(uVar31 - 1) * 4;
    uVar40 = *(undefined8 *)(piVar37 + 2);
    iVar38 = *piVar37;
    iVar4 = piVar37[1];
    *piVar37 = *piVar33;
    piVar37[1] = iVar32;
    *(undefined8 *)(piVar37 + 2) = *(undefined8 *)(piVar33 + 2);
    uVar44 = uVar31 - 1;
    while (uVar48 = uVar44, 2 < (int)uVar31) {
      uVar44 = 2;
      uVar30 = 1;
      do {
        if ((int)uVar44 < (int)uVar48) {
          piVar37 = piVar33 + (long)(int)uVar44 * 4;
          if (piVar37[-3] < piVar37[1]) {
            uVar27 = 1;
          }
          else if (piVar37[1] < piVar37[-3]) {
            uVar27 = 0;
          }
          else {
            uVar27 = (uint)(piVar37[-4] < *piVar37);
          }
          uVar27 = uVar27 | uVar44;
        }
        else {
          uVar27 = uVar44;
        }
        piVar37 = piVar33 + ((long)(int)uVar27 + -1) * 4;
        iVar32 = piVar37[1];
        if (iVar4 < iVar32) {
          iVar21 = *piVar37;
        }
        else if ((iVar32 < iVar4) || (iVar21 = *piVar37, iVar21 <= iVar38)) break;
        uVar43 = *(undefined8 *)(piVar37 + 2);
        piVar33[(long)(int)uVar30 * 4 + -4] = iVar21;
        piVar33[(long)(int)uVar30 * 4 + -3] = iVar32;
        *(undefined8 *)(piVar33 + (long)(int)uVar30 * 4 + -2) = uVar43;
        uVar44 = uVar27 * 2;
        uVar30 = uVar27;
      } while ((int)uVar44 < (int)uVar31);
      piVar37 = piVar33 + (ulong)(uVar48 - 1) * 4;
      piVar33[(long)(int)uVar30 * 4 + -4] = iVar38;
      piVar33[(long)(int)uVar30 * 4 + -3] = iVar4;
      *(undefined8 *)(piVar33 + (long)(int)uVar30 * 4 + -2) = uVar40;
      iVar32 = piVar33[1];
      uVar40 = *(undefined8 *)(piVar37 + 2);
      iVar38 = *piVar37;
      iVar4 = piVar37[1];
      *piVar37 = *piVar33;
      piVar37[1] = iVar32;
      *(undefined8 *)(piVar37 + 2) = *(undefined8 *)(piVar33 + 2);
      uVar44 = uVar48 - 1;
      uVar31 = uVar48;
    }
    *piVar33 = iVar38;
    piVar33[1] = iVar4;
    *(undefined8 *)(piVar33 + 2) = uVar40;
    uVar31 = *param_1;
  }
  if (uVar31 != 0) {
    lVar46 = *(long *)(param_1 + 2);
    iVar38 = 0;
    uVar44 = 0;
    puVar1 = param_1 + 8;
    iVar32 = -100;
    uVar48 = 0xffffffff;
    puVar36 = (undefined4 *)0x0;
    do {
      while( true ) {
        uVar48 = uVar48 + 1;
        uVar30 = uVar48;
        if (param_1[0x10] <= uVar48) {
          uVar30 = 0;
        }
        puVar52 = (undefined4 *)(*(long *)(param_1 + 0x12) + (long)(int)uVar30 * 0xc);
        puVar2 = (undefined4 *)(lVar46 + ((long)((ulong)uVar44 << 0x20) >> 0x1c));
        *puVar52 = *puVar2;
        piVar33 = puVar2 + 1;
        puVar52[1] = *piVar33;
        puVar52[2] = puVar2[3];
        if (*piVar33 != iVar32) break;
        uVar44 = uVar44 + 1;
        iVar38 = iVar38 + 1;
        if (uVar31 == uVar44) {
          puVar52 = puVar36;
          goto LAB_029d53f0;
        }
      }
      if (iVar38 != 0) {
        iVar4 = 0;
        if (puVar36 != (undefined4 *)0x0) {
          iVar4 = iVar38;
        }
        if ((int)param_1[0xe] < (int)param_1[0xf]) {
          puVar25 = *(undefined8 **)(param_1 + 10);
          if (puVar25 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 10) = *puVar25;
          }
          *(int *)(puVar25 + 5) = iVar4;
          puVar25[2] = 0;
          puVar25[3] = 0;
          *(int *)(puVar25 + 4) = iVar32;
          *puVar25 = &PTR_LAB_04a986a0;
          puVar25[1] = 0;
          puVar25[6] = puVar36;
          puVar25[7] = puVar1;
          param_1[0xe] = param_1[0xe] + 1;
          lVar23 = FUN_029d6108(*(undefined8 *)(param_1 + 8));
          *(long *)(param_1 + 8) = lVar23;
          *(undefined8 *)(lVar23 + 0x18) = 1;
        }
        else {
          for (lVar23 = *(long *)puVar1; lVar23 != 0; lVar23 = *(long *)(lVar23 + 0x10)) {
            while (iVar32 < *(int *)(lVar23 + 0x20)) {
              lVar23 = *(long *)(lVar23 + 8);
              if (lVar23 == 0) goto LAB_029d52d0;
            }
            if (iVar32 <= *(int *)(lVar23 + 0x20)) {
              *(int *)(lVar23 + 0x28) = iVar4;
              *(undefined4 **)(lVar23 + 0x30) = puVar36;
              break;
            }
          }
        }
      }
LAB_029d52d0:
      iVar32 = *piVar33;
      uVar44 = uVar44 + 1;
      iVar38 = 1;
      puVar36 = puVar52;
    } while (uVar31 != uVar44);
LAB_029d53f0:
    iVar4 = 0;
    if (puVar52 != (undefined4 *)0x0) {
      iVar4 = iVar38;
    }
    if ((int)param_1[0xe] < (int)param_1[0xf]) {
      puVar25 = *(undefined8 **)(param_1 + 10);
      if (puVar25 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 10) = *puVar25;
      }
      *(int *)(puVar25 + 5) = iVar4;
      puVar25[2] = 0;
      puVar25[3] = 0;
      *(int *)(puVar25 + 4) = iVar32;
      *puVar25 = &PTR_LAB_04a986a0;
      puVar25[1] = 0;
      puVar25[6] = puVar52;
      puVar25[7] = puVar1;
      param_1[0xe] = param_1[0xe] + 1;
      lVar46 = FUN_029d6108(*(undefined8 *)(param_1 + 8));
      *(long *)(param_1 + 8) = lVar46;
      *(undefined8 *)(lVar46 + 0x18) = 1;
    }
    else {
      for (lVar46 = *(long *)puVar1; lVar46 != 0; lVar46 = *(long *)(lVar46 + 0x10)) {
        while (iVar32 < *(int *)(lVar46 + 0x20)) {
          lVar46 = *(long *)(lVar46 + 8);
          if (lVar46 == 0) goto LAB_029d5498;
        }
        if (iVar32 <= *(int *)(lVar46 + 0x20)) {
          *(int *)(lVar46 + 0x28) = iVar4;
          *(undefined4 **)(lVar46 + 0x30) = puVar52;
          break;
        }
      }
    }
  }
LAB_029d5498:
  lVar46 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar25 = malloc(0x780);
joined_r0x029d566c:
    if (puVar25 != (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0x16) = puVar25;
      param_1[0x1b] = 0x1e;
      puVar25[0xe8] = 0;
      puVar25[0x18] = puVar25 + 0x20;
      puVar25[0x10] = puVar25 + 0x18;
      puVar25[8] = puVar25 + 0x10;
      *puVar25 = puVar25 + 8;
      puVar25[0x20] = puVar25 + 0x28;
      puVar25[0x28] = puVar25 + 0x30;
      puVar25[0x30] = puVar25 + 0x38;
      puVar25[0x38] = puVar25 + 0x40;
      puVar25[0x40] = puVar25 + 0x48;
      puVar25[0x48] = puVar25 + 0x50;
      puVar25[0x50] = puVar25 + 0x58;
      puVar25[0x58] = puVar25 + 0x60;
      puVar25[0x60] = puVar25 + 0x68;
      puVar25[0x68] = puVar25 + 0x70;
      puVar25[0x70] = puVar25 + 0x78;
      puVar25[0x78] = puVar25 + 0x80;
      puVar25[0x80] = puVar25 + 0x88;
      puVar25[0x88] = puVar25 + 0x90;
      puVar25[0x90] = puVar25 + 0x98;
      puVar25[0x98] = puVar25 + 0xa0;
      puVar25[0xa0] = puVar25 + 0xa8;
      puVar25[0xa8] = puVar25 + 0xb0;
      puVar25[0xb0] = puVar25 + 0xb8;
      puVar25[0xb8] = puVar25 + 0xc0;
      puVar25[0xc0] = puVar25 + 200;
      puVar25[200] = puVar25 + 0xd0;
      puVar25[0xd0] = puVar25 + 0xd8;
      puVar25[0xd8] = puVar25 + 0xe0;
      puVar25[0xe0] = puVar25 + 0xe8;
      *(undefined8 **)(param_1 + 0x18) = puVar25;
    }
  }
  else {
    plVar22 = (long *)*param_2;
    if (plVar22 != (long *)0x0) {
LAB_029d54e4:
      puVar25 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x780,8);
      goto joined_r0x029d566c;
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar22 = (long *)(lVar46 + 8);
    if (lVar23 != 0) {
      plVar22 = (long *)(lVar23 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
    if (plVar22 != (long *)0x0) goto LAB_029d54e4;
  }
  lVar46 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar24 = malloc(0x5a0);
  }
  else {
    param_2 = (long *)*param_2;
    if (param_2 == (long *)0x0) {
      lVar23 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar46 + 8);
      if (lVar23 != 0) {
        param_2 = (long *)(lVar23 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) goto LAB_029d56b8;
    }
    pvVar24 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x5a0,8);
  }
  if (pvVar24 != (void *)0x0) {
    lVar46 = 0x14;
    do {
      lVar23 = lVar46 + 0x18;
      *(undefined8 *)((long)pvVar24 + lVar46 + -0x14) = 0xffffffffffffffff;
      *(undefined8 *)((long)pvVar24 + lVar46 + -0xc) = 0xffffffff00000000;
      *(undefined8 *)((long)pvVar24 + lVar46 + -4) = 0xffffffff;
      lVar46 = lVar23;
    } while (lVar23 != 0x5b4);
    *(void **)(param_1 + 0x1e) = pvVar24;
    param_1[0x1c] = 0x78;
  }
LAB_029d56b8:
  uVar31 = *param_1;
  piVar33 = *(int **)(param_1 + 2);
  if (1 < (int)uVar31) {
    uVar35 = (ulong)(uVar31 >> 1);
    uVar34 = uVar35;
    do {
      uVar44 = (int)uVar35 * 2;
      piVar37 = piVar33 + (uVar34 - 1 & 0xffffffff) * 4;
      iVar38 = *piVar37;
      iVar32 = piVar37[1];
      uVar40 = *(undefined8 *)(piVar37 + 2);
      if ((int)uVar31 < (int)uVar44) {
        uVar48 = (uint)uVar34;
      }
      else {
        uVar41 = uVar34 & 0xffffffff;
        do {
          uVar30 = uVar44;
          if ((int)uVar44 < (int)uVar31) {
            piVar37 = piVar33 + (long)(int)uVar44 * 4;
            if (piVar37[-3] < piVar37[1]) {
              uVar48 = 1;
            }
            else if (piVar37[1] < piVar37[-3]) {
              uVar48 = 0;
            }
            else {
              uVar48 = (uint)(piVar37[-4] < *piVar37);
            }
            uVar30 = uVar48 | uVar44;
          }
          piVar37 = piVar33 + ((long)(int)uVar30 + -1) * 4;
          iVar4 = piVar37[1];
          uVar48 = (uint)uVar41;
          if (iVar32 < iVar4) {
            iVar21 = *piVar37;
          }
          else if ((iVar4 < iVar32) || (iVar21 = *piVar37, iVar21 <= iVar38)) break;
          uVar43 = *(undefined8 *)(piVar37 + 2);
          piVar33[(long)(int)uVar48 * 4 + -4] = iVar21;
          piVar33[(long)(int)uVar48 * 4 + -3] = iVar4;
          *(undefined8 *)(piVar33 + (long)(int)uVar48 * 4 + -2) = uVar43;
          uVar44 = uVar30 * 2;
          uVar41 = (ulong)uVar30;
          uVar48 = uVar30;
        } while ((int)uVar44 <= (int)uVar31);
      }
      uVar35 = (ulong)((int)uVar35 - 1);
      piVar33[(long)(int)uVar48 * 4 + -4] = iVar38;
      piVar33[(long)(int)uVar48 * 4 + -3] = iVar32;
      *(undefined8 *)(piVar33 + (long)(int)uVar48 * 4 + -2) = uVar40;
      bVar19 = 1 < (long)uVar34;
      uVar34 = uVar34 - 1;
    } while (bVar19);
    iVar32 = piVar33[1];
    piVar37 = piVar33 + (ulong)(uVar31 - 1) * 4;
    uVar40 = *(undefined8 *)(piVar37 + 2);
    iVar38 = *piVar37;
    iVar4 = piVar37[1];
    *piVar37 = *piVar33;
    piVar37[1] = iVar32;
    *(undefined8 *)(piVar37 + 2) = *(undefined8 *)(piVar33 + 2);
    uVar44 = uVar31 - 1;
    while (uVar48 = uVar44, 2 < (int)uVar31) {
      uVar44 = 2;
      uVar30 = 1;
      do {
        if ((int)uVar44 < (int)uVar48) {
          piVar37 = piVar33 + (long)(int)uVar44 * 4;
          if (piVar37[-3] < piVar37[1]) {
            uVar27 = 1;
          }
          else if (piVar37[1] < piVar37[-3]) {
            uVar27 = 0;
          }
          else {
            uVar27 = (uint)(piVar37[-4] < *piVar37);
          }
          uVar27 = uVar27 | uVar44;
        }
        else {
          uVar27 = uVar44;
        }
        piVar37 = piVar33 + ((long)(int)uVar27 + -1) * 4;
        iVar32 = piVar37[1];
        if (iVar4 < iVar32) {
          iVar21 = *piVar37;
        }
        else if ((iVar32 < iVar4) || (iVar21 = *piVar37, iVar21 <= iVar38)) break;
        uVar43 = *(undefined8 *)(piVar37 + 2);
        piVar33[(long)(int)uVar30 * 4 + -4] = iVar21;
        piVar33[(long)(int)uVar30 * 4 + -3] = iVar32;
        *(undefined8 *)(piVar33 + (long)(int)uVar30 * 4 + -2) = uVar43;
        uVar44 = uVar27 * 2;
        uVar30 = uVar27;
      } while ((int)uVar44 < (int)uVar31);
      piVar37 = piVar33 + (ulong)(uVar48 - 1) * 4;
      piVar33[(long)(int)uVar30 * 4 + -4] = iVar38;
      piVar33[(long)(int)uVar30 * 4 + -3] = iVar4;
      *(undefined8 *)(piVar33 + (long)(int)uVar30 * 4 + -2) = uVar40;
      iVar32 = piVar33[1];
      uVar40 = *(undefined8 *)(piVar37 + 2);
      iVar38 = *piVar37;
      iVar4 = piVar37[1];
      *piVar37 = *piVar33;
      piVar37[1] = iVar32;
      *(undefined8 *)(piVar37 + 2) = *(undefined8 *)(piVar33 + 2);
      uVar44 = uVar48 - 1;
      uVar31 = uVar48;
    }
    *piVar33 = iVar38;
    piVar33[1] = iVar4;
    *(undefined8 *)(piVar33 + 2) = uVar40;
    uVar31 = *param_1;
    piVar33 = *(int **)(param_1 + 2);
  }
  if (uVar31 != 0) {
    iVar38 = 0;
    piVar37 = (int *)0x0;
    uVar44 = 0;
    puVar1 = param_1 + 0x14;
    iVar32 = -100;
    uVar48 = 0xffffffff;
    do {
      uVar30 = uVar48;
      if (*(int *)((long)piVar33 + ((long)((ulong)uVar44 << 0x20) >> 0x1c) + 8) != 3) {
        uVar30 = uVar48 + 1;
        piVar3 = piVar33 + (long)(int)uVar44 * 4;
        iVar4 = 0;
        if (uVar30 < param_1[0x1c]) {
          iVar4 = uVar48 + 1;
        }
        piVar53 = (int *)(*(long *)(param_1 + 0x1e) + (long)iVar4 * 0xc);
        *piVar53 = *piVar3;
        piVar49 = piVar3 + 1;
        piVar53[1] = *piVar49;
        piVar53[2] = piVar3[3];
        if (*piVar49 != iVar32) {
          if (0 < iVar38) {
            iVar4 = 0;
            if (piVar37 != (int *)0x0) {
              iVar4 = iVar38;
            }
            if ((int)param_1[0x1a] < (int)param_1[0x1b]) {
              puVar25 = *(undefined8 **)(param_1 + 0x16);
              if (puVar25 != (undefined8 *)0x0) {
                *(undefined8 *)(param_1 + 0x16) = *puVar25;
              }
              *(int *)(puVar25 + 5) = iVar4;
              puVar25[2] = 0;
              puVar25[3] = 0;
              *(int *)(puVar25 + 4) = iVar32;
              *puVar25 = &PTR_LAB_04a986a0;
              puVar25[1] = 0;
              puVar25[6] = piVar37;
              puVar25[7] = puVar1;
              param_1[0x1a] = param_1[0x1a] + 1;
              lVar46 = FUN_029d6108(*(undefined8 *)(param_1 + 0x14));
              *(long *)(param_1 + 0x14) = lVar46;
              *(undefined8 *)(lVar46 + 0x18) = 1;
            }
            else {
              for (lVar46 = *(long *)puVar1; lVar46 != 0; lVar46 = *(long *)(lVar46 + 0x10)) {
                while (iVar32 < *(int *)(lVar46 + 0x20)) {
                  lVar46 = *(long *)(lVar46 + 8);
                  if (lVar46 == 0) goto LAB_029d5964;
                }
                if (iVar32 <= *(int *)(lVar46 + 0x20)) {
                  *(int *)(lVar46 + 0x28) = iVar4;
                  *(int **)(lVar46 + 0x30) = piVar37;
                  break;
                }
              }
            }
          }
LAB_029d5964:
          iVar32 = *piVar49;
          iVar38 = 0;
          piVar37 = piVar53;
        }
        iVar38 = iVar38 + 1;
      }
      uVar44 = uVar44 + 1;
      uVar48 = uVar30;
    } while (uVar31 != uVar44);
    if (0 < iVar38) {
      iVar4 = 0;
      if (piVar37 != (int *)0x0) {
        iVar4 = iVar38;
      }
      if ((int)param_1[0x1a] < (int)param_1[0x1b]) {
        puVar25 = *(undefined8 **)(param_1 + 0x16);
        if (puVar25 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x16) = *puVar25;
        }
        *(int *)(puVar25 + 5) = iVar4;
        puVar25[2] = 0;
        puVar25[3] = 0;
        *(int *)(puVar25 + 4) = iVar32;
        *puVar25 = &PTR_LAB_04a986a0;
        puVar25[1] = 0;
        puVar25[6] = piVar37;
        puVar25[7] = puVar1;
        param_1[0x1a] = param_1[0x1a] + 1;
        lVar46 = FUN_029d6108(*(undefined8 *)(param_1 + 0x14));
        *(long *)(param_1 + 0x14) = lVar46;
        *(undefined8 *)(lVar46 + 0x18) = 1;
      }
      else {
        for (lVar46 = *(long *)puVar1; lVar46 != 0; lVar46 = *(long *)(lVar46 + 0x10)) {
          while (iVar32 < *(int *)(lVar46 + 0x20)) {
            lVar46 = *(long *)(lVar46 + 8);
            if (lVar46 == 0) goto LAB_029d5b0c;
          }
          if (iVar32 <= *(int *)(lVar46 + 0x20)) {
            *(int *)(lVar46 + 0x28) = iVar4;
            *(int **)(lVar46 + 0x30) = piVar37;
            break;
          }
        }
      }
    }
  }
LAB_029d5b0c:
  FUN_029d5b50(param_1,*param_1 - 1);
  FUN_029d5b50(param_1 + 4,param_1[4] - 1);
  return 1;
}

