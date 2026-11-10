
long FUN_00343c40(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  (*(code *)**(undefined8 **)param_1[2])();
  iVar2 = (int)param_1[1];
  lVar3 = *param_1;
  iVar5 = iVar2;
  if (iVar2 < 2) {
    iVar5 = 1;
  }
  iVar4 = *(int *)((long)param_1 + 0xc);
  while( true ) {
    iVar1 = 0;
    if (iVar4 + 1 < iVar2) {
      iVar1 = iVar4 + 1;
    }
    *(int *)((long)param_1 + 0xc) = iVar1;
    pcVar6 = (char *)(lVar3 + (long)iVar1 * 0x2a0 + 0x1c);
    if (*pcVar6 == '\0') break;
    iVar5 = iVar5 + -1;
    iVar4 = iVar1;
    if (iVar5 == 0) {
      FUN_0032c410("There is no available EmitterSet instance.\n");
      return 0;
    }
  }
  *pcVar6 = '\x01';
  (**(code **)(*(long *)param_1[2] + 8))();
  return lVar3 + (long)iVar1 * 0x2a0;
}

