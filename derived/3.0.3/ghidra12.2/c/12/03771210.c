
undefined1  [16] FUN_03771210(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 extraout_d0;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  float local_38;
  
  uVar8 = 0;
  lVar5 = *(long *)PTR_DAT_04bb27f8;
  if (*(long *)PTR_DAT_04bb59d8 == 0 || lVar5 == 0) {
    return ZEXT816(0);
  }
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (0,0,0,*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar4 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
      uVar8 = extraout_d0;
    }
  }
  iVar3 = *(int *)(puVar6 + 7);
  local_38 = 0.0;
  local_40 = 0;
  if ((iVar3 == -0x7975b8e8) || (iVar3 == -0x3e092032)) {
    local_58 = 0;
    local_68 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_60 = PTR_DAT_04bb2010 + 0x10;
    uStack_48 = 0;
    local_50 = puStack_60;
    FUN_01811430(&local_68);
    fVar7 = (float)(int)local_58 * 5.0 + 5.0;
    uVar9 = (ulong)(uint)fVar7;
    local_38 = (float)local_58._4_4_ * 5.0 + 5.0 + 5.0;
    local_40._0_4_ = fVar7;
    if (iVar3 != -0x3e092032) goto LAB_03771540;
  }
  else {
    if (iVar3 == -0x17df00c3) {
      auVar10 = FUN_037710d0();
      return auVar10;
    }
    if (DAT_05ac0a90 == iVar3) {
      lVar4 = 0;
    }
    else if (DAT_05ac0aa0 == iVar3) {
      lVar4 = 1;
    }
    else if (DAT_05ac0ab0 == iVar3) {
      lVar4 = 2;
    }
    else if (DAT_05ac0ac0 == iVar3) {
      lVar4 = 3;
    }
    else if (DAT_05ac0ad0 == iVar3) {
      lVar4 = 4;
    }
    else if (DAT_05ac0ae0 == iVar3) {
      lVar4 = 5;
    }
    else if (DAT_05ac0af0 == iVar3) {
      lVar4 = 6;
    }
    else if (DAT_05ac0b00 == iVar3) {
      lVar4 = 7;
    }
    else if (DAT_05ac0b10 == iVar3) {
      lVar4 = 8;
    }
    else {
      uVar8 = 0;
      if (DAT_05ac0b20 != iVar3) {
        return ZEXT816(0);
      }
      lVar4 = 9;
    }
    iVar3 = (&DAT_05ac0a9c)[lVar4 * 4];
    if (*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) {
      uVar8 = 0;
      if ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0) {
        return ZEXT816(0);
      }
    }
    if (*(int *)(lVar5 + 0x14) != 4) {
      uVar8 = 0;
      if (*(int *)(lVar5 + 0x14) != 5) {
        return ZEXT816(0);
      }
    }
    local_58 = 0;
    local_68 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_60 = PTR_DAT_04bb2010 + 0x10;
    uStack_48 = 0;
    local_50 = puStack_60;
    FUN_01811430(uVar8,&local_68);
    fVar7 = (float)(int)local_58 * 5.0 + 5.0;
    uVar9 = (ulong)(uint)fVar7;
    local_38 = (float)local_58._4_4_ * 5.0 + 5.0;
    if (((iVar3 != 10) && (iVar3 != 3)) && (local_40._0_4_ = fVar7, iVar3 != 9)) goto LAB_03771540;
  }
  uVar9 = (ulong)(uint)(fVar7 + 10.0);
  local_40._0_4_ = fVar7 + 10.0;
LAB_03771540:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar9;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar9;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar9;
  lVar5 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar5 != 0) && (auVar10 = auVar1, *(long *)(lVar5 + 0xa8) != 0)) &&
     (auVar10 = auVar2, *(char *)(lVar5 + 0x11c8) == '\0')) {
    FUN_0093a950(lVar5 + 0x28,&local_40,0);
    auVar10 = ZEXT416((uint)(float)local_40);
  }
  return auVar10;
}

