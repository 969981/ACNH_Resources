
void FUN_00974960(long param_1,long param_2,undefined1 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  uVar1 = *(int *)(param_2 + 0x24) + 1;
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar1 != uVar4) {
    uVar2 = *(uint *)(param_2 + 0x10);
    uVar6 = uVar2;
    uVar5 = uVar2;
    do {
      if ((((-1 < (int)uVar5) && (-1 < (int)uVar4)) && (uVar5 < *(uint *)(param_1 + 0x38))) &&
         (uVar4 < *(uint *)(param_1 + 0x3c))) {
        uVar3 = uVar5 + *(uint *)(param_1 + 0x38) * uVar4;
        if (*(long *)(param_1 + 0x60) == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          puVar9 = (undefined8 *)(*(long *)(param_1 + 0x60) + (long)(int)uVar3 * 0x34);
          if (*(uint *)(param_1 + 0x58) <= uVar3) {
            puVar9 = (undefined8 *)0x0;
          }
        }
        puVar8 = (undefined8 *)(*(long *)(param_1 + 0x50) + (long)(int)uVar3 * 0x34);
        if (*(uint *)(param_1 + 0x48) <= uVar3) {
          puVar8 = (undefined8 *)0x0;
        }
        if ((puVar9 != (undefined8 *)0x0) && (puVar8 != (undefined8 *)0x0)) {
          uVar7 = *puVar8;
          *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar8 + 1);
          *puVar9 = uVar7;
          *(undefined1 *)(puVar9 + 6) = param_3;
          uVar7 = *(undefined8 *)((long)puVar8 + 0xc);
          *(undefined4 *)((long)puVar9 + 0x14) = *(undefined4 *)((long)puVar8 + 0x14);
          *(undefined8 *)((long)puVar9 + 0xc) = uVar7;
          *(undefined1 *)((long)puVar9 + 0x31) = param_3;
          uVar7 = puVar8[3];
          *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar8 + 4);
          puVar9[3] = uVar7;
          *(undefined1 *)((long)puVar9 + 0x32) = param_3;
          uVar7 = *(undefined8 *)((long)puVar8 + 0x24);
          *(undefined4 *)((long)puVar9 + 0x2c) = *(undefined4 *)((long)puVar8 + 0x2c);
          *(undefined8 *)((long)puVar9 + 0x24) = uVar7;
          *(undefined1 *)((long)puVar9 + 0x33) = param_3;
          uVar6 = *(uint *)(param_2 + 0x10);
        }
      }
      if ((int)uVar5 < *(int *)(param_2 + 0x20)) {
        uVar5 = uVar5 + 1;
      }
      else {
        uVar4 = uVar4 + 1;
        uVar5 = uVar6;
      }
    } while (uVar2 != uVar5 || uVar1 != uVar4);
  }
  return;
}

