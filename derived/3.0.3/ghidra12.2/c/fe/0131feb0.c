
void FUN_0131feb0(long param_1)

{
  uint *puVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  puVar6 = PTR_DAT_04bc39f8;
  puVar5 = PTR_DAT_04bb6298;
  puVar4 = PTR_DAT_04bb2200;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    iVar8 = 0;
    lVar9 = *(long *)(param_1 + 0x10);
    do {
      lVar7 = lVar9 + (long)iVar8 * 0x70;
      if (0 < *(int *)(lVar7 + 0x2c)) {
        uVar3 = *(ushort *)puVar5;
        if ((long)(short)uVar3 != 0xffffffffffffffff) {
          puVar1 = (uint *)(puVar6 + ((long)(short)uVar3 & 0xffffffffU) * 8);
          if (0xff < uVar3) {
            puVar1 = (uint *)puVar6;
          }
          if (((*puVar1 >> 1 & 1) != 0) && (*(long *)(*(long *)puVar4 + 0x100) != 0)) {
            FUN_015a2a64(*(long *)(*(long *)puVar4 + 0x100),lVar7,lVar9 + (long)iVar8 * 0x70 + 0x28,
                         &DAT_04174e58,0,0,1);
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

