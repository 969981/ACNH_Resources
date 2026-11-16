
undefined8 FUN_028b8da8(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = DAT_05ae7790;
  puVar1 = DAT_055b0f38;
  if (((DAT_055b0f38 == (undefined8 *)0x0) || (*(int *)(DAT_055b0f38 + 2) != 0)) ||
     ((DAT_05ae7790 != 0 &&
      (lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68)),
      *(long *)(lVar2 + 0x60) != lVar4)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    *puVar1 = 0;
  }
  return uVar3;
}

