
bool FUN_003d01f0(uint *param_1,char *param_2,undefined4 *param_3)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  size_t __n;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  
  __n = strlen(param_2);
  uVar4 = (ulong)*param_1;
  if ((int)*param_1 < 1) {
    bVar2 = false;
  }
  else {
    lVar5 = (long)(int)param_1[2];
    iVar3 = strncmp(param_2,(char *)((long)param_1 + lVar5 + 0xc),__n);
    if (iVar3 == 0) {
      bVar2 = true;
    }
    else {
      uVar1 = 1;
      puVar7 = param_1 + 4;
      do {
        uVar6 = uVar1;
        if (uVar4 == uVar6) {
          return uVar6 < uVar4;
        }
        lVar5 = (long)(int)*puVar7;
        iVar3 = strncmp(param_2,(char *)((long)param_1 + lVar5 + 0xc),__n);
        uVar1 = uVar6 + 1;
        puVar7 = puVar7 + 2;
      } while (iVar3 != 0);
      bVar2 = uVar6 < uVar4;
    }
    *param_3 = *(undefined4 *)((long)param_1 + lVar5 + 4);
  }
  return bVar2;
}

