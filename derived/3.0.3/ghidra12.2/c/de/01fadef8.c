
/* WARNING: Removing unreachable block (ram,0x01fadf24) */
/* WARNING: Removing unreachable block (ram,0x01fadf34) */

undefined8 FUN_01fadef8(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  long lStack_38;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  local_40 = *(undefined8 *)(DAT_0519d040 + 0x1f8);
  lStack_38 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  uVar3 = FUN_035aa210(iVar1 + -1,iVar2 + -1,&local_40);
  if (((((uVar3 & 1) == 0) || (uVar3 = FUN_035aa210(iVar1 + -1,iVar2,&local_40), (uVar3 & 1) == 0))
      || (uVar3 = FUN_035aa210(iVar1,iVar2 + -1,&local_40), (uVar3 & 1) == 0)) ||
     (uVar3 = FUN_035aa210(iVar1,iVar2,&local_40), (uVar3 & 1) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

