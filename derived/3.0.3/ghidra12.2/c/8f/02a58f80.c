
void FUN_02a58f80(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = PTR_DAT_04bbc570;
  lVar7 = *(long *)(param_2 + 8);
  if (lVar7 != 0) {
    uVar1 = *(uint *)(param_3 + 8);
    if ((*(int *)(param_2 + 0x20) <= (int)uVar1) && ((int)uVar1 <= *(int *)(param_2 + 0x30))) {
      uVar2 = *(uint *)(param_3 + 0xc);
      if ((*(int *)(param_2 + 0x24) <= (int)uVar2) && ((int)uVar2 <= *(int *)(param_2 + 0x34))) {
        uVar8 = 0xffffffff;
        if ((uVar1 < 0x120) && (uVar2 < 0x100)) {
          uVar8 = *(undefined4 *)(lVar7 + (ulong)uVar1 * 0x400 + (ulong)uVar2 * 4 + 0x30);
        }
        FUN_01360490(lVar7,uVar8);
        return;
      }
    }
  }
  uVar3 = PTR_DAT_04bbc570[8];
  *param_1 = (long)(PTR_DAT_04bc4608 + 0x10);
  *(undefined1 *)(param_1 + 1) = uVar3;
  puVar5 = PTR_DAT_04bb2010;
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(puVar6 + 0xc);
  lVar7 = *(long *)(puVar6 + 0x18);
  param_1[2] = (long)(puVar5 + 0x10);
  param_1[3] = lVar7;
  uVar4 = *(undefined2 *)(puVar6 + 0x24);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar6 + 0x20);
  *(undefined2 *)((long)param_1 + 0x24) = uVar4;
  return;
}

