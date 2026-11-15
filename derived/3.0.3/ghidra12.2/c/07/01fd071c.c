
void FUN_01fd071c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  undefined *local_68;
  undefined *puStack_60;
  int local_58;
  int iStack_54;
  undefined *local_50;
  int local_48;
  int iStack_44;
  undefined4 local_24;
  
  piVar10 = (int *)(param_1 + 0x787c);
  iVar6 = *piVar10;
  if (iVar6 == 0) {
    FUN_01fd01b0(param_1,*(undefined1 *)(param_1 + 0x789c),param_1 + 0x7848);
    *piVar10 = -1;
    return;
  }
  if (0 < iVar6) {
    *piVar10 = iVar6 + -1;
    return;
  }
  if (*(int *)(param_1 + 0xaa00) == 3) {
    return;
  }
  FUN_020d1018(param_1 + 0x8998);
  puVar2 = PTR_DAT_04bb5ce0;
  puVar1 = PTR_DAT_04bb2720;
  if ((*(byte *)(param_1 + 0xaa44) >> 2 & 1) != 0) {
    *piVar10 = 0x3c;
    return;
  }
  if ((*(byte *)(param_1 + 0xaa44) >> 5 & 1) == 0) {
    return;
  }
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (lVar9 = *(long *)PTR_DAT_04bb2720, lVar9 != 0)) &&
     (*(long *)(lVar9 + 0x330) != 0)) {
    puVar7 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
    iVar6 = FUN_006bd550(*puVar7,0);
    if (((iVar6 == 0x758f7eaf) && (*(long *)puVar1 != 0)) &&
       ((lVar9 = *(long *)(*(long *)puVar1 + 0x330), lVar9 != 0 && (*(int *)(lVar9 + 0x244) != 0))))
    {
      local_68 = PTR_DAT_04bbc1a0 + 0x10;
      lVar9 = *(long *)puVar2;
      puStack_60 = PTR_DAT_04bb2010 + 0x10;
      if (lVar9 == 0) {
        local_48 = 0;
        iStack_44 = 0;
        iVar11 = 0x10;
        iVar6 = 0x10;
      }
      else {
        local_48 = *(int *)(lVar9 + 0xd88);
        iStack_44 = *(int *)(lVar9 + 0xd8c);
        iVar6 = *(int *)(lVar9 + 0xd98);
        iVar11 = *(int *)(lVar9 + 0xd9c);
      }
      local_58 = local_48;
      if (iVar6 <= local_48) {
        local_58 = iVar6;
      }
      if (local_48 <= iVar6) {
        local_48 = iVar6;
      }
      iStack_54 = iStack_44;
      if (iVar11 <= iStack_44) {
        iStack_54 = iVar11;
      }
      if (iStack_44 <= iVar11) {
        iStack_44 = iVar11;
      }
      local_50 = puStack_60;
      uVar8 = FUN_012e2100(&local_68,*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278);
      if (((uVar8 & 1) == 0) && (uVar8 = FUN_01fd0998(param_1), (uVar8 & 1) != 0)) {
        FUN_01fd0ac0(param_1);
        goto LAB_01fd08f8;
      }
    }
  }
  local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
  local_24 = 0;
  FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,&local_68,&local_24,
               PTR_DAT_04bc1600,6);
LAB_01fd08f8:
  piVar10 = *(int **)PTR_DAT_04bb47d0;
  if (((piVar10 != (int *)0x0) && (*piVar10 != 0 || piVar10[2] != 0)) &&
     (*piVar10 == *(int *)(param_1 + 0x89a0))) {
    *(undefined1 *)(piVar10 + 0x2c) = 1;
  }
  uVar5 = DAT_053e0cf8;
  uVar3 = DAT_053e0cec;
  *(undefined8 *)(param_1 + 0xaa04) = DAT_053e0ce4;
  *(undefined8 *)(param_1 + 0xaa0c) = uVar3;
  uVar4 = DAT_053e0cf4;
  *(undefined4 *)(param_1 + 0xaa18) = uVar5;
  uVar5 = DAT_053e0cfc;
  *(undefined8 *)(param_1 + 0xa9f8) = 0;
  *(undefined8 *)(param_1 + 0xa9f0) = 0;
  *(undefined4 *)(param_1 + 0xaa14) = uVar4;
  *(undefined4 *)(param_1 + 0xaa1c) = uVar5;
  uVar4 = DAT_053e0d00;
  *(undefined1 *)(param_1 + 0xaa44) = 0;
  *(undefined4 *)(param_1 + 0xaa00) = 3;
  *(undefined4 *)(param_1 + 0xaa20) = uVar4;
  return;
}

