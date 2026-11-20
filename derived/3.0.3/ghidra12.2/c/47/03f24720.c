
void FUN_03f24720(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar3 = *(uint *)(param_1 + 0x10);
    if (0 < (int)uVar3) {
      uVar2 = 0;
      do {
        uVar5 = uVar2;
        if (uVar3 <= uVar2) {
          uVar5 = 0;
        }
        lVar4 = *(long *)(param_1 + 0x18) + (ulong)uVar5 * 0x68;
        uVar3 = *(uint *)(lVar4 + 0x30);
        if (0 < (int)uVar3) {
          uVar5 = 0;
          do {
            lVar8 = *(long *)(lVar4 + 0x38);
            uVar1 = uVar5;
            if (uVar3 <= uVar5) {
              uVar1 = 0;
            }
            if (*(char *)(lVar8 + (ulong)uVar1 * 0x14) == '\0') {
              uVar3 = uVar5;
              if (*(uint *)(lVar4 + 0x58) <= uVar5) {
                uVar3 = 0;
              }
              puVar7 = (undefined8 *)(*(long *)(lVar4 + 0x60) + (ulong)uVar3 * 0xc);
              *puVar7 = 0xff7fffffff7fffff;
              *(undefined4 *)(puVar7 + 1) = 0xff7fffff;
              uVar3 = *(uint *)(lVar4 + 0x30);
              lVar8 = *(long *)(lVar4 + 0x38);
            }
            uVar1 = uVar5;
            if (uVar3 <= uVar5) {
              uVar1 = 0;
            }
            uVar5 = uVar5 + 1;
            puVar6 = (undefined1 *)(lVar8 + (ulong)uVar1 * 0x14);
            *puVar6 = 0;
            *(undefined8 *)(puVar6 + 4) = 0;
            *(undefined8 *)(puVar6 + 0xc) = 0x7f7fffff00000000;
            uVar3 = *(uint *)(lVar4 + 0x30);
          } while ((int)uVar5 < (int)uVar3);
        }
        *(undefined4 *)(lVar4 + 0x44) = 0;
        uVar2 = uVar2 + 1;
        uVar3 = *(uint *)(param_1 + 0x10);
      } while ((int)uVar2 < (int)uVar3);
    }
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  return;
}

