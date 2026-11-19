
void FUN_03973c90(undefined4 *param_1,long param_2,long param_3,long *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  size_t __n;
  ulong uVar7;
  ulong uVar8;
  char *__s;
  long lVar9;
  uint *puVar10;
  
  (**(code **)(*param_4 + 0x18))(param_4);
  lVar9 = *(long *)(param_2 + 0x78);
  if (lVar9 != 0) {
    __s = (char *)param_4[1];
    if (__s == (char *)0x0) {
      __n = 0;
    }
    else {
      __n = strlen(__s);
    }
    uVar7 = (ulong)*(ushort *)(lVar9 + 0xc);
    puVar10 = (uint *)((int *)(lVar9 + 8) + uVar7 * 4);
    uVar3 = *puVar10;
    if (*(int *)(lVar9 + 8) < (int)*puVar10) {
      do {
        uVar8 = (long)((ulong)uVar3 << 0x20) >> 0x23;
        if (uVar8 < __n) {
          uVar8 = (ulong)((byte)__s[__n + ~uVar8] >> ((ulong)uVar3 & 7)) & 1;
        }
        else {
          uVar8 = 0;
        }
        uVar7 = (ulong)*(ushort *)(lVar9 + 8 + uVar7 * 0x10 + uVar8 * 2 + 4);
        puVar10 = (uint *)(lVar9 + 8 + uVar7 * 0x10);
        bVar1 = (int)uVar3 < (int)*puVar10;
        uVar3 = *puVar10;
      } while (bVar1);
    }
    if (((__n == **(ushort **)(puVar10 + 2)) &&
        (iVar6 = memcmp(*(ushort **)(puVar10 + 2) + 1,__s,__n), iVar6 == 0)) &&
       (iVar6 = (int)((ulong)((long)puVar10 + (-0x18 - lVar9)) >> 4), iVar6 != -1)) {
      puVar2 = (undefined4 *)(*(long *)(param_3 + 0x18) + (long)(iVar6 * 6) * 4);
      uVar4 = *(undefined4 *)(*(long *)(param_3 + 0x18) + (long)iVar6 * 0x18 + 4);
      uVar5 = puVar2[2];
      *(char *)param_1 = (char)*puVar2;
      *(char *)((long)param_1 + 2) = (char)uVar4;
      *(char *)((long)param_1 + 1) = (char)uVar5;
      return;
    }
  }
  *param_1 = 0xffffffff;
  return;
}

