
int FUN_001536e0(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  char *__s;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined1 auStack_b0 [16];
  uint local_a0;
  __off_t local_80;
  
  if (param_1 == 0) {
    iVar5 = 0x2b;
  }
  else {
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(long *)(param_1 + 0x40) = param_1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (param_2 == (char *)0x0) {
      iVar5 = 0;
    }
    else {
      memset(auStack_b0,0,0x80);
      iVar1 = stat(param_2,(stat *)auStack_b0);
      iVar5 = 0;
      if (iVar1 != 0) {
        iVar5 = 0x1a;
      }
      lVar2 = FUN_00143320(param_2);
      *(long *)(param_1 + 0x20) = lVar2;
      if (lVar2 == 0) {
        iVar5 = 0x1b;
      }
      *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
      if (((lVar2 != 0) && (iVar1 == 0)) && ((local_a0 & 0xf000) == 0x8000)) {
        *(__off_t *)(param_1 + 0x78) = local_80;
        *(code **)(param_1 + 0x30) = FUN_00153c50;
      }
      *(code **)(param_1 + 0x28) = FUN_00153ccc;
      *(code **)(param_1 + 0x38) = FUN_00153d40;
      *(undefined4 *)(param_1 + 0x18) = 2;
      __s = (char *)FUN_00143320(param_2);
      if (__s != (char *)0x0) {
        pcVar3 = strrchr(__s,0x2f);
        pcVar4 = strrchr(__s,0x5c);
        if ((pcVar3 == (char *)0x0) || (pcVar4 == (char *)0x0)) {
          if (pcVar3 == (char *)0x0) {
            pcVar3 = __s;
            if (pcVar4 != (char *)0x0) {
              pcVar3 = pcVar4 + 1;
            }
          }
          else {
            pcVar3 = pcVar3 + 1;
          }
        }
        else {
          if (pcVar3 <= pcVar4) {
            pcVar3 = pcVar4;
          }
          pcVar3 = pcVar3 + 1;
        }
        lVar2 = FUN_00143320(pcVar3);
        FUN_00143300(__s);
        if (lVar2 != 0) {
          iVar1 = FUN_00153b30(param_1,lVar2);
          if (iVar1 != 0) {
            iVar5 = iVar1;
          }
          FUN_00143300(lVar2);
          return iVar5;
        }
      }
      iVar5 = 0x1b;
    }
  }
  return iVar5;
}

