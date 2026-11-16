
void FUN_027dc85c(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *local_78;
  char *pcStack_70;
  undefined4 local_68;
  undefined1 local_64 [7];
  undefined1 local_5d;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
    return;
  }
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "AbandonedHouse";
  iVar6 = FUN_02749340(param_2 + 0x1267c,&local_78);
  if (iVar6 != 0) {
    return;
  }
  local_5d = 0;
  pcStack_70 = local_64;
  local_68 = 8;
  local_64[0] = 0;
  local_78 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_78,"-----");
  if ((ulong)*param_2 < 0x23) {
    FUN_038d1270(&local_78,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_2 * 8 + 0xb0),
                 param_2[1]);
  }
  iVar6 = FUN_02209b90(&local_78);
  if (iVar6 == 1) {
    return;
  }
  iVar6 = FUN_02209b90(&local_78);
  if (iVar6 == 2) {
    return;
  }
  iVar6 = FUN_02209b90(&local_78);
  if (iVar6 == 3) {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x1a50b0);
  pbVar2 = (byte *)(param_1 + 0x191e80);
  pbVar3 = (byte *)(param_1 + 0x17ec50);
  FUN_027dcd70(param_1);
  uVar9 = (ulong)*pbVar1;
  if (((uVar9 < 0x23) && (*(byte *)(param_1 + 0x1a50b1) <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(*(byte *)(param_1 + 0x1a50b1) & 0x1f) & 1)
      != 0)) {
    FUN_026b1890(param_1 + 0x1b82e0,pbVar1);
  }
  pbVar4 = (byte *)(param_1 + 0x16ba20);
  uVar9 = (ulong)*pbVar2;
  if (((uVar9 < 0x23) && (*(byte *)(param_1 + 0x191e81) <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(*(byte *)(param_1 + 0x191e81) & 0x1f) & 1)
      != 0)) {
    FUN_026b1890(pbVar1,pbVar2);
  }
  pbVar1 = (byte *)(param_1 + 0x1587f0);
  uVar9 = (ulong)*pbVar3;
  if (((uVar9 < 0x23) && (*(byte *)(param_1 + 0x17ec51) <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(*(byte *)(param_1 + 0x17ec51) & 0x1f) & 1)
      != 0)) {
    FUN_026b1890(pbVar2,pbVar3);
  }
  pbVar2 = (byte *)(param_1 + 0x1455c0);
  uVar9 = (ulong)*pbVar4;
  if (((uVar9 < 0x23) && (*(byte *)(param_1 + 0x16ba21) <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(*(byte *)(param_1 + 0x16ba21) & 0x1f) & 1)
      != 0)) {
    FUN_026b1890(pbVar3,pbVar4);
  }
  pbVar3 = (byte *)(param_1 + 0x132390);
  uVar9 = (ulong)*pbVar1;
  if (((uVar9 < 0x23) && (*(byte *)(param_1 + 0x1587f1) <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(*(byte *)(param_1 + 0x1587f1) & 0x1f) & 1)
      != 0)) {
    FUN_026b1890(pbVar4,pbVar1);
  }
  pbVar4 = (byte *)(param_1 + 0x11f160);
  uVar9 = (ulong)*pbVar2;
  if (((uVar9 < 0x23) && (*(byte *)(param_1 + 0x1455c1) <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(*(byte *)(param_1 + 0x1455c1) & 0x1f) & 1)
      != 0)) {
    FUN_026b1890(pbVar1,pbVar2);
  }
  pbVar1 = (byte *)(param_1 + 0x10bf30);
  uVar9 = (ulong)*pbVar3;
  if (((uVar9 < 0x23) && (*(byte *)(param_1 + 0x132391) <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(*(byte *)(param_1 + 0x132391) & 0x1f) & 1)
      != 0)) {
    FUN_026b1890(pbVar2,pbVar3);
  }
  uVar9 = (ulong)*pbVar4;
  if (((uVar9 < 0x23) && (*(byte *)(param_1 + 0x11f161) <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(*(byte *)(param_1 + 0x11f161) & 0x1f) & 1)
      != 0)) {
    FUN_026b1890(pbVar3,pbVar4);
  }
  uVar9 = (ulong)*pbVar1;
  if (((uVar9 < 0x23) && (*(byte *)(param_1 + 0x10bf31) <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(*(byte *)(param_1 + 0x10bf31) & 0x1f) & 1)
      != 0)) {
    FUN_026b1890(pbVar4,pbVar1);
  }
  FUN_026b1890(pbVar1,param_2);
  local_58 = (ulong)local_58._4_4_ << 0x20;
  *(undefined1 *)(param_1 + 0x11e5aa) = 0;
  FUN_026b036c(pbVar1,0);
  FUN_02690d60(pbVar1);
  lVar10 = *(long *)PTR_DAT_04bb46b0;
  if (lVar10 == 0) {
LAB_027dcca0:
    lVar10 = 0;
  }
  else {
    puVar11 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar11 + 0x38))();
      lVar10 = 0;
      if (lVar7 != 0) {
        lVar10 = lVar7 + 0x70;
      }
    }
    else {
      if (puVar11 == (undefined8 *)0x0) goto LAB_027dcca0;
      lVar10 = 0;
      if ((long *)puVar11[0x26] != (long *)0x0) {
        lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      }
    }
  }
  plVar5 = (long *)(lVar10 + 0x1c2df8);
  lVar7 = *(long *)(lVar10 + 0x1c2e18);
  if (lVar7 == 0) {
    FUN_0285bfc0(*(long *)(lVar10 + 0x1c2e00) + *plVar5,param_2);
    return;
  }
  if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    lVar7 = *(long *)(lVar10 + 0x1c2e18);
    uVar9 = uVar9 & 0xffffffff;
    if (lVar7 == 0) goto LAB_027dcd1c;
  }
  plVar8 = *(long **)(lVar7 + 0x20);
  if (plVar8 != (long *)0x0) {
    local_58 = *plVar5;
    local_50 = *(undefined8 *)(lVar10 + 0x1c2e00);
    uStack_48 = 0x2520;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
  }
LAB_027dcd1c:
  FUN_0285bfc0(*(long *)(lVar10 + 0x1c2e00) + *plVar5,param_2);
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar10 + 0x1c2e18) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x1c2e18) + 0x18), puVar11 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar11)();
  }
  return;
}

