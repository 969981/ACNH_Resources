
void FUN_01bc3f60(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint local_3c;
  uint uStack_38;
  undefined4 local_34;
  
  puVar5 = PTR_DAT_04bb28f8;
  uVar3 = *(ushort *)(param_2 + 0xc);
  uVar4 = *(ushort *)(param_2 + 0xe);
  local_3c = (uint)uVar3;
  uStack_38 = (uint)uVar4;
  lVar6 = *(long *)PTR_DAT_04bb28f8;
  for (lVar8 = **(long **)(lVar6 + 0x29d0); lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
    while( true ) {
      uVar1 = *(uint *)(lVar8 + 0x20);
      uVar7 = (uint)uVar3;
      if ((local_3c <= uVar1 && uVar1 != uVar7) ||
         (((uVar1 == uVar7 &&
           (uVar2 = *(uint *)(lVar8 + 0x24), uStack_38 <= uVar2 && uVar2 != uVar4)) &&
          (uVar2 != 0xffffffff)))) break;
      if ((uVar7 <= uVar1) && ((uint)uVar4 <= *(uint *)(lVar8 + 0x24))) {
        if (*(code **)(lVar8 + 0x58) == (code *)0x0) goto LAB_01bc3ff4;
        local_34 = (**(code **)(lVar8 + 0x58))(param_2);
        lVar6 = *(long *)puVar5;
        goto LAB_01bc3ff8;
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 == 0) goto LAB_01bc3ff4;
    }
  }
LAB_01bc3ff4:
  local_34 = 0;
LAB_01bc3ff8:
  lVar8 = FUN_01bc1730(lVar6 + 0x2990,*(long *)(param_1 + 0x208) + 8);
  if ((lVar8 != 0) && (lVar6 = FUN_01bc06e0(lVar8,&local_3c,1), lVar6 == 0)) {
    FUN_01bc0b44(lVar8,&local_3c,param_3);
  }
  return;
}

