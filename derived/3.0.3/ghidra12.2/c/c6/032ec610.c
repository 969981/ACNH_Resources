
void FUN_032ec610(int *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ushort uVar10;
  void *__dest;
  void *__src;
  ulong uVar11;
  undefined8 local_58;
  undefined2 local_50;
  int local_48;
  int iStack_44;
  
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  local_50 = 0;
  local_58 = 0;
  if (param_1[0x11d] < 1) {
    if (*param_1 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(ushort *)(**(long **)(param_1 + 8) + (long)(*param_1 + -1) * 2);
    }
    uVar4 = FUN_03363390(uVar10);
    if (uVar10 == uVar4) goto LAB_032ec770;
    iVar3 = *param_1;
    if (iVar3 == 0) {
      return;
    }
    if ((((0 < iVar3) && (plVar8 = *(long **)(param_1 + 8), iVar3 <= (int)plVar8[1])) &&
        (*(ushort *)(*plVar8 + (ulong)(iVar3 - 1U) * 2) = uVar4, uVar4 == 0)) &&
       (iVar3 <= *(int *)((long)plVar8 + 0xc))) {
      *(uint *)((long)plVar8 + 0xc) = iVar3 - 1U;
    }
    param_1[2] = -1;
    uVar11 = FUN_032e84e0(param_1);
    if ((uVar11 & 1) == 0) {
      return;
    }
    FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
    __dest = *(void **)(param_1 + 0x1de);
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    __src = *(void **)(param_1 + 0x1a8);
    if (__dest == __src) goto LAB_032ec8f0;
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    lVar7 = 0;
    do {
      if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar7 * 2) == 0) goto LAB_032ec8c8;
      lVar9 = *(long *)(param_1 + 0x1a8) + lVar7 * 2;
      if (*(short *)(lVar9 + 2) == 0) goto LAB_032ec8bc;
      if (*(short *)(lVar9 + 4) == 0) goto LAB_032ec8c4;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
  }
  else {
    uVar10 = *(ushort *)(*(long *)(param_1 + 0x11a) + (ulong)(param_1[0x11d] - 1) * 2);
    uVar4 = FUN_03363390(uVar10);
    if (uVar10 == uVar4) {
LAB_032ec770:
      lVar9 = *(long *)PTR_DAT_04bb4fb0;
      uVar5 = FUN_03368ef0(DAT_05734ea0,0);
      lVar7 = *(long *)(lVar9 + 8);
      if (lVar7 == 0) {
        return;
      }
      lVar2 = 0;
      if (*(char *)(lVar7 + 0x38) != '\0') {
        lVar2 = lVar7 + 8;
      }
      FUN_03366350(lVar9,lVar2,s_Decide_Error_04b209a3,1,uVar5,0);
      return;
    }
    iVar3 = param_1[0x11d];
    if (0 < iVar3) {
      param_1[0x11d] = iVar3 - 1U;
      *(undefined2 *)(*(long *)(param_1 + 0x11a) + (ulong)(iVar3 - 1U) * 2) = 0;
      iVar3 = param_1[0x11d];
    }
    if (iVar3 < param_1[0x11c] + -1) {
      *(ushort *)(*(long *)(param_1 + 0x11a) + (long)iVar3 * 2) = uVar4;
      iVar3 = param_1[0x11d];
      param_1[0x11d] = (int)((long)iVar3 + 1);
      *(undefined2 *)(*(long *)(param_1 + 0x11a) + ((long)iVar3 + 1) * 2) = 0;
    }
    FUN_032ea1b0(param_1,4);
    FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
    __dest = *(void **)(param_1 + 0x1de);
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    __src = *(void **)(param_1 + 0x1a8);
    if (__dest == __src) goto LAB_032ec8f0;
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    lVar7 = 0;
    do {
      if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar7 * 2) == 0) goto LAB_032ec8c8;
      lVar9 = *(long *)(param_1 + 0x1a8) + lVar7 * 2;
      if (*(short *)(lVar9 + 2) == 0) goto LAB_032ec8bc;
      if (*(short *)(lVar9 + 4) == 0) goto LAB_032ec8c4;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
  }
  lVar7 = 0;
  goto LAB_032ec8c8;
LAB_032ec8bc:
  lVar7 = lVar7 + 1;
  goto LAB_032ec8c8;
LAB_032ec8c4:
  lVar7 = lVar7 + 2;
LAB_032ec8c8:
  uVar1 = (uint)lVar7;
  if (param_1[0x1e0] <= (int)(uint)lVar7) {
    uVar1 = param_1[0x1e0] - 1;
  }
  uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
  memcpy(__dest,__src,uVar11);
  *(undefined2 *)((long)__dest + uVar11) = 0;
LAB_032ec8f0:
  param_1[1] = *param_1;
  FUN_03363ed0(param_1 + 0x11e,*(undefined8 *)(param_1 + 0x11a));
  param_1[0x185] = param_1[0x183];
  iStack_44 = *param_1;
  puVar6 = *(undefined8 **)(param_1 + 4);
  param_1[0x186] = param_1[0x184];
  local_48 = iStack_44 + -1;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,&local_48);
  }
  local_58._0_4_ = (uint)uVar4;
  FUN_03366840(*(undefined8 *)PTR_DAT_04bb4fb0,&local_58);
  return;
}

