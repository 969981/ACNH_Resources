
void FUN_02dc34f0(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined **local_68;
  ulong uStack_60;
  int local_44;
  
  local_68 = &PTR_LAB_04ac95a8;
  local_44 = param_2;
  switch(param_2) {
  case 0:
    local_68 = &PTR_LAB_04ac95d0;
    break;
  case 1:
    local_68 = &PTR_LAB_04ac9670;
    break;
  case 2:
    local_68 = &PTR_LAB_04ac9648;
    break;
  case 0x17:
    local_68 = &PTR_LAB_04ac95f8;
    break;
  case 0x18:
    local_68 = &PTR_LAB_04ac9620;
    break;
  case 0x1a:
    lVar9 = param_1 + 0x1f8;
    uVar4 = FUN_02612f30(lVar9,0x300000000,0);
    iVar2 = FUN_02612f30(lVar9,0x300000000,1);
    uVar3 = FUN_02612f30(lVar9,0x300000000,2);
    lVar9 = FUN_02612f30(lVar9,0x300000000,3);
    uStack_60 = (uVar3 & 0xffff) << 0x20 | lVar9 << 0x30 | (ulong)(uint)(iVar2 << 0x10) |
                uVar4 & 0xffff;
    local_68 = &PTR_FUN_04ac9698;
  }
  lVar9 = *(long *)(param_1 + 0x1c2f8);
  piVar1 = *(int **)(param_1 + 0x1c300);
  if (0 < *piVar1) {
    lVar5 = 0;
    puVar8 = *(undefined8 **)(piVar1 + 4);
    do {
      puVar6 = *(undefined8 **)(*(long *)(piVar1 + 2) + lVar5 * 8);
      lVar5 = lVar5 + 1;
      *puVar6 = puVar8;
      *(undefined8 **)(piVar1 + 4) = puVar6;
      puVar8 = puVar6;
    } while (lVar5 < *piVar1);
  }
  *piVar1 = 0;
  iVar2 = *(int *)(lVar9 + 0x6a000);
  if (iVar2 != 0) {
    puVar8 = *(undefined8 **)(lVar9 + 0x6a008);
    lVar9 = (long)iVar2 << 3;
    do {
      uVar7 = *puVar8;
      uVar4 = (*(code *)*local_68)(&local_68,uVar7);
      if ((uVar4 & 1) != 0) {
        FUN_00dbf7b0(piVar1,uVar7);
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  if (local_44 == 0x1a) {
    FUN_0359a6d0(param_1,*(undefined8 *)(param_1 + 0x1c300));
  }
  *(undefined4 *)(param_1 + 0x228) = **(undefined4 **)(param_1 + 0x1c300);
  return;
}

