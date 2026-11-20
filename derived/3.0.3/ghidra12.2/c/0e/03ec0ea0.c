
void FUN_03ec0ea0(int *param_1,long param_2,undefined1 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = *(uint *)(param_2 + 0x18);
  if (0 < (int)uVar2) {
    puVar4 = (undefined8 *)0x0;
    uVar3 = 0;
    do {
      lVar6 = *(long *)(param_2 + 0x10);
      uVar1 = uVar3;
      if (*(uint *)(param_2 + 8) <= uVar3) {
        uVar1 = 0;
      }
      if (*param_1 < param_1[1]) {
        puVar5 = *(undefined8 **)(param_1 + 4);
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 4) = *puVar5;
        }
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        if (*param_1 < param_1[1]) {
          *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar5;
          *param_1 = *param_1 + 1;
        }
      }
      else {
        puVar5 = (undefined8 *)0x0;
      }
      lVar7 = lVar6 + (ulong)uVar1 * 0x30;
      lVar6 = lVar6 + (ulong)uVar1 * 0x30;
      *(short *)((long)puVar5 + 6) = (short)param_1[0x718];
      *(short *)(param_1 + 0x718) = (short)param_1[0x718] + 1;
      *(undefined1 *)((long)puVar5 + 0x1a) = 0;
      *(undefined1 *)puVar5 = param_3;
      *(undefined2 *)((long)puVar5 + 2) = *(undefined2 *)(lVar6 + 0x18);
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar7 + 4);
      *(undefined4 *)((long)puVar5 + 0x14) = *(undefined4 *)(lVar6 + 0x1c);
      *(byte *)((long)puVar5 + 1) = *(byte *)(*(long *)(lVar7 + 0x10) + 0x7a) >> 3 & 1;
      *(byte *)(puVar5 + 3) = *(byte *)(lVar6 + 0x24) >> 4 & 1;
      *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)(lVar6 + 0x28);
      *(byte *)((long)puVar5 + 0x19) = *(byte *)(lVar6 + 0x24) >> 5 & 1;
      if ((*(ushort *)(lVar6 + 0x24) >> 6 & 1) == 0) {
        if (puVar4 != (undefined8 *)0x0) {
          puVar4[1] = puVar5;
          *(undefined1 *)((long)puVar4 + 0x1a) = 1;
          *(undefined1 *)((long)puVar5 + 0x1a) = 1;
        }
        puVar5 = (undefined8 *)0x0;
      }
      puVar4 = puVar5;
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  uVar2 = *(uint *)(param_2 + 0x30);
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      lVar6 = *(long *)(param_2 + 0x28);
      puVar4 = *(undefined8 **)(param_1 + 0x50c);
      uVar1 = uVar3;
      if (*(uint *)(param_2 + 0x20) <= uVar3) {
        uVar1 = 0;
      }
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x50c) = *puVar4;
      }
      *puVar4 = 0;
      if (param_1[0x508] < param_1[0x509]) {
        *(undefined8 **)(*(long *)(param_1 + 0x50a) + (long)param_1[0x508] * 8) = puVar4;
        param_1[0x508] = param_1[0x508] + 1;
      }
      lVar6 = lVar6 + (ulong)uVar1 * 0x28;
      *(undefined1 *)puVar4 = param_3;
      uVar3 = uVar3 + 1;
      *(char *)((long)puVar4 + 1) = (char)*(undefined4 *)(lVar6 + 0x18);
      *(undefined2 *)((long)puVar4 + 2) = *(undefined2 *)(lVar6 + 0x1c);
      *(undefined4 *)((long)puVar4 + 4) = *(undefined4 *)(lVar6 + 4);
    } while (uVar2 != uVar3);
  }
  uVar2 = *(uint *)(param_2 + 0x48);
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      lVar6 = *(long *)(param_2 + 0x40);
      puVar4 = *(undefined8 **)(param_1 + 0x614);
      uVar1 = uVar3;
      if (*(uint *)(param_2 + 0x38) <= uVar3) {
        uVar1 = 0;
      }
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x614) = *puVar4;
      }
      *(undefined4 *)(puVar4 + 2) = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      if (param_1[0x610] < param_1[0x611]) {
        *(undefined8 **)(*(long *)(param_1 + 0x612) + (long)param_1[0x610] * 8) = puVar4;
        param_1[0x610] = param_1[0x610] + 1;
      }
      lVar6 = lVar6 + (ulong)uVar1 * 0x28;
      *(undefined1 *)puVar4 = param_3;
      uVar3 = uVar3 + 1;
      *(undefined2 *)((long)puVar4 + 2) = *(undefined2 *)(lVar6 + 0x18);
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(lVar6 + 4);
      *(undefined4 *)((long)puVar4 + 0xc) = *(undefined4 *)(lVar6 + 0x1c);
    } while (uVar2 != uVar3);
  }
  return;
}

