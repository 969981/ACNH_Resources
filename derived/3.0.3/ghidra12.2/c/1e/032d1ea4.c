
undefined8 FUN_032d1ea4(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  undefined *local_30;
  char *pcStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  (**(code **)(*param_2 + 0x18))(param_2);
  pcStack_28 = PTR_DAT_04bb2120;
  if ((char *)param_2[1] != (char *)0x0) {
    pcStack_28 = (char *)param_2[1];
  }
  if (*pcStack_28 != '\0') {
    local_30 = PTR_DAT_04bc8e68 + 0x10;
    lVar1 = FUN_032cb8e0(auStack_38,&local_30,uVar2);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0xe8);
    }
  }
  return uVar2;
}

