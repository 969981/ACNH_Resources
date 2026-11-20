
void FUN_03ea8060(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *(undefined1 *)(param_1 + 0xb8) = 1;
  if (*(char *)(param_1 + 0xb9) != '\0' || *(char *)(param_1 + 0xba) != '\0') {
    if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
      lVar7 = (long)*(int *)(param_1 + 0x24);
      lVar5 = *(long *)(param_1 + 0x18) - lVar7;
      do {
        FUN_03ea6e30(lVar5,param_1 + 0x88);
        FUN_03ea6f00(lVar5,param_1 + 0x70);
        lVar5 = *(long *)(lVar5 + lVar7 + 8) - lVar7;
      } while (lVar5 != (param_1 + 0x10) - lVar7);
    }
  }
  if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
    lVar7 = (long)*(int *)(param_1 + 0x24);
    lVar5 = *(long *)(param_1 + 0x18) - lVar7;
    do {
      lVar6 = *(long *)(lVar5 + 0x30);
      uVar4 = (uint)(*(char *)(param_1 + 0xb8) != '\0');
      uVar1 = 0;
      if (*(char *)(param_1 + 0xb9) != '\0') {
        uVar1 = uVar4;
      }
      uVar2 = 0;
      if (*(char *)(param_1 + 0xba) != '\0') {
        uVar2 = uVar4;
      }
      if (uVar1 == (*(byte *)(lVar6 + 0xd8) & 2) >> 1) {
        if (uVar1 == 0) {
          FUN_03bf3a60(lVar6);
          bVar3 = 2;
        }
        else {
          FUN_03bf2370(lVar6 + 0x80);
          bVar3 = 0;
        }
        *(byte *)(lVar6 + 0xd8) = *(byte *)(lVar6 + 0xd8) & 0xfd | bVar3;
      }
      lVar6 = *(long *)(lVar5 + 0x38);
      if (uVar2 == (*(byte *)(lVar6 + 0xd8) & 2) >> 1) {
        if (uVar2 == 0) {
          FUN_03bf3a60(lVar6);
          bVar3 = 2;
        }
        else {
          FUN_03bf2370(lVar6 + 0x80);
          bVar3 = 0;
        }
        *(byte *)(lVar6 + 0xd8) = *(byte *)(lVar6 + 0xd8) & 0xfd | bVar3;
      }
      lVar5 = *(long *)(lVar5 + lVar7 + 8) - lVar7;
    } while (lVar5 != (param_1 + 0x10) - lVar7);
  }
  return;
}

