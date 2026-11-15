
void FUN_0212ea40(long param_1,uint *param_2)

{
  long *plVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  ulong uVar7;
  int *piVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  byte local_44 [4];
  
  plVar1 = (long *)(param_1 + 0x208) + *param_2;
  if (0xd < *param_2) {
    plVar1 = (long *)(param_1 + 0x208);
  }
  if (*plVar1 == 0) {
    return;
  }
  uVar7 = (**(code **)(**(long **)(*(long *)(param_1 + 0x2d0) + 8) + 0x180))();
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x2d0) + 0x77b0) == 0x10) {
    return;
  }
  if ((1 < *(byte *)(*DAT_0537d558 + 0x476)) && (*param_2 != 8)) {
    return;
  }
  if (((DAT_056b6f18 != 0) && (*(int *)(DAT_056b6f18 + 0x588) != 0)) && (*param_2 == 1)) {
    return;
  }
  if (((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (uVar10 = *param_2, 1 < uVar10)) && (uVar10 != 8)) {
    if (uVar10 == 9) {
      return;
    }
    if (7 < (byte)param_2[2]) {
      return;
    }
    FUN_025196e4(local_44);
    bVar9 = (byte)param_2[2];
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
    if (bVar9 != local_44[0]) {
      return;
    }
  }
  uVar10 = *param_2;
  puVar2 = (uint *)(param_1 + 8) + (ulong)uVar10 * 9;
  if (0xd < uVar10) {
    puVar2 = (uint *)(param_1 + 8);
  }
  *puVar2 = uVar10;
  puVar2[1] = param_2[1];
  bVar9 = (byte)param_2[2];
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *(byte *)(puVar2 + 2) = bVar9;
  puVar2[5] = param_2[3];
  puVar2[6] = param_2[4];
  *(short *)(puVar2 + 7) = (short)param_2[5];
  *(undefined1 *)((long)puVar2 + 0x1e) = *(undefined1 *)((long)param_2 + 0x16);
  *(undefined1 *)((long)puVar2 + 0x1f) = *(undefined1 *)((long)param_2 + 0x17);
  puVar2[8] = param_2[6];
  puVar6 = PTR_DAT_04bb3968;
  uVar10 = 0x87c;
  if (DAT_053f0228 == '\0') {
    uVar10 = 0;
  }
  if ((uVar10 >> (ulong)(*param_2 & 0x1f) & 1) != 0) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x2d0) + 8);
    piVar8 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x21a8) + 0xf0))
                              (*(long *)PTR_DAT_04bb3968 + 0x21a8);
    iVar3 = *piVar8;
    piVar8 = (int *)(**(code **)(*(long *)(*(long *)puVar6 + 0x21d8) + 0xf0))
                              (*(long *)puVar6 + 0x21d8);
    iVar4 = *piVar8;
    uVar10 = *(uint *)(lVar11 + 0x288);
    *(undefined4 *)(lVar11 + 0x288) = *(undefined4 *)(lVar11 + 0x28c);
    uVar10 = uVar10 ^ uVar10 << 0xb;
    *(undefined4 *)(lVar11 + 0x28c) = *(undefined4 *)(lVar11 + 0x290);
    uVar5 = *(uint *)(lVar11 + 0x294);
    *(uint *)(lVar11 + 0x290) = uVar5;
    uVar10 = uVar10 >> 8 ^ uVar5 >> 0x13 ^ uVar10 ^ uVar5;
    *(uint *)(lVar11 + 0x294) = uVar10;
    puVar2[3] = iVar3 + (int)((ulong)uVar10 * (ulong)((iVar4 - iVar3) + 1) >> 0x20);
  }
  *(ushort *)(param_1 + 0x200) =
       *(ushort *)(param_1 + 0x200) | (ushort)(1 << (ulong)(*param_2 & 0x1f));
  return;
}

