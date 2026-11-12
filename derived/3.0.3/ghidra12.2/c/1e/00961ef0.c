
void FUN_00961ef0(undefined4 param_1,long param_2,undefined1 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar3 = *(uint *)(param_2 + 0x3c);
  if (uVar3 != 0) {
    uVar4 = *(uint *)(param_2 + 0x38);
    if (uVar4 != 0) {
      uVar2 = 0;
      do {
        if (uVar4 != 0) {
          uVar3 = 0;
          do {
            uVar4 = uVar3 + uVar2 * uVar4;
            puVar5 = (undefined4 *)(*(long *)(param_2 + 0x50) + (long)(int)uVar4 * 0x34);
            if (*(uint *)(param_2 + 0x48) <= uVar4) {
              puVar5 = (undefined4 *)0x0;
            }
            *puVar5 = param_1;
            puVar5[1] = param_1;
            puVar5[2] = param_1;
            puVar5[3] = param_1;
            puVar5[4] = param_1;
            puVar5[5] = param_1;
            puVar5[6] = param_1;
            puVar5[7] = param_1;
            puVar5[8] = param_1;
            puVar5[9] = param_1;
            puVar5[10] = param_1;
            puVar5[0xb] = param_1;
            *(undefined1 *)(puVar5 + 0xc) = param_3;
            *(undefined1 *)((long)puVar5 + 0x31) = param_3;
            *(undefined1 *)((long)puVar5 + 0x32) = param_3;
            *(undefined1 *)((long)puVar5 + 0x33) = param_3;
            uVar4 = uVar3 + uVar2 * *(int *)(param_2 + 0x38);
            puVar1 = (uint *)(*(long *)(param_2 + 0x70) + (long)(int)uVar4 * 4);
            if (*(uint *)(param_2 + 0x68) <= uVar4) {
              puVar1 = (uint *)0x0;
            }
            *puVar1 = *puVar1 | 1;
            *puVar1 = *puVar1 | 2;
            *puVar1 = *puVar1 & 0xfffffffb;
            *puVar1 = *puVar1 & 0xfffffff7;
            *puVar1 = *puVar1 & 0xffffffef;
            *puVar1 = *puVar1 & 0xffffffdf;
            *puVar1 = *puVar1 & 0xffffffbf;
            *puVar1 = *puVar1 & 0xffffff7f;
            *puVar1 = *puVar1 | 0x100;
            *puVar1 = *puVar1 | 0x200;
            *puVar1 = *puVar1 | 0x400;
            *puVar1 = *puVar1 | 0x800;
            *puVar1 = *puVar1 | 0x1000;
            *puVar1 = *puVar1 & 0xffffdfff;
            *puVar1 = *puVar1 & 0xffffbfff;
            *puVar1 = *puVar1 & 0xffff7fff;
            *puVar1 = *puVar1 | 0x10000;
            *puVar1 = *puVar1 | 0x20000;
            *puVar1 = *puVar1 & 0xfffbffff;
            *puVar1 = *puVar1 & 0xfff7ffff;
            if (*(long *)(param_2 + 0x60) != 0) {
              uVar4 = uVar3 + uVar2 * *(int *)(param_2 + 0x38);
              puVar5 = (undefined4 *)(*(long *)(param_2 + 0x60) + (long)(int)uVar4 * 0x34);
              if (*(uint *)(param_2 + 0x58) <= uVar4) {
                puVar5 = (undefined4 *)0x0;
              }
              *puVar5 = 0xc3fa0000;
              *(undefined8 *)(puVar5 + 1) = 0xc3fa0000c3fa0000;
              *(undefined8 *)(puVar5 + 3) = 0xc3fa0000c3fa0000;
              *(undefined8 *)(puVar5 + 5) = 0xc3fa0000c3fa0000;
              *(undefined8 *)(puVar5 + 7) = 0xc3fa0000c3fa0000;
              *(undefined8 *)(puVar5 + 9) = 0xc3fa0000c3fa0000;
              puVar5[0xb] = 0xc3fa0000;
              *(undefined1 *)(puVar5 + 0xc) = 7;
              *(undefined1 *)((long)puVar5 + 0x31) = 7;
              *(undefined1 *)((long)puVar5 + 0x32) = 7;
              *(undefined1 *)((long)puVar5 + 0x33) = 7;
            }
            uVar4 = *(uint *)(param_2 + 0x38);
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar4);
          uVar3 = *(uint *)(param_2 + 0x3c);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
  }
  return;
}

