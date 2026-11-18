
void FUN_03612b18(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined2 uVar3;
  ulong uVar4;
  undefined2 uVar5;
  ushort uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)(param_1 + 0x110);
  lVar12 = *(long *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x130) = 0x1150c;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x4128) = 0;
  *(undefined8 *)(param_1 + 0x4130) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x142) = 0;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x4138) = 0;
  *(undefined1 *)(param_1 + 0x146) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined1 *)(param_1 + 0x14c) = 0;
  *(undefined2 *)(param_1 + 0x14e) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined2 *)(param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x156) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0x1000000;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined2 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  FUN_035fef88(param_1 + 0xec0);
  FUN_0360add0(param_1 + 0x1100);
  *(undefined1 *)(param_1 + 0x4100) = 0;
  *(undefined8 *)(param_1 + 0x4108) = 0;
  *(undefined8 *)(param_1 + 0x4110) = 0;
  FUN_035b77b0(param_1 + 0x200);
  *(undefined1 *)(param_1 + 0x241) = 0xf;
  if (((*(char *)(param_1 + 0xd4) == '\0') && (2 < *(byte *)(param_1 + 0xd2))) &&
     ((*(byte *)(param_1 + 0xec3) >> 2 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x241) = 0x3f;
  }
  *(undefined4 *)(param_1 + 0x282) = 0;
  *(undefined1 *)(param_1 + 0x280) = 0;
  *(undefined1 *)(param_1 + 0x242) = 0xff;
  *(undefined1 *)(param_1 + 0x286) = 0;
  *(undefined8 *)(param_1 + 0x10c0) = 0;
  *(undefined4 *)(param_1 + 0x10c8) = 0;
  *(byte *)(param_1 + 0x281) = *(byte *)(param_1 + 0xd4) ^ 1;
  if (*(byte *)(param_1 + 0xd4) == 0) {
    if ((*(byte *)(param_1 + 0xec3) >> 2 & 1) == 0) {
      uVar9 = ((ulong)((int)*(char *)(param_1 + 0xd2) - 3) & 0xff) << 4;
      uVar3 = (undefined2)(0x110011001180 >> (uVar9 & 0x3f));
      uVar5 = (undefined2)(0x10001000000 >> (uVar9 & 0x3f));
      uVar8 = 0xd;
      uVar7 = 0xff56;
    }
    else {
      lVar10 = (long)*(char *)(param_1 + 0xd2) * 2;
      uVar3 = *(undefined2 *)(&DAT_04196ff4 + lVar10);
      uVar5 = *(undefined2 *)(&DAT_04197000 + lVar10);
      uVar7 = *(undefined2 *)(&DAT_0419700c + lVar10);
      uVar8 = *(undefined2 *)(&DAT_04197018 + lVar10);
    }
    *(undefined2 *)(param_1 + 0x10c0) = uVar3;
    *(undefined2 *)(param_1 + 0x10c2) = uVar5;
    *(undefined2 *)(param_1 + 0x10c4) = uVar7;
    *(undefined2 *)(param_1 + 0x10c6) = uVar8;
    *(undefined4 *)(param_1 + 0x10c8) = 0x100fffe;
  }
  *(undefined4 *)(param_1 + 0x10cc) = 0;
  if (*(char *)(param_1 + 0xd4) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x03612dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_03612dc8 + (ulong)(byte)(&DAT_04194bd4)[*(byte *)(param_1 + 0xd2)] * 4))
              (*(undefined1 *)(param_1 + 0xec3));
    return;
  }
  *(undefined2 *)(param_1 + 0x2604) = 8;
  *(undefined8 *)(param_1 + 0x2610) = 0xfffffffffffffff8;
  *(undefined4 *)(param_1 + 0x2600) = 0xfff0000;
  *(undefined8 *)(param_1 + 0x1c0) = 0x6a2ffffffffffff;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1d4) = 1;
  *(undefined4 *)(param_1 + 0x2690) = 1;
  *(undefined2 *)(param_1 + 0x2606) = 0;
  *(undefined1 *)(param_1 + 0x2608) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x2650) = 0;
  *(undefined4 *)(param_1 + 0x2648) = 0;
  *(undefined8 *)(param_1 + 0x2670) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x264c) = 0x100;
  *(undefined8 *)(param_1 + 0x3fa8) = 0;
  *(undefined8 *)(param_1 + 0x2658) = 0;
  *(undefined8 *)(param_1 + 0x2668) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2660) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x264e) = 0;
  *(undefined2 *)(param_1 + 0x2680) = 0;
  *(undefined8 *)(param_1 + 0x2688) = 0;
  *(undefined1 *)(param_1 + 0x2694) = 0;
  *(undefined8 *)(param_1 + 0x3fa0) = 0;
  memset((void *)(param_1 + 0x2696),0,0x1904);
  lVar10 = param_1 + 0x2c0;
  FUN_035edb5c(lVar10);
  *(undefined1 *)(param_1 + 0x40c1) = 0;
  *(undefined8 *)(param_1 + 0x40d8) = 0;
  *(undefined1 *)(param_1 + 0x40c0) = 0;
  *(undefined4 *)(param_1 + 0x40cf) = 0;
  *(undefined8 *)(param_1 + 0x40c8) = 0;
  if (*(char *)(param_1 + 0xd4) == '\0') {
    uVar3 = *(undefined2 *)(param_1 + 0x10ca);
    *(undefined1 *)(param_1 + 0x1080) = 2;
    *(undefined1 *)(param_1 + 0x1082) = 2;
    *(undefined1 *)(param_1 + 0x1084) = 2;
    *(undefined1 *)(param_1 + 0x1086) = 2;
    *(undefined1 *)(param_1 + 0x109e) = 0;
    *(byte *)(param_1 + 0xec0) = *(byte *)(param_1 + 0xec0) | 1;
    *(undefined1 *)(param_1 + 0x1088) = 3;
    *(undefined1 *)(param_1 + 0x108a) = 3;
    *(undefined1 *)(param_1 + 0x108c) = 3;
    *(undefined1 *)(param_1 + 0x108e) = 3;
    *(undefined1 *)(param_1 + 0x1090) = 4;
    *(undefined1 *)(param_1 + 0x1092) = 4;
    *(undefined1 *)(param_1 + 0x1094) = 5;
    *(undefined1 *)(param_1 + 0x1096) = 5;
    *(undefined1 *)(param_1 + 0x1098) = 6;
    *(undefined1 *)(param_1 + 0x109a) = 7;
    *(undefined1 *)(param_1 + 0x109c) = 8;
  }
  else {
    uVar3 = 0;
    *(undefined2 *)(param_1 + 0x10ca) = 0;
  }
  *(undefined2 *)(param_1 + 0x154) = uVar3;
  if (*(byte *)(param_1 + 0xd2) < 3) {
    FUN_0361e468();
  }
  else {
    FUN_0361e6d4(param_1);
  }
  if (*(byte *)(param_1 + 0xd2) < 3) {
    FUN_0361e944();
  }
  else {
    FUN_0361ec10(param_1,*(undefined2 *)(param_1 + 0x10c8));
  }
  uVar6 = *(ushort *)(param_1 + 0x4124);
  if (uVar6 < 0x3e9) {
    uVar6 = 1000;
  }
  if (11999 < uVar6) {
    uVar6 = 12000;
  }
  *(ushort *)(param_1 + 0x4124) = uVar6;
  if (*(char *)(param_1 + 0xd5) == '\0') {
    if (*(char *)(param_1 + 0x4120) == '\0') {
      puVar2 = (undefined *)(param_1 + 0x370);
    }
    else if (*(char *)(param_1 + 0xd2) == '\x01') {
      if (*(char *)(param_1 + 0x4122) == '\0') {
        puVar2 = &DAT_04192878;
      }
      else {
        puVar2 = &DAT_04192868;
      }
    }
    else {
      if (*(char *)(param_1 + 0xd2) != '\0') goto LAB_03612f80;
      if (*(char *)(param_1 + 0x4122) == '\0') {
        puVar2 = &DAT_04192858;
      }
      else {
        puVar2 = &DAT_04192848;
      }
    }
    FUN_035eda40(lVar10,puVar2,0x10);
  }
  else {
    FUN_035edf80(lVar10);
  }
LAB_03612f80:
  uVar3 = *(undefined2 *)(param_1 + 0x380);
  if (*(char *)(param_1 + 0xd5) != '\0' || 2 < *(byte *)(param_1 + 0xd2)) {
    uVar3 = 0xffff;
  }
  *(undefined2 *)(param_1 + 0x474) = uVar3;
  FUN_035c2e60(param_1 + 0x438);
  plVar1 = *(long **)(param_1 + 0x58);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,param_1);
  }
  lVar11 = lVar11 - lVar12;
  uVar9 = 0;
  if (lVar11 != 0) {
    uVar9 = lVar11 + 0x11110;
  }
  uVar4 = uVar9 - 2;
  if ((uVar9 & 3) != 2) {
    uVar4 = uVar9;
  }
  uVar4 = 0x11110 - uVar4;
  *(ulong *)(param_1 + 0x128) = uVar4;
  if (*(ulong *)(param_1 + 0x130) <= uVar4) {
    uVar4 = *(ulong *)(param_1 + 0x130);
  }
  *(ulong *)(param_1 + 0x138) = uVar4;
  return;
}

