
undefined8
FUN_0014fed4(char *param_1,size_t param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  void *__dest;
  void *__dest_00;
  void *__dest_01;
  
  pcVar1 = param_1 + param_2;
  if (param_4 == (undefined8 *)0x0) {
    pcVar2 = (char *)0x0;
    if (param_5 != (undefined8 *)0x0) goto LAB_0014ff28;
LAB_0014ff98:
    pcVar3 = (char *)0x0;
    if (pcVar2 != (char *)0x0) goto LAB_0014ff40;
LAB_0014ffa0:
    sVar4 = (long)pcVar3 - (long)param_1;
    pcVar5 = (char *)0x0;
    if (pcVar3 == (char *)0x0) goto LAB_0014ffb4;
  }
  else {
    pcVar2 = strchr(param_1,0x3a);
    if (pcVar1 <= pcVar2) {
      pcVar2 = (char *)0x0;
    }
    if (param_5 == (undefined8 *)0x0) goto LAB_0014ff98;
LAB_0014ff28:
    pcVar3 = strchr(param_1,0x3b);
    if (pcVar1 <= pcVar3) {
      pcVar3 = (char *)0x0;
    }
    if (pcVar2 == (char *)0x0) goto LAB_0014ffa0;
LAB_0014ff40:
    pcVar5 = pcVar3;
    if (pcVar3 == (char *)0x0 || pcVar2 <= pcVar3) {
      pcVar5 = pcVar2;
    }
    param_2 = (long)pcVar5 - (long)param_1;
    pcVar5 = pcVar3;
    if (pcVar3 == (char *)0x0 || pcVar3 <= pcVar2) {
      pcVar5 = pcVar1;
    }
    pcVar5 = pcVar5 + ~(ulong)pcVar2;
    sVar4 = param_2;
    if (pcVar3 == (char *)0x0) {
LAB_0014ffb4:
      pcVar6 = (char *)0x0;
      goto LAB_0014ffb8;
    }
  }
  pcVar6 = pcVar2;
  if (pcVar2 <= pcVar3 || pcVar2 == (char *)0x0) {
    pcVar6 = pcVar1;
  }
  pcVar6 = pcVar6 + ~(ulong)pcVar3;
  param_2 = sVar4;
LAB_0014ffb8:
  __dest = (void *)0x0;
  if (((param_3 == (undefined8 *)0x0) || (param_2 == 0)) ||
     (__dest = (void *)FUN_001432f0(param_2 + 1), __dest != (void *)0x0)) {
    __dest_00 = (void *)0x0;
    if (((param_4 == (undefined8 *)0x0) || (pcVar5 == (char *)0x0)) ||
       (__dest_00 = (void *)FUN_001432f0(pcVar5 + 1), __dest_00 != (void *)0x0)) {
      __dest_01 = (void *)0x0;
      if (((param_5 == (undefined8 *)0x0) || (pcVar6 == (char *)0x0)) ||
         (__dest_01 = (void *)FUN_001432f0(pcVar6 + 1), __dest_01 != (void *)0x0)) {
        if (__dest != (void *)0x0) {
          memcpy(__dest,param_1,param_2);
          *(undefined1 *)((long)__dest + param_2) = 0;
          FUN_00143300(*param_3);
          *param_3 = __dest;
        }
        if (__dest_00 != (void *)0x0) {
          memcpy(__dest_00,pcVar2 + 1,(size_t)pcVar5);
          *(char *)((long)__dest_00 + (long)pcVar5) = '\0';
          FUN_00143300(*param_4);
          *param_4 = __dest_00;
        }
        if (__dest_01 == (void *)0x0) {
          return 0;
        }
        memcpy(__dest_01,pcVar3 + 1,(size_t)pcVar6);
        *(char *)((long)__dest_01 + (long)pcVar6) = '\0';
        FUN_00143300(*param_5);
        *param_5 = __dest_01;
        return 0;
      }
      FUN_00143300(__dest_00);
    }
    FUN_00143300(__dest);
  }
  return 0x1b;
}

