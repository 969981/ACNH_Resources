
void FUN_01e7e3a4(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  undefined4 local_38;
  undefined4 local_34;
  
  local_34 = 0;
  local_38 = 0;
  FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,&local_34,&local_38,
               PTR_DAT_04bc1600,6);
  lVar5 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x126f8) = 6;
  uVar2 = *(uint *)(lVar5 + 0x288);
  uVar3 = *(uint *)(lVar5 + 0x294);
  *(undefined4 *)(lVar5 + 0x288) = *(undefined4 *)(lVar5 + 0x28c);
  uVar4 = *(undefined4 *)(lVar5 + 0x290);
  uVar2 = uVar2 ^ uVar2 << 0xb;
  *(uint *)(lVar5 + 0x290) = uVar3;
  *(undefined4 *)(lVar5 + 0x28c) = uVar4;
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  *(uint *)(lVar5 + 0x294) = uVar2;
  iVar6 = (int)((ulong)uVar2 * 0x3c >> 0x20);
  iVar1 = iVar6 + 0x3c;
  if ((param_2 & 1) == 0) {
    iVar1 = iVar6;
  }
  *(int *)(param_1 + 0x126fc) = iVar1;
  *(undefined4 *)(param_1 + 0x787c) = 2;
  return;
}

