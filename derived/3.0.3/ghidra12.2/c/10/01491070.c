
undefined8 FUN_01491070(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  float fVar6;
  undefined **local_48;
  int local_40;
  int iStack_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined8 local_28;
  
  uVar3 = FUN_00978be0(*(undefined8 *)(param_1 + 8));
  if ((uVar3 & 1) == 0) {
    FUN_0124c030(auStack_38,*(undefined8 *)(param_1 + 0x10));
    iVar2 = FUN_0123db50(auStack_30,local_28);
    if ((iVar2 == 0x21) || (iVar2 = FUN_0123db50(auStack_30,local_28), iVar2 == 0x22)) {
      uVar5 = *(uint *)(*(long *)(param_1 + 8) + 0x10);
      if (((uVar5 & 1) == 0) && (uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x14), (uVar1 & 1) == 0)
         ) {
        local_48 = &PTR_FUN_048f9730;
        fVar6 = (float)(int)uVar5 * 0.5;
        uVar5 = 0;
        if (fVar6 != (float)(int)fVar6) {
          uVar5 = (uint)(fVar6 < 0.0);
        }
        local_40 = (int)fVar6 - uVar5;
        fVar6 = (float)(int)uVar1 * 0.5;
        uVar5 = 0;
        if (fVar6 != (float)(int)fVar6) {
          uVar5 = (uint)(fVar6 < 0.0);
        }
        iStack_3c = (int)fVar6 - uVar5;
        uVar3 = FUN_01318310(&local_48);
        if ((uVar3 & 1) != 0) goto LAB_01491090;
      }
    }
    uVar4 = 0;
  }
  else {
LAB_01491090:
    uVar4 = 1;
  }
  return uVar4;
}

