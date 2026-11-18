
void FUN_033bed10(long param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 *__src;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined *local_120;
  undefined1 *puStack_118;
  int local_110;
  undefined1 auStack_10c [63];
  undefined1 local_cd;
  undefined *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined1 local_b4 [63];
  undefined1 local_75;
  
  if (0x13 < *(uint *)(param_1 + 0x50) ||
      (1 << (ulong)(*(uint *)(param_1 + 0x50) & 0x1f) & 0x8c010U) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    return;
  }
  if (DAT_05635578 == 0) {
    return;
  }
  local_130 = 0;
  uStack_12c = 0;
  lVar7 = DAT_05635578 + 0x2680;
  local_110 = 0x40;
  local_140 = 0;
  local_138 = 0x3f800000;
  uStack_134 = 0;
  local_128 = 0x40a00000;
  local_cd = 0;
  local_120 = PTR_DAT_04bb2f70 + 0x10;
  puStack_118 = auStack_10c;
  (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
  __src = DAT_05743420;
  if (auStack_10c != DAT_05743420) {
    (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
    lVar6 = 0;
    do {
      if (DAT_05743420[lVar6] == '\0') goto LAB_033bee60;
      if (DAT_05743420[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_033bee60;
      }
      if (DAT_05743420[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_033bee60;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_033bee60:
    iVar3 = (int)lVar6;
    if (local_110 <= (int)lVar6) {
      iVar3 = local_110 + -1;
    }
    memcpy(auStack_10c,__src,(long)iVar3);
    auStack_10c[iVar3] = 0;
  }
  local_c0 = local_b4;
  local_b8 = 0x40;
  local_75 = 0;
  local_b4[0] = 0;
  local_120 = PTR_DAT_04bb2bc0 + 0x10;
  local_c8 = local_120;
  FUN_033bb4ec(param_1,&local_140,*param_2);
  local_148 = 0;
  *(undefined4 *)(param_1 + 0xb0) = *param_2;
  local_150 = 0x461c4000;
  local_144 = local_138;
  iVar3 = FUN_02b4259c(lVar7,&local_150);
  *(int *)(param_1 + 0x6c) = iVar3;
  if (iVar3 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = 8;
  *(undefined4 *)(param_1 + 0x7c) = local_140._4_4_;
  *(undefined4 *)(param_1 + 0x78) = (undefined4)local_140;
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 1;
  *(ulong *)(param_1 + 0x80) = CONCAT44(local_130,uStack_134);
  *(undefined4 *)(param_1 + 0x88) = uStack_12c;
  puVar2 = PTR_DAT_04bb2200;
  lVar7 = *(long *)PTR_DAT_04bb2200;
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x58) != 0) {
      FUN_01613a48(local_128,0x44200000,*(long *)(lVar7 + 0x58),2);
      lVar7 = *(long *)puVar2;
      if (lVar7 == 0) goto LAB_033bef74;
    }
    ppuVar1 = &local_120;
    if (*(char *)(param_1 + 0x68) != '\0') {
      ppuVar1 = &local_c8;
    }
    FUN_01640a40(*(undefined8 *)(lVar7 + 0x70),ppuVar1);
  }
LAB_033bef74:
  *(undefined4 *)(param_1 + 0x11c4) = 0;
  *(undefined8 *)(param_1 + 0x11bc) = 0;
  lVar7 = *(long *)(param_2 + 2);
  if (lVar7 == 0) {
    lVar7 = *(long *)(param_1 + 0x60);
    if (lVar7 == 0) {
      return;
    }
  }
  else {
    *(long *)(param_1 + 0x60) = lVar7;
  }
  if ((*(long **)(lVar7 + 0x1b0) != (long *)0x0) &&
     (uVar4 = (**(code **)(**(long **)(lVar7 + 0x1b0) + 0x58))(), (uVar4 & 1) != 0)) {
    plVar8 = *(long **)(param_1 + 0x60);
    plVar5 = (long *)plVar8[0x36];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      (**(code **)(*plVar8 + 0xa8))(plVar8);
    }
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 8;
  }
  return;
}

