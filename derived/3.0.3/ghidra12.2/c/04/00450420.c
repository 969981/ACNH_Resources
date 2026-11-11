
void FUN_00450420(undefined8 param_1,byte *param_2,long *param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  short *psVar11;
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
      plVar4 = (long *)FUN_00426e90(param_2,0x1000000);
      if ((plVar4 != (long *)0x0) && (lVar9 = *plVar4, lVar9 != 0)) {
        uVar8 = *(uint *)(param_3 + 1);
        if (uVar8 == (*(uint *)((long)param_3 + 0xc) & 0x3fffffff)) {
          FUN_00426990(puVar2,param_3,0x10);
          uVar8 = *(uint *)(param_3 + 1);
        }
        *(uint *)(param_3 + 1) = uVar8 + 1;
        plVar4 = (long *)(*param_3 + (long)(int)uVar8 * 0x10);
        *plVar4 = param_4;
        plVar4[1] = lVar9;
      }
      uVar5 = FUN_00428440(param_2);
      if (((param_2 != (byte *)0x0) && ((uVar5 & 0x1f) == 8)) &&
         (puVar6 = (undefined8 *)FUN_00426e90(param_2,1), puVar6 != (undefined8 *)0x0)) {
        iVar10 = (int)((ulong)*puVar6 >> 8);
        while (0 < iVar10) {
          iVar10 = iVar10 + -1;
          uVar7 = FUN_00426d90(param_2);
          FUN_00426d90(param_2);
          iVar3 = FUN_00426fc0();
          FUN_00450420(param_1,uVar7,param_3,param_4 + iVar3 * iVar10);
        }
      }
      if ((((char)param_2[2] < '\0') &&
          (puVar6 = (undefined8 *)FUN_00426db0(param_2,0x800000), puVar6 != (undefined8 *)0x0)) &&
         ((psVar11 = (short *)*puVar6, psVar11 != (short *)0x0 && ((long)*psVar11 != 0)))) {
        lVar9 = (long)*psVar11 << 3;
        do {
          uVar7 = *(undefined8 *)((long)psVar11 + lVar9);
          local_58 = uVar7;
          iVar10 = FUN_00429050(&local_58);
          FUN_00450420(param_1,uVar7,param_3,param_4 + iVar10);
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      param_2 = *(byte **)(param_2 + 8);
      if (param_2 == (byte *)0x0) {
        return;
      }
    }
    bVar1 = *param_2;
  } while( true );
}

