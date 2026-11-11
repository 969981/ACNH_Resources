
void FUN_00486910(long *param_1,byte *param_2,int *param_3,long param_4,long param_5,long param_6)

{
  long *plVar1;
  byte *pbVar2;
  short sVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  short *psVar11;
  long *plVar12;
  
  iVar10 = *param_3;
  if (iVar10 < 1) {
LAB_00486a34:
    iVar10 = param_3[1];
  }
  else {
    pbVar2 = param_2 + 8;
    if (((int)((ulong)(param_5 - param_4) >> 3) <= iVar10) ||
       (lVar7 = *(long *)(param_4 + (long)iVar10 * 8), lVar7 == 0)) {
      *(undefined8 *)pbVar2 = *(undefined8 *)(param_6 + (long)iVar10 * 8);
      uVar6 = *(uint *)(param_1 + 1);
      if (uVar6 == (*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607b8,param_1,0x10);
        uVar6 = *(uint *)(param_1 + 1);
      }
      plVar12 = (long *)(*param_1 + (long)(int)uVar6 * 0x10);
      *plVar12 = (long)pbVar2;
      *(int *)(plVar12 + 1) = iVar10;
      *(uint *)(param_1 + 1) = uVar6 + 1;
      goto LAB_00486a34;
    }
    *(long *)pbVar2 = lVar7;
    iVar10 = param_3[1];
  }
  if (iVar10 < 1) {
    iVar10 = param_3[4];
    goto joined_r0x00486a4c;
  }
  if ((*param_2 >> 1 & 1) == 0) {
    plVar12 = (long *)0x0;
    if (iVar10 < (int)((ulong)(param_5 - param_4) >> 3)) {
LAB_004869a0:
      lVar7 = *(long *)(param_4 + (long)iVar10 * 8);
      if (lVar7 != 0) {
        *plVar12 = lVar7;
        iVar10 = param_3[4];
        goto joined_r0x00486a4c;
      }
    }
  }
  else {
    plVar12 = (long *)FUN_00426db0(param_2,2);
    iVar10 = param_3[1];
    if (iVar10 < (int)((ulong)(param_5 - param_4) >> 3)) goto LAB_004869a0;
  }
  *plVar12 = *(long *)(param_6 + (long)iVar10 * 8);
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 == (*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1,0x10);
    uVar6 = *(uint *)(param_1 + 1);
  }
  puVar5 = (undefined8 *)(*param_1 + (long)(int)uVar6 * 0x10);
  *puVar5 = plVar12;
  *(int *)(puVar5 + 1) = iVar10;
  *(uint *)(param_1 + 1) = uVar6 + 1;
  iVar10 = param_3[4];
