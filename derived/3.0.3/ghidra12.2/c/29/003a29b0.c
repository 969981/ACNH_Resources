
void FUN_003a29b0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  bVar3 = *(byte *)((long)param_1 + 0x1c);
  if ((bVar3 & 1) != 0) {
    if (((1 < (int)param_1[2]) && (0 < (int)param_1[3])) && (0 < *(int *)((long)param_1 + 0x14))) {
      lVar4 = 0;
      do {
        lVar6 = *param_1;
        if (0 < (int)param_1[2]) {
          uVar1 = *(uint *)(lVar6 + lVar4 * 4);
          iVar5 = 0;
          do {
            uVar2 = (int)lVar4 + *(int *)((long)param_1 + 0x14) * iVar5;
            iVar5 = iVar5 + 1;
            uVar7 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
            *(uint *)(param_1[1] + uVar7) = *(uint *)(param_1[1] + uVar7) | uVar1;
          } while (iVar5 < (int)param_1[2]);
          lVar6 = *param_1;
        }
        *(undefined4 *)(lVar6 + lVar4 * 4) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)((long)param_1 + 0x14));
      bVar3 = *(byte *)((long)param_1 + 0x1c);
    }
    *(undefined1 *)((long)param_1 + 0x1d) = 0xff;
    *(byte *)((long)param_1 + 0x1c) = bVar3 & 0xfe;
  }
  return;
}

