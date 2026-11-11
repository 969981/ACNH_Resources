
void FUN_004acdb0(long *param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined4 local_24;
  
  local_24 = param_2;
  lVar3 = FUN_004ad980(param_1,&local_24);
  if (lVar3 != 0) {
    lVar4 = (lVar3 - param_1[2]) * 0x20000000;
    uVar5 = *(uint *)(lVar3 + 4) | (uint)lVar4;
    if (-1 < (int)uVar5) {
      lVar3 = *param_1 + (long)(int)uVar5 * 0x18;
      iVar2 = *(int *)(lVar3 + 0x10);
      if (iVar2 != 0) {
        puVar8 = *(undefined8 **)(lVar3 + 8);
        uVar9 = (long)iVar2 * 8 - 8;
        uVar1 = ((uint)(uVar9 >> 3) & 0x1fffffff) + 1;
        puVar7 = puVar8;
        if ((uVar1 & 3) != 0) {
          lVar3 = -((ulong)uVar1 & 3);
          puVar6 = puVar8;
          do {
            puVar7 = puVar6 + 1;
            lVar3 = lVar3 + 1;
            *(undefined8 *)*puVar6 = param_3;
            puVar6 = puVar7;
          } while (lVar3 != 0);
        }
        if (0x17 < uVar9) {
          do {
            *(undefined8 *)*puVar7 = param_3;
            *(undefined8 *)puVar7[1] = param_3;
            *(undefined8 *)puVar7[2] = param_3;
            puVar6 = puVar7 + 3;
            puVar7 = puVar7 + 4;
            *(undefined8 *)*puVar6 = param_3;
          } while (puVar7 != puVar8 + iVar2);
        }
      }
      if ((*(uint *)(param_1 + 3) < (uint)((ulong)lVar4 >> 0x20)) ||
         (lVar3 = param_1[2] + (lVar4 >> 0x20) * 8, *(uint *)(lVar3 + 4) != uVar5)) {
        lVar3 = FUN_004ad980(param_1,*param_1 + (long)(int)uVar5 * 0x18);
      }
      FUN_004ada00(param_1,lVar3);
      return;
    }
  }
  return;
}

