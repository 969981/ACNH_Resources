
undefined8 FUN_00c31e1c(void)

{
  undefined8 uVar1;
  undefined1 auStack_24 [4];
  long local_20;
  char *local_18;
  
  FUN_00c31ec4(&local_20);
  (**(code **)(local_20 + 0x18))(&local_20);
  (**(code **)(local_20 + 0x18))(&local_20);
  if ((local_18 == "") || (*local_18 == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_02757a80(auStack_24,&local_20);
  }
  return uVar1;
}

