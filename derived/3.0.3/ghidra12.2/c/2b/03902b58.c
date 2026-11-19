
void FUN_03902b58(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (uVar1 != 0xffffffff) {
    lVar5 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar5 + 0x5c8) >> 3 & 1) == 0) {
      uVar2 = uVar1 - *(ushort *)(lVar5 + 0x3da);
      if (*(uint *)(lVar5 + 0x368) <= uVar2) {
        uVar2 = 0;
      }
      if ((*(uint *)(*(long *)(lVar5 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(lVar5 + 0x5c8) >> 5 & 1) == 0) {
      uVar3 = 0x112;
      uVar4 = 0x12;
    }
    else {
      uVar3 = 0x111;
      uVar4 = 0x11;
    }
    if ((*(uint *)(lVar5 + 800) & 2) != 0) {
      uVar4 = uVar3;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar4);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}

