
/* WARNING: Type propagation algorithm not settling */

byte * FUN_03601f00(long param_1,undefined8 *param_2,ulong param_3,uint param_4)

{
  char *__s1;
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *__dest;
  long *plVar4;
  undefined8 uVar5;
  void *__s;
  size_t sVar6;
  undefined2 uVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 *unaff_x22;
  undefined1 auVar14 [16];
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  uVar8 = *(uint *)(param_1 + 0xa8);
  if (param_4 < 3) {
    if (uVar8 != 2) {
      lVar10 = *(long *)(param_1 + 8);
      puVar12 = &DAT_04194b38;
      goto LAB_03601f64;
    }
    lVar10 = 0x2020;
  }
  else if (uVar8 == 2) {
    lVar10 = 0x2000;
  }
  else {
    lVar10 = *(long *)(param_1 + 8);
    puVar12 = &DAT_04194b68;
LAB_03601f64:
    lVar10 = *(long *)(puVar12 + (long)*(char *)(lVar10 + 0x149) * 8);
  }
  lVar13 = (ulong)*(ushort *)(param_1 + 200) << 1;
  if (uVar8 != 6) {
    lVar13 = 0;
  }
  if (param_3 < (ulong)(lVar13 + lVar10)) {
    auVar14 = FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    uVar8 = *(uint *)(param_1 + 0xa8);
  }
  __dest = auVar14._0_8_;
  pbVar9 = (byte *)(ulong)uVar8;
  bVar2 = uVar8 == 2;
  if (bVar2) {
    __dest = *(byte **)(param_1 + 0x18);
switchD_03601ffc_caseD_2:
    sVar6 = 0x2000;
switchD_03601ffc_caseD_1:
    __dest = memcpy(__dest,param_2,sVar6);
switchD_03601ffc_caseD_17:
    bVar2 = *(int *)(param_1 + 0xa8) == 2;
switchD_03601ffc_caseD_11:
    if (bVar2) {
      pbVar9 = (byte *)0x2000;
switchD_03601ffc_caseD_1f:
    }
    else {
      pbVar9 = *(byte **)(param_1 + 8);
switchD_03601ffc_caseD_9:
      pbVar9 = *(byte **)(&DAT_04194b68 + (long)(char)pbVar9[0x149] * 8);
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)(param_1 + 8) + 0x149);
    pbVar11 = (byte *)(ulong)bVar1;
switchD_03601ffc_caseD_22:
    if ((int)pbVar11 != 0) {
      __dest = *(byte **)(param_1 + 0x18);
      uVar8 = (int)pbVar11 - 1;
      pbVar9 = (byte *)(ulong)uVar8;
      pbVar11 = &switchD_03601ffc::switchdataD_04193568;
switchD_03601ffc_caseD_7:
switchD_03601ffc_caseD_15:
      sVar6 = 0x800;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar1) {
      case 1:
        goto switchD_03601ffc_caseD_1;
      case 2:
      case 6:
      case 0xe:
        goto switchD_03601ffc_caseD_2;
      case 3:
        sVar6 = 0x8000;
        goto switchD_03601ffc_caseD_1;
      case 4:
      case 0x13:
        sVar6 = 0x20000;
        goto switchD_03601ffc_caseD_1;
      case 5:
      case 0x19:
        sVar6 = 0x10000;
        goto switchD_03601ffc_caseD_1;
      case 7:
      case 8:
        goto switchD_03601ffc_caseD_7;
      case 9:
        goto switchD_03601ffc_caseD_9;
      default:
        *(undefined4 *)(param_2 + 0x15) = 3;
        uVar5 = 0x2000;
        if (2 < *(byte *)((long)param_2 + -0xdee)) {
          uVar5 = 0x4000;
        }
        uVar5 = (**(code **)(*(long *)*unaff_x22 + 0x10))((long *)*unaff_x22,uVar5,0);
        param_2[2] = uVar5;
        uVar5 = 0x2000;
        if (2 < *(byte *)((long)param_2 + -0xdee)) {
          uVar5 = 0x8000;
        }
        uVar5 = (**(code **)(*(long *)*unaff_x22 + 0x10))((long *)*unaff_x22,uVar5,0);
        param_2[4] = uVar5;
        uVar5 = (**(code **)(*(long *)*unaff_x22 + 0x10))((long *)*unaff_x22,0x100,0);
        param_2[5] = uVar5;
        uVar5 = (**(code **)(*(long *)*unaff_x22 + 0x10))((long *)*unaff_x22,0x7f,0);
        param_2[6] = uVar5;
        if (*(int *)(param_2 + 0x15) != 2) {
                    /* WARNING: Could not recover jumptable at 0x036025e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pbVar9 = (byte *)(*(code *)((ulong)*(byte *)((long)&USHORT_0419366c +
                                                      (ulong)*(byte *)(param_2[1] + 0x149) + 1) * 4
                                     + 0x3602574))();
          return pbVar9;
        }
        __s = (void *)(**(code **)(*(long *)*unaff_x22 + 0x10))((long *)*unaff_x22,0x2000,0);
        param_2[3] = __s;
        __s1 = (char *)(param_2 + 0xfffffffffffffe31);
        if ((param_2[0xfffffffffffffe2f] & 1) != 0) {
          __s1 = (char *)param_2[0xfffffffffffffe31];
        }
        iVar3 = strcmp(__s1,"95127b901bbce2407daf43cce9f45d4c27ef635d");
        if (iVar3 == 0) {
          if (*(int *)(param_2 + 0x15) != 2) {
            sVar6 = *(size_t *)(&DAT_04194b68 + (long)*(char *)(param_2[1] + 0x149) * 8);
          }
          else {
            sVar6 = 0x2000;
          }
          iVar3 = 0;
        }
        else {
          if (*(int *)(param_2 + 0x15) != 2) {
            sVar6 = *(size_t *)(&DAT_04194b68 + (long)*(char *)(param_2[1] + 0x149) * 8);
          }
          else {
            sVar6 = 0x2000;
          }
          iVar3 = 0xff;
        }
        memset(__s,iVar3,sVar6);
        if (*(int *)(param_2 + 0x15) == 6) {
          if (param_1 == 0x200000) {
            uVar5 = (**(code **)(*(long *)*unaff_x22 + 0x10))((long *)*unaff_x22,0x200,0);
            uVar7 = 0x100;
          }
          else {
            uVar5 = (**(code **)(*(long *)*unaff_x22 + 0x10))((long *)*unaff_x22,0x100,0);
            uVar7 = 0x80;
          }
          param_2[0x1a] = uVar5;
          *(undefined2 *)(param_2 + 0x19) = uVar7;
        }
        FUN_035fef88(param_2);
        return (byte *)0x1;
      case 0xb:
        goto switchD_03601ffc_caseD_b;
      case 0xc:
        goto switchD_03601ffc_caseD_c;
      case 0xf:
        goto switchD_03601ffc_caseD_f;
      case 0x11:
      case 0x12:
        goto switchD_03601ffc_caseD_11;
      case 0x15:
      case 0x16:
        goto switchD_03601ffc_caseD_15;
      case 0x17:
      case 0x18:
        goto switchD_03601ffc_caseD_17;
      case 0x1f:
      case 0x20:
        goto switchD_03601ffc_caseD_1f;
      case 0x21:
        __dest[0x1cc] = (byte)uVar8;
        __dest[0x1ce] = (byte)uVar8;
        bVar1 = *__dest;
        *__dest = bVar1 | auVar14[8];
        uVar8 = (uint)(bVar1 != 0 || (auVar14._8_8_ & 0xff) != 0) << 1;
      case 0x24:
        __dest[0x1d0] = 0x68;
        __dest[0x1d2] = 0x68;
        __dest[0x1c0] = (byte)uVar8;
        __dest[0x1d4] = 5;
        __dest[0x1d6] = 5;
        __dest[0x1d8] = 6;
        uVar8 = 7;
switchD_03601ffc_caseD_26:
        __dest[0x1da] = (byte)uVar8;
        __dest[0x1dc] = 8;
        return __dest;
      case 0x22:
      case 0x23:
        goto switchD_03601ffc_caseD_22;
      case 0x26:
        goto switchD_03601ffc_caseD_26;
      case 0x28:
        pbVar9 = __dest;
        if ((((uint)__dest[3] ^ auVar14._8_4_ & 0xff) >> 2 & 1) != 0) {
          __dest[-0xdf0] = 1;
          plVar4 = *(long **)(__dest + -0xe68);
          __dest[-0xdef] = __dest[-0xdef] | 4;
          pbVar9 = (byte *)0x0;
          if (plVar4 != (long *)0x0) {
            pbVar9 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,4);
          }
        }
        __dest[3] = auVar14[8];
        return pbVar9;
      }
    }
    if (((int)pbVar9 != 6) || (*(ushort *)(param_1 + 200) == 0)) goto LAB_03602020;
    __dest = memcpy(*(void **)(param_1 + 0xd0),param_2,(ulong)*(ushort *)(param_1 + 200) << 1);
switchD_03601ffc_caseD_b:
    bVar2 = *(int *)(param_1 + 0xa8) == 6;
switchD_03601ffc_caseD_c:
    pbVar11 = (byte *)((ulong)*(ushort *)(param_1 + 200) << 1);
switchD_03601ffc_caseD_f:
    pbVar9 = pbVar11;
    if (!bVar2) {
      pbVar9 = (byte *)0x0;
    }
  }
  param_2 = (undefined8 *)((long)param_2 + (long)pbVar9);
LAB_03602020:
  if (param_4 < 3) {
    uVar5 = param_2[1];
    *(undefined8 *)(param_1 + 0x144) = *param_2;
    *(undefined8 *)(param_1 + 0x14c) = uVar5;
    uVar5 = param_2[3];
    *(undefined8 *)(param_1 + 0x154) = param_2[2];
    *(undefined8 *)(param_1 + 0x15c) = uVar5;
  }
  return __dest;
}

