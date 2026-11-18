
void FUN_03722418(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  ushort *puVar3;
  undefined *local_78;
  char *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined1 local_4d;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  
  puVar3 = *(ushort **)PTR_DAT_04bc3a48;
  if ((((puVar3 == (ushort *)0x0) || ((*puVar3 & 1) == 0)) &&
      (((*(long *)PTR_DAT_04bb27f8 == 0 || (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 0)) ||
       ((puVar3 != (ushort *)0x0 && ((*puVar3 & 1) != 0)))))) &&
     (iVar2 = *(int *)(PTR_DAT_04bc3a80 + 0x38),
     (iVar2 == -0x74938232 || iVar2 == -0xea9e7e3) || iVar2 == -0x2c3fb610)) {
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_70 = "BoaHospitalEvent";
    iVar2 = FUN_02758850(&local_78);
    if (iVar2 != 0) {
      lStack_68 = (long)&local_60 + 4;
      local_60 = 0x616f6200000010;
      local_48 = 0xffffffff;
      uVar1 = (ulong)local_78 >> 0x18;
      local_4d = 0;
      local_38 = 0;
      local_70 = PTR_DAT_04bb2ab0 + 0x10;
      local_34 = 0;
      local_3c = 0;
      local_44 = 0x100000000;
      local_78 = (undefined *)CONCAT53((uint5)uVar1 & 0xffff000000,0x10001);
      FUN_03724440(param_1,&local_78);
      FUN_037289d0(param_1,&local_70,0);
    }
  }
  return;
}

