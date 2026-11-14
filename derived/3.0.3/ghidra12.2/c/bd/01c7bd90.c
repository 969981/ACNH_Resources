
void FUN_01c7bd90(long param_1,uint param_2)

{
  long *plVar1;
  undefined *puVar2;
  void *__s;
  undefined8 *__s_00;
  ushort *puVar3;
  long *plVar4;
  long *__s_01;
  void *__s_02;
  undefined8 *__s_03;
  undefined8 *__s_04;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined1 uStack_51;
  
  lVar8 = DAT_05351250;
  if (param_2 != 0) goto switchD_01c7be1c_caseD_3;
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined4 *)(param_1 + 0x48) = 0;
    param_2 = 0;
    goto switchD_01c7be1c_caseD_3;
  }
  param_2 = 0;
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 1:
    plVar1 = (long *)(param_1 + 0x1a8);
    if (*(char *)(param_1 + 0x700) == '\0') {
      memset(plVar1,0,0x558);
    }
    __s_01 = plVar1 + (ulong)*(uint *)(param_1 + 8) * 0x39;
    if (2 < *(uint *)(param_1 + 8)) {
      __s_01 = plVar1;
    }
    if ((char)__s_01[0x38] == '\0') {
      memset(__s_01,0,0x1c0);
      FUN_00186524(__s_01 + 0x25);
      *(undefined1 *)(__s_01 + 0x35) = 0;
      __s_01[0x26] = 0;
      __s_01[0x36] = 0;
      *(undefined1 *)(__s_01 + 0x37) = 0;
      __s_01[0x33] = 0;
      __s_01[0x34] = 0;
      __s_01[0x31] = 0;
      __s_01[0x32] = 0;
      __s_01[0x2f] = 0;
      __s_01[0x30] = 0;
      __s_01[0x2d] = 0;
      __s_01[0x2e] = 0;
      __s_01[0x2b] = 0;
      __s_01[0x2c] = 0;
      __s_01[0x29] = 0;
      __s_01[0x2a] = 0;
      __s_01[0x27] = 0;
      __s_01[0x28] = 0;
    }
    if (*__s_01 == 0) {
      param_2 = (uint)(*(long *)(param_1 + 0x10) == 0 && *(long *)(param_1 + 0x20) == 0);
      break;
    }
    memset((void *)(param_1 + 0x60),0,0x130);
    *(undefined1 *)(param_1 + 400) = 1;
    if ((char)__s_01[0x38] == '\0') {
      memset(__s_01,0,0x1c0);
      FUN_00186524(__s_01 + 0x25);
      *(undefined1 *)(__s_01 + 0x35) = 0;
      __s_01[0x26] = 0;
      __s_01[0x36] = 0;
      *(undefined1 *)(__s_01 + 0x37) = 0;
      __s_01[0x33] = 0;
      __s_01[0x34] = 0;
      __s_01[0x31] = 0;
      __s_01[0x32] = 0;
      __s_01[0x2f] = 0;
      __s_01[0x30] = 0;
      __s_01[0x2d] = 0;
      __s_01[0x2e] = 0;
      __s_01[0x2b] = 0;
      __s_01[0x2c] = 0;
      __s_01[0x29] = 0;
      __s_01[0x2a] = 0;
      __s_01[0x27] = 0;
      __s_01[0x28] = 0;
    }
    uVar7 = FUN_00186b9c(__s_01 + 0x25);
    *(undefined8 *)(param_1 + 0x60) = uVar7;
    if ((char)__s_01[0x38] == '\0') {
      memset(__s_01,0,0x1c0);
      FUN_00186524(__s_01 + 0x25);
      *(undefined1 *)(__s_01 + 0x35) = 0;
      __s_01[0x26] = 0;
      __s_01[0x36] = 0;
      *(undefined1 *)(__s_01 + 0x37) = 0;
      __s_01[0x33] = 0;
      __s_01[0x34] = 0;
      __s_01[0x31] = 0;
      __s_01[0x32] = 0;
      __s_01[0x2f] = 0;
      __s_01[0x30] = 0;
      __s_01[0x2d] = 0;
      __s_01[0x2e] = 0;
      __s_01[0x2b] = 0;
      __s_01[0x2c] = 0;
      __s_01[0x29] = 0;
      __s_01[0x2a] = 0;
      __s_01[0x27] = 0;
      __s_01[0x28] = 0;
    }
    plVar1 = __s_01 + 2;
    uVar9 = (ulong)*(ushort *)((ulong)plVar1 | 2);
    if (uVar9 < 0x3a) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined1 *)(param_1 + 0xa8) = 0;
      *(ulong *)(param_1 + 0x68) = uVar9;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      memcpy((undefined8 *)(param_1 + 0x70),(void *)((ulong)plVar1 | 4),uVar9);
      puVar3 = (ushort *)((long)((ulong)plVar1 | 4) + uVar9);
      uVar9 = (ulong)*puVar3;
      if (0xd5 < uVar9) goto LAB_01c7c02c;
      puVar3 = puVar3 + 1;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0x185) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(ulong *)(param_1 + 0xb0) = uVar9;
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      memcpy((undefined8 *)(param_1 + 0xb8),puVar3,uVar9);
      plVar4 = (long *)((long)puVar3 + uVar9);
      lVar8 = (long)plVar4 - (long)plVar1;
      if (plVar4 <= plVar1) {
        lVar8 = (long)plVar1 - (long)plVar4;
      }
      if (__s_01[1] != lVar8) goto LAB_01c7c02c;
    }
    else {
LAB_01c7c02c:
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x10);
    param_2 = 0;
    if (lVar8 == 0 && *(long *)(param_1 + 0x20) == 0) break;
    lVar6 = *(long *)(param_1 + 0x708);
    if (*(char *)(lVar6 + 0x168) == '\0') {
      *(undefined8 *)(lVar6 + 0xf0) = 0;
      *(undefined8 *)(lVar6 + 0x158) = 0;
      *(undefined8 *)(lVar6 + 0x160) = 0;
      *(undefined8 *)(lVar6 + 0x130) = 0;
      *(undefined8 *)(lVar6 + 0xe8) = 0;
      *(undefined8 *)(lVar6 + 0x148) = 0;
      *(undefined8 *)(lVar6 + 0x150) = 0;
      *(undefined8 *)(lVar6 + 0x138) = 0;
      *(undefined8 *)(lVar6 + 0x140) = 0;
      *(undefined8 *)(lVar6 + 0xf8) = 0;
      *(undefined8 *)(lVar6 + 0x100) = 0;
      *(undefined8 *)(lVar6 + 0xd0) = 0;
      *(undefined8 *)(lVar6 + 0xd8) = 0;
      *(undefined **)(lVar6 + 0xe8) = PTR_DAT_04bc0ec8 + 0x10;
      *(undefined8 **)(lVar6 + 0x100) = (undefined8 *)(lVar6 + 0xf0);
      *(undefined8 *)(lVar6 + 0x108) = 0;
      *(undefined8 *)(lVar6 + 0x108) = 0x10;
      *(undefined8 *)(lVar6 + 0x110) = 0;
      *(undefined8 *)(lVar6 + 0x110) = 0;
      *(undefined8 *)(lVar6 + 0x118) = 0;
      *(undefined8 *)(lVar6 + 0x118) = 0;
      *(undefined8 *)(lVar6 + 0x120) = 0;
      *(undefined8 *)(lVar6 + 0x120) = 0;
      *(undefined8 *)(lVar6 + 0x128) = 0;
      *(undefined8 *)(lVar6 + 0x130) = 0;
      *(undefined8 *)(lVar6 + 0x138) = 0;
      puVar2 = PTR_DAT_04bc0fa0 + 0x10;
      *(undefined8 *)(lVar6 + 0x150) = 0;
      *(undefined **)(lVar6 + 0xd8) = puVar2;
      *(undefined8 *)(lVar6 + 0xe0) = 0;
      *(undefined8 *)(lVar6 + 0x140) = 0;
      *(undefined8 *)(lVar6 + 0x148) = 0;
      lVar8 = *(long *)(param_1 + 0x10);
    }
    if (lVar8 != 0) {
      uVar5 = *(undefined4 *)(lVar6 + 0x158);
      if (*(char *)(param_1 + 0x19c) == '\0') {
        *(undefined1 *)(param_1 + 0x19c) = 1;
      }
      *(undefined4 *)(param_1 + 0x198) = uVar5;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar5 = *(undefined4 *)(lVar6 + 0x160);
      if (*(char *)(param_1 + 0x1a4) == '\0') {
        *(undefined1 *)(param_1 + 0x1a4) = 1;
      }
      param_2 = 0;
      *(undefined4 *)(param_1 + 0x1a0) = uVar5;
      break;
    }
    goto LAB_01c7c3a8;
  case 2:
    param_2 = (uint)*(byte *)(param_1 + 0x40);
    if (*(byte *)(param_1 + 0x40) == 0) break;
    lVar6 = *(long *)(param_1 + 0x708);
    if (*(char *)(lVar6 + 0x388) == '\0') {
      uVar7 = 0;
      *(undefined8 *)(lVar6 + 0x380) = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar6 + 0x380);
    }
    uVar10 = *(uint *)(lVar8 + 0xb0);
    if (uVar10 == 0xffffffff) {
LAB_01c7c3f4:
      *(undefined8 *)(lVar8 + 0xa0) = 0;
      *(undefined8 *)(lVar8 + 0xa8) = 0;
      *(undefined8 *)(lVar8 + 0x58) = 0;
      *(undefined4 *)(lVar8 + 0xb0) = 1;
      *(undefined8 *)(lVar8 + 0x90) = 0;
      *(undefined8 *)(lVar8 + 0x98) = 0;
      *(undefined8 *)(lVar8 + 0x80) = 0;
      *(undefined8 *)(lVar8 + 0x88) = 0;
      *(undefined8 *)(lVar8 + 0x70) = 0;
      *(undefined8 *)(lVar8 + 0x78) = 0;
      *(undefined8 *)(lVar8 + 0x60) = 0;
      *(undefined8 *)(lVar8 + 0x68) = 0;
    }
    else {
      if (uVar10 != 1) {
        (*(code *)(&PTR_LAB_04a430c8)[uVar10])(&uStack_51,(undefined8 *)(lVar8 + 0x58));
        goto LAB_01c7c3f4;
      }
      if (*(char *)(lVar8 + 0xa0) != '\0') goto LAB_01c7c3a8;
    }
    param_2 = 0;
    *(undefined8 *)(lVar8 + 0x98) = uVar7;
    *(undefined1 *)(lVar8 + 0xa0) = 1;
    break;
  case 4:
    uVar10 = *(uint *)(param_1 + 8);
    __s = (void *)(param_1 + 0x1a8);
    if (*(char *)(param_1 + 0x700) == '\0') {
      memset(__s,0,0x558);
    }
    __s_02 = (void *)((long)__s + (ulong)uVar10 * 0x1c8);
    if (2 < uVar10) {
      __s_02 = __s;
    }
    if (*(char *)((long)__s_02 + 0x1c0) != '\0') {
      if (*(char *)((long)__s_02 + 0x1a8) != '\0') {
        (*(code *)**(undefined8 **)((long)__s_02 + 0x130))((long)__s_02 + 0x130);
      }
      *(undefined1 *)((long)__s_02 + 0x1c0) = 0;
    }
    memset(__s_02,0,0x1c0);
    FUN_00186524((long)__s_02 + 0x128);
    param_2 = 0;
    *(undefined1 *)((long)__s_02 + 0x1a8) = 0;
    *(undefined1 *)((long)__s_02 + 0x1c0) = 1;
    *(undefined8 *)((long)__s_02 + 0x130) = 0;
    *(undefined8 *)((long)__s_02 + 0x1b0) = 0;
    *(undefined1 *)((long)__s_02 + 0x1b8) = 0;
    *(undefined8 *)((long)__s_02 + 0x198) = 0;
    *(undefined8 *)((long)__s_02 + 0x1a0) = 0;
    *(undefined8 *)((long)__s_02 + 0x188) = 0;
    *(undefined8 *)((long)__s_02 + 400) = 0;
    *(undefined8 *)((long)__s_02 + 0x178) = 0;
    *(undefined8 *)((long)__s_02 + 0x180) = 0;
    *(undefined8 *)((long)__s_02 + 0x168) = 0;
    *(undefined8 *)((long)__s_02 + 0x170) = 0;
    *(undefined8 *)((long)__s_02 + 0x158) = 0;
    *(undefined8 *)((long)__s_02 + 0x160) = 0;
    *(undefined8 *)((long)__s_02 + 0x148) = 0;
    *(undefined8 *)((long)__s_02 + 0x150) = 0;
    *(undefined8 *)((long)__s_02 + 0x138) = 0;
    *(undefined8 *)((long)__s_02 + 0x140) = 0;
    break;
  case 6:
    uVar10 = *(uint *)(param_1 + 0xc);
    __s_00 = (undefined8 *)(param_1 + 0x1a8);
    __s_03 = __s_00 + (ulong)*(uint *)(param_1 + 8) * 0x39;
    if (2 < *(uint *)(param_1 + 8)) {
      __s_03 = __s_00;
    }
    if (*(char *)(param_1 + 0x700) == '\0') {
      memset(__s_00,0,0x558);
    }
    __s_04 = __s_00 + (ulong)uVar10 * 0x39;
    if (2 < uVar10) {
      __s_04 = __s_00;
    }
    if (*(char *)(__s_04 + 0x38) != '\0') {
      if (*(char *)(__s_04 + 0x35) != '\0') {
        (**(code **)__s_04[0x26])(__s_04 + 0x26);
      }
      *(undefined1 *)(__s_04 + 0x38) = 0;
    }
    memset(__s_04,0,0x1c0);
    FUN_00186524(__s_04 + 0x25);
    *(undefined1 *)(__s_04 + 0x35) = 0;
    __s_04[0x26] = 0;
    __s_04[0x36] = 0;
    *(undefined1 *)(__s_04 + 0x37) = 0;
    *(undefined1 *)(__s_04 + 0x38) = 1;
    __s_04[0x33] = 0;
    __s_04[0x34] = 0;
    __s_04[0x31] = 0;
    __s_04[0x32] = 0;
    __s_04[0x2f] = 0;
    __s_04[0x30] = 0;
    __s_04[0x2d] = 0;
    __s_04[0x2e] = 0;
    __s_04[0x2b] = 0;
    __s_04[0x2c] = 0;
    __s_04[0x29] = 0;
    __s_04[0x2a] = 0;
    __s_04[0x27] = 0;
    __s_04[0x28] = 0;
    if (*(char *)(__s_03 + 0x38) == '\0') {
      memset(__s_03,0,0x1c0);
      FUN_00186524(__s_03 + 0x25);
      *(undefined1 *)(__s_03 + 0x35) = 0;
      __s_03[0x26] = 0;
      __s_03[0x36] = 0;
      *(undefined1 *)(__s_03 + 0x37) = 0;
      __s_03[0x33] = 0;
      __s_03[0x34] = 0;
      __s_03[0x31] = 0;
      __s_03[0x32] = 0;
      __s_03[0x2f] = 0;
      __s_03[0x30] = 0;
      __s_03[0x2d] = 0;
      __s_03[0x2e] = 0;
      __s_03[0x2b] = 0;
      __s_03[0x2c] = 0;
      __s_03[0x29] = 0;
      __s_03[0x2a] = 0;
      __s_03[0x27] = 0;
      __s_03[0x28] = 0;
    }
    uVar10 = *(uint *)(__s_03 + 1);
    memset(__s_04 + 2,0,0x114);
    if (0x113 < uVar10) {
      uVar10 = 0x114;
    }
    __s_04[1] = (ulong)uVar10;
    memcpy(__s_04 + 2,__s_03 + 2,(ulong)uVar10);
    if (*(char *)(__s_03 + 0x38) == '\0') {
      memset(__s_03,0,0x1c0);
      FUN_00186524(__s_03 + 0x25);
      uVar7 = 0;
      *(undefined1 *)(__s_03 + 0x35) = 0;
      __s_03[0x26] = 0;
      __s_03[0x36] = 0;
      *(undefined1 *)(__s_03 + 0x37) = 0;
      __s_03[0x33] = 0;
      __s_03[0x34] = 0;
      __s_03[0x31] = 0;
      __s_03[0x32] = 0;
      __s_03[0x2f] = 0;
      __s_03[0x30] = 0;
      __s_03[0x2d] = 0;
      __s_03[0x2e] = 0;
      __s_03[0x2b] = 0;
      __s_03[0x2c] = 0;
      __s_03[0x29] = 0;
      __s_03[0x2a] = 0;
      __s_03[0x27] = 0;
      __s_03[0x28] = 0;
    }
    else {
      uVar7 = __s_03[0x36];
    }
    __s_04[0x36] = uVar7;
    lVar8 = *(long *)(param_1 + 0x708);
    *__s_04 = *(undefined8 *)(lVar8 + 0x2e8);
    FUN_001865b0(__s_04 + 0x25,lVar8 + 0x4b0);
LAB_01c7c3a8:
    param_2 = 0;
  }
switchD_01c7be1c_caseD_3:
  if (*(char *)(param_1 + 0x5c) == '\0') {
    *(undefined1 *)(param_1 + 0x5c) = 1;
  }
  *(uint *)(param_1 + 0x58) = param_2;
  return;
}

