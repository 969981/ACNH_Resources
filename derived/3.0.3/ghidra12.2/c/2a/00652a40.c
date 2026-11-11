
void FUN_00652a40(long param_1,int param_2,undefined8 *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  
  uVar10 = DAT_0413f4f8;
  uVar9 = DAT_0413f4f0;
  uVar8 = DAT_0413f4e8;
  uVar7 = DAT_0413f4e0;
  uVar6 = DAT_0413f4d8;
  uVar5 = DAT_0413f4d0;
  uVar4 = DAT_0413f4c8;
  uVar3 = DAT_0413f4c0;
  if (*(int *)(param_1 + 0x30) < 1) {
    if (0 < (int)param_4) {
      uVar12 = (ulong)param_4;
      puVar13 = param_3 + 4;
      do {
        puVar13[-3] = uVar4;
        puVar13[-4] = uVar3;
        puVar13[-1] = uVar6;
        puVar13[-2] = uVar5;
        uVar12 = uVar12 - 1;
        puVar13[1] = uVar8;
        *puVar13 = uVar7;
        puVar13[3] = uVar10;
        puVar13[2] = uVar9;
        puVar13 = puVar13 + 8;
      } while (uVar12 != 0);
    }
  }
  else if ((0 < (int)param_4) && (iVar11 = param_4 * 4, 0 < iVar11)) {
    puVar13 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)param_2 * 0x40);
    do {
      uVar1 = *(undefined4 *)(puVar13 + 1);
      uVar2 = *(undefined4 *)((long)puVar13 + 0xc);
      *param_3 = *puVar13;
      *(undefined4 *)(param_3 + 1) = uVar1;
      *(undefined4 *)((long)param_3 + 0xc) = uVar2;
      iVar11 = iVar11 + -1;
      puVar13 = puVar13 + 2;
      param_3 = param_3 + 2;
    } while (iVar11 != 0);
  }
  return;
}

