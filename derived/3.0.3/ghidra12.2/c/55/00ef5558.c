
uint FUN_00ef5558(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  byte local_18 [4];
  uint local_14;
  
  local_35 = 0;
  local_40 = 8;
  local_3c[0] = 0;
  local_48 = local_3c;
  local_50 = PTR_DAT_04bb3768 + 0x10;
  FUN_021d7c00(&local_50);
  uVar9 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(local_50 + 0x18))(&local_50);
  local_60._0_4_ = FUN_006bd550(local_48,0);
  puVar3 = (uint *)FUN_0079e770(uVar9,&local_60);
  if (puVar3 == (uint *)0x0) {
    return 0;
  }
  uVar1 = *puVar3;
  if (uVar1 != 0 && puVar3 != (uint *)(ulong)uVar1) {
    puVar7 = (uint *)((long)puVar3 - (long)(ulong)uVar1);
    local_14 = 0;
    if (*puVar7 == 0) goto LAB_00ef55f4;
    uVar1 = puVar7[1];
    if ((uVar1 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
      lVar4 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar4 = 0x1c;
      }
      lVar4 = (long)puVar7 + lVar4 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar4 != 0) {
        uVar2 = 0;
        if ((ulong)uVar1 != 0) {
          uVar2 = (uint)((ulong)((long)puVar3 - lVar4) / (ulong)uVar1);
        }
        if (*puVar7 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_04dda7e8) &&
           (local_14 = (uint)*(ushort *)(DAT_04dda7f0 + (long)(int)uVar2 * 2), local_14 < 8))
        goto LAB_00ef55f4;
      }
    }
  }
  local_14 = 0;
LAB_00ef55f4:
  local_60 = (undefined *)CONCAT44(local_60._4_4_,local_14);
  local_18[0] = *param_1;
  if (7 < local_18[0]) {
    local_18[0] = 0xff;
  }
  lVar4 = FUN_025830c0(DAT_055021a0,local_18,1);
  if (lVar4 == 0) {
    return 0;
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "Friendship";
  uVar1 = FUN_02746c30(param_2,param_1,&local_60);
  if (uVar1 < 0x1e) {
    uVar2 = 1;
  }
  else if (uVar1 < 0x3c) {
    uVar2 = 2;
  }
  else if (uVar1 < 100) {
    uVar2 = 3;
  }
  else if (uVar1 < 0x96) {
    uVar2 = 4;
  }
  else {
    uVar2 = 5;
    if (199 < uVar1) {
      uVar2 = 6;
    }
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar2);
  lVar8 = lVar4 + 0x194b0;
  if (*(long *)(lVar4 + 0x194b8) == 0) {
    lVar8 = *(long *)(DAT_05574040 + 0x20);
    plVar6 = *(long **)(lVar8 + 0x1170);
  }
  else {
    plVar6 = *(long **)(lVar4 + 0x1a620);
  }
  if ((plVar6 == (long *)0x0) || ((undefined8 *)*plVar6 == (undefined8 *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(code *)**(undefined8 **)*plVar6)();
    uVar1 = uVar1 ^ 1;
  }
  uVar2 = FUN_0280a3b0(*(long *)(lVar8 + 0x1158) + *(long *)(lVar8 + 0x1150),&local_14,4 < uVar2);
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar8 + 0x1170) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x1170) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return uVar2 & 1;
}

