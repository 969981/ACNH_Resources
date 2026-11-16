
void FUN_025fee10(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long local_b8;
  int local_b0;
  undefined4 uStack_ac;
  uint local_a8;
  uint uStack_a4;
  undefined1 auStack_a0 [64];
  
  if ((DAT_05574040 != 0) && (lVar3 = FUN_026eec4c(DAT_05574040,*param_2), lVar3 != 0)) {
    lVar6 = lVar3 + 0x194b0;
    if (*(long *)(lVar3 + 0x194b8) == 0) {
      lVar6 = *(long *)(DAT_05574040 + 0x20);
    }
    iVar2 = FUN_025c5a60(lVar6 + 0x10d8);
    if (0 < iVar2) {
      uVar7 = 0;
      do {
        lVar1 = DAT_05ae7790;
        lVar3 = DAT_05554928;
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        if ((*(long *)(lVar1 + 0x60) != lVar4) &&
           (uVar5 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar5 & 1) == 0)) {
          *(undefined1 *)(lVar3 + 0xb1) = 1;
        }
        FUN_025c5740(auStack_a0,param_2);
        uVar8 = (iVar2 + 999U) / 1000;
        local_b8 = lVar6 + 0x10d8;
        local_b0 = iVar2;
        uStack_ac = param_3;
        local_a8 = uVar8;
        uStack_a4 = uVar7;
        FUN_025c5e30(auStack_a0,&local_b8);
        FUN_025c592c(auStack_a0);
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
  }
  return;
}

