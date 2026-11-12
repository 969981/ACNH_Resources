
ulong FUN_00a8cc54(long param_1,ulong *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR_DAT_04bb4928;
  uVar7 = *param_2;
  uVar6 = uVar7 >> 0x10;
  iVar4 = (int)(uVar7 >> 0x18);
  iVar3 = FUN_01c5c410(*(undefined8 *)PTR_DAT_04bb4928);
  if ((iVar3 != 0) && (iVar3 = FUN_01c5c410(*(undefined8 *)puVar2), iVar3 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x65204);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    if (uVar1 == 1) {
      iVar3 = FUN_01c5c710(*(undefined8 *)puVar2);
      if ((iVar3 == 0) || (iVar3 = FUN_01c5c890(*(undefined8 *)puVar2), iVar3 == 0))
      goto LAB_00a8cd58;
      uVar6 = FUN_01c5c710(*(undefined8 *)puVar2);
      iVar4 = FUN_01c5c890(*(undefined8 *)puVar2);
    }
    else {
      if (((uVar1 != 0) || (iVar3 = FUN_01c5c410(*(undefined8 *)puVar2), iVar3 == 0)) ||
         (iVar3 = FUN_01c5c410(*(undefined8 *)puVar2), iVar3 == 0)) goto LAB_00a8cd58;
      uVar6 = FUN_01c5c410(*(undefined8 *)puVar2);
      iVar4 = FUN_01c5c590(*(undefined8 *)puVar2);
    }
    if (((uVar7 & 0xffff) == 0) ||
       (uVar5 = nn::time::IsValidDate((int)(short)uVar7,(int)(char)uVar6,(int)(char)iVar4),
       (uVar5 & 1) == 0)) {
      uVar7 = *param_2;
      uVar6 = uVar7 >> 0x10;
      iVar4 = (int)(uVar7 >> 0x18);
    }
    else {
      uVar6 = uVar6 & 0xffffffff;
    }
  }
LAB_00a8cd58:
  return uVar7 & 0xffffffff00000000 | (ulong)(uint)(iVar4 << 0x18) |
         uVar7 & 0xffff | (uVar6 & 0xff) << 0x10;
}

