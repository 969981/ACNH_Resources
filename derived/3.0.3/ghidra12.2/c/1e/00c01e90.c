
void FUN_00c01e90(char *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 local_34;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar1 = FUN_00c02800(lVar3,*param_2);
  FUN_022691b8(param_2,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8);
  puVar2 = PTR_DAT_04bb32e0;
  if (((uVar1 & 1) != 0) && (*(long *)(lVar3 + 8) != 0)) {
    puVar2 = (undefined *)(*(long *)(lVar3 + 8) + 0x2a8);
  }
  FUN_020f153c(0,*param_2,puVar2);
  if (*param_1 != '\0') {
    local_34 = 1;
    FUN_022691b8(&local_34,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8);
    puVar2 = PTR_DAT_04bb32e0;
    if (((uVar1 & 1) != 0) && (*(long *)(lVar3 + 8) != 0)) {
      puVar2 = (undefined *)(*(long *)(lVar3 + 8) + 0x2a8);
    }
    FUN_020f153c(0,1,puVar2);
  }
  return;
}

