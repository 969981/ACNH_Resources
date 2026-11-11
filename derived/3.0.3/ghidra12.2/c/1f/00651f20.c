
void FUN_00651f20(long param_1,int param_2,int param_3,code *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 local_68;
  
  do {
    local_68 = *(undefined8 *)(param_1 + (long)(param_2 + param_3 >> 1) * 8);
    iVar7 = param_2;
    iVar4 = param_3;
    do {
      puVar1 = (undefined8 *)(param_1 + (long)iVar7 * 8);
      do {
        iVar9 = iVar7;
        puVar6 = puVar1;
        uVar2 = (*param_4)(puVar6,&local_68);
        puVar1 = puVar6 + 1;
        iVar7 = iVar9 + 1;
      } while ((uVar2 & 1) != 0);
      puVar1 = (undefined8 *)(param_1 + (long)iVar4 * 8);
      iVar4 = iVar4 + 1;
      do {
        iVar5 = iVar4;
        puVar8 = puVar1;
        uVar2 = (*param_4)(&local_68,puVar8);
        iVar4 = iVar5 + -1;
        puVar1 = puVar8 + -1;
      } while ((uVar2 & 1) != 0);
      iVar7 = iVar9;
      if (iVar9 <= iVar4) {
        if (iVar9 != iVar4) {
          uVar3 = *puVar8;
          *puVar8 = *puVar6;
          *puVar6 = uVar3;
        }
        iVar4 = iVar5 + -2;
        iVar7 = iVar9 + 1;
      }
    } while (iVar7 <= iVar4);
    if (param_2 < iVar4) {
      FUN_00651f20(param_1,param_2,iVar4,param_4);
    }
    param_2 = iVar7;
  } while (iVar7 < param_3);
  return;
}

