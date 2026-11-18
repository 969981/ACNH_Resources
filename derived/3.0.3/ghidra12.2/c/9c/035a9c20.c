
undefined8 FUN_035a9c20(undefined4 *param_1)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  
  puVar1 = PTR_DAT_04bb46c8;
  lVar2 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,*param_1);
  if (((((lVar2 == 0) ||
        (pcVar3 = (char *)FUN_009823a0(lVar2,10,0x5baf48a0,DAT_04cfabf8), pcVar3 == (char *)0x0)) ||
       (*pcVar3 == '\0')) &&
      ((((lVar2 = FUN_009807cc(*(long *)puVar1 + 8,param_1[1]), lVar2 == 0 ||
         (pcVar3 = (char *)FUN_009823a0(lVar2,10,0x5baf48a0,DAT_04cfabf8), pcVar3 == (char *)0x0))
        || (*pcVar3 == '\0')) &&
       (((lVar2 = FUN_009807cc(*(long *)puVar1 + 8,param_1[2]), lVar2 == 0 ||
         (pcVar3 = (char *)FUN_009823a0(lVar2,10,0x5baf48a0,DAT_04cfabf8), pcVar3 == (char *)0x0))
        || (*pcVar3 == '\0')))))) &&
     (((lVar2 = FUN_009807cc(*(long *)puVar1 + 8,param_1[3]), lVar2 == 0 ||
       (pcVar3 = (char *)FUN_009823a0(lVar2,10,0x5baf48a0,DAT_04cfabf8), pcVar3 == (char *)0x0)) ||
      (*pcVar3 == '\0')))) {
    return 0;
  }
  return 1;
}

