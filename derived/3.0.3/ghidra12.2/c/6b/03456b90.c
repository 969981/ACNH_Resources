
void FUN_03456b90(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  
  puVar5 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x48) == 1) {
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(param_1 + 0x50);
    if (*(long *)puVar5 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        FUN_0369fe54(*(undefined8 *)PTR_DAT_04bc3a50,param_1 + 0x50);
      }
    }
  }
  puVar5 = PTR_DAT_04bb37e0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  uVar4 = *(undefined2 *)puVar5;
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  uVar1 = *(undefined4 *)(puVar5 + 4);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0xff;
  *(undefined1 *)(param_1 + 0x78) = 0xff;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined2 *)(param_1 + 0x50) = uVar4;
  *(undefined1 *)(param_1 + 0x52) = uVar2;
  *(undefined1 *)(param_1 + 0x53) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined2 *)(param_1 + 0x70) = uVar4;
  *(undefined1 *)(param_1 + 0x72) = uVar2;
  *(undefined1 *)(param_1 + 0x73) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  return;
}

