
void FUN_0037a00c(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 local_58;
  
  uVar10 = *(uint *)(param_1 + 0x14);
  if (((uVar10 & 3) != 0) && ('\0' < (char)(*(byte *)(param_1 + 0x48) << 4))) {
    puVar3 = *(ushort **)(param_1 + 0x18);
    uVar1 = *(byte *)(param_1 + 0x48) & 0xf;
    uVar5 = *(ushort *)(param_1 + 0x4a);
    uVar2 = uVar10 & 3;
    if (uVar1 <= (uVar10 & 3)) {
      uVar2 = uVar1;
    }
    lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
    uVar10 = uVar2;
    if (uVar2 < 2) {
      uVar10 = 1;
    }
    iVar6 = FUN_00386648();
    uVar4 = *(undefined4 *)(lVar12 + (long)(int)(iVar6 * (uint)uVar5) * 4);
    uVar5 = *puVar3;
    puVar7 = (undefined8 *)
             FUN_00367334(*(undefined8 *)(param_2 + 0xb8),uVar5 & 3,uVar5 >> 2 & 3,uVar5 >> 4 & 7,
                          uVar5 >> 7 & 1);
    local_58 = *puVar7;
    FUN_00348c64(param_3,uVar4,4,*(long *)(puVar3 + 4) + 8,&local_58);
    if (1 < uVar2) {
      lVar12 = *(long *)(param_1 + 0x18);
      uVar5 = *(ushort *)(param_1 + 0x4a);
      lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
      iVar6 = FUN_00386648();
      uVar4 = *(undefined4 *)(lVar11 + (long)(int)(iVar6 * (uint)uVar5) * 4 + 4);
      uVar5 = *(ushort *)(lVar12 + 0x10);
      puVar7 = (undefined8 *)
               FUN_00367334(*(undefined8 *)(param_2 + 0xb8),uVar5 & 3,uVar5 >> 2 & 3,uVar5 >> 4 & 7,
                            uVar5 >> 7 & 1);
      local_58 = *puVar7;
      FUN_00348c64(param_3,uVar4,4,*(long *)(lVar12 + 0x18) + 8,&local_58);
      if (uVar10 != 2) {
        lVar12 = *(long *)(param_1 + 0x18);
        uVar5 = *(ushort *)(param_1 + 0x4a);
        lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
        iVar6 = FUN_00386648();
        uVar4 = *(undefined4 *)(lVar11 + (long)(int)(iVar6 * (uint)uVar5) * 4 + 8);
        uVar5 = *(ushort *)(lVar12 + 0x20);
        puVar7 = (undefined8 *)
                 FUN_00367334(*(undefined8 *)(param_2 + 0xb8),uVar5 & 3,uVar5 >> 2 & 3,
                              uVar5 >> 4 & 7,uVar5 >> 7 & 1);
        local_58 = *puVar7;
        FUN_00348c64(param_3,uVar4,4,*(long *)(lVar12 + 0x28) + 8,&local_58);
      }
    }
    uVar10 = *(uint *)(param_1 + 0x14);
  }
  if ((uVar10 >> 0x11 & 1) != 0) {
    uVar8 = FUN_00386110(*(undefined8 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x4a));
    iVar6 = FUN_0034e3c0(uVar8,4,2,"uTexture3");
    if (-1 < iVar6) {
      uVar8 = FUN_00365248(param_2);
      uVar9 = FUN_00365250(param_2);
      FUN_00348c64(param_3,iVar6,4,uVar8,uVar9);
    }
  }
  return;
}

