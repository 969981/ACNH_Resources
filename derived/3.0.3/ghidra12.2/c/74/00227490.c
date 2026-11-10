
void FUN_00227490(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_f0;
  undefined1 *puStack_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined1 local_d4;
  undefined2 local_d3;
  undefined1 local_d1 [193];
  
  puVar4 = &local_f0;
  puStack_e8 = &local_d4;
  local_f0 = PTR_DAT_04bcd008 + 0x10;
  local_e0 = 0xc0;
  local_d4 = 0;
  lVar3 = 0;
  do {
    *(undefined2 *)((long)puVar4 + 0x1d) = 0;
    lVar1 = lVar3 + 4;
    *(undefined1 *)((long)puVar4 + 0x1f) = 0;
    puVar4 = (undefined8 *)(local_d1 + lVar3 + -0x1b);
    local_d1[lVar3 + 1] = 0;
    lVar3 = lVar1;
  } while (lVar1 != 0xc0);
  local_dc = 0;
  FUN_0021f8d4(param_1 + 8,&local_f0);
  uVar2 = FUN_00227adc(&local_f0);
  FUN_00228284(param_2,&DAT_0409e973,uVar2);
  return;
}

