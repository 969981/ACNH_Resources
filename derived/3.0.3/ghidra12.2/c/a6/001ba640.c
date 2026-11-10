
undefined8 FUN_001ba640(long param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while( true ) {
    if (lVar2 == param_1 + 8) {
      return 0;
    }
    __s1 = (char *)(**(code **)(**(long **)(lVar2 + 0x10) + 0x40))();
    iVar1 = strcasecmp(__s1,param_2);
    if (iVar1 == 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return *(undefined8 *)(lVar2 + 0x10);
}

