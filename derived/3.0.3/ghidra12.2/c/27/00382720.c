
void FUN_00382720(long param_1,long param_2,undefined8 param_3,ulong param_4,int param_5,
                 uint param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  long local_88 [4];
  long lStack_68;
  
  lVar9 = param_1 + 0x58 + (param_4 & 0xffffffff) * 4;
  iVar10 = *(int *)(lVar9 + 0x44);
  local_88[0] = *(long *)(param_1 + 0x78) + 0x40;
  iVar2 = *(int *)(lVar9 + 0x50);
  lVar14 = *(long *)(param_1 + 0x68);
  if (*(long *)(param_1 + 8) != 0) {
    lVar14 = *(long *)(param_1 + 0x48);
  }
  iVar3 = *(int *)(lVar9 + 0x74);
  local_88[1] = 0;
  iVar4 = *(int *)(lVar9 + 0x68);
  local_88[2] = 0;
  lVar12 = *(long *)(param_1 + 0xe0);
  FUN_003486c4(param_3,local_88[0],local_88 + 1,0);
  FUN_003482c0(param_3,1,local_88,0);
  FUN_003483bc(param_3,*(long *)(param_1 + 0x78) + 0x88);
  lVar9 = param_1 + 0x58 + (long)iVar3 * 4;
  uVar1 = *(uint *)(lVar9 + 0x90);
  FUN_0038d1a0(param_2,param_3,lVar12,uVar1);
  puVar7 = (undefined8 *)FUN_00367354(*(undefined8 *)(param_2 + 0xb8),0x24);
  local_90 = *puVar7;
  lVar13 = *(long *)(lVar12 + 0x30);
  iVar6 = FUN_00386648(lVar12);
  FUN_00348c64(param_3,*(undefined4 *)(lVar13 + (long)(int)(iVar6 * (uVar1 & 0xff)) * 4),4,
               lVar14 + 8,&local_90);
  iVar6 = *(int *)(lVar9 + 0x128);
  plVar11 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                    (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_98 = plVar11[1];
  local_a0 = *plVar11 + (long)iVar4;
  if (-1 < iVar6) {
    FUN_00348cdc(param_3,iVar6,4,&local_a0,0xe0);
  }
  uVar8 = FUN_00366284(*(undefined8 *)(param_2 + 0xb8),1);
  FUN_00348090(param_3,uVar8);
  plVar11 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                    (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_68 = plVar11[1];
  local_88[3] = *plVar11 + (long)iVar10;
  lVar9 = *(long *)(param_2 + 0xb8);
  FUN_00348cdc(param_3,*(undefined4 *)(*(long *)(lVar12 + 0x18) + (long)(int)uVar1 * 4),0,
               local_88 + 3,0x230);
  FUN_00347e74(param_3,3,1,lVar9 + 0x248,6,0);
  FUN_00348a0c(param_3,0x80);
  FUN_00348a34(param_3,0x20);
  FUN_00365188(param_2,param_3);
  plVar11 = (long *)(param_1 + 0x58);
  bVar5 = (param_6 & 1) == 0;
  iVar10 = 0x10;
  if (bVar5) {
    iVar10 = 8;
  }
  iVar6 = 0xc;
  if (bVar5) {
    iVar6 = 4;
  }
  if (param_5 != 4) {
    iVar10 = iVar6;
  }
  if ((*(byte *)(*plVar11 + 8) & 0x40) != 0) {
    iVar10 = iVar10 + 0x10;
  }
  iVar10 = iVar10 + iVar3;
  uVar1 = *(uint *)((long)plVar11 + (long)iVar10 * 4 + 0x90);
  FUN_0038d1a0(param_2,param_3,lVar12,uVar1);
  lVar9 = *(long *)(lVar12 + 0x30);
  iVar6 = FUN_00386648(lVar12);
  FUN_00348c64(param_3,*(undefined4 *)(lVar9 + (long)(int)(iVar6 * (uVar1 & 0xff)) * 4),4,
               *(long *)(param_1 + 0x78) + 8,&local_90);
  if ((*(byte *)(*plVar11 + 8) >> 3 & 1) != 0) {
    lVar9 = *(long *)(param_1 + 8);
    lVar14 = *(long *)(lVar12 + 0x30);
    iVar6 = FUN_00386648(lVar12);
    plVar11 = (long *)(param_1 + 0x68);
    if (lVar9 != 0) {
      plVar11 = (long *)(param_1 + 0x48);
    }
    FUN_00348c64(param_3,*(undefined4 *)(lVar14 + (long)(int)(iVar6 * (uVar1 & 0xff)) * 4 + 4),4,
                 *plVar11 + 8,&local_90);
  }
  iVar10 = *(int *)(param_1 + (long)iVar10 * 4 + 0x180);
  if (-1 < iVar10) {
    FUN_00348cdc(param_3,iVar10,4,&local_a0,0xe0);
  }
  uVar8 = FUN_00366284(*(undefined8 *)(param_2 + 0xb8),param_5);
  FUN_00348090(param_3,uVar8);
  plVar11 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                    (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_68 = plVar11[1];
  local_88[3] = *plVar11 + (long)iVar2;
  lVar9 = *(long *)(param_2 + 0xb8);
  FUN_00348cdc(param_3,*(undefined4 *)(*(long *)(lVar12 + 0x18) + (long)(int)uVar1 * 4),0,
               local_88 + 3,0x230);
  FUN_00347e74(param_3,3,1,lVar9 + 0x248,6,0);
  return;
}

