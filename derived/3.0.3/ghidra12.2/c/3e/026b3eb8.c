
void FUN_026b3eb8(long param_1,undefined2 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  
  uVar4 = FUN_0268f390((int)param_1,param_2,param_2 + 4,*(undefined4 *)(param_2 + 0x12),
                       *(undefined1 *)(param_2 + 0x14),param_3,0);
  if (-1 < (int)uVar4) {
    uVar6 = 0x20;
    uVar1 = uVar4 - 0x18;
    if (uVar4 < 0x18) {
      uVar6 = 0x18;
      uVar1 = uVar4;
    }
    if (uVar1 < uVar6) {
      lVar5 = param_1 + 0x10d6c;
      if (uVar4 < 0x18) {
        lVar5 = param_1 + 0x1094c;
      }
      puVar7 = (undefined2 *)(lVar5 + (ulong)uVar1 * 0x2c);
      *puVar7 = *param_2;
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(param_2 + 1);
      *(undefined1 *)((long)puVar7 + 3) = *(undefined1 *)((long)param_2 + 3);
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_2 + 2);
      if (*(int *)(param_2 + 4) == 0) {
        *(undefined4 *)(puVar7 + 0x10) = 0;
        *(undefined8 *)(puVar7 + 4) = 0;
        *(undefined8 *)(puVar7 + 8) = 0;
        *(undefined8 *)(puVar7 + 0xc) = 0;
      }
      else {
        uVar2 = *(undefined8 *)(param_2 + 4);
        uVar3 = *(undefined8 *)(param_2 + 8);
        uVar8 = *(undefined8 *)(param_2 + 0xc);
        *(undefined4 *)(puVar7 + 0x10) = *(undefined4 *)(param_2 + 0x10);
        *(undefined8 *)(puVar7 + 4) = uVar2;
        *(undefined8 *)(puVar7 + 8) = uVar3;
        *(undefined8 *)(puVar7 + 0xc) = uVar8;
      }
      lVar5 = lVar5 + (ulong)uVar1 * 0x2c;
      *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(param_2 + 0x12);
      *(undefined1 *)(lVar5 + 0x28) = *(undefined1 *)(param_2 + 0x14);
      *(undefined1 *)(lVar5 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
      *(undefined1 *)(lVar5 + 0x2b) = *(undefined1 *)((long)param_2 + 0x2b);
    }
  }
  return;
}

