
void FUN_001f63f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001f4e40(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}

