
undefined8
FUN_00180180(long param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6,
            char *param_7,int param_8)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  uint uVar12;
  undefined4 uVar13;
  
  if (param_7 == (char *)0x0) {
    return 0xfffffffa;
  }
  if (param_8 != 0x70) {
    return 0xfffffffa;
  }
  if (*param_7 != '1') {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  pcVar11 = *(code **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (pcVar11 == (code *)0x0) {
    pcVar11 = FUN_0017eae0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(code **)(param_1 + 0x40) = FUN_0017eae0;
    if (*(long *)(param_1 + 0x48) == 0) goto code_r0x00180248;
LAB_001801dc:
    uVar12 = 6;
    if (param_2 != 0xffffffff) {
      uVar12 = param_2;
    }
    if (-1 < (int)param_4) goto LAB_001801ec;
LAB_00180260:
    if (param_4 < 0xfffffff1) {
      return 0xfffffffe;
    }
    uVar13 = 0;
    uVar5 = -param_4;
  }
  else {
    if (*(long *)(param_1 + 0x48) != 0) goto LAB_001801dc;
code_r0x00180248:
    *(undefined1 **)(param_1 + 0x48) = &LAB_0017eaf0;
    uVar12 = 6;
    if (param_2 != 0xffffffff) {
      uVar12 = param_2;
    }
    if ((int)param_4 < 0) goto LAB_00180260;
LAB_001801ec:
    uVar5 = param_4 - 0x10;
    if (param_4 < 0x10) {
      bVar6 = false;
      uVar13 = 1;
      uVar5 = param_4;
      goto joined_r0x00180294;
    }
    uVar13 = 2;
  }
  bVar6 = true;
joined_r0x00180294:
  if (((((param_6 < 5) && (uVar12 < 10)) && (param_3 == 8)) &&
      ((0xfffffff6 < param_5 - 10 && (7 < uVar5)))) && (uVar5 < 0x10)) {
    bVar1 = false;
    if (uVar5 == 8) {
      bVar1 = bVar6;
    }
    if (!bVar1) {
      plVar7 = (long *)(*pcVar11)(*(undefined8 *)(param_1 + 0x50),1,0x1740);
      if (plVar7 != (long *)0x0) {
        *(long **)(param_1 + 0x38) = plVar7;
        uVar2 = 9;
        if (uVar5 != 8) {
          uVar2 = uVar5;
        }
        *plVar7 = param_1;
        iVar3 = 1 << (ulong)(uVar2 & 0x1f);
        *(undefined4 *)(plVar7 + 1) = 0x2a;
        *(int *)(plVar7 + 0xb) = iVar3 + -1;
        iVar4 = 0x80 << (ulong)(param_5 & 0x1f);
        *(int *)(plVar7 + 10) = iVar3;
        *(uint *)((long)plVar7 + 0x54) = uVar2;
        *(undefined4 *)(plVar7 + 6) = uVar13;
        plVar7[7] = 0;
        *(int *)((long)plVar7 + 0x84) = iVar4;
        *(uint *)(plVar7 + 0x11) = param_5 + 7;
        *(int *)((long)plVar7 + 0x8c) = iVar4 + -1;
        *(uint *)(plVar7 + 0x12) = (param_5 + 9 & 0xff) / 3;
        lVar8 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),iVar3,2);
        plVar7[0xc] = lVar8;
        lVar8 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),(int)plVar7[10],2);
        plVar7[0xe] = lVar8;
        lVar8 = (**(code **)(param_1 + 0x40))
                          (*(undefined8 *)(param_1 + 0x50),*(undefined4 *)((long)plVar7 + 0x84),2);
        plVar7[0xf] = lVar8;
        iVar3 = 0x40 << (ulong)(param_5 & 0x1f);
        plVar7[0x2e7] = 0;
        *(int *)(plVar7 + 0x2e1) = iVar3;
        lVar9 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),iVar3,4);
        uVar5 = *(uint *)(plVar7 + 0x2e1);
        plVar7[2] = lVar9;
        plVar7[3] = (ulong)uVar5 << 2;
        lVar8 = DAT_04bcb758;
        if (((plVar7[0xc] != 0) && (plVar7[0xe] != 0)) && ((plVar7[0xf] != 0 && (lVar9 != 0)))) {
          *(uint *)((long)plVar7 + 0xc4) = uVar12;
          *(uint *)(plVar7 + 0x19) = param_6;
          plVar7[0x2e0] = lVar9 + (ulong)uVar5;
          *(uint *)(plVar7 + 0x2e2) = uVar5 * 3 + -3;
          *(undefined1 *)(plVar7 + 9) = 8;
          uVar10 = FUN_001805a0(param_1);
          return uVar10;
        }
        *(undefined4 *)(plVar7 + 1) = 0x29a;
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar8 + 0x30);
        FUN_00180470(param_1);
      }
      return 0xfffffffc;
    }
  }
  return 0xfffffffe;
}

