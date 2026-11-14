
void FUN_01bc2320(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint local_3c;
  uint uStack_38;
  undefined4 local_34;
  
  puVar5 = PTR_DAT_04bb28f8;
  uVar3 = *(ushort *)(param_2 + 0xc);
  uVar4 = *(ushort *)(param_2 + 0xe);
  local_3c = (uint)uVar3;
  uStack_38 = (uint)uVar4;
  lVar7 = *(long *)PTR_DAT_04bb28f8;
  for (lVar9 = **(long **)(lVar7 + 0x29d0); lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
    while( true ) {
      uVar1 = *(uint *)(lVar9 + 0x20);
      uVar8 = (uint)uVar3;
      if ((local_3c <= uVar1 && uVar1 != uVar8) ||
         (((uVar1 == uVar8 &&
           (uVar2 = *(uint *)(lVar9 + 0x24), uStack_38 <= uVar2 && uVar2 != uVar4)) &&
          (uVar2 != 0xffffffff)))) break;
      if ((uVar8 <= uVar1) && ((uint)uVar4 <= *(uint *)(lVar9 + 0x24))) {
        if (*(code **)(lVar9 + 0x58) == (code *)0x0) goto LAB_01bc23b4;
        local_34 = (**(code **)(lVar9 + 0x58))(param_2);
        lVar7 = *(long *)puVar5;
        goto LAB_01bc23b8;
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 == 0) goto LAB_01bc23b4;
    }
  }
LAB_01bc23b4:
  local_34 = 0;
LAB_01bc23b8:
  lVar9 = FUN_01bc1730(lVar7 + 0x2990,param_1[0x41] + 8);
  if (lVar9 != 0) {
    plVar6 = (long *)FUN_01bc0860(lVar9,&local_3c,1);
    if (plVar6 == (long *)0x0) {
      FUN_01bc09d8(lVar9,&local_3c,param_3);
    }
    else {
      param_3 = (**(code **)(*plVar6 + 0x20))();
    }
    (**(code **)(*param_1 + 0x48))(param_1,param_3,param_1[0x41],param_1 + 0x43);
  }
  return;
}

