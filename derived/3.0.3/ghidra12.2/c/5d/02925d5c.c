
void FUN_02925d5c(undefined4 *param_1)

{
  int iVar1;
  char *__dest;
  undefined1 *__dest_00;
  
  __dest = *(char **)(param_1 + 0x116);
  *(undefined8 *)(param_1 + 0x151) = 0;
  *param_1 = 8;
  *(undefined8 *)(param_1 + 0x110) = 0x43200000;
  param_1[0x112] = 0x433e0000;
  if (__dest != "CeremonyJuneBride") {
    iVar1 = 0x11;
    if ((int)param_1[0x118] < 0x12) {
      iVar1 = param_1[0x118] + -1;
    }
    memcpy(__dest,"CeremonyJuneBride",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  __dest_00 = *(undefined1 **)(param_1 + 0x13e);
  if (__dest_00 != &DAT_040aaf55) {
    iVar1 = 3;
    if ((int)param_1[0x140] < 4) {
      iVar1 = param_1[0x140] + -1;
    }
    memcpy(__dest_00,&DAT_040aaf55,(long)iVar1);
    __dest_00[iVar1] = 0;
  }
  return;
}

