
void FUN_020634d4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *param_1 = &PTR_FUN_04a6fc60;
  param_1[1] = param_3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar1 = PTR_DAT_04bc28c0 + 0x10;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[3] = puVar1;
  param_1[4] = 0x4248000000000000;
  *(undefined4 *)(param_1 + 5) = 0xbf800000;
  param_1[7] = puVar1;
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x42480000;
  *(undefined4 *)(param_1 + 9) = 0xbf800000;
  param_1[0xb] = puVar1;
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x42480000;
  *(undefined4 *)(param_1 + 0xd) = 0xbf800000;
  puVar1 = PTR_DAT_04bc1558 + 0x10;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = puVar1;
  param_1[0x10] = 0;
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffff00000000;
  param_1[0x13] = puVar2;
  param_1[0x14] = &DAT_048f9750;
  param_1[0x15] = 0;
  param_1[0x16] = &DAT_048f9750;
  param_1[0x1a] = 0xfffe;
  FUN_0277d4ac();
  param_1[0x1d] = puVar1;
  param_1[0x1b] = 0x3bf800000;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x26] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x13c) = 0;
  param_1[0x28] = 0xfffe;
  param_1[0x20] = 0;
  param_1[0x21] = puVar2;
  param_1[0x22] = &DAT_048f9750;
  param_1[0x23] = 0;
  param_1[0x24] = &DAT_048f9750;
  param_1[0x25] = 0;
  FUN_0277d4ac(param_1 + 0x28);
  param_1[0x29] = 0x3bf800000;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((long)param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  memset(param_1 + 0x2f,0,0x2a9);
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  *(undefined1 *)((long)param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 2;
  lVar6 = DAT_053e0208;
  lVar10 = *(long *)(param_2 + 8);
  lVar9 = DAT_053e0208 + 0x17b8;
  piVar7 = (int *)(**(code **)(*(long *)(DAT_053e0208 + 0x17b8) + 0xf0))(lVar9);
  iVar8 = *piVar7;
  uVar4 = *(uint *)(lVar10 + 0x288);
  *(undefined4 *)(lVar10 + 0x288) = *(undefined4 *)(lVar10 + 0x28c);
  uVar4 = uVar4 ^ uVar4 << 0xb;
  iVar3 = -iVar8;
  if (-1 < iVar8) {
    iVar3 = iVar8;
  }
  *(undefined4 *)(lVar10 + 0x28c) = *(undefined4 *)(lVar10 + 0x290);
  uVar5 = *(uint *)(lVar10 + 0x294);
  *(uint *)(lVar10 + 0x290) = uVar5;
  uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5;
  *(uint *)(lVar10 + 0x294) = uVar4;
  piVar7 = (int *)(**(code **)(*(long *)(lVar6 + 0x17b8) + 0xf0))(lVar9);
  iVar8 = (int)((ulong)uVar4 * (ulong)(iVar3 + 1) >> 0x20);
  iVar3 = -iVar8;
  if (-1 < *piVar7) {
    iVar3 = iVar8;
  }
  *(int *)((long)param_1 + 0x424) = iVar3;
  lVar9 = *(long *)(param_2 + 8);
  piVar7 = (int *)(**(code **)(*(long *)(lVar6 + 0x17e8) + 0xf0))(lVar6 + 0x17e8);
  iVar8 = *piVar7;
  uVar4 = *(uint *)(lVar9 + 0x288);
  *(undefined4 *)(lVar9 + 0x288) = *(undefined4 *)(lVar9 + 0x28c);
  uVar4 = uVar4 ^ uVar4 << 0xb;
  iVar3 = -iVar8;
  if (-1 < iVar8) {
    iVar3 = iVar8;
  }
  *(undefined4 *)(lVar9 + 0x28c) = *(undefined4 *)(lVar9 + 0x290);
  uVar5 = *(uint *)(lVar9 + 0x294);
  *(uint *)(lVar9 + 0x290) = uVar5;
  uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5;
  *(uint *)(lVar9 + 0x294) = uVar4;
  piVar7 = (int *)(**(code **)(*(long *)(lVar6 + 0x17e8) + 0xf0))(lVar6 + 0x17e8);
  iVar8 = (int)((ulong)uVar4 * (ulong)(iVar3 + 1) >> 0x20);
  iVar3 = -iVar8;
  if (-1 < *piVar7) {
    iVar3 = iVar8;
  }
  *(int *)(param_1 + 0x85) = iVar3;
  return;
}

