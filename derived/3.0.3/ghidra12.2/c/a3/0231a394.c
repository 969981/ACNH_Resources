
void FUN_0231a394(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  FUN_016e4038();
  if (*(int *)(param_1 + 0x178) == 0) {
    FUN_02547c90(param_1 + 0x1ee8);
    puVar2 = PTR_DAT_04bb43c0;
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4();
    if (*(long *)puVar2 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        return;
      }
    }
    pbVar1 = (byte *)(param_1 + 0x18fa);
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    if (puVar6 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        puVar6 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar6 = &DAT_05240280;
      }
    }
    if ((*(uint *)((long)puVar6 + 0x15f4) >> 4 & 1) == 0) {
      bVar5 = *pbVar1 & 0xdf;
    }
    else {
      bVar5 = *pbVar1 | 0x20;
    }
    *pbVar1 = bVar5;
  }
  return;
}

