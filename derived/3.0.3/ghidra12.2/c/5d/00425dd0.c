
void FUN_00425dd0(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  lVar4 = 0;
  do {
    bVar1 = ((undefined1 *)*param_1)[lVar4];
    uVar8 = (uint)lVar4;
    uVar7 = uVar8;
    if (0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      iVar6 = *(int *)(param_1 + 1);
      uVar2 = iVar6 - 1;
      uVar5 = (ulong)uVar2;
      if ((int)uVar2 <= (int)uVar8) {
        uVar7 = uVar2;
      }
      if (0 < (int)uVar7) {
LAB_00425e24:
        iVar6 = iVar6 - uVar7;
        *(int *)(param_1 + 1) = iVar6;
        if (0 < iVar6) {
          uVar8 = ~uVar8;
          if ((int)uVar8 <= (int)~(uint)uVar5) {
            uVar8 = ~(uint)uVar5;
          }
          lVar4 = 0;
          puVar3 = (undefined1 *)*param_1;
          do {
            lVar4 = (lVar4 << 0x20) + 0x100000000 >> 0x20;
            *puVar3 = puVar3[(int)~uVar8];
            puVar3 = puVar3 + 1;
          } while (lVar4 < iVar6);
        }
      }
      return;
    }
    iVar6 = *(int *)(param_1 + 1);
    uVar5 = (long)iVar6 - 1;
    if ((long)uVar5 <= lVar4) {
      if ((int)(uint)uVar5 <= (int)uVar8) {
        uVar7 = (uint)uVar5;
      }
      if ((int)uVar7 < 1) {
        return;
      }
      goto LAB_00425e24;
    }
    lVar4 = lVar4 + 1;
  } while( true );
}

