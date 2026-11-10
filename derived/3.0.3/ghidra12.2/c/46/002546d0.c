
undefined8 * FUN_002546d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_04c603b8;
  uVar2 = FUN_0021f454();
  puVar3 = (undefined8 *)FUN_00285d10(0x2a0,uVar2);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00296e94(puVar3);
    puVar3[0x53] = uVar1;
    *puVar3 = &PTR_LAB_048435a8;
  }
  return puVar3;
}

