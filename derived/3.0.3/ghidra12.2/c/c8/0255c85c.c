
undefined8 FUN_0255c85c(byte *param_1)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  uint *puVar10;
  long *plVar11;
  uint uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  uint local_68 [2];
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  if (7 < *param_1) {
    return 0;
  }
  iVar4 = FUN_00a74b78();
  puVar3 = PTR_DAT_04bb27c0;
  if ((param_1[0x15] != 0) && (iVar4 == 0x13)) {
    return 0;
  }
  puVar10 = (uint *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar10 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0;
  }
  uVar12 = *puVar10;
  if ((((uVar12 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar12 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_0255c984;
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0255c984:
    uVar12 = 0;
  }
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  lVar9 = plVar11[0x2a];
  uVar1 = *(uint *)(plVar11 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar5 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3770);
  if ((int)lVar9 != 1) {
    return 0;
  }
  if ((uVar5 & uVar12) == 0) {
    return 0;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 0;
  }
  local_50 = *(undefined8 *)(param_1 + 4);
  local_48 = *(undefined4 *)(param_1 + 0xc);
  if (param_1[0x1c] != 0) {
    plVar6 = (long *)plVar11[0xc];
    if (plVar6 == (long *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        plVar6 = &DAT_05240280;
      }
      else {
        plVar6 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar6 + 0x4e8))(plVar6,1);
  }
  uVar13 = FUN_016e026c(0,&local_50,0,0);
  local_50 = CONCAT44(uVar13,(undefined4)local_50);
  (**(code **)(*(long *)plVar11[0xd] + 0x140))((long *)plVar11[0xd],&local_50,1);
  lVar9 = (**(code **)(*(long *)plVar11[0xd] + 0x148))();
  *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x18) != 0) {
    *(int *)(plVar11 + 0x302) = *(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x18) - 2U < 2) {
      fVar14 = (float)FUN_016e026c(0,plVar11[0xd] + 0x278,0,0);
      fVar15 = (float)FUN_016eff20(plVar11[0xd] + 0x278);
      (**(code **)(*(long *)plVar11[0xd] + 0x110))(fVar14 + fVar15);
      plVar6 = plVar11 + 0x3dd;
      local_68[0] = FUN_00a74b78(plVar6);
      if (((local_68[0] == 0x13) || (local_68[0] = FUN_00a74b78(plVar6), local_68[0] == 9)) ||
         (local_68[0] = FUN_00a74b78(plVar6), local_68[0] == 4)) goto switchD_0255cb70_default;
      uVar8 = 0x10;
    }
    else {
      if (*(int *)(param_1 + 0x18) != 4) goto switchD_0255cb70_default;
      fVar14 = (float)FUN_016e026c(0,plVar11[0xd] + 0x278,0,0);
      fVar15 = (float)FUN_016f0770(plVar11[0xd] + 0x278);
      (**(code **)(*(long *)plVar11[0xd] + 0x110))(fVar14 + fVar15);
      plVar6 = plVar11 + 0x3dd;
      local_68[0] = FUN_00a74b78(plVar6);
      if (((local_68[0] == 0x13) || (local_68[0] = FUN_00a74b78(plVar6), local_68[0] == 9)) ||
         (local_68[0] = FUN_00a74b78(plVar6), local_68[0] == 4)) goto switchD_0255cb70_default;
      uVar8 = 0x11;
    }
    FUN_02372864(plVar11,uVar8,0,1);
    goto switchD_0255cb70_default;
  }
  switch((int)plVar11[0x302]) {
  case 2:
  case 4:
    uVar8 = FUN_016e1014(&local_50,0,0);
    uVar7 = FUN_0277d9a8();
    if ((uVar7 & 1) != 0) {
      FUN_01ad5d04(local_68,uVar8);
      uVar7 = FUN_01ae59b0(local_68);
      if ((uVar7 & 1) != 0) goto switchD_0255cb70_default;
    }
    break;
  case 3:
    uVar8 = FUN_016e1014(&local_50,0,0);
    uVar7 = FUN_0277db54();
    if ((uVar7 & 1) != 0) {
      FUN_0124c030(local_68,uVar8);
      iVar4 = FUN_0123db50(auStack_60,local_58);
      if ((iVar4 - 2U & 0xfffffff9) == 0) goto switchD_0255cb70_default;
    }
    break;
  case 5:
  case 6:
    uVar7 = FUN_016ec07c(0,plVar11[0xd] + 0x278,1);
    if ((uVar7 & 1) != 0) goto switchD_0255cb70_default;
    *(undefined4 *)(plVar11 + 0x302) = 1;
    goto LAB_0255ccd0;
  default:
    goto switchD_0255cb70_default;
  }
  *(undefined4 *)(plVar11 + 0x302) = 1;
LAB_0255ccd0:
  local_68[0] = FUN_00a74b78(plVar11 + 0x3dd);
  if (local_68[0] == 4) {
    FUN_02413544(plVar11,0,0,0,0,0);
  }
  else {
    local_68[0] = FUN_00a74b78(plVar11 + 0x3dd);
    if (local_68[0] == 0x13) {
      FUN_0236a88c(plVar11,0,1,0);
    }
    else {
      FUN_023b85fc(plVar11,0,6);
    }
  }
switchD_0255cb70_default:
  FUN_0230f780(plVar11,0);
  local_68[0] = local_68[0] & 0xffff0000;
  FUN_016e1780(plVar11,local_68);
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_68[0] = 1;
    puVar10 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar10 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar10 >> 1 & 1) != 0) {
      FUN_019578d0(1);
    }
  }
  return 1;
}

