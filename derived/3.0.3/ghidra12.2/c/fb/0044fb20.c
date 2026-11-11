
void FUN_0044fb20(undefined8 param_1,byte *param_2,long *param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  short *psVar10;
  long lVar11;
  undefined8 local_58;
  
  puVar2 = PTR_DAT_048607b8;
  if (param_2 == (byte *)0x0) {
    return;
  }
  bVar1 = *param_2;
  do {
    if ((bVar1 & 1) == 0) {
      param_2 = *(byte **)(param_2 + 8);
    }
    else {
      uVar5 = FUN_00428440(param_2);
      if (((param_2 != (byte *)0x0) && ((uVar5 & 0x1f) == 8)) &&
         (puVar6 = (undefined8 *)FUN_00426e90(param_2,1), puVar6 != (undefined8 *)0x0)) {
        iVar9 = (int)((ulong)*puVar6 >> 8);
        while (0 < iVar9) {
          iVar9 = iVar9 + -1;
          uVar7 = FUN_00426d90(param_2);
          FUN_00426d90(param_2);
          iVar3 = FUN_00426fc0();
          FUN_0044fb20(param_1,uVar7,param_3,param_4 + iVar3 * iVar9);
        }
      }
      if ((((char)param_2[2] < '\0') &&
          (puVar6 = (undefined8 *)FUN_00426db0(param_2,0x800000), puVar6 != (undefined8 *)0x0)) &&
         ((psVar10 = (short *)*puVar6, psVar10 != (short *)0x0 && ((long)*psVar10 != 0)))) {
        lVar11 = (long)*psVar10 << 3;
        do {
          uVar7 = *(undefined8 *)((long)psVar10 + lVar11);
          local_58 = uVar7;
          iVar9 = FUN_00429050(&local_58);
          FUN_0044fb20(param_1,uVar7,param_3,param_4 + iVar9);
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
      if ((((param_2[1] >> 6 & 1) != 0) &&
          (plVar8 = (long *)FUN_00426db0(param_2,0x4000), plVar8 != (long *)0x0)) &&
         ((puVar6 = (undefined8 *)*plVar8, puVar6 != (undefined8 *)0x0 &&
          (iVar9 = (int)*puVar6, 0 < iVar9)))) {
        plVar8 = puVar6 + (long)iVar9 * 2;
        lVar11 = (long)iVar9;
        do {
          lVar11 = lVar11 + -1;
          FUN_0044fb20(param_1,plVar8[-1],param_3,*plVar8 + param_4);
          plVar8 = plVar8 + -2;
        } while (0 < lVar11);
      }
      uVar4 = FUN_004274f0(param_2);
      if ((uVar4 >> 7 & 1) != 0) {
        uVar4 = *(uint *)(param_3 + 1);
        if (uVar4 == (*(uint *)((long)param_3 + 0xc) & 0x3fffffff)) {
          FUN_00426990(puVar2,param_3,0x10);
          uVar4 = *(uint *)(param_3 + 1);
        }
        *(uint *)(param_3 + 1) = uVar4 + 1;
        plVar8 = (long *)(*param_3 + (long)(int)uVar4 * 0x10);
        *plVar8 = param_4;
        plVar8[1] = 0;
      }
      param_2 = *(byte **)(param_2 + 8);
      if (param_2 == (byte *)0x0) {
        return;
      }
    }
    bVar1 = *param_2;
  } while( true );
}

