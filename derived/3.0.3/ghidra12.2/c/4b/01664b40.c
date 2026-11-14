
void FUN_01664b40(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  size_t __n;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  char *__s;
  long lVar13;
  uint *puVar14;
  
  if (param_2 != 0) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar13 = *(long *)(*(long *)(param_2 + 0xd8) + 0x48);
    if (lVar13 != 0) {
      __s = (char *)param_3[1];
      if (__s == (char *)0x0) {
        __n = 0;
      }
      else {
        __n = strlen(__s);
      }
      uVar10 = (ulong)*(ushort *)(lVar13 + 0xc);
      puVar14 = (uint *)((int *)(lVar13 + 8) + uVar10 * 4);
      uVar6 = *puVar14;
      if (*(int *)(lVar13 + 8) < (int)*puVar14) {
        do {
          uVar11 = (long)((ulong)uVar6 << 0x20) >> 0x23;
          if (uVar11 < __n) {
            uVar11 = (ulong)((byte)__s[__n + ~uVar11] >> ((ulong)uVar6 & 7)) & 1;
          }
          else {
            uVar11 = 0;
          }
          uVar10 = (ulong)*(ushort *)(lVar13 + 8 + uVar10 * 0x10 + uVar11 * 2 + 4);
          puVar14 = (uint *)(lVar13 + 8 + uVar10 * 0x10);
          bVar1 = (int)uVar6 < (int)*puVar14;
          uVar6 = *puVar14;
        } while (bVar1);
      }
      if ((((__n == **(ushort **)(puVar14 + 2)) &&
           (iVar8 = memcmp(*(ushort **)(puVar14 + 2) + 1,__s,__n), iVar8 == 0)) &&
          (uVar10 = (long)puVar14 + (-0x18 - lVar13), (uVar10 >> 0x23 & 1) == 0)) &&
         (*(long *)(param_2 + 0x120) != 0)) {
        plVar3 = (long *)(*(long *)(param_2 + 0x120) + (uVar10 >> 4 & 0xffffffff) * 0x80);
        bVar7 = *(byte *)(*plVar3 + 0x9d);
        if ((ulong)bVar7 != 0) {
          iVar8 = 0;
          lVar13 = 0;
          plVar2 = plVar3 + 0xb;
          do {
            if (((*(long *)(param_4 + 8) != 0) &&
                (lVar9 = *(long *)(*(long *)(param_4 + 8) + 0x20), lVar9 != 0)) &&
               (lVar9 = FUN_038fe510(lVar9,*(long *)(*(long *)(*plVar3 + 0x30) + lVar13) + 2),
               lVar9 != 0)) {
              lVar4 = *(long *)(lVar9 + 0x88);
              uVar5 = *(undefined8 *)(lVar9 + 0x90);
              lVar9 = *plVar2;
              lVar12 = *(long *)(plVar3[10] + lVar13);
              *(long *)(plVar3[10] + lVar13) = lVar4;
              *(undefined8 *)(*plVar2 + lVar13) = uVar5;
              if (((code *)plVar3[0xf] != (code *)0x0) &&
                 ((lVar12 != lVar4 || (*(long *)(lVar9 + lVar13) != *(long *)(*plVar2 + lVar13)))))
              {
                (*(code *)plVar3[0xf])(plVar3,iVar8);
              }
            }
            lVar13 = lVar13 + 8;
            iVar8 = iVar8 + 1;
          } while ((ulong)bVar7 * 8 != lVar13);
        }
      }
    }
  }
  return;
}

