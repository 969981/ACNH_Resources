
void FUN_0039fd50(long param_1,undefined8 param_2)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_04bd0028;
  uVar2 = *(ushort *)(param_1 + 0xe8);
  if ((ulong)uVar2 != 0) {
    lVar6 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x88) + lVar6;
      uVar3 = *(ushort *)(lVar1 + 0x34);
      if ((uVar3 >> 1 & 1) != 0) {
        lVar7 = *(long *)(lVar1 + 0x20);
        if ((uVar3 >> 2 & 1) != 0) {
          FUN_0034e324(*(undefined8 *)(*(long *)(lVar7 + *(long *)puVar4) + 0x68),param_2);
          uVar3 = *(ushort *)(lVar1 + 0x34);
        }
        if ((uVar3 >> 4 & 1) != 0) {
          FUN_0034e324(*(undefined8 *)(*(long *)(lVar7 + *(long *)(puVar4 + 8)) + 0x68),param_2);
          uVar3 = *(ushort *)(lVar1 + 0x34);
        }
        if ((uVar3 >> 3 & 1) != 0) {
          FUN_0034e324(*(undefined8 *)(*(long *)(lVar7 + *(long *)(puVar4 + 0x10)) + 0x68),param_2);
        }
      }
      lVar6 = lVar6 + 0x40;
      *(undefined2 *)(lVar1 + 0x34) = 0;
    } while ((ulong)uVar2 * 0x40 != lVar6);
  }
  uVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_0034ffd8(uVar5,param_2);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}

