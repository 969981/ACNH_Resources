
undefined8
FUN_003c92d0(long param_1,uint *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 uVar1;
  byte bVar2;
  int *piVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  if ((((param_3 < 0) || (*(char *)(param_1 + 0x10) == '\0')) ||
      (piVar3 = (int *)FUN_003c9520(*(undefined8 *)(param_1 + 8)), *piVar3 <= param_3)) ||
     (((lVar4 = FUN_003c952c(*(undefined8 *)(param_1 + 8),param_3), lVar4 == 0 ||
       (lVar4 = FUN_003c9570(lVar4,param_4), lVar4 == 0)) ||
      (puVar5 = (uint *)FUN_003c9630(lVar4,param_5), puVar5 == (uint *)0x0)))) {
    return 0;
  }
  uVar8 = *puVar5;
  puVar6 = (uint *)FUN_003c9514(*(undefined8 *)(param_1 + 8));
  if (uVar8 < *puVar6) {
    if (puVar6[(ulong)uVar8 * 2 + 2] != 0xffffffff) {
      *param_2 = puVar6[(ulong)uVar8 * 2 + 1];
      param_2[1] = puVar6[(ulong)uVar8 * 2 + 2];
      puVar7 = (undefined1 *)FUN_003c98a8(puVar5);
      if (puVar7 == (undefined1 *)0x0) {
        uVar1 = FUN_003c96f0(puVar5);
        *(undefined1 *)((long)param_2 + 0x11) = uVar1;
        uVar1 = FUN_003c9708(puVar5);
        *(undefined1 *)((long)param_2 + 0x12) = uVar1;
        uVar1 = FUN_003c9728(puVar5);
        *(undefined1 *)((long)param_2 + 0x13) = uVar1;
        uVar8 = FUN_003c9750(puVar5);
        param_2[2] = uVar8;
        bVar2 = FUN_003c9780(puVar5);
        *(byte *)(param_2 + 5) = bVar2 & 1;
        uVar1 = FUN_003c97c0(puVar5);
        *(undefined1 *)((long)param_2 + 0x15) = uVar1;
        uVar1 = FUN_003c97fc(puVar5);
        *(undefined1 *)((long)param_2 + 0x16) = uVar1;
        puVar5 = (uint *)FUN_003c9834(puVar5);
        uVar8 = puVar5[1];
        param_2[3] = *puVar5;
        *(char *)(param_2 + 4) = (char)uVar8;
        return 1;
      }
      *(undefined1 *)((long)param_2 + 0x11) = *puVar7;
      *(undefined1 *)((long)param_2 + 0x12) = puVar7[4];
      *(undefined1 *)((long)param_2 + 0x13) = puVar7[8];
      param_2[2] = *(uint *)(puVar7 + 0xc);
      *(undefined1 *)(param_2 + 5) = puVar7[0x10];
      *(undefined1 *)((long)param_2 + 0x15) = puVar7[0x11];
      *(undefined1 *)((long)param_2 + 0x16) = puVar7[0x12];
      uVar8 = *(uint *)(puVar7 + 0x20);
      *(undefined1 *)(param_2 + 4) = puVar7[0x24];
      param_2[3] = uVar8;
      return 1;
    }
  }
  return 0;
}

