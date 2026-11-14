
void FUN_01747e90(byte *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  byte local_68 [12];
  byte local_5c [12];
  
  iVar2 = *(int *)(param_2 + 0x234);
  bVar8 = *PTR_DAT_04bb32e0;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  *param_1 = bVar8;
  if (iVar2 != 0) {
    FUN_02507c6c(local_5c,7,1,1,0);
    puVar6 = PTR_DAT_04bb5038;
    puVar5 = PTR_DAT_04bb4718;
    puVar4 = PTR_DAT_04bb3238;
    uVar9 = (ulong)local_5c[0];
    if (local_5c[0] < 8) {
      piVar1 = (int *)PTR_DAT_04bb3238;
      if (*(long *)PTR_DAT_04bb4718 != 0) {
        piVar1 = (int *)(*(long *)PTR_DAT_04bb4718 + uVar9 * 4 + 0xde8);
      }
      iVar3 = *piVar1;
      local_68[0] = local_5c[0];
      while (iVar2 != iVar3) {
        do {
          uVar9 = uVar9 + 1;
          if (uVar9 == 8) goto LAB_01747f10;
          uVar7 = FUN_02507924(local_68,puVar6 + uVar9);
        } while ((uVar7 & 1) == 0);
        local_68[0] = puVar6[uVar9];
        uVar9 = (ulong)local_68[0];
        if (7 < local_68[0]) goto LAB_01747f10;
        piVar1 = (int *)puVar4;
        if (*(long *)puVar5 != 0) {
          piVar1 = (int *)(*(long *)puVar5 + uVar9 * 4 + 0xde8);
        }
        iVar3 = *piVar1;
      }
    }
    else {
LAB_01747f10:
      local_68[0] = 0xff;
    }
    *param_1 = local_68[0];
  }
  return;
}

