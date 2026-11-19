
void FUN_039af7d0(long param_1,undefined4 param_2,uint param_3,long param_4)

{
  bool bVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  long lVar12;
  long local_78;
  long local_70;
  undefined2 local_68;
  
  lVar9 = *(long *)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x38) <= param_3) {
    param_3 = 0;
  }
  lVar6 = lVar9 + (ulong)param_3 * 0xb8;
  plVar10 = (long *)(lVar6 + 8);
  if (*plVar10 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(*plVar10 + 0x18) != *(int *)(lVar9 + (ulong)param_3 * 0xb8 + 0xac);
  }
  puVar11 = (uint *)(lVar9 + (ulong)param_3 * 0xb8 + 0xa8);
  if (((*puVar11 >> 1 & 1) != 0) || (bVar3)) {
    sVar2 = *(short *)(lVar6 + 2);
    lVar12 = *(long *)(param_1 + 0x88);
    lVar6 = lVar9 + (ulong)param_3 * 0xb8 + 0x18;
    iVar4 = (int)sVar2;
    if (*(uint *)(param_1 + 0x80) <= (uint)(int)sVar2) {
      iVar4 = 0;
    }
    lVar8 = **(long **)(param_4 + 0x110);
    lVar7 = *(long *)(lVar12 + (long)iVar4 * 0x28 + 0x18);
    local_70 = 0;
    bVar1 = lVar7 != 0;
    if (bVar1) {
      local_70 = lVar7;
    }
    local_68 = (ushort)bVar1;
    if (((*puVar11 >> 2 & 1) != 0) && (*(long *)(lVar8 + 0x30) != 0)) {
      local_68 = CONCAT11(1,bVar1);
    }
    local_78 = lVar8;
    FUN_003a4cf8(lVar6,&local_78);
    if (*(int *)(lVar12 + (long)iVar4 * 0x28 + 8) == 1) {
      *puVar11 = *puVar11 & 0xfffffffd;
    }
    if (*plVar10 != 0) {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_039b1370(*plVar10,param_2,lVar8,lVar6);
      uVar5 = *(undefined4 *)(*plVar10 + 0x18);
    }
    else {
      FUN_003a53c0(lVar6,lVar8,0,0);
      uVar5 = 0;
    }
    *(undefined4 *)(lVar9 + (ulong)param_3 * 0xb8 + 0xac) = uVar5;
  }
  return;
}

