
void FUN_0364bd90(long param_1,long param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  
  bVar3 = *(byte *)(param_4 + 1);
  uVar1 = bVar3 + 8;
  bVar4 = *(byte *)(param_4 + 2);
  uVar8 = bVar3 - param_3;
  bVar5 = *(byte *)(param_4 + 3);
  uVar10 = 8;
  if (uVar1 <= param_3 + 8) {
    uVar10 = uVar1 - param_3;
  }
  uVar9 = (uint)bVar3;
  uVar1 = 8;
  if (uVar9 <= param_3) {
    uVar1 = uVar10;
  }
  bVar6 = *(byte *)(param_4 + 4);
  if (uVar9 <= param_3) {
    uVar8 = 0;
  }
  uVar7 = ((ulong)bVar4 & 3) << 2 | 0x10;
  lVar2 = *(long *)(*(long *)(param_1 + 0x90) + 0x20) + 0x1f00;
  uVar10 = (uint)bVar3;
  if ((bVar4 >> 6 & 1) == 0) {
    if ((bVar4 >> 5 & 1) == 0) {
      if (param_3 <= uVar10) {
        param_3 = uVar10;
      }
      iVar11 = 7 - param_3;
      do {
        uVar12 = (ulong)(iVar11 + (uint)*(byte *)(param_4 + 1));
        uVar12 = (ulong)(bVar5 >> (uVar12 & 0x3f)) & 1 |
                 ((ulong)(bVar6 >> (uVar12 & 0x3f)) & 1) << 1;
        if ((int)uVar12 != 0) {
          *(undefined1 *)(param_2 + (ulong)uVar8) = *(undefined1 *)(lVar2 + (uVar12 | uVar7));
        }
        uVar8 = uVar8 + 1;
        iVar11 = iVar11 + -1;
      } while (uVar8 < uVar1);
    }
    else {
      uVar8 = param_3;
      if (param_3 <= uVar10) {
        uVar8 = uVar10;
      }
      iVar11 = 7 - uVar8;
      do {
        uVar12 = (ulong)(iVar11 + (uint)*(byte *)(param_4 + 1));
        uVar12 = (ulong)(bVar5 >> (uVar12 & 0x3f)) & 1 |
                 ((ulong)(bVar6 >> (uVar12 & 0x3f)) & 1) << 1;
        if (((int)uVar12 != 0) && (*(char *)(param_1 + (ulong)uVar8 + 0xa0) == '\0')) {
          *(undefined1 *)(param_2 + (ulong)(-param_3 + uVar8)) =
               *(undefined1 *)(lVar2 + (uVar12 | uVar7));
        }
        uVar8 = uVar8 + 1;
        iVar11 = iVar11 + -1;
      } while (-param_3 + uVar8 < uVar1);
    }
  }
  else {
    iVar11 = -param_3;
    if (param_3 <= uVar9) {
      param_3 = uVar10;
    }
    if ((bVar4 >> 5 & 1) == 0) {
      do {
        uVar12 = (ulong)(param_3 - *(byte *)(param_4 + 1));
        uVar12 = (ulong)(bVar5 >> (uVar12 & 0x3f)) & 1 |
                 ((ulong)(bVar6 >> (uVar12 & 0x3f)) & 1) << 1;
        if ((int)uVar12 != 0) {
          *(undefined1 *)(param_2 + (ulong)(iVar11 + param_3)) =
               *(undefined1 *)(lVar2 + (uVar12 | uVar7));
        }
        param_3 = param_3 + 1;
      } while (iVar11 + param_3 < uVar1);
    }
    else {
      do {
        uVar12 = (ulong)(param_3 - *(byte *)(param_4 + 1));
        uVar12 = (ulong)(bVar5 >> (uVar12 & 0x3f)) & 1 |
                 ((ulong)(bVar6 >> (uVar12 & 0x3f)) & 1) << 1;
        if (((int)uVar12 != 0) && (*(char *)(param_1 + (ulong)param_3 + 0xa0) == '\0')) {
          *(undefined1 *)(param_2 + (ulong)(iVar11 + param_3)) =
               *(undefined1 *)(lVar2 + (uVar12 | uVar7));
        }
        param_3 = param_3 + 1;
      } while (iVar11 + param_3 < uVar1);
    }
  }
  return;
}

