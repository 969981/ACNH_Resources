
void FUN_03684b10(long param_1,long param_2)

{
  undefined2 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  
  uVar5 = *(uint *)(param_2 + 0x234);
  if (0x7f < uVar5) {
    uVar5 = 0x80;
  }
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      puVar1 = (undefined2 *)(param_2 + 0x34 + ((long)((ulong)uVar7 << 0x20) >> 0x1e));
      local_36 = 0;
      local_34 = 0;
      local_38 = *puVar1;
      plVar6 = (long *)(*(long *)(param_1 + 8) + ((ulong)*(byte *)(puVar1 + 1) & 7) * 0x770);
      FUN_0277d4ac(&local_38);
      FUN_0277dedc(&local_38);
      lVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
      uVar3 = FUN_0277d6c4(&local_38);
      if ((uVar3 >> 3 & 0x1fff) < 0x753) {
        lVar2 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
        *(uint *)(lVar4 + lVar2) = *(uint *)(lVar4 + lVar2) | 1 << (ulong)(uVar3 & 0x1f);
      }
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
  }
  return;
}

