
void FUN_027c5320(long param_1,undefined4 param_2,ushort *param_3,ushort *param_4,byte param_5,
                 byte param_6)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  char *pcVar8;
  
  iVar7 = 0;
  do {
    pcVar8 = (char *)(param_1 + (long)iVar7 * 0x14);
    if (*pcVar8 == '\0') {
      uVar3 = *param_3;
      uVar5 = param_3[2];
      uVar1 = *(uint *)(param_3 + 4);
      nn::time::IsValidDate((uint)uVar3,(uint)(byte)uVar5,uVar1 & 0xff);
      uVar4 = *param_4;
      uVar6 = param_4[2];
      uVar2 = *(uint *)(param_4 + 4);
      nn::time::IsValidDate((uint)uVar4,(uint)(byte)uVar6,uVar2 & 0xff);
      *pcVar8 = '\x01';
      param_1 = param_1 + (long)iVar7 * 0x14;
      *(undefined4 *)(param_1 + 4) = param_2;
      *(uint *)(param_1 + 8) = (uint)(byte)uVar5 << 0x10 | uVar1 << 0x18 | (uint)uVar3;
      *(uint *)(param_1 + 0xc) = (uint)(byte)uVar6 << 0x10 | uVar2 << 0x18 | (uint)uVar4;
      *(byte *)(param_1 + 1) = param_5 & 1;
      *(byte *)(param_1 + 2) = param_6 & 1;
      return;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x20);
  return;
}

