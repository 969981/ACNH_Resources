
undefined8 FUN_038fe510(undefined8 param_1,char *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  size_t __n;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  
  lVar4 = FUN_038fde10();
  uVar5 = 0;
  if (lVar4 != 0) {
    lVar8 = *(long *)(lVar4 + 0x38);
    if (param_2 == (char *)0x0) {
      __n = 0;
    }
    else {
      __n = strlen(param_2);
    }
    uVar6 = (ulong)*(ushort *)(lVar8 + 0xc);
    puVar9 = (uint *)((int *)(lVar8 + 8) + uVar6 * 4);
    uVar2 = *puVar9;
    if (*(int *)(lVar8 + 8) < (int)*puVar9) {
      do {
        uVar7 = (long)((ulong)uVar2 << 0x20) >> 0x23;
        if (uVar7 < __n) {
          uVar7 = (ulong)((byte)param_2[__n + ~uVar7] >> ((ulong)uVar2 & 7)) & 1;
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
    if (((__n == **(ushort **)(puVar9 + 2)) &&
        (iVar3 = memcmp(*(ushort **)(puVar9 + 2) + 1,param_2,__n), iVar3 == 0)) &&
       (uVar6 = (long)puVar9 + (-0x18 - lVar8), ((uVar6 ^ 0xffffffffffffffff) & 0xffffffff0) != 0))
    {
      uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x28) + (long)(int)(uVar6 >> 4) * 8);
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

