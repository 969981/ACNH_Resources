
void FUN_003e544c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = (char *)FUN_003c5b84();
  if (*pcVar1 == '\0') {
    return;
  }
  lVar2 = FUN_003cbb70(pcVar1,0x28,1);
  *(undefined4 *)(lVar2 + 8) = 0x42;
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  FUN_003cc15c(pcVar1,lVar2);
  return;
}

