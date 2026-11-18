
void FUN_032ea480(int *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ushort *puVar10;
  long lVar11;
  ushort uVar12;
  long lVar13;
  void *__dest;
  void *__src;
  ushort local_3c [2];
  int local_38;
  int iStack_34;
  
  puVar5 = PTR_DAT_04bc1118;
  if (*(int *)(*(long *)(*(long *)PTR_DAT_04bc1118 + 0x20) + 0x1050) == 1 ||
      (*(uint *)(*(long *)(*(long *)PTR_DAT_04bc1118 + 0x20) + 0x106c) & 0x82) != 0) {
    return;
  }
  iVar3 = *param_1;
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  iVar6 = param_1[2];
  if (iVar3 <= param_1[2]) {
    iVar6 = iVar3;
  }
  if (iVar6 != -1) {
    iVar3 = iVar6;
  }
  param_1[3] = iVar3;
  FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
  if (param_1[6] == 3) {
    FUN_032ea740(param_1);
  }
  if ((0 < param_1[0x11d]) && (*(char *)(*(long *)(*(long *)puVar5 + 0x20) + 0x1a5d) != '\0')) {
    FUN_032ede60(*(long *)(*(long *)puVar5 + 0x20) + 0x1800,*(undefined8 *)(param_1 + 0x11a));
  }
  FUN_032e81e0(param_1);
  iVar6 = 0;
  uVar12 = 0x20;
  local_3c[0] = 0x20;
  local_3c[1] = 0;
  puVar10 = local_3c;
  do {
    if (uVar12 == 0xe) {
      uVar4 = puVar10[3] >> 1;
      puVar10 = puVar10 + 3 + uVar4;
      iVar6 = iVar6 + (uint)uVar4 + 3;
    }
    else if (uVar12 == 0) break;
    iVar3 = iVar6 + 2;
    if (uVar12 != 0xf) {
      iVar3 = iVar6;
    }
    iVar6 = iVar3 + 1;
    puVar10 = puVar10 + (ulong)(uVar12 == 0xf) * 2 + 1;
    uVar12 = *puVar10;
  } while( true );
  iVar6 = FUN_03363a30(*(undefined8 *)(param_1 + 8),*param_1,local_3c,iVar6);
  *param_1 = *param_1 + iVar6;
  param_1[2] = -1;
  uVar7 = FUN_032e84e0(param_1);
  if ((uVar7 & 1) != 0) {
    FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
    __dest = *(void **)(param_1 + 0x1de);
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    __src = *(void **)(param_1 + 0x1a8);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
      lVar11 = 0;
      do {
        if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar11 * 2) == 0) goto LAB_032ea65c;
        lVar13 = *(long *)(param_1 + 0x1a8) + lVar11 * 2;
        if (*(short *)(lVar13 + 2) == 0) {
          lVar11 = lVar11 + 1;
          goto LAB_032ea65c;
        }
        if (*(short *)(lVar13 + 4) == 0) {
          lVar11 = lVar11 + 2;
          goto LAB_032ea65c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_032ea65c:
      uVar1 = (uint)lVar11;
      if (param_1[0x1e0] <= (int)(uint)lVar11) {
        uVar1 = param_1[0x1e0] - 1;
      }
      uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
      memcpy(__dest,__src,uVar7);
      *(undefined2 *)((long)__dest + uVar7) = 0;
    }
    param_1[1] = *param_1;
    FUN_03363ed0(param_1 + 0x11e,*(undefined8 *)(param_1 + 0x11a));
    param_1[0x185] = param_1[0x183];
    local_38 = param_1[3];
    iStack_34 = *param_1;
    puVar8 = *(undefined8 **)(param_1 + 4);
    param_1[0x186] = param_1[0x184];
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,&local_38);
    }
    lVar13 = *(long *)PTR_DAT_04bb4fb0;
    uVar9 = FUN_03368ef0(DAT_05734ea0,0);
    lVar11 = *(long *)(lVar13 + 8);
    if (lVar11 != 0) {
      lVar2 = 0;
      if (*(char *)(lVar11 + 0x38) != '\0') {
        lVar2 = lVar11 + 8;
      }
      FUN_03366350(lVar13,lVar2,s_Decide_Space_04b20706,1,uVar9,1);
    }
  }
  return;
}

