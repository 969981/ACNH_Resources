
void FUN_02bec9c0(long param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 local_80;
  byte local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar2 = (uint *)(param_1 + 0x1c1c8);
  if (0 < (int)*puVar2) {
    lVar5 = 0;
    puVar10 = *(undefined8 **)(param_1 + 0x1c1d8);
    do {
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x1c1d0) + lVar5 * 8);
      lVar5 = lVar5 + 1;
      *puVar8 = puVar10;
      *(undefined8 **)(param_1 + 0x1c1d8) = puVar8;
      puVar10 = puVar8;
    } while (lVar5 < (int)*puVar2);
  }
  *puVar2 = 0;
  local_68 = 0;
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0;
  local_80 = FUN_03401dc0();
  local_7c = *(byte *)(param_1 + 0x1f8);
  if (7 < local_7c) {
    local_7c = 0xff;
  }
  FUN_03401f10(puVar2,&local_80);
  uVar11 = *puVar2;
  if (1 < (int)uVar11) {
    puVar10 = *(undefined8 **)(param_1 + 0x1c1d0);
    uVar6 = (ulong)(uVar11 >> 1);
    do {
      uVar14 = (uint)uVar6 * 2;
      uVar9 = puVar10[uVar6 - 1 & 0xffffffff];
      if ((int)uVar11 < (int)uVar14) {
        uVar3 = (uint)uVar6;
      }
      else {
        uVar12 = uVar6 & 0xffffffff;
        do {
          if ((int)uVar14 < (int)uVar11) {
            uVar3 = FUN_01a4e630((puVar10 + (int)uVar14)[-1],puVar10[(int)uVar14]);
            uVar13 = uVar14 | uVar3 >> 0x1f;
          }
          else {
            uVar13 = uVar14;
          }
          iVar4 = FUN_01a4e630(uVar9,puVar10[(int)(uVar13 - 1)]);
          uVar3 = (uint)uVar12;
          if (-1 < iVar4) break;
          uVar14 = uVar13 * 2;
          uVar12 = (ulong)uVar13;
          puVar10[(int)(uVar3 - 1)] = puVar10[(int)(uVar13 - 1)];
          uVar3 = uVar13;
        } while ((int)uVar14 <= (int)uVar11);
      }
      puVar10[(int)(uVar3 - 1)] = uVar9;
      bVar1 = 1 < (long)uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
    uVar6 = (ulong)uVar11 - 1;
    uVar12 = uVar6 & 0xffffffff;
    uVar9 = puVar10[uVar12];
    puVar10[uVar12] = *puVar10;
    uVar12 = (ulong)uVar11;
    if (2 < uVar11) {
      do {
        uVar7 = uVar6;
        uVar11 = 2;
        uVar14 = 1;
        do {
          if ((int)uVar11 < (int)uVar7) {
            uVar3 = FUN_01a4e630((puVar10 + (int)uVar11)[-1],puVar10[(int)uVar11]);
            uVar3 = uVar11 | uVar3 >> 0x1f;
          }
          else {
            uVar3 = uVar11;
          }
          iVar4 = FUN_01a4e630(uVar9,puVar10[(int)(uVar3 - 1)]);
          if (-1 < iVar4) {
            lVar5 = (long)(int)(uVar14 - 1);
            break;
          }
          lVar5 = (long)(int)(uVar3 - 1);
          uVar11 = uVar3 << 1;
          puVar10[(int)(uVar14 - 1)] = puVar10[lVar5];
          uVar14 = uVar3;
        } while ((long)(int)uVar11 < (long)uVar12);
        puVar10[lVar5] = uVar9;
        uVar6 = uVar7 - 1 & 0xffffffff;
        uVar9 = puVar10[uVar6];
        puVar10[uVar6] = *puVar10;
        uVar6 = uVar7 - 1;
        uVar12 = uVar7;
      } while (2 < uVar7);
    }
    *puVar10 = uVar9;
  }
  if ((*(int *)(param_1 + 0x1d254) == 0) && ((int)*puVar2 < *(int *)(param_1 + 0x1c1cc))) {
    puVar10 = *(undefined8 **)(param_1 + 0x1c1d8);
    if (puVar10 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x1c1d8) = *puVar10;
    }
    *(undefined2 *)puVar10 = DAT_05586008;
    *(undefined1 *)((long)puVar10 + 2) = DAT_0558600a;
    *(undefined1 *)((long)puVar10 + 3) = DAT_0558600b;
    *(undefined4 *)((long)puVar10 + 4) = DAT_0558600c;
    uVar11 = *puVar2;
    if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)(param_1 + 0x1c1cc))) {
      if (uVar11 != 0) {
        memmove((void *)((long)*(void **)(param_1 + 0x1c1d0) + 8),*(void **)(param_1 + 0x1c1d0),
                (long)(int)uVar11 << 3);
      }
      **(undefined8 **)(param_1 + 0x1c1d0) = puVar10;
      *puVar2 = *puVar2 + 1;
    }
  }
  return;
}

