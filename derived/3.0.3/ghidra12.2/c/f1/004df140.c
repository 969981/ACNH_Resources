
ulong FUN_004df140(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  
  puVar1 = PTR_DAT_048607b8;
  local_50 = (long)*(int *)(param_1 + 0x230);
  local_48 = param_2;
  lVar2 = FUN_004705d0(param_1 + 0x2c8,PTR_DAT_048607b8,&local_48,&local_50);
  uVar10 = *(ulong *)(*(long *)(param_1 + 0x2c8) + ((lVar2 << 0x20) >> 0x1c) + 8);
  iVar9 = (int)uVar10;
  if (*(int *)(param_1 + 0x230) != iVar9) goto LAB_004df308;
  local_38 = local_38 & 0xffffff00;
  local_48 = 0;
  uStack_40 = 0;
  iVar8 = iVar9 + 1;
  if (iVar9 < (int)(*(uint *)(param_1 + 0x234) & 0x3fffffff)) {
    lVar2 = *(long *)(param_1 + 0x228);
    iVar7 = iVar9;
LAB_004df200:
    *(int *)(param_1 + 0x230) = iVar8;
    if (iVar7 <= iVar9) {
      puVar4 = (undefined8 *)(lVar2 + (long)iVar7 * 0x18);
      uVar3 = (iVar9 + 1) - iVar7 & 3;
      if (2 < (uint)(iVar9 - iVar7)) {
        iVar8 = (iVar7 + uVar3 + -1) - iVar9;
        puVar5 = puVar4;
        do {
          *puVar5 = local_48;
          puVar5[1] = uStack_40;
          *(uint *)(puVar5 + 2) = local_38;
          *(undefined4 *)((long)puVar5 + 0x14) = 0;
          puVar5[3] = local_48;
          puVar5[4] = uStack_40;
          *(uint *)(puVar5 + 5) = local_38;
          *(undefined4 *)((long)puVar5 + 0x2c) = 0;
          puVar5[6] = local_48;
          puVar5[7] = uStack_40;
          *(uint *)(puVar5 + 8) = local_38;
          *(undefined4 *)((long)puVar5 + 0x44) = 0;
          puVar4 = puVar5 + 0xc;
          puVar5[9] = local_48;
          puVar5[10] = uStack_40;
          *(uint *)(puVar5 + 0xb) = local_38;
          *(undefined4 *)((long)puVar5 + 0x5c) = 0;
          iVar8 = iVar8 + 4;
          puVar5 = puVar4;
        } while (iVar8 != 0);
      }
      if (uVar3 != 0) {
        iVar8 = -uVar3;
        do {
          *puVar4 = local_48;
          puVar4[1] = uStack_40;
          *(uint *)(puVar4 + 2) = local_38;
          *(undefined4 *)((long)puVar4 + 0x14) = 0;
          iVar8 = iVar8 + 1;
          puVar4 = puVar4 + 3;
        } while (iVar8 != 0);
      }
      lVar2 = *(long *)(param_1 + 0x228);
    }
  }
  else {
    lVar2 = FUN_00426720(puVar1,iVar8,0x18,*(undefined8 *)(param_1 + 0x228),uVar10 & 0xffffffff,
                         param_1 + 0x234);
    iVar7 = *(int *)(param_1 + 0x230);
    *(long *)(param_1 + 0x228) = lVar2;
    if (iVar7 <= iVar9) goto LAB_004df200;
    if (iVar8 < iVar7) {
      *(int *)(param_1 + 0x230) = iVar8;
    }
  }
  lVar6 = ((long)iVar9 + (long)iVar9 * 2) * 8;
  *(undefined8 *)(lVar2 + lVar6) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x228) + lVar6 + 8) = 0;
  uVar3 = *(uint *)(param_1 + 0x2a8);
  if (uVar3 == (*(uint *)(param_1 + 0x2ac) & 0x3fffffff)) {
    FUN_00426990(puVar1,param_1 + 0x2a0,4);
    uVar3 = *(uint *)(param_1 + 0x2a8);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x2a0) + (long)(int)uVar3 * 4) = 0;
  *(uint *)(param_1 + 0x2a8) = uVar3 + 1;
LAB_004df308:
  return uVar10 & 0xffffffff;
}

