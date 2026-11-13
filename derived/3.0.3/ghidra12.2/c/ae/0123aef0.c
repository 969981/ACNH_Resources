
byte FUN_0123aef0(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  
  puVar6 = PTR_DAT_04bbbc78;
  puVar5 = PTR_DAT_04bbbc70;
  if (*param_1 != 0) {
    cVar8 = *PTR_DAT_04bbbc70;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined4 *)(puVar6 + 0x60) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar6 + 0x58);
        if (-1 < (int)uVar4) {
          if ((ulong)uVar4 + (long)param_1 == 0) {
            return 0;
          }
          uVar2 = param_2 + 7;
          if (-1 < (int)param_2) {
            uVar2 = param_2;
          }
          return *(byte *)((ulong)uVar4 + (long)param_1 + (ulong)(uint)((int)uVar2 >> 3)) >>
                 (ulong)(param_2 & 7) & 1;
        }
        if (uVar4 != 0xffffffff) {
          return 0;
        }
      }
      puVar9 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) {
        return 0;
      }
      if (param_1 == puVar9) {
        return 0;
      }
      lVar3 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)param_1 + (lVar3 - (long)puVar9);
      if (lVar3 == 0) {
        return 0;
      }
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
      *(undefined4 *)(puVar6 + 0x58) = 0xfffffffe;
      if (uVar7 == 0) {
        return 0;
      }
      piVar10 = (int *)(lVar3 + 4);
      while (piVar10[-1] != 0x623dc307) {
        piVar10 = piVar10 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) {
          return 0;
        }
      }
      iVar1 = 0;
      if (*piVar10 != -1) {
        iVar1 = *piVar10;
      }
      *(int *)(puVar6 + 0x58) = iVar1;
    } while (*param_1 != 0);
  }
  return 0;
}

