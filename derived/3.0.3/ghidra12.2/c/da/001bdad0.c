
undefined8 FUN_001bdad0(ulong param_1,long param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  if (((*(ushort *)(param_2 + 0xfa) & 0xf) == 1) &&
     (uVar2 = FUN_001bdb70(param_1,param_2), (uVar2 & 1) == 0)) {
    return 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  auVar1 = SEXT816(*(long *)PTR_DAT_04bcbcb0 - *(long *)(param_1 + 0x30)) *
           SEXT816(0x20c49ba5e353f7cf);
  *(int *)(param_2 + 0x110) =
       ((int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f)) + *(int *)(param_1 + 0x38);
  uVar3 = FUN_001bde68(uVar2,param_2,param_3,param_1 + 0x18,uVar3);
  return uVar3;
}

