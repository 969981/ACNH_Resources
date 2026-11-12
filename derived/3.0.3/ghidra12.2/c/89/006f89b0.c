
undefined8 FUN_006f89b0(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x60);
  if (lVar9 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    iVar4 = FUN_006bd550(param_2[1],0);
    iVar2 = *(int *)(param_1 + 0x288);
    if (iVar2 != 0) {
      iVar10 = 0;
      do {
        iVar1 = 0;
        if (*(int *)(param_1 + 0x280) <= iVar10 + *(int *)(param_1 + 0x284)) {
          iVar1 = *(int *)(param_1 + 0x280);
        }
        uVar3 = *(uint *)(*(long *)(param_1 + 0x278) +
                          (long)(iVar10 + (*(int *)(param_1 + 0x284) - iVar1)) * 0x60 + 0x50);
        lVar6 = *(long *)(lVar9 + 0x1138);
        if (lVar6 == 0) {
          puVar7 = &DAT_04c931a0;
        }
        else {
          uVar8 = 0;
          if (*(long *)(lVar6 + 0x78) != 0) {
            uVar8 = *(uint *)(*(long *)(lVar6 + 0x78) + 0x18);
          }
          if (uVar8 <= uVar3) {
            uVar3 = 0;
          }
          if (*(uint *)(lVar6 + 0x80) <= uVar3) {
            uVar3 = 0;
          }
          puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x88) + (long)(int)uVar3 * 0xe8 + 0x60);
        }
        if ((*(int *)(puVar7 + 0xb) == iVar4) && (uVar5 = FUN_0073da08(lVar9), (uVar5 & 1) == 0)) {
          return 0;
        }
        iVar10 = iVar10 + 1;
      } while (iVar2 != iVar10);
    }
  }
  return 1;
}

