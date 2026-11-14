
void FUN_01d63ff0(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined *local_40;
  undefined *puStack_38;
  
  if (*(int *)(param_1 + 1000) == 0) {
    *(undefined8 *)(param_1 + 1000) = 0x32;
  }
  lVar8 = *(long *)PTR_DAT_04bb21d0;
  if (*(char *)(lVar8 + 0x207c) == '\0') {
    uVar2 = *(uint *)(param_1 + 1000);
    if ((uVar2 < 0x12) && ((1 << (ulong)(uVar2 & 0x1f) & 0x28c0fU) != 0)) {
      local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar2);
      if (*(int *)(lVar8 + 0x38) != 0 && *(char *)(lVar8 + 0xfd8) == '\0') {
        plVar10 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
        uVar5 = (**(code **)(*plVar10 + 0x10))(plVar10);
        if (((uVar5 & 1) == 0) &&
           (uVar5 = (**(code **)(*plVar10 + 0x18))(plVar10), (uVar5 & 1) == 0)) {
          uVar7 = 0x15;
LAB_01d640b4:
          FUN_0387de70(plVar10,&DAT_05b03f00,0xe,uVar7,uVar2);
        }
      }
    }
    else {
      local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar2);
      if (*(int *)(lVar8 + 0x38) != 0 && *(char *)(lVar8 + 0xfd8) == '\0') {
        plVar10 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
        uVar5 = (**(code **)(*plVar10 + 0x10))(plVar10);
        if (((uVar5 & 1) == 0) &&
           (uVar5 = (**(code **)(*plVar10 + 0x18))(plVar10), (uVar5 & 1) == 0)) {
          uVar7 = 0x14;
          goto LAB_01d640b4;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0xab6) != '\0') {
    FUN_026f5fbc(*(undefined8 *)PTR_DAT_04bb46b0);
  }
  *(undefined1 *)(param_1 + 0xab6) = 0;
  plVar10 = *(long **)PTR_DAT_04bb27d0;
  if (*(int *)(plVar10[2] + 0xaa0) == 3) {
    lVar8 = *plVar10;
    bVar3 = *(byte *)(lVar8 + 0x473);
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
      if (7 < bVar3) {
        pbVar1 = (byte *)(lVar8 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar8 + 0x472) != bVar3)) goto LAB_01d641b8;
    }
    if (((int)plVar10[0x10] == 3) &&
       ((*(byte *)(lVar8 + 0x476) < 2 && (*(long *)PTR_DAT_04bb4770 != 0)))) {
      FUN_014b0df0();
    }
  }
LAB_01d641b8:
  local_40 = PTR_DAT_04bb2020 + 0x10;
  lVar9 = *(long *)PTR_DAT_04bb26a8;
  puStack_38 = &DAT_0407773c;
  for (lVar8 = *(long *)(lVar9 + 0x19f840); lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
    while (iVar4 = FUN_029ca720(&local_40,lVar8 + 0x20), -1 < iVar4) {
      if (iVar4 == 0) {
        uVar6 = *(undefined2 *)(lVar8 + 0x30);
        goto LAB_01d64228;
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 == 0) goto LAB_01d6421c;
    }
  }
LAB_01d6421c:
  uVar6 = 0xffff;
LAB_01d64228:
  FUN_02a0d880(lVar9 + 0xa7660,uVar6);
  return;
}

