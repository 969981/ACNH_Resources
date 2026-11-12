
void FUN_008a339c(long param_1,int param_2,byte param_3)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  if (*(char *)(param_1 + 0x1d) != '\0') {
    cVar1 = '\x03';
    if (*(char *)(param_1 + 0x28) != -1) {
      cVar1 = *(char *)(param_1 + 0x28);
    }
    if (param_2 == cVar1) {
      plVar3 = *(long **)PTR_DAT_04bb27d0;
      if (((plVar3[2] == 0) || ((*(uint *)(plVar3 + 0x10) & 0xfffffffe) != 2)) ||
         (*(int *)(plVar3[2] + 0x3e4) == 1)) {
        *(byte *)(param_1 + 0x6a) = param_3 & 1;
        *(undefined1 *)(param_1 + 0x69) = 1;
      }
      else {
        local_8 = 0;
        local_2 = 0;
        puVar4 = (undefined1 *)(param_1 + 0x54);
        *puVar4 = (char)param_2;
        *(byte *)(param_1 + 0x5d) = param_3 & 1;
        *(undefined1 *)(param_1 + 0x56) = 1;
        local_4 = 0xff01;
        iVar2 = *(int *)(*(long *)(param_1 + 0x60) + 8);
        if (-1 < iVar2) {
          FUN_01db1df0(*plVar3 + 0x480,iVar2,&local_8,puVar4,0xc,0);
        }
        *puVar4 = 0xff;
      }
    }
  }
  return;
}

