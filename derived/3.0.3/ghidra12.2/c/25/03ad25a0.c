
void FUN_03ad25a0(undefined8 param_1,long *param_2,char *param_3,long param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *__s;
  long lVar8;
  uint *puVar9;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar8 = *(long *)(param_4 + 0x10);
  if (lVar8 == 0) {
    return;
  }
  __s = (char *)param_2[1];
  if (__s == (char *)0x0) {
    sVar4 = 0;
  }
  else {
    sVar4 = strlen(__s);
  }
  uVar5 = (ulong)*(ushort *)(lVar8 + 0xc);
  puVar9 = (uint *)((int *)(lVar8 + 8) + uVar5 * 4);
  uVar2 = *puVar9;
  if (*(int *)(lVar8 + 8) < (int)*puVar9) {
    do {
      uVar6 = (long)((ulong)uVar2 << 0x20) >> 0x23;
      if (uVar6 < sVar4) {
        uVar6 = (ulong)((byte)__s[sVar4 + ~uVar6] >> ((ulong)uVar2 & 7)) & 1;
      }
      else {
        uVar6 = 0;
      }
      uVar5 = (ulong)*(ushort *)(lVar8 + 8 + uVar5 * 0x10 + uVar6 * 2 + 4);
      puVar9 = (uint *)(lVar8 + 8 + uVar5 * 0x10);
      bVar1 = (int)uVar2 < (int)*puVar9;
      uVar2 = *puVar9;
    } while (bVar1);
  }
  if (sVar4 != **(ushort **)(puVar9 + 2)) {
    return;
  }
  iVar3 = memcmp(*(ushort **)(puVar9 + 2) + 1,__s,sVar4);
  if (iVar3 != 0) {
    return;
  }
  uVar5 = (ulong)((long)puVar9 + (-0x18 - lVar8)) >> 4;
  iVar3 = (int)uVar5;
  if (iVar3 == -1) {
    return;
  }
  lVar8 = *(long *)(*(long *)(param_4 + 8) + (long)iVar3 * 0x28 + 8);
  if (lVar8 != 0) {
    if (param_3 == (char *)0x0) {
      sVar4 = 0;
    }
    else {
      sVar4 = strlen(param_3);
    }
    uVar6 = (ulong)*(ushort *)(lVar8 + 0xc);
    puVar9 = (uint *)((int *)(lVar8 + 8) + uVar6 * 4);
    uVar2 = *puVar9;
    if (*(int *)(lVar8 + 8) < (int)*puVar9) {
      do {
        uVar7 = (long)((ulong)uVar2 << 0x20) >> 0x23;
        if (uVar7 < sVar4) {
          uVar7 = (ulong)((byte)param_3[sVar4 + ~uVar7] >> ((ulong)uVar2 & 7)) & 1;
        }
        else {
          uVar7 = 0;
        }
        uVar6 = (ulong)*(ushort *)(lVar8 + 8 + uVar6 * 0x10 + uVar7 * 2 + 4);
        puVar9 = (uint *)(lVar8 + 8 + uVar6 * 0x10);
        bVar1 = (int)uVar2 < (int)*puVar9;
        uVar2 = *puVar9;
      } while (bVar1);
    }
    if ((sVar4 == **(ushort **)(puVar9 + 2)) &&
       (iVar3 = memcmp(*(ushort **)(puVar9 + 2) + 1,param_3,sVar4), iVar3 == 0)) {
      uVar6 = (ulong)((long)puVar9 + (-0x18 - lVar8)) >> 4;
      goto LAB_03ad2724;
    }
  }
  uVar6 = 0xffffffff;
LAB_03ad2724:
  FUN_003a2578(param_1,uVar5 & 0xffffffff,uVar6);
  return;
}

