
void FUN_03c32910(undefined4 *param_1,long param_2,int param_3,long param_4,long param_5,
                 uint param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  int iVar9;
  ushort uVar10;
  ushort local_6a [53];
  
  uVar2 = 1 << (ulong)(param_6 & 0x1f);
  uVar3 = (ulong)uVar2;
  if (param_3 == -1) {
    *param_1 = 1;
    param_1[1] = param_6;
  }
  else {
    uVar6 = 0;
    uVar8 = 1;
    uVar5 = uVar2 - 1;
    do {
      uVar10 = *(ushort *)(param_2 + uVar6 * 2);
      if ((short)uVar10 == -1) {
        uVar7 = (ulong)uVar5;
        uVar5 = uVar5 - 1;
        param_1[uVar7 * 2 + 3] = (int)uVar6;
        uVar10 = 1;
      }
      else if ((0x8000 << (ulong)(param_6 & 0x1f)) >> 0x10 <= (int)(short)uVar10) {
        uVar8 = 0;
      }
      local_6a[uVar6] = uVar10;
      uVar6 = uVar6 + 1;
    } while (param_3 + 1 != uVar6);
    *param_1 = uVar8;
    param_1[1] = param_6;
    uVar6 = 0;
    uVar7 = 0;
    do {
      if (0 < *(short *)(param_2 + uVar6 * 2)) {
        iVar9 = 0;
        do {
          param_1[uVar7 * 2 + 3] = (int)uVar6;
          do {
            uVar1 = (uVar2 >> 3) + (uVar2 >> 1) + 3 + (int)uVar7 & uVar2 - 1;
            uVar7 = (ulong)uVar1;
          } while (uVar5 < uVar1);
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(short *)(param_2 + uVar6 * 2));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_3 + 1);
  }
  puVar4 = param_1 + 3;
  do {
    uVar6 = (ulong)*puVar4;
    uVar3 = uVar3 - 1;
    uVar10 = local_6a[uVar6];
    local_6a[uVar6] = uVar10 + 1;
    uVar5 = (param_6 - 0x1f) + (int)LZCOUNT((uint)uVar10);
    *(char *)((long)puVar4 + -1) = (char)uVar5;
    *(ushort *)(puVar4 + -1) = (uVar10 << (ulong)(uVar5 & 0x1f)) - (short)uVar2;
    *(char *)((long)puVar4 + -2) = (char)*(undefined4 *)(param_5 + uVar6 * 4);
    *puVar4 = *(uint *)(param_4 + uVar6 * 4);
    puVar4 = puVar4 + 2;
  } while (uVar3 != 0);
  return;
}

