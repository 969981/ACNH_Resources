
/* WARNING: Type propagation algorithm not settling */

void FUN_022c6780(undefined8 *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  short sVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if ((*(byte *)((long)param_1 + 0x1c) >> 3 & 1) != 0) {
    lVar6 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar6 + 0x473);
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
      if (7 < bVar3) {
        pbVar1 = (byte *)(lVar6 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar6 + 0x472) != bVar3)) {
        return;
      }
    }
    if (DAT_055c1b60 != &DAT_055c1b58) {
      sVar5 = 0;
      puVar7 = DAT_055c1b60;
      do {
        if (*(int *)(puVar7 + -1) == 0x6622bd46) goto LAB_022c6834;
        puVar7 = (undefined8 *)puVar7[1];
        sVar5 = sVar5 + 1;
      } while (puVar7 != &DAT_055c1b58);
    }
    sVar5 = -1;
LAB_022c6834:
    if (*(short *)((long)param_1 + 0x14) == sVar5) {
      pbVar1 = PTR_DAT_04bb5038 + (uint)(int)*(char *)((long)param_1 + 0x17);
      if (7 < (uint)(int)*(char *)((long)param_1 + 0x17)) {
        pbVar1 = PTR_DAT_04bb32e0;
      }
      if ((((*pbVar1 < 8) && (uVar4 = FUN_02582d8c(pbVar1,1), uVar4 < 8)) &&
          (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')) {
        bVar3 = *(byte *)((long)param_1 + 0x1f);
        cVar2 = *(char *)((long)param_1 + 0x1c);
        if ((bVar3 & 1) != 0) {
          local_48 = param_1[2];
          uStack_40 = param_1[3];
          local_38 = *(undefined4 *)(param_1 + 4);
          local_58 = *param_1;
          uStack_50 = param_1[1];
          FUN_022c6a80(&local_58,0xfffffffe,0xfffffffe);
        }
        if ((bVar3 >> 1 & 1) != 0) {
          local_48 = param_1[2];
          uStack_40 = param_1[3];
          local_38 = *(undefined4 *)(param_1 + 4);
          local_58 = *param_1;
          uStack_50 = param_1[1];
          FUN_022c6a80(&local_58,0,0xfffffffe);
        }
        if ((bVar3 >> 2 & 1) != 0) {
          local_48 = param_1[2];
          uStack_40 = param_1[3];
          local_38 = *(undefined4 *)(param_1 + 4);
          local_58 = *param_1;
          uStack_50 = param_1[1];
          FUN_022c6a80(&local_58,2,0xfffffffe);
        }
        if ((bVar3 >> 3 & 1) != 0) {
          local_48 = param_1[2];
          uStack_40 = param_1[3];
          local_38 = *(undefined4 *)(param_1 + 4);
          local_58 = *param_1;
          uStack_50 = param_1[1];
          FUN_022c6a80(&local_58,0xfffffffe,0);
        }
        if (cVar2 < '\0') {
          local_48 = param_1[2];
          uStack_40 = param_1[3];
          local_38 = *(undefined4 *)(param_1 + 4);
          local_58 = *param_1;
          uStack_50 = param_1[1];
          FUN_022c6a80(&local_58,0,0);
        }
        if ((bVar3 >> 4 & 1) != 0) {
          local_48 = param_1[2];
          uStack_40 = param_1[3];
          local_38 = *(undefined4 *)(param_1 + 4);
          local_58 = *param_1;
          uStack_50 = param_1[1];
          FUN_022c6a80(&local_58,2,0);
        }
        if ((bVar3 >> 5 & 1) != 0) {
          local_48 = param_1[2];
          uStack_40 = param_1[3];
          local_38 = *(undefined4 *)(param_1 + 4);
          local_58 = *param_1;
          uStack_50 = param_1[1];
          FUN_022c6a80(&local_58,0xfffffffe,2);
        }
        if ((bVar3 >> 6 & 1) != 0) {
          local_48 = param_1[2];
          uStack_40 = param_1[3];
          local_38 = *(undefined4 *)(param_1 + 4);
          local_58 = *param_1;
          uStack_50 = param_1[1];
          FUN_022c6a80(&local_58,0,2);
        }
        if ((char)bVar3 < '\0') {
          local_48 = param_1[2];
          uStack_40 = param_1[3];
          local_38 = *(undefined4 *)(param_1 + 4);
          local_58 = *param_1;
          uStack_50 = param_1[1];
          FUN_022c6a80(&local_58,2,2);
        }
      }
    }
  }
  return;
}

