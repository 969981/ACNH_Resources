
byte FUN_01269558(long param_1,long param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  int local_28;
  int local_24;
  undefined *local_20;
  int local_18;
  int iStack_14;
  
  lVar4 = (ulong)(*(uint *)(param_2 + 0xc) >> 4) * 9 + (ulong)(*(uint *)(param_2 + 8) >> 4);
  if ((0x47 < (uint)lVar4) || (uVar3 = (uint)*(ushort *)(param_1 + lVar4 * 0x18 + 0x18), uVar3 == 0)
     ) {
    return 0;
  }
  lVar4 = *(long *)PTR_DAT_04bb27a8;
  local_20 = PTR_DAT_04bb2010 + 0x10;
  fVar5 = (float)(*(uint *)(param_2 + 8) & 0xf) * 10.0 + 2.5;
  fVar6 = (float)(*(uint *)(param_2 + 0xc) & 0xf) * 10.0 + 2.5;
  local_18 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
  iStack_14 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  uVar3 = uVar3 - *(ushort *)(lVar4 + 0xb90);
  if ((uVar3 < *(uint *)(lVar4 + 0xb70)) &&
     (lVar4 = *(long *)(*(long *)(lVar4 + 0xb78) + (long)(int)uVar3 * 8), lVar4 != 0)) {
    puVar2 = (undefined8 *)FUN_012660e0(lVar4,3,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc3a0);
    puStack_38 = *(undefined8 **)PTR_PTR_04bbc3a8;
    if (puVar2 != (undefined8 *)0x0) {
      puStack_38 = puVar2;
    }
  }
  else {
    puStack_38 = &DAT_0407ebb1;
  }
  local_24 = 0;
  local_28 = 0;
  local_30 = 0;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  bVar1 = FUN_0097a150(&local_40,&local_20,&local_24,&local_28,(long)&local_30 + 4,&local_30,3);
  if (((((bVar1 & 1) != 0) && (local_24 != 0xf)) && (local_28 != 0xf)) && (local_30._4_4_ != 0xf)) {
    bVar1 = (int)local_30 == 0xf;
  }
  return bVar1 & 1;
}

