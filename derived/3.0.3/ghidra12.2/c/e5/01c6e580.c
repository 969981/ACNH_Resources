
void FUN_01c6e580(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  *param_1 = (long)(PTR_DAT_04bc0fa8 + 0x10);
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  param_1[2] = (long)puVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = (long)(param_1 + 3);
  param_1[6] = 0x10;
  FUN_0018b070(param_1 + 2,*(undefined8 *)(param_2 + 0x28),0xffffffffffffffff);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  FUN_01c6e6d0();
  uVar4 = *(undefined4 *)(param_2 + 0x50);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 10) = uVar4;
  puVar2 = *(undefined1 **)(param_2 + 0x58);
  puVar3 = *(undefined1 **)(param_2 + 0x60);
  uVar5 = (long)puVar3 - (long)puVar2;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c6e7e8();
    }
    puVar6 = (undefined1 *)FUN_00187df4(uVar5);
    param_1[0xd] = (long)(puVar6 + uVar5);
    param_1[0xb] = (long)puVar6;
    param_1[0xc] = (long)puVar6;
    puVar7 = puVar2;
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    }
    if ((undefined1 *)0x2 < puVar3 + ~(ulong)puVar2) {
      do {
        *puVar6 = *puVar7;
        puVar6[1] = puVar7[1];
        puVar6[2] = puVar7[2];
        puVar2 = puVar7 + 3;
        puVar7 = puVar7 + 4;
        puVar6[3] = *puVar2;
        puVar6 = puVar6 + 4;
      } while (puVar7 != puVar3);
    }
    param_1[0xc] = (long)puVar6;
  }
  param_1[0xe] = *(long *)(param_2 + 0x70);
  return;
}

