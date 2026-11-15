
void FUN_01e2543c(long param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ushort uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 local_60;
  char *pcStack_58;
  
  lVar7 = *(long *)PTR_DAT_04bb46b0;
  if (lVar7 == 0) {
LAB_01e254b8:
    lVar7 = 0;
  }
  else {
    puVar8 = *(undefined8 **)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar8 + 0x38))();
      lVar7 = 0;
      if (lVar4 != 0) {
        lVar7 = lVar4 + 0x70;
      }
    }
    else {
      if ((puVar8 == (undefined8 *)0x0) || ((long *)puVar8[0x26] == (long *)0x0)) goto LAB_01e254b8;
      lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
    }
  }
  puVar10 = *(undefined **)(param_1 + 8);
  plVar1 = (long *)(lVar7 + 0x1c24c8);
  if (puVar10 != &DAT_04072643) {
    iVar2 = 0x15;
    if (*(int *)(param_1 + 0x10) < 0x16) {
      iVar2 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(puVar10,&DAT_04072643,(long)iVar2);
    puVar10[iVar2] = 0;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  if (lVar7 == 0) {
    local_60 = (undefined *)0x8a5;
    FUN_0277d4ac(&local_60);
  }
  else {
    if ((*(long **)(lVar7 + 0x1c24e8) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x1c24e8), puVar8 == (undefined8 *)0x0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)*puVar8)();
      uVar5 = uVar5 & 0xffffffff;
    }
    local_60 = (undefined *)(ulong)*(ushort *)(*(long *)(lVar7 + 0x1c24d0) + *plVar1 + 0x900);
    FUN_0277d4ac(&local_60);
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x1c24e8) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x1c24e8) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  iVar2 = FUN_0277d6c4(&local_60);
  if (iVar2 < 0x8ed) {
    if ((iVar2 == 0x8a5) || (iVar2 != 0x8a6)) {
LAB_01e255d8:
      uVar6 = 0x1026;
    }
    else {
      uVar6 = 0xf88;
    }
  }
  else if (iVar2 == 0x8ed) {
    uVar6 = 0x4ef;
  }
  else if (iVar2 == 0x8ee) {
    uVar6 = 0x1020;
  }
  else {
    if (iVar2 != 0x8ef) goto LAB_01e255d8;
    uVar6 = 0xfab;
  }
  local_60 = (undefined *)(ulong)uVar6;
  FUN_0277d4ac(&local_60);
  *(int *)(param_1 + 0x54) = (int)local_60;
  *(undefined4 *)(param_1 + 0x58) = local_60._4_4_;
  if (lVar7 == 0) {
    local_60 = (undefined *)0x8a5;
    FUN_0277d4ac(&local_60);
  }
  else {
    if ((*(long **)(lVar7 + 0x1c24e8) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x1c24e8), puVar8 == (undefined8 *)0x0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)*puVar8)();
      uVar5 = uVar5 & 0xffffffff;
    }
    local_60 = (undefined *)(ulong)*(ushort *)(*(long *)(lVar7 + 0x1c24d0) + *plVar1 + 0x900);
    FUN_0277d4ac(&local_60);
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x1c24e8) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x1c24e8) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  iVar2 = FUN_0277d6c4(&local_60);
  if (iVar2 < 0x8ed) {
    if ((iVar2 != 0x8a5) && (iVar2 == 0x8a6)) {
      uVar6 = 0xf87;
      goto LAB_01e256e4;
    }
  }
  else {
    if (iVar2 == 0x8ed) {
      uVar6 = 0x11c2;
      goto LAB_01e256e4;
    }
    if (iVar2 == 0x8ee) {
      uVar6 = 0x101f;
      goto LAB_01e256e4;
    }
    if (iVar2 == 0x8ef) {
      uVar6 = 0xfac;
      goto LAB_01e256e4;
    }
  }
  uVar6 = 0xa24;
