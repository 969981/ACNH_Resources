
void FUN_03416120(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                 undefined8 param_5)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  uint local_1c [3];
  
  local_1c[0] = (param_3 ^ 0xffffffff) & 1;
  iVar3 = FUN_034158d0(param_1,param_2,1,local_1c,param_4,param_5);
  if (iVar3 == 1) {
    lVar4 = *(long *)PTR_DAT_04bb4860;
    sVar2 = *(short *)PTR_DAT_04bb6298;
    pcVar5 = "0201_01";
    if (sVar2 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      pcVar5 = "0201_01";
      if ((*puVar1 & 0x40) != 0) {
        pcVar5 = "0201";
      }
    }
    if (((*(char *)(lVar4 + 0x34) == '\0') || (2 < *(int *)(lVar4 + 0x10))) &&
       ((*(char *)(lVar4 + 100) == '\0' || (3 < *(int *)(lVar4 + 0x40))))) {
      *(char **)(lVar4 + 0x50) = pcVar5;
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined4 *)(lVar4 + 0x40) = 3;
      *(undefined1 *)(lVar4 + 100) = 1;
      *(undefined8 *)(lVar4 + 0x5c) = 0;
      *(undefined1 *)(lVar4 + 0x58) = 0;
    }
  }
  return;
}

