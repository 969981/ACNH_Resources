
void FUN_02217fb8(long param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  ulong uVar2;
  undefined2 *puVar3;
  undefined *local_50;
  undefined1 *puStack_48;
  undefined4 local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  
  local_35 = 0;
  local_40 = 8;
  puVar3 = *(undefined2 **)(param_1 + 8);
  local_3c[0] = 0;
  puStack_48 = local_3c;
  local_50 = PTR_DAT_04bb3768 + 0x10;
  uVar2 = FUN_0376b510(&local_50,*param_2);
  puVar1 = (undefined2 *)((long)puVar3 + (ulong)**(uint **)(param_1 + 0x10) * 3);
  if (8 < **(uint **)(param_1 + 0x10)) {
    puVar1 = puVar3;
  }
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(puVar1 + 1) = 8;
    *puVar1 = 0x23;
  }
  else {
    FUN_020fd3a0(puVar1,&local_50);
  }
  **(int **)(param_1 + 0x10) = **(int **)(param_1 + 0x10) + 1;
  return;
}

