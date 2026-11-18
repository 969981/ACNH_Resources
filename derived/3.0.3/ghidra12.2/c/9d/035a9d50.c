
/* WARNING: Removing unreachable block (ram,0x035a9d98) */

uint FUN_035a9d50(int param_1,int param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  short *psVar8;
  long lVar9;
  undefined **local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 *local_50;
  int local_48;
  int iStack_44;
  undefined8 *local_40;
  int local_38;
  int iStack_34;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_68 = (undefined **)((ulong)local_68 & 0xffffffff00000000);
  local_40 = &DAT_048f9750;
  local_50 = &DAT_048f9750;
  lVar7 = *(long *)(*param_3 + 0xd0);
  if (lVar7 == 0) {
LAB_035a9e50:
    psVar8 = &DAT_05586008;
    local_48 = param_1;
    iStack_44 = param_2;
  }
  else {
    lVar9 = lVar7 + 0x130 + (ulong)*(uint *)(lVar7 + 0x198) * 0x30;
    if (1 < *(uint *)(lVar7 + 0x198)) {
      lVar9 = lVar7 + 0x130;
    }
    iVar5 = *(int *)(lVar9 + 0x28);
    if (param_1 < iVar5 || *(int *)(lVar9 + 8) + iVar5 + -1 < param_1) goto LAB_035a9e50;
    iVar1 = *(int *)(lVar9 + 0xc);
    iVar2 = *(int *)(lVar9 + 0x2c);
    if (param_2 < iVar2 || iVar1 + iVar2 + -1 < param_2) goto LAB_035a9e50;
    uVar4 = (param_2 - iVar2) + (param_1 - iVar5) * iVar1;
    if (*(uint *)(lVar9 + 0x10) <= uVar4) goto LAB_035a9e50;
    lVar7 = *(long *)(lVar9 + 0x18);
    psVar8 = (short *)(lVar7 + (long)(int)uVar4 * 8);
    if (*psVar8 == -3) {
      uVar4 = *(uint *)(lVar7 + (long)(int)uVar4 * 8 + 4);
      iStack_44 = param_2 - (uVar4 >> 0x18);
      local_48 = param_1 - (uVar4 >> 0x10 & 0xff);
      uVar4 = (iStack_44 - iVar2) + (local_48 - iVar5) * iVar1;
      if (*(uint *)(lVar9 + 0x10) <= uVar4) goto LAB_035a9e50;
      psVar8 = (short *)(lVar7 + (long)(int)uVar4 * 8);
    }
    else {
      local_48 = param_1;
      iStack_44 = param_2;
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  local_38 = param_1;
  iStack_34 = param_2;
  uVar4 = FUN_0277d6c4(psVar8);
  lVar7 = DAT_05150358;
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar4 = FUN_0097b580(psVar8,&local_50,&local_40,1);
      goto LAB_035a9fe4;
    }
  }
  if (((((DAT_05150358 == 0) || (*(long *)(DAT_05150358 + 0xb0) == 0)) ||
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0)) ||
      ((*(long *)(DAT_05150358 + 0x488) == 0 ||
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0)))) ||
     ((*(long *)(DAT_05150358 + 0x2b0) == 0 || (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0)
      ))) {
LAB_035a9f50:
    local_68 = &PTR_LAB_04a88288;
    local_60 = *(undefined4 *)psVar8;
    local_5c = *(undefined4 *)(psVar8 + 2);
    iVar5 = FUN_0277d6c4(&local_60);
    if (iVar5 - 0xf619U < 7) {
      local_68 = &PTR_LAB_04a88288;
      local_60 = *(undefined4 *)psVar8;
      local_5c = *(undefined4 *)(psVar8 + 2);
      iVar5 = FUN_0277d6c4(&local_60);
      if (iVar5 - 0xf619U < 4) goto LAB_035a9fd8;
    }
LAB_035a9fb8:
    uVar6 = FUN_0180c170();
    if (((uVar6 & 1) == 0) ||
       (uVar6 = FUN_01512308(&local_40,*(undefined4 *)PTR_DAT_04bb3238), (uVar6 & 1) == 0)) {
      uVar4 = 0;
      goto LAB_035a9fe4;
    }
  }
  else {
    uVar4 = FUN_0277d6c4(psVar8);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_035a9f50;
    FUN_0124c030(&local_68,psVar8);
    iVar5 = FUN_0123db50(&local_60,local_58);
    if (iVar5 != 0x2d) goto LAB_035a9fb8;
  }
LAB_035a9fd8:
  uVar4 = 1;
LAB_035a9fe4:
  return uVar4 & 1;
}