LAB_01e256e4:
  local_60 = (undefined *)(ulong)uVar6;
  FUN_0277d4ac(&local_60);
  *(int *)(param_1 + 0x5c) = (int)local_60;
  *(undefined4 *)(param_1 + 0x60) = local_60._4_4_;
  local_60 = (undefined *)0x9ff;
  FUN_0277d4ac(&local_60);
  puVar10 = PTR_DAT_04bb2020;
  *(int *)(param_1 + 100) = (int)local_60;
  *(undefined4 *)(param_1 + 0x68) = local_60._4_4_;
  local_60 = puVar10 + 0x10;
  pcStack_58 = "ImmQ_A_OutdoorPattern";
  uVar5 = FUN_0273f0a0(&local_60);
  if ((uVar5 & 1) == 0) {
    local_60 = (undefined *)0xd46;
    FUN_0277d4ac(&local_60);
    *(int *)(param_1 + 0x3c) = (int)local_60;
    *(undefined4 *)(param_1 + 0x40) = local_60._4_4_;
    local_60 = (undefined *)0xd45;
    FUN_0277d4ac(&local_60);
    *(int *)(param_1 + 0x44) = (int)local_60;
    *(undefined4 *)(param_1 + 0x48) = local_60._4_4_;
    local_60 = (undefined *)0xc9d;
  }
  else {
    local_60 = (undefined *)0xe5b;
    FUN_0277d4ac(&local_60);
    *(int *)(param_1 + 0x3c) = (int)local_60;
    *(undefined4 *)(param_1 + 0x40) = local_60._4_4_;
    local_60 = (undefined *)0x492;
    FUN_0277d4ac(&local_60);
    *(int *)(param_1 + 0x44) = (int)local_60;
    *(undefined4 *)(param_1 + 0x48) = local_60._4_4_;
    local_60 = (undefined *)0x4f2;
  }
  FUN_0277d4ac(&local_60);
  *(undefined2 *)(param_1 + 0x4c) = (undefined2)local_60;
  puVar11 = *(undefined **)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x4f) = local_60._3_1_;
  *(undefined4 *)(param_1 + 0x50) = local_60._4_4_;
  *(undefined1 *)(param_1 + 0x4e) = local_60._2_1_;
  if (puVar11 != &DAT_04077814) {
    iVar2 = 0x15;
    if (*(int *)(param_1 + 0x80) < 0x16) {
      iVar2 = *(int *)(param_1 + 0x80) + -1;
    }
    memcpy(puVar11,&DAT_04077814,(long)iVar2);
    puVar11[iVar2] = 0;
  }
  *(undefined2 *)(param_1 + 0xaa) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 5;
  local_60 = (undefined *)0xc85;
  FUN_0277d4ac(&local_60);
  *(int *)(param_1 + 0xc4) = (int)local_60;
  *(undefined4 *)(param_1 + 200) = local_60._4_4_;
  local_60 = (undefined *)0x61d;
  FUN_0277d4ac(&local_60);
  *(int *)(param_1 + 0xcc) = (int)local_60;
  *(undefined4 *)(param_1 + 0xd0) = local_60._4_4_;
  if (lVar7 == 0) {
    local_60 = (undefined *)0x0;
  }
  else {
    if ((*(long **)(lVar7 + 0x1c24e8) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x1c24e8), puVar8 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar8)();
      uVar3 = uVar3 ^ 1;
    }
    local_60 = (undefined *)
               CONCAT44(local_60._4_4_,
                        (uint)*(byte *)(*(long *)(lVar7 + 0x1c24d0) + *plVar1 + 0x925));
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar7 + 0x1c24e8) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x1c24e8) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  if ((int)local_60 - 1U < 7) {
    uVar6 = *(ushort *)(&DAT_04178c74 + (long)(int)((int)local_60 - 1U) * 2);
  }
  else {
    uVar6 = 0x153c;
  }
  local_60 = (undefined *)(ulong)uVar6;
  FUN_0277d4ac(&local_60);
  *(int *)(param_1 + 0xd4) = (int)local_60;
  *(undefined4 *)(param_1 + 0xd8) = local_60._4_4_;
  local_60 = puVar10 + 0x10;
  pcStack_58 = "ImmQ_B_OutdoorPattern";
  uVar5 = FUN_0273f0a0(&local_60);
  if ((uVar5 & 1) == 0) {
    local_60 = (undefined *)0x65a;
    FUN_0277d4ac(&local_60);
    *(int *)(param_1 + 0xac) = (int)local_60;
    *(undefined4 *)(param_1 + 0xb0) = local_60._4_4_;
    local_60 = (undefined *)0x65b;
    FUN_0277d4ac(&local_60);
    *(int *)(param_1 + 0xb4) = (int)local_60;
    *(undefined4 *)(param_1 + 0xb8) = local_60._4_4_;
    local_60 = (undefined *)0x14d;
  }
  else {
    local_60 = (undefined *)0xa1a;
    FUN_0277d4ac(&local_60);
    *(int *)(param_1 + 0xac) = (int)local_60;
    *(undefined4 *)(param_1 + 0xb0) = local_60._4_4_;
    local_60 = (undefined *)0xd44;
    FUN_0277d4ac(&local_60);
    *(int *)(param_1 + 0xb4) = (int)local_60;
    *(undefined4 *)(param_1 + 0xb8) = local_60._4_4_;
    local_60 = (undefined *)0x14b;
  }
  FUN_0277d4ac(&local_60);
  *(undefined2 *)(param_1 + 0xbc) = (undefined2)local_60;
  puVar11 = *(undefined **)(param_1 + 0xe8);
  *(undefined1 *)(param_1 + 0xbf) = local_60._3_1_;
  *(undefined4 *)(param_1 + 0xc0) = local_60._4_4_;
  *(undefined1 *)(param_1 + 0xbe) = local_60._2_1_;
  if (puVar11 != &DAT_040a13e0) {
    iVar2 = 0x15;
    if (*(int *)(param_1 + 0xf0) < 0x16) {
      iVar2 = *(int *)(param_1 + 0xf0) + -1;
    }
    memcpy(puVar11,&DAT_040a13e0,(long)iVar2);
    puVar11[iVar2] = 0;
  }
  *(undefined2 *)(param_1 + 0x11a) = 0;
  *(undefined1 *)(param_1 + 0x118) = 4;
  local_60 = (undefined *)0xa2d;
  FUN_0277d4ac(&local_60);
  *(int *)(param_1 + 0x134) = (int)local_60;
  *(undefined4 *)(param_1 + 0x138) = local_60._4_4_;
  local_60 = (undefined *)0x779;
  FUN_0277d4ac(&local_60);
  *(int *)(param_1 + 0x13c) = (int)local_60;
  *(undefined4 *)(param_1 + 0x140) = local_60._4_4_;
  local_60 = (undefined *)0xfe9;
  FUN_0277d4ac(&local_60);
  *(int *)(param_1 + 0x144) = (int)local_60;
  *(undefined4 *)(param_1 + 0x148) = local_60._4_4_;
  local_60 = puVar10 + 0x10;
  pcStack_58 = "ImmQ_C_OutdoorPattern";
  uVar5 = FUN_0273f0a0(&local_60);
  if ((uVar5 & 1) == 0) {
    local_60 = (undefined *)0xfc8;
    FUN_0277d4ac(&local_60);
    *(int *)(param_1 + 0x11c) = (int)local_60;
    *(undefined4 *)(param_1 + 0x120) = local_60._4_4_;
    local_60 = (undefined *)0xfca;
    FUN_0277d4ac(&local_60);
    *(int *)(param_1 + 0x124) = (int)local_60;
    *(undefined4 *)(param_1 + 0x128) = local_60._4_4_;
    uVar9 = 0x370;
  }
  else {
    local_60 = (undefined *)0xfc3;
    FUN_0277d4ac(&local_60);
    *(int *)(param_1 + 0x11c) = (int)local_60;
    *(undefined4 *)(param_1 + 0x120) = local_60._4_4_;
    local_60 = (undefined *)0xfc6;
    FUN_0277d4ac(&local_60);
    *(int *)(param_1 + 0x124) = (int)local_60;
    uVar9 = 0x916;
    *(undefined4 *)(param_1 + 0x128) = local_60._4_4_;
  }
  local_60 = (undefined *)uVar9;
  FUN_0277d4ac(&local_60);
  *(undefined2 *)(param_1 + 300) = (undefined2)local_60;
  *(undefined1 *)(param_1 + 0x12f) = local_60._3_1_;
  *(undefined4 *)(param_1 + 0x130) = local_60._4_4_;
  *(undefined1 *)(param_1 + 0x12e) = local_60._2_1_;
  return;
}

