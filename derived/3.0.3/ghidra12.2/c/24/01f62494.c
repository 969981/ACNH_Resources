
void FUN_01f62494(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = (ulong *)(param_1 + 0xad58);
  uVar3 = *puVar1;
  if (((uint)uVar3 >> 0x19 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar3 = FUN_02085a50(lVar4,1,0);
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(lVar4 + 0x801) = 1;
      lVar2 = lVar4 + 0x10 + (ulong)*(uint *)(lVar4 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar4 + 0x294)) {
        lVar2 = lVar4 + 0x10;
      }
      *(undefined8 *)(lVar2 + 0xc) = 0;
      *(undefined4 *)(lVar2 + 0x14) = 0;
    }
    uVar3 = *puVar1;
  }
  *puVar1 = uVar3 & 0xffffffbfffffffff;
  if (*(int *)(*(long *)(param_1 + 8) + 0x750) == 0) {
    *puVar1 = uVar3 & 0xffffffbfffffefff;
  }
  FUN_0212eca8(param_1 + 0xaa50,0,0);
  return;
}

