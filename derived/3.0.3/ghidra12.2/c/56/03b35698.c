
void FUN_03b35698(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_0037e530();
  uVar1 = *(uint *)(lVar2 + 0x10);
  FUN_00397aa4(*(undefined4 *)
                (*(long *)(lVar2 + 0x18) +
                 (((ulong)uVar1 & 3) * 0x10 + ((ulong)uVar1 & 0x30) | (ulong)(uVar1 >> 6) & 8) +
                 ((ulong)(uVar1 >> 8) & 0xc) + ((ulong)(uVar1 >> 4) & 0x1c) +
                 ((ulong)(uVar1 >> 0xc) & 8) + (ulong)(-(uVar1 >> 0xc & 1) & 0xc) +
                 (ulong)(-(uVar1 >> 0x10 & 1) & 0x1c) +
                 ((ulong)(uVar1 >> 0xc) & 0x10) * ((ulong)(uVar1 >> 6) & 7) +
                 (ulong)((int)(uVar1 << 0xe) >> 0x1f & 0x74) +
                 (((ulong)(uVar1 >> 0xd) & 3) + ((ulong)(uVar1 >> 2) & 3)) * 0x14 +
                (ulong)*(byte *)(param_1 + 0x348) * 0x20),*(undefined8 *)(param_1 + 0x100),param_2);
  FUN_00383b50(param_1,param_2,param_3,param_4);
  return;
}

