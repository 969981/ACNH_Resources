
undefined8
FUN_001481b8(long *param_1,long param_2,uint param_3,int param_4,int *param_5,undefined1 *param_6)

{
  long lVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort uVar14;
  long *plVar15;
  uint uVar16;
  undefined1 auStack_d0 [80];
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((char)param_1[0x3c] != '\0') {
    return 8;
  }
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  memset(auStack_d0,0,0x50);
  plVar15 = (long *)param_1[1];
  if (plVar15 == (long *)0x0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    do {
      uVar5 = FUN_00148088(plVar15,&local_78);
      uVar9 = 0;
      do {
        if ((uVar5 >> (ulong)((uint)uVar9 & 0x1f) & 1) == 0) {
          iVar11 = -1;
        }
        else {
          iVar11 = *(int *)((long)&local_78 + uVar9 * 4);
          uVar16 = uVar16 + 1;
        }
        if (((uVar5 >> (ulong)((uint)uVar9 & 0x1f)) >> 0x10 & 1) != 0) {
          iVar11 = *(int *)((long)&local_78 + uVar9 * 4);
          uVar16 = uVar16 + 1;
        }
      } while ((iVar11 != -1) && (bVar4 = uVar9 < 4, uVar9 = uVar9 + 1, bVar4));
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0);
  }
  local_80 = 0;
  FUN_001484c0(param_1,&local_80);
  uVar5 = uVar16 + param_3;
  iVar11 = (int)local_80;
  if ((long)param_4 <= (long)local_80 || 0x7fffffffffffffff < local_80) {
    iVar11 = param_4;
  }
  if (uVar5 < 0xb) {
    puVar8 = auStack_d0;
  }
  else {
    puVar8 = (undefined1 *)FUN_001432f0((ulong)uVar5 << 3);
    if (puVar8 == (undefined1 *)0x0) {
      return 3;
    }
  }
  if ((uVar16 == 0) || (plVar15 = (long *)param_1[1], plVar15 == (long *)0x0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      uVar6 = FUN_00148088(plVar15,&local_78);
      uVar10 = 0;
      do {
        if ((uVar6 >> (ulong)((uint)uVar10 & 0x1f) & 1) == 0) {
          iVar7 = -1;
        }
        else {
          uVar2 = *(undefined4 *)((long)&local_78 + uVar10 * 4);
          lVar1 = uVar9 * 8;
          uVar9 = (ulong)((int)uVar9 + 1);
          *(undefined2 *)((long)(puVar8 + lVar1) + 4) = 1;
          *(undefined4 *)(puVar8 + lVar1) = uVar2;
          iVar7 = *(int *)((long)&local_78 + uVar10 * 4);
        }
        if (((uVar6 >> (ulong)((uint)uVar10 & 0x1f)) >> 0x10 & 1) != 0) {
          uVar2 = *(undefined4 *)((long)&local_78 + uVar10 * 4);
          lVar1 = uVar9 * 8;
          uVar9 = (ulong)((int)uVar9 + 1);
          *(undefined2 *)((long)(puVar8 + lVar1) + 4) = 4;
          *(undefined4 *)(puVar8 + lVar1) = uVar2;
          iVar7 = *(int *)((long)&local_78 + uVar10 * 4);
        }
      } while ((iVar7 != -1) && (bVar4 = uVar10 < 4, uVar10 = uVar10 + 1, bVar4));
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0);
  }
  if (param_3 == 0) {
    uVar6 = (uint)uVar9;
  }
  else {
    uVar10 = (ulong)param_3;
    puVar12 = (ushort *)(param_2 + 4);
    do {
      uVar2 = *(undefined4 *)(puVar12 + -2);
      puVar13 = (ushort *)(puVar8 + uVar9 * 8 + 4);
      *puVar13 = 0;
      *(undefined4 *)(puVar8 + uVar9 * 8) = uVar2;
      uVar14 = *puVar12 & 1;
      *puVar13 = uVar14;
      uVar3 = *puVar12;
      if ((uVar3 >> 1 & 1) != 0) {
        uVar14 = uVar14 | 2;
        *puVar13 = uVar14;
        uVar3 = *puVar12;
      }
      if ((uVar3 >> 2 & 1) != 0) {
        *puVar13 = uVar14 | 4;
      }
      puVar12 = puVar12 + 4;
      uVar6 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (uVar6 == 0) {
    iVar11 = 0;
  }
  else {
    iVar7 = FUN_00159360(puVar8,uVar9,iVar11);
    iVar11 = 0;
    if ((0 < iVar7) && (iVar11 = iVar7, param_3 != 0)) {
      uVar9 = (ulong)param_3;
      puVar12 = (ushort *)(param_2 + 6);
      uVar6 = uVar16;
      do {
        uVar10 = (ulong)uVar6;
        uVar6 = uVar6 + 1;
        uVar9 = uVar9 - 1;
        *puVar12 = *(ushort *)(puVar8 + uVar10 * 8 + 6) & 7;
        puVar12 = puVar12 + 4;
      } while (uVar9 != 0);
    }
  }
  if (10 < uVar5) {
    FUN_00143300(puVar8);
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar11;
  }
  if ((param_6 != (undefined1 *)0x0) && (param_2 != 0 || uVar16 != 0)) {
    *param_6 = 1;
  }
  return 0;
}

