
undefined8 FUN_02ef8ea4(long param_1,int param_2,byte *param_3)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  
  bVar4 = *(byte *)(param_1 + 0x214);
  bVar1 = *(int *)(param_1 + 0x210) == -1;
  if (((bVar1 && 6 < bVar4) && (!bVar1 || bVar4 != 7)) || (*(int *)(param_1 + 0x210) != param_2)) {
LAB_02ef8f20:
    bVar4 = *(byte *)(param_1 + 0x228);
    if (((*(int *)(param_1 + 0x224) != -1) || (bVar4 < 8)) && (*(int *)(param_1 + 0x224) == param_2)
       ) {
      bVar5 = *param_3;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if ((bVar4 == bVar5) &&
         (plVar2 = (long *)FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),
                                        *(int *)(param_1 + 0x224),param_1 + 0x228),
         plVar2 != (long *)0x0)) goto LAB_02ef904c;
    }
    bVar4 = *(byte *)(param_1 + 0x23c);
    if (((*(int *)(param_1 + 0x238) != -1) || (bVar4 < 8)) && (*(int *)(param_1 + 0x238) == param_2)
       ) {
      bVar5 = *param_3;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if ((bVar4 == bVar5) &&
         (plVar2 = (long *)FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),
                                        *(int *)(param_1 + 0x238),param_1 + 0x23c),
         plVar2 != (long *)0x0)) goto LAB_02ef904c;
    }
    bVar4 = *(byte *)(param_1 + 0x250);
    if (((*(int *)(param_1 + 0x24c) != -1) || (bVar4 < 8)) && (*(int *)(param_1 + 0x24c) == param_2)
       ) {
      bVar5 = *param_3;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (bVar4 == bVar5) {
        plVar2 = (long *)FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),
                                      *(int *)(param_1 + 0x24c),param_1 + 0x250);
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        goto LAB_02ef904c;
      }
    }
    uVar3 = 0;
  }
  else {
    bVar5 = *param_3;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if ((bVar4 != bVar5) ||
       (plVar2 = (long *)FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),
                                      *(int *)(param_1 + 0x210),param_1 + 0x214),
       plVar2 == (long *)0x0)) goto LAB_02ef8f20;
LAB_02ef904c:
    (**(code **)(*plVar2 + 0xb0))();
    uVar3 = 1;
  }
  return uVar3;
}

