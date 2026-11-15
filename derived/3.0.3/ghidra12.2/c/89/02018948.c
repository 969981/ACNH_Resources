
void FUN_02018948(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + 0x60c0);
  uVar2 = *puVar1;
  if ((param_2 & 1) == 0) {
    *puVar1 = uVar2 & 0xfffffffe;
    *puVar1 = uVar2 & 0xfffffffc;
    *puVar1 = uVar2 & 0xfffffff8;
    *puVar1 = uVar2 & 0xfffffff0;
    *puVar1 = uVar2 & 0xffffffe0;
    *puVar1 = uVar2 & 0xffffffc0;
    uVar2 = uVar2 & 0xffffff80;
  }
  else {
    *puVar1 = uVar2 | 1;
    *puVar1 = uVar2 | 3;
    *puVar1 = uVar2 | 7;
    *puVar1 = uVar2 | 0xf;
    *puVar1 = uVar2 | 0x1f;
    *puVar1 = uVar2 | 0x3f;
    uVar2 = uVar2 | 0x7f;
  }
  *puVar1 = uVar2;
  FUN_0201366c();
  return;
}

