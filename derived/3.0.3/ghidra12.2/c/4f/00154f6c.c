
undefined8 FUN_00154f6c(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  
  lVar6 = *param_1;
  lVar1 = 0x108;
  if ((param_2 & 1) == 0) {
    lVar1 = 200;
  }
  iVar3 = thunk_FUN_00144b34("Digest",param_3,6);
  if (iVar3 == 0) {
    return 0x3d;
  }
  pcVar5 = (char *)(param_3 + 6);
  cVar2 = *pcVar5;
  while ((cVar2 != '\0' && (iVar3 = FUN_00146528(), iVar3 != 0))) {
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar5;
  }
  uVar4 = FUN_001552d8(pcVar5,lVar6 + lVar1 + 0x1120);
  return uVar4;
}

