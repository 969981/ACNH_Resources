
void FUN_0391d6c4(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0x550) >> 3 & 1) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 1000);
  if (uVar1 != 0xffffffff) {
    lVar6 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar6 + 0x5c8) >> 3 & 1) == 0) {
      uVar2 = uVar1 - *(ushort *)(lVar6 + 0x3da);
      if (*(uint *)(lVar6 + 0x368) <= uVar2) {
        uVar2 = 0;
      }
      if ((*(uint *)(*(long *)(lVar6 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar1 & 0x3f);
        goto LAB_0391d77c;
      }
    }
    if ((*(uint *)(lVar6 + 0x5c8) >> 5 & 1) == 0) {
      uVar4 = 0x112;
      uVar5 = 0x12;
    }
    else {
      uVar4 = 0x111;
      uVar5 = 0x11;
    }
    if ((*(uint *)(lVar6 + 800) & 2) != 0) {
      uVar5 = uVar4;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar5);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_0391d77c:
  puVar3 = PTR_DAT_04bbd510;
  if (*(long *)(param_1 + 0x1b0) != 0) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
  }
  if (*(long *)(param_1 + 600) != 0) {
    FUN_039499cc(*(undefined8 *)puVar3);
  }
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(byte *)(param_1 + 0x550) = *(byte *)(param_1 + 0x550) & 0x87;
  return;
}

