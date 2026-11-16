
undefined8 FUN_025579bc(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_38;
  
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  FUN_016e49e4(&local_38,param_2,*param_3 == 1);
  puVar1 = PTR_DAT_04bb43c0;
  if ((short)local_38 == -2) {
LAB_02557a88:
    uVar4 = 0;
  }
  else {
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(&local_38);
    if (*(long *)puVar1 == 0) {
LAB_02557a78:
      uVar2 = FUN_02677c70(param_1);
      if (uVar2 < 0x28) goto LAB_02557a88;
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((*(uint *)(lVar5 + 0x1d8) <= uVar2) ||
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02557a78;
      uVar3 = FUN_0232697c(param_1,&local_38,param_3);
      if ((uVar3 & 1) != 0) goto LAB_02557a88;
    }
    uVar4 = 1;
  }
  return uVar4;
}

