
void FUN_004f3510(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
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
  
  FUN_004dc0a0(&local_b0,param_1,&DAT_040e2594);
  FUN_004daa50(auStack_88,&local_b0);
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  lVar5 = local_60;
  lVar1 = local_70;
  uVar2 = *param_2;
  if (local_60 == 0) {
    uVar7 = 0;
    bVar3 = true;
  }
  else {
    uVar7 = FUN_00428370(local_60);
    if ((uVar7 & 1) == 0) {
      bVar3 = true;
    }
    else {
      FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
      bVar3 = false;
    }
  }
  uVar6 = local_58;
  uVar4 = local_78;
  local_b0 = lVar1;
  local_a8 = lVar5;
  local_a0 = uVar7;
  if (!bVar3) {
    FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
  }
  lVar1 = local_a8;
  local_98 = uVar4;
  local_90 = uVar6;
  if (((local_b0 != 0) && (uVar8 = FUN_00428440(local_a8), lVar1 != 0)) && ((uVar8 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar3) {
    FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
  }
  FUN_004d71e0(&local_b0,uVar2);
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  lVar5 = local_60;
  lVar1 = local_70 + local_64;
  uVar2 = param_2[1];
  if (local_60 == 0) {
    uVar7 = 0;
    bVar3 = true;
  }
  else {
    uVar7 = FUN_00428370(local_60);
    if ((uVar7 & 1) == 0) {
      bVar3 = true;
    }
    else {
      FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
      bVar3 = false;
    }
  }
  uVar6 = local_58;
  uVar4 = local_78;
  local_a8 = lVar5;
  local_b0 = lVar1;
  local_a0 = uVar7;
  if (!bVar3) {
    FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
  }
  lVar1 = local_a8;
  local_98 = uVar4;
  local_90 = uVar6;
  if (((local_b0 != 0) && (uVar8 = FUN_00428440(local_a8), lVar1 != 0)) && ((uVar8 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar3) {
    FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
  }
  FUN_004d71e0(&local_b0,uVar2);
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  lVar5 = local_60;
  lVar1 = local_70 + (long)local_64 * 2;
  uVar2 = param_2[2];
  if (local_60 == 0) {
    uVar7 = 0;
    bVar3 = true;
  }
  else {
    uVar7 = FUN_00428370(local_60);
    if ((uVar7 & 1) == 0) {
      bVar3 = true;
    }
    else {
      FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
      bVar3 = false;
    }
  }
  uVar6 = local_58;
  uVar4 = local_78;
  local_a8 = lVar5;
  local_b0 = lVar1;
  local_a0 = uVar7;
  if (!bVar3) {
    FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
  }
  lVar1 = local_a8;
  local_98 = uVar4;
  local_90 = uVar6;
  if (((local_b0 != 0) && (uVar8 = FUN_00428440(local_a8), lVar1 != 0)) && ((uVar8 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar3) {
    FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
  }
  FUN_004d71e0(&local_b0,uVar2);
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  uVar2 = param_2[3];
  lVar1 = local_70 + (long)local_64 * 3;
  if (local_60 == 0) {
    uVar7 = 0;
    bVar3 = true;
  }
  else {
    uVar7 = FUN_00428370(local_60);
    if ((uVar7 & 1) == 0) {
      bVar3 = true;
    }
    else {
      FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
      FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
      bVar3 = false;
    }
  }
  local_a8 = local_60;
  local_b0 = lVar1;
  local_a0 = uVar7;
  if (!bVar3) {
    FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
  }
  lVar1 = local_a8;
  local_98 = local_78;
  local_90 = local_58;
  if (((local_b0 != 0) && (uVar8 = FUN_00428440(local_a8), lVar1 != 0)) && ((uVar8 & 0x1f) == 7)) {
    FUN_004d6770(&local_b0);
  }
  if (!bVar3) {
    FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
    FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
  }
  FUN_004d71e0(&local_b0,uVar2);
  if ((local_a0 & 1) != 0) {
    FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
  }
  return;
}

