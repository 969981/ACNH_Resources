
void FUN_003a1eb0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  void *__s;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ushort *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  bVar2 = *(byte *)(*param_1 + 0xf3);
  if ((char)bVar2 < '\0') {
    uVar9 = 0;
    uVar10 = *(uint *)((long)param_1 + 0x6c);
  }
  else {
    uVar1 = *(ushort *)(*(long *)(*param_1 + 0x58) + (ulong)bVar2 * 0x20 + 0x1a);
    local_70 = 0;
    uStack_68 = 0;
    FUN_0034fb50(&local_70);
    local_70 = CONCAT44(0x10,(uint)uVar1);
    lVar3 = FUN_00347a58(param_2,&local_70);
    uVar6 = (ulong)*(byte *)(param_1 + 10);
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = ((((ulong)uVar1 + lVar3) - 1 & -lVar3) * uVar6) / uVar6;
    }
    uVar10 = *(uint *)((long)param_1 + 0x6c);
  }
  if (0 < (int)uVar10) {
    memset((void *)param_1[0xb],0,(ulong)uVar10 << 2);
  }
  *(byte *)((long)param_1 + 0x74) = *(byte *)((long)param_1 + 0x74) & 0xfe;
  iVar5 = (int)param_1[0xd];
  if ((1 < iVar5) && (uVar10 = *(uint *)((long)param_1 + 0x6c), 0 < (int)uVar10)) {
    iVar7 = 0;
    while( true ) {
      if (0 < (int)uVar10) {
        memset((void *)(param_1[0xc] + (long)(int)(iVar7 * uVar10) * 4),0,(ulong)uVar10 << 2);
        iVar5 = (int)param_1[0xd];
      }
      iVar7 = iVar7 + 1;
      if (iVar5 <= iVar7) break;
      uVar10 = *(uint *)((long)param_1 + 0x6c);
    }
  }
  local_80 = 0;
  uStack_78 = 0;
  FUN_0034fb50(&local_80);
  uVar6 = (ulong)*(byte *)(param_1 + 10);
  local_80 = CONCAT44(0x10,(int)uVar9);
  if (*(byte *)(param_1 + 10) != 0) {
    lVar3 = 0;
    uVar11 = 0;
    do {
      lVar4 = param_1[8] + lVar3;
      FUN_00347b80(lVar4);
      FUN_00347b9c(lVar4,param_2,&local_80,param_3,param_4,uVar9);
      FUN_003b4940(lVar4,"g3d_OptionUniformBlock");
      bVar2 = *(byte *)(*param_1 + 0xf3);
      if ((char)bVar2 < '\0') {
        uVar10 = 0;
      }
      else {
        uVar10 = (uint)*(ushort *)(*(long *)(*param_1 + 0x58) + (ulong)bVar2 * 0x20 + 0x1a);
      }
      local_70 = 0;
      uStack_68 = 0;
      FUN_0034fb50(&local_70);
      local_70 = CONCAT44(0x10,uVar10);
      lVar4 = FUN_00347a58(param_2,&local_70);
      uVar11 = uVar11 + 1;
      lVar3 = lVar3 + 0x48;
      param_4 = ((uVar9 - 1) + lVar4 & -lVar4) + param_4;
      uVar6 = (ulong)*(byte *)(param_1 + 10);
    } while (uVar11 < uVar6);
  }
  param_1[9] = uVar9;
  bVar2 = *(byte *)(*param_1 + 0xf3);
  if ((-1 < (char)bVar2) &&
     (puVar8 = (ushort *)(*(long *)(*param_1 + 0x58) + (ulong)bVar2 * 0x20 + 0x1a),
     *puVar8 != 0 && (int)uVar6 != 0)) {
    lVar3 = 0;
    uVar9 = 0;
    do {
      lVar4 = param_1[8] + lVar3;
      __s = (void *)FUN_00347cc4(lVar4);
      memset(__s,0,(ulong)*puVar8);
      FUN_00347cdc(lVar4,0,param_1[9]);
      FUN_00347cd8(lVar4);
      uVar9 = uVar9 + 1;
      lVar3 = lVar3 + 0x48;
    } while (uVar9 < *(byte *)(param_1 + 10));
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 1;
  return;
}

