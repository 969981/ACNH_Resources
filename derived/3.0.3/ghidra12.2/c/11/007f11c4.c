
undefined1 FUN_007f11c4(undefined8 param_1,char *param_2,short *param_3,byte param_4)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  short local_16e8 [2];
  undefined4 local_16e4;
  byte local_16e0;
  undefined1 auStack_16da [2];
  undefined1 auStack_16d8 [5792];
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  puVar3 = PTR_DAT_04bb27d0;
  plVar4 = *(long **)PTR_DAT_04bb27d0;
  if ((plVar4 != (long *)0x0) && ((int)plVar4[0x10] == 3)) {
    lVar6 = *plVar4;
    bVar2 = *(byte *)(lVar6 + 0x473);
    pcVar5 = PTR_DAT_04bc1220;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pcVar5 = (char *)(lVar6 + 0x473);
      }
    }
    if (*param_2 != *pcVar5) {
      return 0;
    }
  }
  if (*param_3 == DAT_04cb6038) {
    return 0;
  }
  FUN_007ef010(auStack_16da,param_3);
  FUN_007e4920(auStack_16d8,auStack_16da);
  local_16e8[0] = *param_3;
  local_16e4 = FUN_007e7930(auStack_16d8);
  local_38 = 0;
  local_32 = 0;
  local_34 = 0xff00;
  local_16e0 = param_4 & 1;
  if (-1 < DAT_04cca0a0) {
    FUN_01db1df0(**(long **)puVar3 + 0x480,DAT_04cca0a0,&local_38,local_16e8,0xc,0);
  }
  FUN_007ef180(param_3);
  if (*(char *)(DAT_05370a68 + 0x48a8) == -1) {
    return 0;
  }
  FUN_01d74e20(DAT_05370a68,param_3);
  return 1;
}

