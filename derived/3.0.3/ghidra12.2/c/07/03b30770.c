
void FUN_03b30770(long param_1,float *param_2,float *param_3,long param_4)

{
  uint *puVar1;
  char *__s2;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  float fVar7;
  
  fVar7 = 1.0;
  uVar2 = *(uint *)(*(long *)(param_4 + 0x60) + 0x14);
  if (uVar2 != 0) {
    puVar1 = (uint *)(*(long *)(param_4 + 0x60) + (ulong)uVar2);
    uVar5 = (ulong)(ushort)puVar1[2];
    if (uVar5 != 0) {
      do {
        puVar6 = puVar1 + 3;
        __s2 = (char *)0x0;
        if (*puVar6 != 0) {
          __s2 = (char *)((long)puVar6 + (ulong)*puVar6);
        }
        iVar4 = strcmp("BeatCount",__s2);
        if (iVar4 == 0) {
          fVar7 = (float)*(int *)((long)puVar6 + (ulong)puVar1[4]);
          break;
        }
        uVar5 = uVar5 - 1;
        puVar1 = puVar6;
      } while (uVar5 != 0);
    }
  }
  uVar3 = FUN_0035d97c(param_4);
  *param_3 = *(float *)(param_1 + 0x10) * ((float)uVar3 / fVar7);
  *param_2 = ((float)uVar3 / fVar7) * *(float *)(param_1 + 0x14);
  return;
}

