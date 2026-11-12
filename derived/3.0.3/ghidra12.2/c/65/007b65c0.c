
void FUN_007b65c0(long param_1,long param_2)

{
  int *piVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 local_1f80;
  char *pcStack_1f78;
  
  puVar2 = PTR_DAT_04bb3350;
  if (param_2 == 0) {
    lVar9 = 1;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = param_2;
  }
  local_1f80 = PTR_DAT_04bb2020 + 0x10;
  pcStack_1f78 = "AocCacheHeap";
  uVar6 = FUN_038c6d48(0x20000,&local_1f80,param_2,8,1,0);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar4 = nn::aoc::CountAddOnContent();
  nn::aoc::ListAddOnContent((int *)&local_1f80,0,uVar4);
  if (0 < (int)uVar4) {
    if ((int)local_1f80 != 1000) {
      uVar7 = 0;
      piVar8 = (int *)((long)&local_1f80 + 4);
      do {
        if ((ulong)uVar4 - 1 == uVar7) goto LAB_007b66b8;
        bVar3 = 0x7ce < uVar7;
        uVar7 = uVar7 + 1;
        piVar1 = piVar8;
        if (bVar3) {
          piVar1 = (int *)&local_1f80;
        }
        piVar8 = piVar8 + 1;
      } while (*piVar1 != 1000);
      if (uVar4 <= uVar7) goto LAB_007b66b8;
    }
    FUN_007b67ac(param_1);
  }
LAB_007b66b8:
  if (lVar9 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar9;
  }
  return;
}

