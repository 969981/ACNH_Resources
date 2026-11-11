
void FUN_004f3c50(undefined8 *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long local_d8;
  long local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  long local_b0;
  long local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 auStack_88 [16];
  undefined8 local_78;
  long local_70;
  int local_64;
  long local_60;
  undefined4 local_58;
  
  iVar2 = FUN_00426fc0(param_1[1]);
  iVar3 = FUN_00426fc0(*(undefined8 *)(param_2 + 0x28));
  if (iVar2 == *(int *)(param_2 + 0x20) * iVar3) {
    uVar10 = *param_1;
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    uVar4 = FUN_00426fc0(param_1[1]);
    FUN_0043a3b0(uVar10,uVar7,uVar4);
    return;
  }
  FUN_004dc0a0(&local_b0,param_1,"translation");
  FUN_004daa50(auStack_88,&local_b0);
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  lVar9 = *(long *)(param_2 + 0x18);
  lVar8 = *(long *)(param_2 + 0x28);
  if (lVar8 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(lVar8);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  local_b0 = lVar9;
  local_a8 = lVar8;
  local_a0 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_a8;
  local_98 = uVar10;
  local_90 = uVar4;
  if (((local_b0 != 0) && (uVar6 = FUN_00428440(local_a8), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  lVar9 = local_60;
  lVar8 = local_70;
  if (local_60 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(local_60);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar4 = local_58;
  uVar10 = local_78;
  local_d8 = lVar8;
  local_d0 = lVar9;
  local_c8 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_d0;
  local_c0 = uVar10;
  local_b8 = uVar4;
  if (((local_d8 != 0) && (uVar6 = FUN_00428440(local_d0), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_d8);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  FUN_004d6910(&local_d8,&local_b0);
  if ((local_c8 & 1) != 0) {
    FUN_0043dd50(local_c8 & 0xfffffffffffffffe);
  }
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  lVar8 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24);
  lVar9 = *(long *)(param_2 + 0x28);
  if (lVar9 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(lVar9);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  local_b0 = lVar8;
  local_a8 = lVar9;
  local_a0 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_a8;
  local_98 = uVar10;
  local_90 = uVar4;
  if (((local_b0 != 0) && (uVar6 = FUN_00428440(local_a8), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  lVar9 = local_60;
  lVar8 = local_70 + local_64;
  if (local_60 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(local_60);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar4 = local_58;
  uVar10 = local_78;
  local_d0 = lVar9;
  local_d8 = lVar8;
  local_c8 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_d0;
  local_c0 = uVar10;
  local_b8 = uVar4;
  if (((local_d8 != 0) && (uVar6 = FUN_00428440(local_d0), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_d8);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  FUN_004d6910(&local_d8,&local_b0);
  if ((local_c8 & 1) != 0) {
    FUN_0043dd50(local_c8 & 0xfffffffffffffffe);
  }
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  lVar8 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 2;
  lVar9 = *(long *)(param_2 + 0x28);
  if (lVar9 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(lVar9);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  local_b0 = lVar8;
  local_a8 = lVar9;
  local_a0 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_a8;
  local_98 = uVar10;
  local_90 = uVar4;
  if (((local_b0 != 0) && (uVar6 = FUN_00428440(local_a8), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  lVar9 = local_60;
  lVar8 = local_70 + (long)local_64 * 2;
  if (local_60 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(local_60);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar4 = local_58;
  uVar10 = local_78;
  local_d0 = lVar9;
  local_d8 = lVar8;
  local_c8 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_d0;
  local_c0 = uVar10;
  local_b8 = uVar4;
  if (((local_d8 != 0) && (uVar6 = FUN_00428440(local_d0), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_d8);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  FUN_004d6910(&local_d8,&local_b0);
  if ((local_c8 & 1) != 0) {
    FUN_0043dd50(local_c8 & 0xfffffffffffffffe);
  }
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  lVar9 = *(long *)(param_2 + 0x28);
  lVar8 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 3;
  if (lVar9 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(lVar9);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  local_b0 = lVar8;
  local_a8 = lVar9;
  local_a0 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_a8;
  local_98 = uVar10;
  local_90 = uVar4;
  if (((local_b0 != 0) && (uVar6 = FUN_00428440(local_a8), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  lVar9 = local_60;
  lVar8 = local_70 + (long)local_64 * 3;
  if (local_60 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(local_60);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar4 = local_58;
  uVar10 = local_78;
  local_d0 = lVar9;
  local_d8 = lVar8;
  local_c8 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_d0;
  local_c0 = uVar10;
  local_b8 = uVar4;
  if (((local_d8 != 0) && (uVar6 = FUN_00428440(local_d0), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_d8);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  FUN_004d6910(&local_d8,&local_b0);
  if ((local_c8 & 1) != 0) {
    FUN_0043dd50(local_c8 & 0xfffffffffffffffe);
  }
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  FUN_004dc0a0(&local_b0,param_1,"rotation");
  FUN_004daa50(auStack_88,&local_b0);
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  lVar8 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 4;
  lVar9 = *(long *)(param_2 + 0x28);
  if (lVar9 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(lVar9);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  local_b0 = lVar8;
  local_a8 = lVar9;
  local_a0 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_a8;
  local_98 = uVar10;
  local_90 = uVar4;
  if (((local_b0 != 0) && (uVar6 = FUN_00428440(local_a8), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  lVar9 = local_60;
  lVar8 = local_70;
  if (local_60 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(local_60);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar4 = local_58;
  uVar10 = local_78;
  local_d8 = lVar8;
  local_d0 = lVar9;
  local_c8 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_d0;
  local_c0 = uVar10;
  local_b8 = uVar4;
  if (((local_d8 != 0) && (uVar6 = FUN_00428440(local_d0), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_d8);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  FUN_004d6910(&local_d8,&local_b0);
  if ((local_c8 & 1) != 0) {
    FUN_0043dd50(local_c8 & 0xfffffffffffffffe);
  }
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  lVar9 = *(long *)(param_2 + 0x28);
  lVar8 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 5;
  if (lVar9 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(lVar9);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  local_b0 = lVar8;
  local_a8 = lVar9;
  local_a0 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_a8;
  local_98 = uVar10;
  local_90 = uVar4;
  if (((local_b0 != 0) && (uVar6 = FUN_00428440(local_a8), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  lVar9 = local_60;
  lVar8 = local_70 + local_64;
  if (local_60 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(local_60);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar4 = local_58;
  uVar10 = local_78;
  local_d0 = lVar9;
  local_d8 = lVar8;
  local_c8 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_d0;
  local_c0 = uVar10;
  local_b8 = uVar4;
  if (((local_d8 != 0) && (uVar6 = FUN_00428440(local_d0), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_d8);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  FUN_004d6910(&local_d8,&local_b0);
  if ((local_c8 & 1) != 0) {
    FUN_0043dd50(local_c8 & 0xfffffffffffffffe);
  }
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  lVar9 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 6;
  lVar8 = *(long *)(param_2 + 0x28);
  if (lVar8 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(lVar8);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  local_b0 = lVar9;
  local_a8 = lVar8;
  local_a0 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_a8;
  local_98 = uVar10;
  local_90 = uVar4;
  if (((local_b0 != 0) && (uVar6 = FUN_00428440(local_a8), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  lVar9 = local_60;
  lVar8 = local_70 + (long)local_64 * 2;
  if (local_60 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(local_60);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar4 = local_58;
  uVar10 = local_78;
  local_d0 = lVar9;
  local_d8 = lVar8;
  local_c8 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_d0;
  local_c0 = uVar10;
  local_b8 = uVar4;
  if (((local_d8 != 0) && (uVar6 = FUN_00428440(local_d0), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_d8);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  FUN_004d6910(&local_d8,&local_b0);
  if ((local_c8 & 1) != 0) {
    FUN_0043dd50(local_c8 & 0xfffffffffffffffe);
  }
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  lVar9 = *(long *)(param_2 + 0x28);
  lVar8 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 7;
  if (lVar9 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(lVar9);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  local_b0 = lVar8;
  local_a8 = lVar9;
  local_a0 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_a8;
  local_98 = uVar10;
  local_90 = uVar4;
  if (((local_b0 != 0) && (uVar6 = FUN_00428440(local_a8), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  lVar9 = local_60;
  lVar8 = local_70 + (long)local_64 * 3;
  if (local_60 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(local_60);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar4 = local_58;
  uVar10 = local_78;
  local_d0 = lVar9;
  local_d8 = lVar8;
  local_c8 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_d0;
  local_c0 = uVar10;
  local_b8 = uVar4;
  if (((local_d8 != 0) && (uVar6 = FUN_00428440(local_d0), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_d8);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  FUN_004d6910(&local_d8,&local_b0);
  if ((local_c8 & 1) != 0) {
    FUN_0043dd50(local_c8 & 0xfffffffffffffffe);
  }
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  FUN_004dc0a0(&local_b0,param_1,"scale");
  FUN_004daa50(auStack_88,&local_b0);
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  lVar8 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 8;
  lVar9 = *(long *)(param_2 + 0x28);
  if (lVar9 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(lVar9);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  local_b0 = lVar8;
  local_a8 = lVar9;
  local_a0 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_a8;
  local_98 = uVar10;
  local_90 = uVar4;
  if (((local_b0 != 0) && (uVar6 = FUN_00428440(local_a8), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  lVar9 = local_60;
  lVar8 = local_70;
  if (local_60 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(local_60);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar4 = local_58;
  uVar10 = local_78;
  local_d8 = lVar8;
  local_d0 = lVar9;
  local_c8 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_d0;
  local_c0 = uVar10;
  local_b8 = uVar4;
  if (((local_d8 != 0) && (uVar6 = FUN_00428440(local_d0), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_d8);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  FUN_004d6910(&local_d8,&local_b0);
  if ((local_c8 & 1) != 0) {
    FUN_0043dd50(local_c8 & 0xfffffffffffffffe);
  }
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  lVar9 = *(long *)(param_2 + 0x28);
  lVar8 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 9;
  if (lVar9 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(lVar9);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  local_b0 = lVar8;
  local_a8 = lVar9;
  local_a0 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_a8;
  local_98 = uVar10;
  local_90 = uVar4;
  if (((local_b0 != 0) && (uVar6 = FUN_00428440(local_a8), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  lVar9 = local_60;
  lVar8 = local_70 + local_64;
  if (local_60 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(local_60);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar4 = local_58;
  uVar10 = local_78;
  local_d0 = lVar9;
  local_d8 = lVar8;
  local_c8 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_d0;
  local_c0 = uVar10;
  local_b8 = uVar4;
  if (((local_d8 != 0) && (uVar6 = FUN_00428440(local_d0), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_d8);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  FUN_004d6910(&local_d8,&local_b0);
  if ((local_c8 & 1) != 0) {
    FUN_0043dd50(local_c8 & 0xfffffffffffffffe);
  }
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  lVar9 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 10;
  lVar8 = *(long *)(param_2 + 0x28);
  if (lVar8 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(lVar8);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  local_b0 = lVar9;
  local_a8 = lVar8;
  local_a0 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_a8;
  local_98 = uVar10;
  local_90 = uVar4;
  if (((local_b0 != 0) && (uVar6 = FUN_00428440(local_a8), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  lVar9 = local_60;
  lVar8 = local_70 + (long)local_64 * 2;
  if (local_60 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(local_60);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar4 = local_58;
  uVar10 = local_78;
  local_d0 = lVar9;
  local_d8 = lVar8;
  local_c8 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_d0;
  local_c0 = uVar10;
  local_b8 = uVar4;
  if (((local_d8 != 0) && (uVar6 = FUN_00428440(local_d0), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_d8);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  FUN_004d6910(&local_d8,&local_b0);
  if ((local_c8 & 1) != 0) {
    FUN_0043dd50(local_c8 & 0xfffffffffffffffe);
  }
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  lVar9 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 0xb;
  lVar8 = *(long *)(param_2 + 0x28);
  if (lVar8 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(lVar8);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  local_b0 = lVar9;
  local_a8 = lVar8;
  local_a0 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_a8;
  local_98 = uVar10;
  local_90 = uVar4;
  if (((local_b0 != 0) && (uVar6 = FUN_00428440(local_a8), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_70 + (long)local_64 * 3;
  if (local_60 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(local_60);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  local_d0 = local_60;
  local_d8 = lVar8;
  local_c8 = uVar5;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar8 = local_d0;
  local_c0 = local_78;
  local_b8 = local_58;
  if (((local_d8 != 0) && (uVar6 = FUN_00428440(local_d0), lVar8 != 0)) && ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(&local_d8);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  FUN_004d6910(&local_d8,&local_b0);
  if ((local_c8 & 1) != 0) {
    FUN_0043dd50(local_c8 & 0xfffffffffffffffe);
  }
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  return;
}

