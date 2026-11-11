
void FUN_003a8a34(long param_1)

{
  (*(code *)(&PTR_LAB_0484e2e8)
            [((ulong)(*(uint *)(param_1 + 0xc) >> 2) & 1 | (ulong)*(uint *)(param_1 + 0xc) & 3) * 2]
  )();
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  return;
}

