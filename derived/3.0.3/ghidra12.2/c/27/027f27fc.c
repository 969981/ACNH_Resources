
void FUN_027f27fc(long param_1,byte *param_2,undefined8 param_3,uint param_4)

{
  ushort *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ushort *puVar5;
  uint uVar6;
  ushort *puVar7;
  ulong uVar8;
  
  puVar2 = PTR_DAT_04bb2208;
  iVar3 = FUN_027512f0(*(long *)PTR_DAT_04bb2208 + 0x1740,param_3);
  uVar8 = (long)(char)*param_2 & 0xffffffff;
  if (7 < *param_2) {
    uVar8 = 0;
  }
  if (7 < (uint)(&DAT_05454114)[uVar8]) {
    return;
  }
  if (iVar3 < 0) {
    iVar3 = -1;
  }
  puVar1 = (ushort *)(param_1 + (ulong)(uint)(&DAT_05454114)[uVar8] * 0xd8 + 0x38);
  lVar4 = FUN_00abfb28(*(long *)puVar2 + 0x1740,(int)(short)iVar3);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    puVar5 = (ushort *)FUN_00abd610(lVar4,4,0x54706054,*(undefined8 *)PTR_DAT_04bc37d0);
    puVar7 = puVar1;
    if ((puVar5 != (ushort *)0x0) && (*puVar5 < 0x48)) {
      puVar7 = puVar1 + *puVar5;
    }
    uVar6 = (uint)*puVar7;
  }
  FUN_02750d70(puVar1,(int)(short)iVar3,uVar6 + (param_4 & 0xffff));
  return;
}

