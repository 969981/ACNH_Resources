
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0017c75c(void)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  
  if ((DAT_04c57cbc & 1) == 0) {
    DAT_04c57cbd._0_7_ = _DAT_040fc81c;
    DAT_04c57cbd._7_1_ = s__7_64_1_040fc823[0];
    uRam0000000004c57cc5 = s__7_64_1_040fc823._1_7_;
    sVar2 = strlen((char *)&DAT_04c57cbd);
    puVar6 = (undefined1 *)((long)&DAT_04c57cbd + sVar2);
    uVar5 = 200 - sVar2;
    if ((1 < uVar5) && (lVar3 = thunk_FUN_0017b0f8(sVar2 + 0x4c57cbe,199 - sVar2), lVar3 != 0)) {
      *puVar6 = 0x20;
      uVar5 = uVar5 - (lVar3 + 1);
      puVar6 = puVar6 + lVar3 + 1;
    }
    uVar4 = FUN_0017ead0();
    iVar1 = FUN_001460b8(puVar6,uVar5," zlib/%s",uVar4);
    FUN_00159634(puVar6 + iVar1,uVar5 - (long)iVar1);
    DAT_04c57cbc = 1;
  }
  return &DAT_04c57cbd;
}

