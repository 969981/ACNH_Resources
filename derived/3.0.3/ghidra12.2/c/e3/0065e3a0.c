
undefined8
FUN_0065e3a0(undefined1 *param_1,undefined1 *param_2,long param_3,long param_4,int param_5,
            undefined8 param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  undefined1 *local_1578;
  undefined8 local_1570;
  undefined1 auStack_1568 [5384];
  
  local_1578 = auStack_1568;
  local_1570 = -0x7ffffff000000000;
  if (param_5 < 0x11) {
    iVar4 = 0;
    bVar2 = SBORROW4(0,param_5);
    iVar3 = -param_5;
    if (0 < param_5) goto LAB_0065e46c;
  }
  else {
    local_1578 = (undefined1 *)
                 FUN_00426720(PTR_DAT_048607b8,param_5,0x150,local_1578,0,(long)&local_1570 + 4);
    bVar2 = SBORROW4((int)local_1570,param_5);
    iVar3 = (int)local_1570 - param_5;
    iVar4 = (int)local_1570;
    if ((int)local_1570 < param_5) {
LAB_0065e46c:
      iVar3 = param_5 - iVar4;
      local_1570 = CONCAT44(local_1570._4_4_,param_5);
      if (0 < iVar3) {
        puVar5 = local_1578 + (long)iVar4 * 0x150;
        do {
          FUN_0065a5b0(puVar5);
          iVar3 = iVar3 + -1;
          puVar5 = puVar5 + 0x150;
        } while (iVar3 != 0);
      }
      goto LAB_0065e498;
    }
  }
  if (iVar3 != 0 && iVar3 < 0 == bVar2) {
    local_1570 = CONCAT44(local_1570._4_4_,param_5);
    if (0 < iVar3) {
      puVar5 = local_1578 + (long)iVar4 * 0x150;
      do {
        puVar5 = puVar5 + -0x150;
        FUN_0065a920(puVar5);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
LAB_0065e498:
  if ((int)((ulong)(param_4 - param_3) >> 5) < 1) {
    uVar6 = 0;
    iVar3 = (int)local_1570;
  }
  else {
    lVar7 = 0;
    piVar8 = (int *)(param_3 + 0x14);
    uVar6 = 0x80040200;
    do {
      puVar5 = param_2;
      if (*piVar8 != 0) {
        puVar5 = local_1578 + (long)(*piVar8 + -1) * 0x150;
      }
      iVar3 = FUN_0065e5b0(*(undefined8 *)(piVar8 + -5),param_1,puVar5,piVar8[-2],param_6);
      if (iVar3 < 0) goto LAB_0065e50c;
      lVar7 = lVar7 + 1;
      piVar8 = piVar8 + 8;
      param_1 = puVar5;
    } while (lVar7 < (param_4 - param_3) * 0x8000000 >> 0x20);
    uVar6 = 0;
LAB_0065e50c:
    iVar3 = (int)local_1570;
  }
  if (0 < iVar3) {
    puVar5 = local_1578 + (long)iVar3 * 0x150;
    do {
      puVar5 = puVar5 + -0x150;
      FUN_0065a920(puVar5);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  lVar7 = local_1570;
  uVar1 = local_1570._4_4_;
  local_1570 = (ulong)local_1570._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_1578 != (undefined1 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_1578,0x150,uVar1 & 0x3fffffff);
  }
  return uVar6;
}

