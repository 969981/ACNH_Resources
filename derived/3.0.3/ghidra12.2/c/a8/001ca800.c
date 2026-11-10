
void FUN_001ca800(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined8 local_28;
  
  if (*(char *)(param_2 + 0x40) != '\0' && *(short *)(param_1 + 0x150) == 0) {
    if (*PTR_DAT_04bcbca8 == '\0') {
      FUN_0018cb8c(&local_28);
    }
    else {
      FUN_0018c9b0(&local_28,0);
    }
    *(undefined8 *)PTR_DAT_04bcbcb0 = local_28;
    iVar2 = FUN_00189e50(0xffff);
    uVar1 = iVar2 + (int)local_28;
    uVar3 = (undefined2)uVar1;
    *(undefined2 *)(param_1 + 0x150) = uVar3;
    if ((uVar1 & 0xffff) == 0) {
      uVar3 = 1;
      *(undefined2 *)(param_1 + 0x150) = 1;
    }
    *(undefined2 *)(param_2 + 0x80) = uVar3;
  }
  return;
}

