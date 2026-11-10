
undefined8 FUN_001547d0(char *param_1)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s;
  long lVar4;
  
  if (param_1 != (char *)0x0) {
    sVar2 = strlen(param_1);
    lVar4 = 0;
    do {
      __s = *(char **)((long)&PTR_DAT_04836438 + lVar4);
      sVar3 = strlen(__s);
      if ((sVar3 <= sVar2) && (iVar1 = FUN_00144a90(param_1 + (sVar2 - sVar3),__s), iVar1 != 0)) {
        return *(undefined8 *)((long)&PTR_s_image_gif_04836440 + lVar4);
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0xa0);
  }
  return 0;
}

