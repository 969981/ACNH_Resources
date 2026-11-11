
void FUN_00653bd0(long param_1,int param_2,int param_3,code *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined2 local_8e;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  do {
    puVar3 = (undefined8 *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x30);
    local_98 = puVar3[1];
    local_a0 = *puVar3;
    local_90 = *(undefined2 *)(puVar3 + 2);
    local_8e = *(undefined2 *)((long)puVar3 + 0x12);
    uStack_78 = puVar3[5];
    local_80 = puVar3[4];
    iVar5 = param_3;
    iVar7 = param_2;
    do {
      lVar9 = (long)iVar7 * 0x30;
      do {
        iVar8 = iVar7;
        uVar2 = (*param_4)(param_1 + lVar9,&local_a0);
        lVar9 = lVar9 + 0x30;
        iVar7 = iVar8 + 1;
      } while ((uVar2 & 1) != 0);
      lVar4 = (long)iVar5 * 0x30;
      iVar5 = iVar5 + 1;
      do {
        iVar6 = iVar5;
        uVar2 = (*param_4)(&local_a0,param_1 + lVar4);
        lVar4 = lVar4 + -0x30;
        iVar5 = iVar6 + -1;
      } while ((uVar2 & 1) != 0);
      iVar7 = iVar8;
      if (iVar8 <= iVar5) {
        if (iVar8 != iVar5) {
          lVar4 = param_1 + lVar4;
          local_68 = *(undefined8 *)(lVar4 + 0x38);
          local_70 = *(undefined8 *)(lVar4 + 0x30);
          lVar9 = param_1 + lVar9;
          uVar10 = *(undefined8 *)(lVar9 + -0x28);
          uVar12 = *(undefined8 *)(lVar4 + 0x58);
          uVar11 = *(undefined8 *)(lVar4 + 0x50);
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar9 + -0x30);
          *(undefined8 *)(lVar4 + 0x38) = uVar10;
          uVar1 = *(undefined4 *)(lVar4 + 0x40);
          *(undefined2 *)(lVar4 + 0x40) = *(undefined2 *)(lVar9 + -0x20);
          *(undefined2 *)(lVar4 + 0x42) = *(undefined2 *)(lVar9 + -0x1e);
          uVar10 = *(undefined8 *)(lVar9 + -0x10);
          *(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)(lVar9 + -8);
          *(undefined8 *)(lVar4 + 0x50) = uVar10;
          *(undefined8 *)(lVar9 + -0x28) = local_68;
          *(undefined8 *)(lVar9 + -0x30) = local_70;
          *(undefined4 *)(lVar9 + -0x20) = uVar1;
          *(undefined8 *)(lVar9 + -8) = uVar12;
          *(undefined8 *)(lVar9 + -0x10) = uVar11;
        }
        iVar5 = iVar6 + -2;
        iVar7 = iVar8 + 1;
      }
    } while (iVar7 <= iVar5);
    if (param_2 < iVar5) {
      FUN_00653bd0(param_1,param_2,iVar5,param_4);
    }
    param_2 = iVar7;
  } while (iVar7 < param_3);
  return;
}

