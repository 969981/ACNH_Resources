
void FUN_01312d70(long param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_4;
  
  puVar2 = (undefined8 *)(param_1 + 8);
  local_4 = param_2;
  local_48 = *puVar2;
  local_3c = *(undefined8 *)(param_1 + 0x14);
  local_40 = *(undefined4 *)(param_1 + 0x10);
  local_34 = *(undefined4 *)(param_1 + 0x1c);
  local_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(param_1 + 0x30);
  uStack_1c = *(undefined4 *)(param_1 + 0x34);
  local_18 = *(undefined4 *)(param_1 + 0x38);
  uStack_14 = *(undefined4 *)(param_1 + 0x3c);
  local_10 = *(undefined4 *)(param_1 + 0x40);
  uStack_c = *(undefined4 *)(param_1 + 0x44);
  switch(param_2) {
  case 0:
    lVar3 = 0;
    puVar4 = &DAT_04174c1c;
    do {
      puVar1 = &DAT_04174c18 + (ulong)*(uint *)((long)&DAT_04174c98 + lVar3) * 2;
      if (0xf < *(uint *)((long)&DAT_04174c98 + lVar3)) {
        puVar1 = &DAT_04174c18;
      }
      uVar5 = 5;
      if ((puVar1[1] | *puVar1) < 4) {
        uVar5 = *(undefined4 *)((long)&local_48 + ((ulong)*puVar1 + (ulong)puVar1[1] * 4) * 4);
      }
      if ((*puVar4 | puVar4[-1]) < 4) {
        *(undefined4 *)((long)puVar2 + ((ulong)puVar4[-1] + (ulong)*puVar4 * 4) * 4) = uVar5;
      }
      lVar3 = lVar3 + 4;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0x40);
    break;
  case 1:
    lVar3 = 0;
    puVar4 = &DAT_04174c1c;
    do {
      puVar1 = &DAT_04174c18 + (ulong)*(uint *)((long)&DAT_04174cd8 + lVar3) * 2;
      if (0xf < *(uint *)((long)&DAT_04174cd8 + lVar3)) {
        puVar1 = &DAT_04174c18;
      }
      uVar5 = 5;
      if ((puVar1[1] | *puVar1) < 4) {
        uVar5 = *(undefined4 *)((long)&local_48 + ((ulong)*puVar1 + (ulong)puVar1[1] * 4) * 4);
      }
      if ((*puVar4 | puVar4[-1]) < 4) {
        *(undefined4 *)((long)puVar2 + ((ulong)puVar4[-1] + (ulong)*puVar4 * 4) * 4) = uVar5;
      }
      lVar3 = lVar3 + 4;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0x40);
    break;
  case 2:
    lVar3 = 0;
    puVar4 = &DAT_04174c1c;
    do {
      puVar1 = &DAT_04174c18 + (ulong)*(uint *)((long)&DAT_04174d18 + lVar3) * 2;
      if (0xf < *(uint *)((long)&DAT_04174d18 + lVar3)) {
        puVar1 = &DAT_04174c18;
      }
      uVar5 = 5;
      if ((puVar1[1] | *puVar1) < 4) {
        uVar5 = *(undefined4 *)((long)&local_48 + ((ulong)*puVar1 + (ulong)puVar1[1] * 4) * 4);
      }
      if ((*puVar4 | puVar4[-1]) < 4) {
        *(undefined4 *)((long)puVar2 + ((ulong)puVar4[-1] + (ulong)*puVar4 * 4) * 4) = uVar5;
      }
      lVar3 = lVar3 + 4;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0x40);
    break;
  case 3:
    lVar3 = 0;
    puVar4 = &DAT_04174c1c;
    do {
      puVar1 = &DAT_04174c18 + (ulong)*(uint *)((long)&DAT_04174d58 + lVar3) * 2;
      if (0xf < *(uint *)((long)&DAT_04174d58 + lVar3)) {
        puVar1 = &DAT_04174c18;
      }
      uVar5 = 5;
      if ((puVar1[1] | *puVar1) < 4) {
        uVar5 = *(undefined4 *)((long)&local_48 + ((ulong)*puVar1 + (ulong)puVar1[1] * 4) * 4);
      }
      if ((*puVar4 | puVar4[-1]) < 4) {
        *(undefined4 *)((long)puVar2 + ((ulong)puVar4[-1] + (ulong)*puVar4 * 4) * 4) = uVar5;
      }
      lVar3 = lVar3 + 4;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0x40);
  }
  return;
}

