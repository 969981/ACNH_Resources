
void FUN_02f929b4(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined **local_70;
  undefined4 local_68;
  uint local_64;
  int iStack_60;
  undefined2 local_5c;
  undefined8 local_5a;
  undefined4 local_50;
  undefined8 local_4c;
  byte local_44;
  
  if (param_2 < 2) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x210) + (ulong)param_2 * 8 + 0x580);
    if (lVar5 != 0) {
      uVar2 = *(uint *)(param_1 + 0x218);
      puVar1 = (undefined8 *)(param_1 + 0x238);
      if (*(uint *)(param_1 + 0x220) != param_2) {
        puVar1 = (undefined8 *)(param_1 + 0x230);
      }
      local_44 = *(byte *)(param_1 + 0x1f8);
      if (7 < local_44) {
        local_44 = 0xff;
      }
      local_68 = *(undefined4 *)*puVar1;
      local_4c = 0x60000000c;
      iStack_60 = *(int *)(param_1 + 0x224 + (ulong)param_2 * 4);
      local_50 = 0;
      local_5c = 0;
      local_70 = &PTR_LAB_04b2b020;
      if (iStack_60 < 0) {
        iStack_60 = 0;
        local_64 = 0;
      }
      else {
        iVar3 = *(int *)(lVar5 + 0x2e8);
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = iStack_60 / iVar3;
        }
        local_64 = iVar4 * iVar3 & (iVar4 * iVar3 >> 0x1f ^ 0xffffffffU);
      }
      local_5a = (ulong)CONCAT15(uVar2 == param_2,0x1000001);
      FUN_03864290(lVar5,&local_70);
      if (uVar2 == param_2) {
        FUN_0345b4a0(lVar5,0);
      }
      else {
        FUN_0345b550(lVar5,1);
      }
      FUN_02f92af0(lVar5,uVar2 == param_2,*(undefined4 *)(param_1 + 0x224 + (ulong)param_2 * 4));
    }
  }
  return;
}

