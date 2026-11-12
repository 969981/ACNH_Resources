
void FUN_009b3500(long param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x50);
  memcpy(plVar2 + 0x15,plVar2 + 1,0x90);
  *(int *)(plVar2 + 0x27) = (int)plVar2[0x13];
  *(undefined8 *)((long)plVar2 + 0x13c) = *(undefined8 *)((long)plVar2 + 0x9c);
  *(undefined4 *)((long)plVar2 + 0x144) = *(undefined4 *)((long)plVar2 + 0xa4);
  if ((char)plVar2[0x17b] == '\0') {
    (**(code **)(*plVar2 + 0x38))(plVar2);
    cVar1 = *(char *)((long)plVar2 + 0xbd9);
  }
  else {
    cVar1 = *(char *)((long)plVar2 + 0xbd9);
  }
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x40))(plVar2);
  }
  *(undefined2 *)(plVar2 + 0x17b) = 0;
  FUN_009b3624(param_1);
  FUN_009b3a00(param_1);
  FUN_009b3db0(param_1);
  FUN_009b419c(param_1);
  FUN_009b4390(param_1);
  if (((DAT_05aec9a0 == 0) || ((*(byte *)(DAT_05aec9a0 + 0x32c) & 0xc0) == 0)) &&
     (*(int *)(param_1 + 0x60) != 0)) {
    plVar2 = *(long **)(param_1 + 0x68);
    lVar3 = (long)*(int *)(param_1 + 0x60) << 3;
    do {
      if (*(int *)(*plVar2 + 0x3d698) != -1) {
        FUN_009cd870();
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  FUN_009cefb8(param_1 + 8);
  return;
}

