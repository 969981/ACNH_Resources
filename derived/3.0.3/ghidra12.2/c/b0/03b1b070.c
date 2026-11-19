
void FUN_03b1b070(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_04b73a88;
  param_1[3] = 0;
  plVar9 = param_1 + 2;
  *plVar9 = 0;
  uVar7 = *(uint *)(param_2 + 8);
  uVar8 = (ulong)uVar7;
  if (uVar7 == 0) {
    return;
  }
  if ((int)uVar7 < 1) goto LAB_03b1b1d0;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar3 = malloc(uVar8 << 3);
    if (pvVar3 != (void *)0x0) goto LAB_03b1b124;
LAB_03b1b13c:
    uVar8 = (ulong)*(uint *)(param_1 + 1);
    if (0 < (int)*(uint *)(param_1 + 1)) goto LAB_03b1b148;
  }
  else {
    if (param_4 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_4 = (long *)(lVar10 + 8);
      if (lVar2 != 0) {
        param_4 = (long *)(lVar2 + 0xa8);
      }
      param_4 = (long *)*param_4;
      if (param_4 == (long *)0x0) goto LAB_03b1b13c;
    }
    pvVar3 = (void *)(**(code **)(*param_4 + 0x30))(param_4,uVar8 << 3,8);
    if (pvVar3 == (void *)0x0) goto LAB_03b1b13c;
LAB_03b1b124:
    *(uint *)(param_1 + 1) = uVar7;
    param_1[2] = pvVar3;
LAB_03b1b148:
    uVar5 = uVar8 & 3;
    if (uVar8 - 1 < 3) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        lVar10 = uVar6 * 8;
        uVar6 = uVar6 + 4;
        *(undefined8 *)(*plVar9 + lVar10) = 0;
        *(undefined8 *)(*plVar9 + lVar10 + 8) = 0;
        *(undefined8 *)(*plVar9 + lVar10 + 0x10) = 0;
        *(undefined8 *)(*plVar9 + lVar10 + 0x18) = 0;
      } while ((uVar8 & 0xfffffffc) != uVar6);
    }
    if (uVar5 != 0) {
      lVar10 = uVar6 << 3;
      do {
        uVar5 = uVar5 - 1;
        *(undefined8 *)(*plVar9 + lVar10) = 0;
        lVar10 = lVar10 + 8;
      } while (uVar5 != 0);
    }
  }
  uVar7 = *(uint *)(param_2 + 8);
  if (uVar7 == 0) {
    return;
  }
LAB_03b1b1d0:
  lVar10 = *(long *)(param_2 + 0x10);
  uVar8 = 0;
  uVar5 = 0;
  do {
    lVar2 = *(long *)(lVar10 + (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3));
    if (lVar2 != 0) {
      lVar11 = (long)(int)uVar5;
      lVar12 = *(long *)(param_2 + 0x18);
      uVar4 = FUN_03b185ec(param_3,*(long *)(lVar2 + 0x60) +
                                   (ulong)*(uint *)(*(long *)(lVar2 + 0x60) + 0xc),lVar2 == lVar12);
      lVar1 = lVar11;
      if (*(uint *)(param_1 + 1) <= (uint)uVar8) {
        lVar1 = 0;
      }
      *(undefined8 *)(param_1[2] + lVar1 * 8) = uVar4;
      if (lVar2 == lVar12) {
        if (*(uint *)(param_1 + 1) <= (uint)uVar8) {
          lVar11 = 0;
        }
        param_1[3] = *(undefined8 *)(param_1[2] + lVar11 * 8);
      }
    }
    uVar8 = uVar5 + 1;
    uVar5 = uVar8 & 0xffffffff;
  } while (uVar7 != (uint)uVar8);
  return;
}

