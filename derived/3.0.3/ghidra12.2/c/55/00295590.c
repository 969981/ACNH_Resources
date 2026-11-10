
void FUN_00295590(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined8 local_c0 [16];
  
  lVar1 = FUN_0026c89c(*(undefined8 *)PTR_DAT_04bcd350);
  lVar7 = *(long *)(lVar1 + 8);
  if (lVar7 != lVar1) {
    uVar8 = 0;
    uVar5 = *(undefined8 *)(*(long *)PTR_DAT_04bcb8b8 + 0xb8);
    lVar4 = *(long *)(param_1 + 0xb0);
    lVar3 = *(long *)(lVar7 + 0x10);
    if (lVar4 != param_1 + 0xa8) goto LAB_00295620;
LAB_00295638:
    uVar2 = FUN_00292080(uVar5);
    if (((uVar2 & 1) == 0) && (uVar8 < 0x10)) {
      local_c0[uVar8] = *(undefined8 *)(lVar7 + 0x10);
      uVar8 = uVar8 + 1;
    }
    while (lVar7 = *(long *)(lVar7 + 8), lVar7 != lVar1) {
      lVar4 = *(long *)(param_1 + 0xb0);
      lVar3 = *(long *)(lVar7 + 0x10);
      while( true ) {
        if (lVar4 == param_1 + 0xa8) goto LAB_00295638;
LAB_00295620:
        if (lVar3 == *(long *)(lVar4 + 0x10)) break;
        lVar4 = *(long *)(lVar4 + 8);
      }
    }
    if (uVar8 != 0) {
      uVar2 = (ulong)uVar8;
      puVar9 = local_c0;
      do {
        uVar6 = *puVar9;
        FUN_00260f60(auStack_d0,lVar1,uVar6);
        FUN_00291a30(auStack_e0,uVar5,uVar6);
        FUN_00229780(auStack_d0,auStack_e0);
        uVar2 = uVar2 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar2 != 0);
    }
  }
  return;
}

