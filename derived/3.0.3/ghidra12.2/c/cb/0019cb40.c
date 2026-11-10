
void FUN_0019cb40(long *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)&PTR_FUN_04839690;
  puVar1 = *(undefined1 **)(param_2 + 0x10);
  puVar2 = *(undefined1 **)(param_2 + 0x18);
  uVar3 = (long)puVar2 - (long)puVar1;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c6e7e8();
    }
    puVar4 = (undefined1 *)FUN_00187df4(uVar3);
    param_1[4] = (long)(puVar4 + uVar3);
    param_1[2] = (long)puVar4;
    param_1[3] = (long)puVar4;
    puVar5 = puVar1;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    if ((undefined1 *)0x2 < puVar2 + ~(ulong)puVar1) {
      do {
        *puVar4 = *puVar5;
        puVar4[1] = puVar5[1];
        puVar4[2] = puVar5[2];
        puVar1 = puVar5 + 3;
        puVar5 = puVar5 + 4;
        puVar4[3] = *puVar1;
        puVar4 = puVar4 + 4;
      } while (puVar5 != puVar2);
    }
    param_1[3] = (long)puVar4;
  }
  return;
}

