
void FUN_00451dc0(ulong *param_1)

{
  ulong *puVar1;
  char cVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  
  uVar5 = *param_1;
  if (0 < (int)uVar5) {
    uVar6 = uVar5 & 0xffffffff;
    puVar1 = param_1 + 1;
    cVar2 = (char)puVar1[uVar5 * 2];
    puVar3 = param_1;
    while( true ) {
      uVar6 = uVar6 - 1;
      puVar3 = puVar3 + 2;
      if (cVar2 == '\x01') {
        local_58 = puVar3[-1];
        uStack_50 = *puVar3;
        uVar4 = 0;
        if (uStack_50 != 0) {
          uVar4 = FUN_00428370();
        }
        local_48 = uVar4;
        if ((uVar4 & 1) != 0) {
          FUN_0043dd30(uVar4 & 0xfffffffffffffffe);
        }
        FUN_00440b30(&local_58,3,1);
        if ((local_48 & 1) != 0) {
          FUN_0043dd50(local_48 & 0xfffffffffffffffe);
        }
        puVar3[-1] = 0;
        *puVar3 = (ulong)&DAT_04c164e8;
        *(undefined1 *)(puVar1 + uVar5 * 2) = 0;
      }
      if (uVar6 == 0) break;
      uVar5 = *param_1;
      puVar1 = (ulong *)((long)puVar1 + 1);
      cVar2 = (char)puVar1[uVar5 * 2];
    }
  }
  return;
}