joined_r0x00486a4c:
  if (iVar10 != 0) {
    if (((char)param_2[2] < '\0') &&
       (puVar5 = (undefined8 *)FUN_00426db0(param_2,0x800000), puVar5 != (undefined8 *)0x0)) {
      psVar11 = (short *)*puVar5;
      sVar3 = *psVar11;
      puVar4 = PTR_DAT_048607b8;
    }
    else {
      psVar11 = (short *)0x0;
      puVar4 = PTR_DAT_048607b8;
      sVar3 = sRam0000000000000000;
    }
    PTR_DAT_048607b8 = puVar4;
    if (0 < sVar3) {
      lVar7 = 0;
      do {
        while( true ) {
          iVar10 = *(int *)(*(long *)(param_3 + 2) + lVar7 * 4);
          plVar12 = (long *)(*(long *)(psVar11 + lVar7 * 4 + 4) + 8);
          if (((int)((ulong)(param_5 - param_4) >> 3) <= iVar10) ||
             (lVar9 = *(long *)(param_4 + (long)iVar10 * 8), lVar9 == 0)) break;
          *plVar12 = lVar9;
          lVar7 = lVar7 + 1;
          if (*psVar11 <= lVar7) goto LAB_00486ba0;
        }
        *plVar12 = *(long *)(param_6 + (long)iVar10 * 8);
        uVar6 = *(uint *)(param_1 + 1);
        if (uVar6 == (*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) {
          FUN_00426990(puVar4,param_1,0x10);
          uVar6 = *(uint *)(param_1 + 1);
        }
        plVar1 = (long *)(*param_1 + (long)(int)uVar6 * 0x10);
        *plVar1 = (long)plVar12;
        *(int *)(plVar1 + 1) = iVar10;
        *(uint *)(param_1 + 1) = uVar6 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *psVar11);
    }
  }
LAB_00486ba0:
  if (param_3[0x28] != 0) {
    if (((char)param_2[1] < '\0') &&
       (plVar12 = (long *)FUN_00426db0(param_2,0x8000), plVar12 != (long *)0x0)) {
      lVar7 = *plVar12;
      iVar10 = param_3[0x28];
      puVar4 = PTR_DAT_048607b8;
    }
    else {
      lVar7 = 0;
      iVar10 = param_3[0x28];
      puVar4 = PTR_DAT_048607b8;
    }
    PTR_DAT_048607b8 = puVar4;
    if (0 < iVar10) {
      lVar9 = 0;
      plVar12 = (long *)(lVar7 + 0x10);
      do {
        plVar1 = (long *)(lVar7 + 0x10) + (ulong)*(ushort *)(lVar7 + 8) * 2;
        if (plVar12 != plVar1) {
          do {
            if (*(char *)plVar12[1] == 't') goto LAB_00486c3c;
            plVar12 = plVar12 + 2;
          } while (plVar1 != plVar12);
          plVar12 = plVar1;
        }
LAB_00486c3c:
        iVar10 = *(int *)(*(long *)(param_3 + 0x26) + lVar9 * 4);
        if ((iVar10 < (int)((ulong)(param_5 - param_4) >> 3)) &&
           (lVar8 = *(long *)(param_4 + (long)iVar10 * 8), lVar8 != 0)) {
          *plVar12 = lVar8;
        }
        else {
          *plVar12 = *(long *)(param_6 + (long)iVar10 * 8);
          uVar6 = *(uint *)(param_1 + 1);
          if (uVar6 == (*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) {
            FUN_00426990(puVar4,param_1,0x10);
            uVar6 = *(uint *)(param_1 + 1);
          }
          puVar5 = (undefined8 *)(*param_1 + (long)(int)uVar6 * 0x10);
          *puVar5 = plVar12;
          *(int *)(puVar5 + 1) = iVar10;
          *(uint *)(param_1 + 1) = uVar6 + 1;
        }
        lVar9 = lVar9 + 1;
        plVar12 = plVar12 + 2;
      } while (lVar9 < param_3[0x28]);
    }
  }
  if ((param_3[0x4c] != 0) &&
     (plVar12 = (long *)FUN_00426db0(param_2,0x4000), puVar4 = PTR_DAT_048607b8, 0 < param_3[0x4c]))
  {
    plVar12 = (long *)(*plVar12 + 8);
    lVar7 = 0;
    do {
      iVar10 = *(int *)(*(long *)(param_3 + 0x4a) + lVar7 * 4);
      if ((iVar10 < (int)((ulong)(param_5 - param_4) >> 3)) &&
         (lVar9 = *(long *)(param_4 + (long)iVar10 * 8), lVar9 != 0)) {
        *plVar12 = lVar9;
      }
      else {
        *plVar12 = *(long *)(param_6 + (long)iVar10 * 8);
        uVar6 = *(uint *)(param_1 + 1);
        if (uVar6 == (*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) {
          FUN_00426990(puVar4,param_1,0x10);
          uVar6 = *(uint *)(param_1 + 1);
        }
        puVar5 = (undefined8 *)(*param_1 + (long)(int)uVar6 * 0x10);
        *puVar5 = plVar12;
        *(int *)(puVar5 + 1) = iVar10;
        *(uint *)(param_1 + 1) = uVar6 + 1;
      }
      lVar7 = lVar7 + 1;
      plVar12 = plVar12 + 2;
    } while (lVar7 < param_3[0x4c]);
  }
  return;
}

