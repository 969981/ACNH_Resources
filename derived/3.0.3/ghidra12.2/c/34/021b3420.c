
ulong FUN_021b3420(long param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  char cVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined **local_78;
  long local_70;
  undefined1 local_68;
  byte local_67;
  
  puVar5 = PTR_DAT_04bb32f0;
  uVar12 = *param_2;
  if ((9 < uVar12) || (*(char *)(param_1 + (ulong)uVar12 * 0xba0 + 0xaf9) == '\0')) {
    iVar8 = 0;
    goto LAB_021b3538;
  }
  lVar14 = *(long *)(param_1 + (ulong)uVar12 * 0xba0 + 0xaa0);
  if (lVar14 == 0) {
    iVar8 = 0;
  }
  else {
    lVar13 = *(long *)PTR_DAT_04bb32f0;
    if (lVar13 == 0) {
      iVar9 = 0;
    }
    else {
      local_78._0_4_ = uVar12;
      uVar7 = FUN_00883068(uVar12,lVar13);
      puVar6 = PTR_DAT_04bb6298;
      if ((uVar7 < 2) && (sVar4 = *(short *)PTR_DAT_04bb6298, sVar4 != -1)) {
        local_78._0_4_ = 3;
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
        if (0xff < (uint)(int)sVar4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 3 & 1) == 0) {
          local_78._0_4_ = 0xe;
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
          if (0xff < (uint)(int)sVar4) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar1 >> 0xe & 1) == 0) goto LAB_021b3568;
        }
        iVar9 = 3;
      }
      else {
LAB_021b3568:
        iVar9 = 0;
      }
      uVar7 = FUN_00883550(lVar13);
      if ((uVar7 < 2) && (sVar4 = *(short *)puVar6, sVar4 != -1)) {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
        if (0xff < (uint)(int)sVar4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 3 & 1) == 0) {
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
          if (0xff < (uint)(int)sVar4) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar1 >> 0xe & 1) == 0) goto LAB_021b360c;
        }
        iVar9 = 5;
      }
    }
LAB_021b360c:
    uVar2 = *(undefined4 *)(lVar14 + 4);
    local_78 = (undefined **)CONCAT44(local_78._4_4_,uVar2);
    iVar8 = iVar9;
    switch(uVar2) {
    case 5:
    case 6:
    case 7:
    case 0x14:
    case 0x17:
    case 0x19:
      return 0;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      iVar8 = 0xd;
      break;
    case 0xe:
      local_78 = (undefined **)CONCAT44(local_78._4_4_,7);
      uVar11 = FUN_0290cbcc(&local_78);
      uVar12 = 0xc;
      if ((uVar11 & 1) == 0) {
        uVar12 = 0;
      }
      return (ulong)uVar12;
    case 0xf:
    case 0x10:
    case 0x11:
      if (DAT_04c487d4 == -1) {
        return 0;
      }
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar12 = 0;
      if ((*puVar1 & 0x80) != 0) {
        uVar12 = 0xb;
      }
      return (ulong)uVar12;
    case 0x1a:
      lVar14 = FUN_0265b6b0(6);
      if (lVar14 != 0) {
        local_68 = 1;
        local_70 = lVar14;
        if (*(long **)(lVar14 + 0x28) == (long *)0x0) {
          local_67 = 0;
        }
        else {
          puVar10 = (undefined8 *)**(long **)(lVar14 + 0x28);
          local_67 = 0;
          if (puVar10 != (undefined8 *)0x0) {
            local_67 = (**(code **)*puVar10)();
          }
        }
        local_67 = local_67 & 1;
        local_78 = &PTR_FUN_04938698;
        cVar3 = *(char *)(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8) + 0x2f);
        FUN_02640184(&local_78);
        iVar8 = 0xe;
        if (cVar3 != '\x02') {
          iVar8 = iVar9;
        }
      }
      break;
    case 0x1c:
      goto switchD_021b363c_caseD_1c;
    case 0x1d:
      iVar8 = 0x15;
      break;
    case 0x1e:
      iVar8 = 0x17;
      break;
    case 0x1f:
      iVar8 = 0x19;
      break;
    case 0x20:
      iVar8 = FUN_021dd1a0(param_2);
      uVar12 = 0x13;
      if (iVar8 != 0) {
        uVar12 = 0;
      }
      return (ulong)uVar12;
    }
  }
  iVar9 = FUN_00883634(*(undefined8 *)puVar5);
  if (-1 < iVar9) {
    param_1 = param_1 + (ulong)uVar12 * 0xba0;
    lVar14 = param_1 + 0x920;
    do {
      lVar14 = *(long *)(lVar14 + 8);
      if (lVar14 + -0x10 == param_1 + 0x910) goto LAB_021b37d8;
    } while (*(int *)(lVar14 + -0xc) != 0x1c);
    if ('\x11' < *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064)) {
switchD_021b363c_caseD_1c:
      return 0x14;
    }
  }
LAB_021b37d8:
  if (((param_3 & 1) != 0) && (iVar8 == 0)) {
    uVar11 = FUN_021dd800(param_2,0);
    return uVar11;
  }
LAB_021b3538:
  uVar11 = FUN_021de320(param_2,iVar8);
  return uVar11;
}

