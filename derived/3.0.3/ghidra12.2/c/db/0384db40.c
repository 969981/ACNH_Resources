
void FUN_0384db40(long *param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char *__src;
  long lVar4;
  long lVar5;
  
  if (param_2 - 4U < 0x31) {
    __src = (&PTR_s__Sand_04b5e420)[(int)(param_2 - 4U)];
  }
  else {
    __src = "_Grass";
  }
  lVar5 = *param_1;
  lVar4 = 0;
  do {
    pcVar1 = __src + lVar4;
    lVar4 = lVar4 + 1;
  } while (*pcVar1 != '\0');
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = (int)lVar4 - 1;
  if (*(int *)((long)param_1 + 0xc) <= (int)(uVar3 + uVar2)) {
    uVar3 = *(int *)((long)param_1 + 0xc) + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy((void *)(lVar5 + (int)uVar2),__src,(ulong)uVar3);
    *(undefined1 *)(lVar5 + (int)(uVar3 + uVar2)) = 0;
    *(uint *)(param_1 + 1) = uVar3 + uVar2;
  }
  return;
}

