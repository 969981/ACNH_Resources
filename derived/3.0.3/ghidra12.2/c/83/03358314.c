
void FUN_03358314(long param_1,ulong param_2)

{
  wchar16 *pwVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *local_a0;
  long *local_98;
  undefined8 local_70;
  undefined *local_68;
  undefined2 *puStack_60;
  undefined4 local_58;
  undefined2 local_54 [15];
  undefined2 local_36;
  
  if (0 < *(int *)(param_1 + 0x1798)) {
    local_36 = 0;
    local_58 = 0x10;
    puStack_60 = local_54;
    local_54[0] = 0;
    local_68 = PTR_DAT_04bbd6c0 + 0x10;
    iVar2 = *(int *)(*(long *)(param_1 + 0x4a0) + 0xc);
    pwVar1 = L"\xe151 %d/%d";
    if (iVar2 <= *(int *)(param_1 + 0x1798)) {
      pwVar1 = L"%d/%d";
    }
    FUN_038d1340(&local_68,pwVar1,iVar2);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x1798) <= iVar2) {
      uVar3 = 0x3f800000;
    }
    FUN_032c8150(uVar3,param_1 + 0x440,0,0);
    local_70 = *(undefined8 *)(param_1 + 0x328);
    FUN_032d67f0(&local_70,&local_68);
    FUN_032fbc30(DAT_05355a60);
    if ((((iVar2 == *(int *)(param_1 + 0x1798)) && (*(int *)(param_1 + 0x179c) == iVar2)) &&
        (*(char *)(param_1 + 0x17b2) != '\0')) && ((param_2 & 1) == 0)) {
      local_a0 = PTR_DAT_04bc8e60 + 0x10;
      local_98 = (long *)0x0;
      FUN_032c7c30(param_1 + 0x440,1,1,&local_a0,0,0);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 8))();
      }
    }
    *(int *)(param_1 + 0x179c) = iVar2;
  }
  return;
}

