
void FUN_0390dff0(long *param_1,long param_2,int param_3,undefined4 *param_4,int param_5,int param_6
                 )

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  
  lVar9 = *(long *)param_1[1] + (long)param_3 * 0xc;
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar9 + 8) * 4];
  uVar3 = (**(code **)(*param_1 + 0x18))();
  if ((0 < param_6) && (bVar2 != 0)) {
    iVar4 = 0;
    lVar9 = param_2 + (ulong)*(ushort *)(lVar9 + 4) + (long)(int)((uVar3 & 0xff) * param_5) * 4;
    do {
      if (bVar2 < 8) {
        lVar5 = 0;
      }
      else {
        lVar6 = 0;
        lVar5 = 0;
        do {
          puVar8 = (undefined4 *)((long)param_4 + lVar6);
          puVar1 = (undefined4 *)(lVar9 + lVar6);
          lVar5 = lVar5 + -8;
          lVar6 = lVar6 + 0x20;
          *puVar1 = *puVar8;
          puVar1[1] = puVar8[1];
          puVar1[2] = puVar8[2];
          puVar1[3] = puVar8[3];
          puVar1[4] = puVar8[4];
          puVar1[5] = puVar8[5];
          puVar1[6] = puVar8[6];
          puVar1[7] = puVar8[7];
        } while (-lVar5 != ((ulong)bVar2 & 0xf8));
        param_4 = (undefined4 *)((long)param_4 + lVar6);
        lVar5 = -lVar5;
      }
      if ((bVar2 & 7) != 0) {
        lVar5 = lVar5 << 2;
        uVar7 = (ulong)bVar2 & 7;
        puVar8 = param_4;
        do {
          param_4 = puVar8 + 1;
          uVar7 = uVar7 - 1;
          *(undefined4 *)(lVar9 + lVar5) = *puVar8;
          lVar5 = lVar5 + 4;
          puVar8 = param_4;
        } while (uVar7 != 0);
      }
      iVar4 = iVar4 + 1;
      lVar9 = lVar9 + ((ulong)uVar3 & 0xff) * 4;
    } while (iVar4 != param_6);
  }
  return;
}

