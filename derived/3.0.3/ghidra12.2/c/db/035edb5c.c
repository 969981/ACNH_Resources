
void FUN_035edb5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined2 uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  
  bVar2 = *(byte *)((long)param_1 + -0x1ee);
  *(undefined1 *)((long)param_1 + 0x162) = 0x80;
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 7) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0x800;
  if (bVar2 < 3) {
    uVar7 = 0xffff;
  }
  else if ((*(byte *)((long)param_1 + 0xc03) >> 2 & 1) == 0) {
    uVar7 = 0xc1c0;
  }
  else {
    uVar7 = 0xd0c8;
  }
  *(undefined2 *)((long)param_1 + 0xb) = uVar7;
  *(undefined4 *)((long)param_1 + 0xd) = 0xff;
  *(undefined8 *)((long)param_1 + 0x66) = 0;
  *(undefined2 *)((long)param_1 + 0x11) = 0x101;
  *(undefined8 *)((long)param_1 + 0x13) = 0;
  *(undefined2 *)((long)param_1 + 0x1b) = 0;
  *(undefined8 *)((long)param_1 + 0x26) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x2e) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x36) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3e) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x46) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x4e) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x56) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x5e) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xa6) = 0;
  *(undefined8 *)((long)param_1 + 0x9e) = 0;
  *(undefined8 *)((long)param_1 + 0x96) = 0;
  *(undefined8 *)((long)param_1 + 0x8e) = 0;
  *(undefined8 *)((long)param_1 + 0x86) = 0;
  *(undefined8 *)((long)param_1 + 0x7e) = 0;
  *(undefined8 *)((long)param_1 + 0x76) = 0;
  *(undefined8 *)((long)param_1 + 0x6e) = 0;
  if (bVar2 < 3) {
    uVar8 = param_1[0x18];
    *(ulong *)((long)param_1 + 0x26) = uVar8;
    *(ulong *)((long)param_1 + 0x6e) = uVar8;
    *(ulong *)((long)param_1 + 0x76) = uVar8;
    uVar7 = (undefined2)uVar8;
  }
  else {
    uVar7 = 0xffff;
    *(undefined1 *)((long)param_1 + 0x6f) = 0x82;
    uVar8 = (ulong)*(ushort *)(param_1 + 0x18);
  }
  *(undefined2 *)((long)param_1 + 0x1e) = uVar7;
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 4) = uVar7;
  puVar1 = param_1 + 0x2f;
  *(undefined2 *)((long)param_1 + 0x22) = uVar7;
  *(undefined2 *)((long)param_1 + 0x24) = uVar7;
  *(undefined4 *)((long)param_1 + 0x112) = 0;
  param_1[0x2d] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)((long)param_1 + 0xe6) = 0;
  *(undefined1 *)((long)param_1 + 0x163) = 0;
  puVar10 = (uint *)((long)param_1 + 0xdc);
  puVar10[0] = 0;
  puVar10[1] = 0;
  *(undefined1 *)((long)param_1 + 0xe9) = 0;
  *(undefined1 *)((long)param_1 + 0xe4) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)((long)param_1 + 0x115) = 0;
  *(undefined8 *)((long)param_1 + 0x16d) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  uVar7 = (undefined2)uVar8;
  if (*(char *)((long)param_1 + -0x1eb) != '\0' || 2 < *(byte *)((long)param_1 + -0x1ee)) {
    uVar7 = 0xffff;
  }
  if (param_1[0xfb] != 0) {
    param_1[0xfc] = param_1[0xfb];
    param_1[0xfe] = param_1[0xfd];
    FUN_035c3b90(puVar1,0xffffffffffffffff,5);
  }
  FUN_035bf1d0(puVar1);
  *(undefined2 *)((long)param_1 + 0x1b4) = uVar7;
  if (*(char *)((long)param_1 + -0x1ec) == '\0') {
    if (*(byte *)((long)param_1 + -0x1ee) < 3) {
      FUN_035c87b4(param_1,0x91);
    }
    else if (*(char *)(param_1 + -0x18) < '\0') {
      FUN_035c8d60(param_1,0x91);
    }
    else if ((*(byte *)((long)param_1 + 0xc03) >> 2 & 1) == 0) {
      FUN_035c8b78(param_1,0x91);
    }
    else {
      FUN_035c8994(param_1,0x91);
    }
    *(undefined1 *)((long)param_1 + 6) = 0xfc;
    if ((*(byte *)((long)param_1 + -0x1ee) < 3) ||
       ((*(byte *)((long)param_1 + 0xc03) >> 2 & 1) != 0)) {
      *(undefined2 *)((long)param_1 + 0x1e) = *(undefined2 *)((long)param_1 + 0x26);
      uVar7 = *(undefined2 *)((long)param_1 + 0x2c);
      *(undefined2 *)(param_1 + 4) = uVar7;
      *(undefined2 *)((long)param_1 + 0x22) = uVar7;
      *(undefined2 *)((long)param_1 + 0x24) = uVar7;
    }
    *(undefined4 *)((long)param_1 + 0x19) = 0x3030300;
    FUN_035c2f98(puVar1,0xfc,0);
    if (((2 < bVar2) || (*(char *)((long)param_1 + -0x1eb) != '\0')) &&
       ((*(byte *)((long)param_1 + 0xc03) >> 2 & 1) != 0)) {
      FUN_035edf80(param_1);
    }
    memcpy((void *)param_1[0x182],&DAT_04192528,0x1a0);
    uVar4 = DAT_041926d0;
    uVar3 = DAT_041926c8;
    if ((bVar2 < 2) && (*(char *)((long)param_1 + 0x3e66) == '\0')) {
      lVar9 = param_1[0x182];
      *(undefined8 *)(lVar9 + 0x1918) = 0;
      *(undefined8 *)(lVar9 + 0x1900) = uVar3;
      uVar5 = DAT_041926f0;
      uVar3 = DAT_041926e8;
      *(undefined8 *)(lVar9 + 0x1908) = uVar4;
      *(undefined8 *)(lVar9 + 0x1928) = uVar5;
      *(undefined8 *)(lVar9 + 0x1920) = uVar3;
      *(undefined8 *)(lVar9 + 0x1910) = 0x19;
    }
    uVar6 = *puVar10;
    if ((*(byte *)((long)param_1 + 0xc03) >> 2 & 1) == 0) {
      uVar6 = uVar6 + 0x10124;
      if (*(uint *)(param_1 + 0x1c) <= uVar6) {
        FUN_035cf210(param_1,uVar6,0);
        return;
      }
    }
    else {
      if (2 < bVar2) {
        uVar6 = uVar6 + 0x10904;
        if (uVar6 < *(uint *)(param_1 + 0x1c)) {
          *puVar10 = uVar6;
        }
        else {
          FUN_035cc180(param_1,uVar6,0);
        }
        param_1[0x1e] = 0x168;
        return;
      }
      uVar6 = uVar6 + 0x11218;
      if (*(uint *)(param_1 + 0x1c) <= uVar6) {
        FUN_035c8f50(param_1,uVar6,0);
        return;
      }
    }
    *puVar10 = uVar6;
  }
  return;
}

